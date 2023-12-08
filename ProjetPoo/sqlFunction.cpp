#include "objFonction.h"
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
System::Data::DataSet^ NS_sql_Function::sqlFunction::selectSpe(System::String^ dataTableName,System::String^ tableName, List<System::Windows::Forms::TextBox^>^ nonEmptyTxtBox,System::String^ elem)
{
	System::String^ sql;

	sql = this->oSqlMap->SelectSpeQuery(tableName,nonEmptyTxtBox,elem);
	return this->oConn->getRows(sql, dataTableName);
}
void NS_sql_Function::sqlFunction::insertSpe(System::String^ res, System::String^ tableName, NS_objFonction::objFonction^ objFonction, List<System::Windows::Forms::TextBox^>^ TxtBoxList)
{
	System::String^ sql;
	System::String^ test;
	System::Data::DataSet^ ds = gcnew(System::Data::DataSet);
	System::Data::DataTable^ datatable;
	int i = 0;
	test = "";
	System::Int32^ id_a;
	List<System::Windows::Forms::TextBox^>^ txtAdress = gcnew List<System::Windows::Forms::TextBox^>();
	List<System::Windows::Forms::TextBox^>^ txtPersonnel = gcnew List<System::Windows::Forms::TextBox^>();


	if (objFonction->has2Query)
	{
		if (objFonction->currentObj == "Personnel")
		{
			for each (System::Windows::Forms::TextBox ^ textbox in TxtBoxList)
			{
				test = "" + (textbox->Tag);
				if (test->EndsWith("a", StringComparison::OrdinalIgnoreCase))
				{
					txtAdress->Add(textbox);
				}
				if (test->EndsWith("p", StringComparison::OrdinalIgnoreCase))
				{
					txtPersonnel->Add(textbox);
				}
				test = "";
				i++;
			}
			objFonction->currentObj = "Adresse";
			sql = this->oSqlMap->insert("Address", objFonction, txtAdress);
			this->oConn->actionRows(sql);
			objFonction->currentObj = "Personnel";
			ds = this->selectSpe("Rsl", "Address", txtAdress, "id_a");
			datatable = ds->Tables["Rsl"];
			for each (System::Data::DataRow ^ row in datatable->Rows)
			{
				id_a = safe_cast<System::Int32^>(row["id_a"]);
			}
			objFonction->personnel->getAdresse()->setIdAdresse(id_a);
			System::Windows::Forms::TextBox^ txtId = gcnew(System::Windows::Forms::TextBox);
			txtId->AccessibleName = "idAdresse";
			txtId->Tag = "id_a";
			txtId->Text = Convert::ToString(id_a);
			txtPersonnel->Add(txtId);

			sql = this->oSqlMap->insert(tableName, objFonction, txtPersonnel);
			this->oConn->actionRows(sql);
		}

	}
}