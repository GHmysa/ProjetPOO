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

System::Data::DataSet^ NS_sql_Function::sqlFunction::select(System::String^ dataTableName, System::String^ sql)
{
	return this->oConn->getRows(sql, dataTableName);

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
	List<System::Windows::Forms::TextBox^>^ txtBill = gcnew List<System::Windows::Forms::TextBox^>();
	List<System::Windows::Forms::TextBox^>^ txtArticle = gcnew List<System::Windows::Forms::TextBox^>();
	List<System::Windows::Forms::TextBox^>^ txtPayment = gcnew List<System::Windows::Forms::TextBox^>();

	System::Windows::Forms::TextBox^ txtId = gcnew(System::Windows::Forms::TextBox);
	System::Windows::Forms::TextBox^ txtIdC = gcnew(System::Windows::Forms::TextBox);


	if (objFonction->has2Query)
	{
		if (objFonction->currentObj == "Personnel" || objFonction->currentObj == "Client" || objFonction->currentObj == "Commande" || objFonction->currentObj == "Article")
		{
			for each (System::Windows::Forms::TextBox ^ textbox in TxtBoxList)
			{
				test = "" + (textbox->Tag);
				if (test->EndsWith("_a", StringComparison::OrdinalIgnoreCase))
				{
					txtAdress->Add(textbox);
				}
				if (test->EndsWith("_p", StringComparison::OrdinalIgnoreCase))
				{
					txtPersonnel->Add(textbox);
				}
				if (test->EndsWith("_c", StringComparison::OrdinalIgnoreCase))
				{
					txtClient->Add(textbox);
				}
				if (test->EndsWith("_o", StringComparison::OrdinalIgnoreCase))
				{
					txtCommande->Add(textbox);
				}
				if (test->EndsWith("_b", StringComparison::OrdinalIgnoreCase))
				{
					txtBill->Add(textbox);
				}
				if (test->EndsWith("pr", StringComparison::OrdinalIgnoreCase))
				{
					txtArticle->Add(textbox);
				}
				if (test->EndsWith("pa", StringComparison::OrdinalIgnoreCase))
				{
					txtPayment->Add(textbox);
				}
				test = "";
				i++;
			}
			
		}
		if (objFonction->currentObj == "Client", objFonction->currentObj == "Personnel")
		{
			tmpObj = objFonction->currentObj;
			objFonction->currentObj = "Adresse";
			sql = this->oSqlMap->insert("Address", objFonction, txtAdress);
			this->oConn->actionRows(sql);
			txtId = getSpeID("Address", txtAdress, "idAdresse", "id_a");
			objFonction->personnel->getAdresse()->setIdAdresse(Convert::ToInt32(txtId->Text));
			objFonction->adresse->setIdAdresse(Convert::ToInt32(txtId->Text));
			txtPersonnel->Add(txtId);
			txtHave->Add(txtId);
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
		}
		
		if (objFonction->currentObj == "Commande")
		{
			tmpObj = objFonction->currentObj;
			objFonction->currentObj = "Facture";
			sql = this->oSqlMap->insert("Bill", objFonction, txtBill);
			this->oConn->actionRows(sql);
			txtIdC = getSpeID("Bill", txtBill, "idFacture", "id_b");
			objFonction->currentObj = tmpObj;
			objFonction->commande->setIdFacture(Convert::ToInt32(txtIdC->Text));
			txtCommande->Add(txtIdC);
			txtIdC = gcnew(System::Windows::Forms::TextBox);
			txtIdC = getSpeID("Client", txtClient, "idClient", "id_c");
			objFonction->client->setIdClient(Convert::ToInt32(txtIdC->Text));
			txtCommande->Add(txtIdC);
			sql = this->oSqlMap->insert(tableName, objFonction, txtCommande);
			this->oConn->actionRows(sql);

		}
		if (objFonction->currentObj == "Article")
		{
			tmpObj = objFonction->currentObj;
			objFonction->currentObj = "Payment";
			sql = this->oSqlMap->insert("Payement", objFonction, txtPayment);
			this->oConn->actionRows(sql);
			txtIdC = getSpeID("Payement", txtPayment, "idPayment", "id_pa");
			objFonction->currentObj = tmpObj;
			objFonction->article->setIdPayement(Convert::ToInt32(txtIdC->Text));
			txtArticle->Add(txtIdC);
			sql = this->oSqlMap->insert(tableName, objFonction, txtArticle);
			this->oConn->actionRows(sql);

		}
	}
	if (objFonction->currentObj == "Adds")
	{
		sql = this->oSqlMap->insert(tableName, objFonction, TxtBoxList);
		this->oConn->actionRows(sql);
	}

	
}

System::Data::DataSet^ NS_sql_Function::sqlFunction::updateSpe(System::String^ dataTableName, System::String^ tableName, List<System::Windows::Forms::TextBox^>^ TxtBoxList, System::String^ AN, System::String^ id)
{
	System::Windows::Forms::TextBox^ txtId = gcnew(System::Windows::Forms::TextBox);
	System::String^ sql;
	System::Data::DataSet^ ds;

	sql = this->oSqlMap->Update(tableName, TxtBoxList);
	this->oConn->actionRows(sql);
	return this->selectSpe(dataTableName, tableName, TxtBoxList, "*");


}
System::Data::DataSet^ NS_sql_Function::sqlFunction::deleteSpe(System::String^ dataTableName, System::String^ tableName, List<System::Windows::Forms::TextBox^>^ TxtBoxList,System::String^ AN, System::String^ id)
{
	System::String^ sql;
	System::Windows::Forms::TextBox^ txtBox;
	txtBox = getSpeID(tableName, TxtBoxList, AN, id);
	if (tableName == "Client")
	{
		sql = this->oSqlMap->Delete("Orders", txtBox);
		this->oConn->actionRows(sql);
	}
	sql = this->oSqlMap->Delete(tableName, txtBox);
	this->oConn->actionRows(sql);
	return this->selectionnerToutesLesPersonnes(dataTableName, tableName);
}