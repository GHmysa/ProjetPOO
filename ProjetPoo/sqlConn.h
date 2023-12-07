#pragma once
namespace NS_sql_Conn {

	ref class sqlConn
	{
	private:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ conn;
		System::Data::SqlClient::SqlCommand^ sqlCommand;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
	public:
		sqlConn(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};

}

