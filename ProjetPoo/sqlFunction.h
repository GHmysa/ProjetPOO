#pragma once
#include "sqlMap.h"
#include "SqlConn.h"
namespace NS_sql_Function{
	ref class sqlFunction
	{
	private:
		NS_sql_Conn::sqlConn^ oConn;
		NS_sql_Map::sqlMap^ oSqlMap;
	public:
		sqlFunction(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^, System::String^);
	};
}


