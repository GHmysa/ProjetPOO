#pragma once
#include "sqlMap.h"
#include "SqlConn.h"

namespace NS_sql_Function{
	using namespace System::Collections::Generic;

	ref class sqlFunction
	{
	private:
		NS_sql_Conn::sqlConn^ oConn;
		NS_sql_Map::sqlMap^ oSqlMap;
	public:
		sqlFunction(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^, System::String^);
		System::Data::DataSet^ selectSpe(System::String^,System::String^, List<System::Windows::Forms::TextBox^>^ nonEmptyTxtBox);
		System::Data::DataSet^ select(System::String^, System::String^);
	};
}


