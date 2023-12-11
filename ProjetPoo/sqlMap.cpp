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
System::String^ NS_sql_Map::sqlMap::Delete(System::String^ tableName,System::Windows::Forms::TextBox^ txtbox)
{
	return "DELETE FROM "+tableName+" WHERE " + txtbox->Tag + "="+txtbox->Text;
}
System::String^ NS_sql_Map::sqlMap::Update(System::String^ tableName, List<System::Windows::Forms::TextBox^>^ TextBoxList)
{
	System::String^ query1 = "";
	System::String^ query2 = "";
	for each (System::Windows::Forms::TextBox ^ textbox in TextBoxList)
	{
		if (textbox != TextBoxList[TextBoxList->Count - 1])
		{
			query1 = query1 + textbox->Tag + "='" + textbox->Text + "'";
			if (textbox != TextBoxList[TextBoxList->Count - 2])
			{
				query1 = query1 + ",";
			}
		}
	}
	query2 = query2 + TextBoxList[TextBoxList->Count - 1]->Tag + "=" + TextBoxList[TextBoxList->Count - 1]->Text;
	return "UPDATE "+tableName+" SET " + query1 + " WHERE " + query2;
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

	return "SELECT "+ elem +" FROM [Projet].[dbo].[" + tableName + "] WHERE " + query+";";
}