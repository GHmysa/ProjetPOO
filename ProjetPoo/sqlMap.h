#pragma once
#include "objFonction.h"
namespace NS_sql_Map{
	using namespace System::Collections::Generic;
	ref class sqlMap
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
	public:
		System::String^ SelectTable(System::String^);
		System::String^ insert(System::String^ tableName, NS_objFonction::objFonction^ objFonction, List<System::Windows::Forms::TextBox^>^ txtBoxList);
		System::String^ Delete(System::String^ tableName, System::Windows::Forms::TextBox^ txtbox);
		System::String^ Update(System::String^ tableName, List<System::Windows::Forms::TextBox^>^ TextBoxList);
		System::String^ SelectSpeQuery(System::String^, List<System::Windows::Forms::TextBox^>^ nonEmptyTxtBox, System::String^);
	};
}


