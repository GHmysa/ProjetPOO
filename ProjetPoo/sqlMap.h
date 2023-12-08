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
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ SelectSpeQuery(System::String^, List<System::Windows::Forms::TextBox^>^ nonEmptyTxtBox, System::String^);
	};
}


