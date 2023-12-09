#include "sqlFunction.h"

NS_sql_Function::sqlFunction::sqlFunction(void)
{
	this->oConn = gcnew NS_sql_Conn::sqlConn();
	this->oSqlMap = gcnew NS_sql_Map::sqlMap();

}
System::Data::DataSet^ NS_sql_Function::sqlFunction::selectionnerToutesLesPersonnes(System::String^ dataTableName, System::String^ tableName)
{
	System::String^ sql;

	sql = this->oSqlMap->SelectTable(tableName);
	return this->oConn->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_sql_Function::sqlFunction::selectSpe(System::String^ dataTableName,System::String^ tableName, List<System::Windows::Forms::TextBox^>^ nonEmptyTxtBox)
{
	System::String^ sql;

	sql = this->oSqlMap->SelectSpeQuery(tableName,nonEmptyTxtBox);
	return this->oConn->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_sql_Function::sqlFunction::select(System::String^ dataTableName, System::String^ sql)
{
	return this->oConn->getRows(sql, dataTableName);
}