//sqlConn.CPP**************************************************************************************
#include "sqlConn.h"


NS_sql_Conn::sqlConn::sqlConn(void)
{
	this->sCnx = "Data Source=ARTHUR\\MSSQLSERVER01;Initial Catalog=Projet;Integrated Security=True;Encrypt=False";

	this->sSql = "Rien";

	this->conn = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->sqlCommand = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->conn);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->sqlCommand->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_sql_Conn::sqlConn::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->sqlCommand->CommandText = this->sSql;
	this->oDA->SelectCommand = this->sqlCommand;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}
void NS_sql_Conn::sqlConn::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->sqlCommand->CommandText = this->sSql;
	this->oDA->SelectCommand = this->sqlCommand;
	this->conn->Open();
	this->sqlCommand->ExecuteNonQuery();
	this->conn->Close();
}