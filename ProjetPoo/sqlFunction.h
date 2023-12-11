#pragma once
#include "sqlMap.h"
#include "SqlConn.h"
#include "objFonction.h"

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
		System::Data::DataSet^ select(System::String^, System::String^);
		System::Data::DataSet^ selectSpe(System::String^,System::String^,List<System::Windows::Forms::TextBox^>^ nonEmptyTxtBox, System::String^ elem);
		void insertSpe(System::String^ res, System::String^ tableName, NS_objFonction::objFonction^ objFonction, List<System::Windows::Forms::TextBox^>^ TxtBoxList);
		System::Windows::Forms::TextBox^ getSpeID(String^ tableName, List<System::Windows::Forms::TextBox^>^ TxtBoxList, String^ AN, String^ id);
		System::Data::DataSet^ updateSpe(System::String^ dataTableName, System::String^ tableName, List<System::Windows::Forms::TextBox^>^ TxtBoxList, System::String^ AN, System::String^ id);
		System::Data::DataSet^ deleteSpe(System::String^ dataTableName, System::String^ tableName, List<System::Windows::Forms::TextBox^>^ TxtBoxList, System::String^ AN, System::String^ id);
	};
}


