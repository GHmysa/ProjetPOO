#include "sqlMap.h"
System::String^ NS_sql_Map::sqlMap::SelectTable(System::String^ tableName)
{
	return "SELECT * FROM [Projet].[dbo].["+tableName+"];";
}
System::String^ NS_sql_Map::sqlMap::insert(System::String^ tableName, NS_objFonction::objFonction^ objFonction, List<System::Windows::Forms::TextBox^>^ txtBoxList)
{
	System::String^ query1;
	System::String^ queryf;

	for each (System::Windows::Forms::TextBox ^ textbox in txtBoxList)
	{
		query1 = query1 + textbox->Tag;
		if (textbox != txtBoxList[txtBoxList->Count - 1])
		{
			query1 = query1 + ",";
		}
	}
	queryf = objFonction->getAttributs();
	return "INSERT INTO "+tableName+" ("+query1+") VALUES ("+queryf+");";
}
System::String^ NS_sql_Map::sqlMap::Delete(void)
{
	return "";
}
System::String^ NS_sql_Map::sqlMap::Update(void)
{
	return "";
}
System::String^ NS_sql_Map::sqlMap::SelectSpeQuery(System::String^ tableName, List<System::Windows::Forms::TextBox^>^ nonEmptyTxtBox, System::String^ elem)
{
	System::String^ query;
	query = "";
	for each (System::Windows::Forms::TextBox ^ textbox in nonEmptyTxtBox)
	{
		query = query + textbox->Tag + "='" + textbox->Text+"'";
		// Vérifie si textbox est le dernier élément dans la liste
		if (textbox != nonEmptyTxtBox[nonEmptyTxtBox->Count - 1])
		{
			query = query + " AND ";
		}
	}

	return "SELECT "+ elem +" FROM[Projet].[dbo].[" + tableName + "] WHERE " + query+";";
}