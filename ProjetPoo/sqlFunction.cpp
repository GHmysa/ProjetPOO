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
System::Windows::Forms::TextBox^ NS_sql_Function::sqlFunction::getSpeID(String^ tableName, List<System::Windows::Forms::TextBox^>^ TxtBoxList, String^ AN, String^ id)
{
	System::Data::DataSet^ ds = gcnew(System::Data::DataSet);
	System::Data::DataTable^ datatable = gcnew(System::Data::DataTable);
	System::Int32^ id_a;
	ds = this->selectSpe("Rsl", tableName, TxtBoxList, id);
	datatable = ds->Tables["Rsl"];
	for each (System::Data::DataRow ^ row in datatable->Rows)
	{
		id_a = safe_cast<System::Int32^>(row[id]);
	}
	System::Windows::Forms::TextBox^ txtId = gcnew(System::Windows::Forms::TextBox);
	txtId->AccessibleName = AN;
	txtId->Tag = id;
	txtId->Text = Convert::ToString(id_a);
	return txtId;
}
void NS_sql_Function::sqlFunction::insertSpe(System::String^ res, System::String^ tableName, NS_objFonction::objFonction^ objFonction, List<System::Windows::Forms::TextBox^>^ TxtBoxList)
{
	System::String^ sql;
	System::String^ test;
	System::Data::DataSet^ ds = gcnew(System::Data::DataSet);
	System::Data::DataTable^ datatable ;
	System::String^ tmpObj;
	int i = 0;
	test = "";
	System::Int32^ id_a;
	List<System::Windows::Forms::TextBox^>^ txtAdress = gcnew List<System::Windows::Forms::TextBox^>();
	List<System::Windows::Forms::TextBox^>^ txtPersonnel = gcnew List<System::Windows::Forms::TextBox^>();
	List<System::Windows::Forms::TextBox^>^ txtClient = gcnew List<System::Windows::Forms::TextBox^>();
	List<System::Windows::Forms::TextBox^>^ txtCommande = gcnew List<System::Windows::Forms::TextBox^>();
	List<System::Windows::Forms::TextBox^>^ txtHave = gcnew List<System::Windows::Forms::TextBox^>();
	System::Windows::Forms::TextBox^ txtId = gcnew(System::Windows::Forms::TextBox);
	System::Windows::Forms::TextBox^ txtIdC = gcnew(System::Windows::Forms::TextBox);


	if (objFonction->has2Query)
	{
		if (objFonction->currentObj == "Personnel" || objFonction->currentObj == "Client")
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
				if (test->EndsWith("c", StringComparison::OrdinalIgnoreCase))
				{
					txtClient->Add(textbox);
				}
				test = "";
				i++;
			}
			tmpObj = objFonction->currentObj;
			objFonction->currentObj = "Adresse";
			sql = this->oSqlMap->insert("Address", objFonction, txtAdress);
			this->oConn->actionRows(sql);
			txtId = getSpeID("Address", txtAdress, "idAdresse", "id_a");
			objFonction->personnel->getAdresse()->setIdAdresse(Convert::ToInt32(txtId->Text));
			objFonction->adresse->setIdAdresse(Convert::ToInt32(txtId->Text));
			txtPersonnel->Add(txtId);
			txtHave->Add(txtId);
		}

		objFonction->currentObj = tmpObj;
		if (objFonction->currentObj == "Personnel")
		{
			sql = this->oSqlMap->insert(tableName, objFonction, txtPersonnel);
			this->oConn->actionRows(sql);
		}
		if (objFonction->currentObj == "Client")
		{
			sql = this->oSqlMap->insert(tableName, objFonction, txtClient);
			this->oConn->actionRows(sql);
			txtIdC = getSpeID("Client", txtClient, "idClient", "id_c");
			objFonction->client->setIdClient(Convert::ToInt32(txtIdC->Text));
			txtHave->Add(txtIdC);
			objFonction->currentObj = "Have";
			sql = this->oSqlMap->insert("have", objFonction, txtHave);
			this->oConn->actionRows(sql);
			
		}
		if (objFonction->currentObj == "Commande")
		{
			sql = this->oSqlMap->insert(tableName, objFonction, txtCommande);
			this->oConn->actionRows(sql);
		}
			
			

			
		

	}
}