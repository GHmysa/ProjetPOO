#pragma once
#include "sqlFunction.h"
#include "objFonction.h"
namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Description résumée de FormStock
	/// </summary>
	public ref class FormStock : public System::Windows::Forms::Form
	{
	public:
		FormStock(Form^ f0)
		{
			InitializeComponent();
			this->FormRetour = f0;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_sql_Function::sqlFunction^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: NS_objFonction::objFonction^ objfonction;
	private: List<TextBox^>^ textBoxList;
	private: List<TextBox^>^ textBoxListPrice;

	private: System::Windows::Forms::Panel^ panelDelete;
	protected:
	private: System::Windows::Forms::Label^ lbDelete;
	private: System::Windows::Forms::Button^ btnVSupprimer;
	private: System::Windows::Forms::TextBox^ txtDeleteNomArticle;



	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtDeleteReference;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ btnSupprimer;
	private: System::Windows::Forms::Button^ btnModifier;
	private: System::Windows::Forms::Button^ btnInsert;
	private: System::Windows::Forms::Button^ btnAffiche;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panelSelect;
	private: System::Windows::Forms::Button^ btnVSelect;
	private: System::Windows::Forms::TextBox^ txtNomArticle;



	private: System::Windows::Forms::Label^ lbprenom;
	private: System::Windows::Forms::Label^ labelRef;
	private: System::Windows::Forms::TextBox^ txtReference;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelInsert;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnVInsert;
	private: System::Windows::Forms::TextBox^ txtInsertCouleur;

	private: System::Windows::Forms::Label^ lbCity;
	private: System::Windows::Forms::TextBox^ txtInsertNature;

	private: System::Windows::Forms::Label^ lbNature;

	private: System::Windows::Forms::TextBox^ txtInsertSeuil;

	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::TextBox^ txtInsertQuantite;

	private: System::Windows::Forms::Label^ lbInsertHiring;
	private: System::Windows::Forms::TextBox^ txtInsertNomArticle;

	private: System::Windows::Forms::Label^ lbInsertPrenom;
	private: System::Windows::Forms::TextBox^ txtInsertReference;

	private: System::Windows::Forms::Label^ lbNomInsert;
	private: System::Windows::Forms::Panel^ panelUpdate;
	private: System::Windows::Forms::Button^ btnVModifier;
	private: System::Windows::Forms::TextBox^ txtUpdateCouleur;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtUpdateNature;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtUpdateSeuil;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtUpdateQuatite;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtUpdateNomArticle;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtUpdateReference;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ lbUpdate;

	private: System::Windows::Forms::Form^ FormRetour;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::TextBox^ txtDeleteQuantite;


	private: System::Windows::Forms::TextBox^ txtDeleteSeuil;


	private: System::Windows::Forms::TextBox^ txtDeleteCouleur;

	private: System::Windows::Forms::TextBox^ txtDeleteNature;
	private: System::Windows::Forms::TextBox^ txtQuantite;
	private: System::Windows::Forms::TextBox^ txtCouleur;
	private: System::Windows::Forms::TextBox^ txtNature;
	private: System::Windows::Forms::TextBox^ txtSeuil;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ txtInsertPriceTTC;

private: System::Windows::Forms::TextBox^ txtInsertPriceTVA;

private: System::Windows::Forms::TextBox^ txtInsertPriceHT;

private: System::Windows::Forms::Label^ label3;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelDelete = (gcnew System::Windows::Forms::Panel());
			this->txtDeleteCouleur = (gcnew System::Windows::Forms::TextBox());
			this->txtDeleteNature = (gcnew System::Windows::Forms::TextBox());
			this->txtDeleteSeuil = (gcnew System::Windows::Forms::TextBox());
			this->txtDeleteQuantite = (gcnew System::Windows::Forms::TextBox());
			this->lbDelete = (gcnew System::Windows::Forms::Label());
			this->btnVSupprimer = (gcnew System::Windows::Forms::Button());
			this->txtDeleteNomArticle = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtDeleteReference = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->btnAffiche = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panelSelect = (gcnew System::Windows::Forms::Panel());
			this->txtCouleur = (gcnew System::Windows::Forms::TextBox());
			this->txtNature = (gcnew System::Windows::Forms::TextBox());
			this->txtSeuil = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantite = (gcnew System::Windows::Forms::TextBox());
			this->btnVSelect = (gcnew System::Windows::Forms::Button());
			this->txtNomArticle = (gcnew System::Windows::Forms::TextBox());
			this->lbprenom = (gcnew System::Windows::Forms::Label());
			this->labelRef = (gcnew System::Windows::Forms::Label());
			this->txtReference = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelInsert = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnVInsert = (gcnew System::Windows::Forms::Button());
			this->txtInsertCouleur = (gcnew System::Windows::Forms::TextBox());
			this->lbCity = (gcnew System::Windows::Forms::Label());
			this->txtInsertNature = (gcnew System::Windows::Forms::TextBox());
			this->lbNature = (gcnew System::Windows::Forms::Label());
			this->txtInsertSeuil = (gcnew System::Windows::Forms::TextBox());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->txtInsertQuantite = (gcnew System::Windows::Forms::TextBox());
			this->lbInsertHiring = (gcnew System::Windows::Forms::Label());
			this->txtInsertNomArticle = (gcnew System::Windows::Forms::TextBox());
			this->lbInsertPrenom = (gcnew System::Windows::Forms::Label());
			this->txtInsertReference = (gcnew System::Windows::Forms::TextBox());
			this->lbNomInsert = (gcnew System::Windows::Forms::Label());
			this->panelUpdate = (gcnew System::Windows::Forms::Panel());
			this->btnVModifier = (gcnew System::Windows::Forms::Button());
			this->txtUpdateCouleur = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateNature = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateSeuil = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateQuatite = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateNomArticle = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateReference = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lbUpdate = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->txtInsertPriceTTC = (gcnew System::Windows::Forms::TextBox());
			this->txtInsertPriceTVA = (gcnew System::Windows::Forms::TextBox());
			this->txtInsertPriceHT = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panelDelete->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelSelect->SuspendLayout();
			this->panelInsert->SuspendLayout();
			this->panelUpdate->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelDelete
			// 
			this->panelDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelDelete->Controls->Add(this->txtDeleteCouleur);
			this->panelDelete->Controls->Add(this->txtDeleteNature);
			this->panelDelete->Controls->Add(this->txtDeleteSeuil);
			this->panelDelete->Controls->Add(this->txtDeleteQuantite);
			this->panelDelete->Controls->Add(this->lbDelete);
			this->panelDelete->Controls->Add(this->btnVSupprimer);
			this->panelDelete->Controls->Add(this->txtDeleteNomArticle);
			this->panelDelete->Controls->Add(this->label14);
			this->panelDelete->Controls->Add(this->txtDeleteReference);
			this->panelDelete->Controls->Add(this->label15);
			this->panelDelete->Location = System::Drawing::Point(270, 304);
			this->panelDelete->Margin = System::Windows::Forms::Padding(4);
			this->panelDelete->Name = L"panelDelete";
			this->panelDelete->Size = System::Drawing::Size(2212, 419);
			this->panelDelete->TabIndex = 17;
			// 
			// txtDeleteCouleur
			// 
			this->txtDeleteCouleur->AccessibleName = L"couleurProduit";
			this->txtDeleteCouleur->Location = System::Drawing::Point(460, 238);
			this->txtDeleteCouleur->Margin = System::Windows::Forms::Padding(4);
			this->txtDeleteCouleur->Name = L"txtDeleteCouleur";
			this->txtDeleteCouleur->Size = System::Drawing::Size(298, 31);
			this->txtDeleteCouleur->TabIndex = 14;
			this->txtDeleteCouleur->Tag = L"color_pr";
			this->txtDeleteCouleur->Visible = false;
			// 
			// txtDeleteNature
			// 
			this->txtDeleteNature->AccessibleName = L"natureProduit";
			this->txtDeleteNature->Location = System::Drawing::Point(460, 181);
			this->txtDeleteNature->Margin = System::Windows::Forms::Padding(4);
			this->txtDeleteNature->Name = L"txtDeleteNature";
			this->txtDeleteNature->Size = System::Drawing::Size(298, 31);
			this->txtDeleteNature->TabIndex = 14;
			this->txtDeleteNature->Tag = L"nature_pr";
			this->txtDeleteNature->Visible = false;
			// 
			// txtDeleteSeuil
			// 
			this->txtDeleteSeuil->AccessibleName = L"seuilReaprovisionnement";
			this->txtDeleteSeuil->Location = System::Drawing::Point(460, 121);
			this->txtDeleteSeuil->Margin = System::Windows::Forms::Padding(4);
			this->txtDeleteSeuil->Name = L"txtDeleteSeuil";
			this->txtDeleteSeuil->Size = System::Drawing::Size(298, 31);
			this->txtDeleteSeuil->TabIndex = 14;
			this->txtDeleteSeuil->Tag = L"reorder_pr";
			this->txtDeleteSeuil->Visible = false;
			// 
			// txtDeleteQuantite
			// 
			this->txtDeleteQuantite->AccessibleName = L"quantite";
			this->txtDeleteQuantite->Location = System::Drawing::Point(26, 337);
			this->txtDeleteQuantite->Margin = System::Windows::Forms::Padding(4);
			this->txtDeleteQuantite->Name = L"txtDeleteQuantite";
			this->txtDeleteQuantite->Size = System::Drawing::Size(298, 31);
			this->txtDeleteQuantite->TabIndex = 27;
			this->txtDeleteQuantite->Tag = L"quantity_pr";
			this->txtDeleteQuantite->Visible = false;
			// 
			// lbDelete
			// 
			this->lbDelete->AutoSize = true;
			this->lbDelete->Location = System::Drawing::Point(24, 29);
			this->lbDelete->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDelete->Name = L"lbDelete";
			this->lbDelete->Size = System::Drawing::Size(122, 25);
			this->lbDelete->TabIndex = 20;
			this->lbDelete->Text = L"Supprimer: ";
			// 
			// btnVSupprimer
			// 
			this->btnVSupprimer->Location = System::Drawing::Point(406, 288);
			this->btnVSupprimer->Margin = System::Windows::Forms::Padding(4);
			this->btnVSupprimer->Name = L"btnVSupprimer";
			this->btnVSupprimer->Size = System::Drawing::Size(280, 115);
			this->btnVSupprimer->TabIndex = 19;
			this->btnVSupprimer->Text = L"Supprimer";
			this->btnVSupprimer->UseVisualStyleBackColor = true;
			this->btnVSupprimer->Click += gcnew System::EventHandler(this, &FormStock::btnSupprimer_Click);
			// 
			// txtDeleteNomArticle
			// 
			this->txtDeleteNomArticle->AccessibleName = L"nomArticle";
			this->txtDeleteNomArticle->Location = System::Drawing::Point(26, 240);
			this->txtDeleteNomArticle->Margin = System::Windows::Forms::Padding(4);
			this->txtDeleteNomArticle->Name = L"txtDeleteNomArticle";
			this->txtDeleteNomArticle->Size = System::Drawing::Size(298, 31);
			this->txtDeleteNomArticle->TabIndex = 16;
			this->txtDeleteNomArticle->Tag = L"name_pr";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(20, 196);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(120, 25);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Nom article";
			// 
			// txtDeleteReference
			// 
			this->txtDeleteReference->AccessibleName = L"reference";
			this->txtDeleteReference->Location = System::Drawing::Point(26, 121);
			this->txtDeleteReference->Margin = System::Windows::Forms::Padding(4);
			this->txtDeleteReference->Name = L"txtDeleteReference";
			this->txtDeleteReference->Size = System::Drawing::Size(298, 31);
			this->txtDeleteReference->TabIndex = 14;
			this->txtDeleteReference->Tag = L"ref_pr";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(20, 77);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(111, 25);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Reference";
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnSupprimer->Location = System::Drawing::Point(12, 625);
			this->btnSupprimer->Margin = System::Windows::Forms::Padding(4);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(250, 100);
			this->btnSupprimer->TabIndex = 13;
			this->btnSupprimer->Text = L"Mode Supprimer";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &FormStock::btnSupprimer_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnModifier->Location = System::Drawing::Point(12, 517);
			this->btnModifier->Margin = System::Windows::Forms::Padding(4);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(250, 100);
			this->btnModifier->TabIndex = 12;
			this->btnModifier->Text = L"Mode Modifier";
			this->btnModifier->UseVisualStyleBackColor = true;
			this->btnModifier->Click += gcnew System::EventHandler(this, &FormStock::btnModifier_Click);
			// 
			// btnInsert
			// 
			this->btnInsert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnInsert->Location = System::Drawing::Point(12, 412);
			this->btnInsert->Margin = System::Windows::Forms::Padding(4);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(250, 100);
			this->btnInsert->TabIndex = 11;
			this->btnInsert->Tag = L"";
			this->btnInsert->Text = L"Mode Inserer";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &FormStock::btnInsert_Click);
			// 
			// btnAffiche
			// 
			this->btnAffiche->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnAffiche->Location = System::Drawing::Point(12, 306);
			this->btnAffiche->Margin = System::Windows::Forms::Padding(4);
			this->btnAffiche->Name = L"btnAffiche";
			this->btnAffiche->Size = System::Drawing::Size(250, 100);
			this->btnAffiche->TabIndex = 10;
			this->btnAffiche->Text = L" Mode Afficher";
			this->btnAffiche->UseVisualStyleBackColor = true;
			this->btnAffiche->Click += gcnew System::EventHandler(this, &FormStock::btnAffiche_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(2470, 287);
			this->dataGridView1->TabIndex = 9;
			// 
			// panelSelect
			// 
			this->panelSelect->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelSelect->Controls->Add(this->txtCouleur);
			this->panelSelect->Controls->Add(this->txtNature);
			this->panelSelect->Controls->Add(this->txtSeuil);
			this->panelSelect->Controls->Add(this->txtQuantite);
			this->panelSelect->Controls->Add(this->btnVSelect);
			this->panelSelect->Controls->Add(this->txtNomArticle);
			this->panelSelect->Controls->Add(this->lbprenom);
			this->panelSelect->Controls->Add(this->labelRef);
			this->panelSelect->Controls->Add(this->txtReference);
			this->panelSelect->Controls->Add(this->label1);
			this->panelSelect->Location = System::Drawing::Point(268, 306);
			this->panelSelect->Margin = System::Windows::Forms::Padding(4);
			this->panelSelect->Name = L"panelSelect";
			this->panelSelect->Size = System::Drawing::Size(2212, 419);
			this->panelSelect->TabIndex = 14;
			// 
			// txtCouleur
			// 
			this->txtCouleur->AccessibleName = L"couleurProduit";
			this->txtCouleur->Location = System::Drawing::Point(610, 265);
			this->txtCouleur->Margin = System::Windows::Forms::Padding(4);
			this->txtCouleur->Name = L"txtCouleur";
			this->txtCouleur->Size = System::Drawing::Size(298, 31);
			this->txtCouleur->TabIndex = 14;
			this->txtCouleur->Tag = L"color_pr";
			this->txtCouleur->Visible = false;
			// 
			// txtNature
			// 
			this->txtNature->AccessibleName = L"natureProduit";
			this->txtNature->Location = System::Drawing::Point(610, 202);
			this->txtNature->Margin = System::Windows::Forms::Padding(4);
			this->txtNature->Name = L"txtNature";
			this->txtNature->Size = System::Drawing::Size(298, 31);
			this->txtNature->TabIndex = 14;
			this->txtNature->Tag = L"nature_pr";
			this->txtNature->Visible = false;
			// 
			// txtSeuil
			// 
			this->txtSeuil->AccessibleName = L"seuilReaprovisionnement";
			this->txtSeuil->Location = System::Drawing::Point(610, 106);
			this->txtSeuil->Margin = System::Windows::Forms::Padding(4);
			this->txtSeuil->Name = L"txtSeuil";
			this->txtSeuil->Size = System::Drawing::Size(298, 31);
			this->txtSeuil->TabIndex = 30;
			this->txtSeuil->Tag = L"reorder_pr";
			this->txtSeuil->Visible = false;
			// 
			// txtQuantite
			// 
			this->txtQuantite->AccessibleName = L"quantite";
			this->txtQuantite->Location = System::Drawing::Point(32, 302);
			this->txtQuantite->Margin = System::Windows::Forms::Padding(4);
			this->txtQuantite->Name = L"txtQuantite";
			this->txtQuantite->Size = System::Drawing::Size(298, 31);
			this->txtQuantite->TabIndex = 29;
			this->txtQuantite->Tag = L"quantity_pr";
			this->txtQuantite->Visible = false;
			// 
			// btnVSelect
			// 
			this->btnVSelect->Location = System::Drawing::Point(696, 313);
			this->btnVSelect->Margin = System::Windows::Forms::Padding(4);
			this->btnVSelect->Name = L"btnVSelect";
			this->btnVSelect->Size = System::Drawing::Size(234, 92);
			this->btnVSelect->TabIndex = 7;
			this->btnVSelect->Text = L"Rechercher";
			this->btnVSelect->UseVisualStyleBackColor = true;
			this->btnVSelect->Click += gcnew System::EventHandler(this, &FormStock::btnVSelect_Click);
			// 
			// txtNomArticle
			// 
			this->txtNomArticle->AccessibleName = L"nomArticle";
			this->txtNomArticle->Location = System::Drawing::Point(30, 212);
			this->txtNomArticle->Margin = System::Windows::Forms::Padding(4);
			this->txtNomArticle->Name = L"txtNomArticle";
			this->txtNomArticle->Size = System::Drawing::Size(376, 31);
			this->txtNomArticle->TabIndex = 4;
			this->txtNomArticle->Tag = L"name_pr";
			// 
			// lbprenom
			// 
			this->lbprenom->AccessibleName = L"";
			this->lbprenom->AutoSize = true;
			this->lbprenom->Location = System::Drawing::Point(24, 171);
			this->lbprenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbprenom->Name = L"lbprenom";
			this->lbprenom->Size = System::Drawing::Size(122, 25);
			this->lbprenom->TabIndex = 3;
			this->lbprenom->Tag = L"";
			this->lbprenom->Text = L"Nom Article";
			// 
			// labelRef
			// 
			this->labelRef->AutoSize = true;
			this->labelRef->Location = System::Drawing::Point(24, 62);
			this->labelRef->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelRef->Name = L"labelRef";
			this->labelRef->Size = System::Drawing::Size(111, 25);
			this->labelRef->TabIndex = 2;
			this->labelRef->Tag = L"ref_pr";
			this->labelRef->Text = L"Reference";
			// 
			// txtReference
			// 
			this->txtReference->AccessibleName = L"reference";
			this->txtReference->Location = System::Drawing::Point(30, 106);
			this->txtReference->Margin = System::Windows::Forms::Padding(4);
			this->txtReference->Name = L"txtReference";
			this->txtReference->Size = System::Drawing::Size(376, 31);
			this->txtReference->TabIndex = 1;
			this->txtReference->Tag = L"ref_pr";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 13);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Afficher : ";
			// 
			// panelInsert
			// 
			this->panelInsert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelInsert->Controls->Add(this->label11);
			this->panelInsert->Controls->Add(this->label10);
			this->panelInsert->Controls->Add(this->txtInsertPriceTTC);
			this->panelInsert->Controls->Add(this->txtInsertPriceTVA);
			this->panelInsert->Controls->Add(this->txtInsertPriceHT);
			this->panelInsert->Controls->Add(this->label3);
			this->panelInsert->Controls->Add(this->label2);
			this->panelInsert->Controls->Add(this->btnVInsert);
			this->panelInsert->Controls->Add(this->txtInsertCouleur);
			this->panelInsert->Controls->Add(this->lbCity);
			this->panelInsert->Controls->Add(this->txtInsertNature);
			this->panelInsert->Controls->Add(this->lbNature);
			this->panelInsert->Controls->Add(this->txtInsertSeuil);
			this->panelInsert->Controls->Add(this->lbAddress);
			this->panelInsert->Controls->Add(this->txtInsertQuantite);
			this->panelInsert->Controls->Add(this->lbInsertHiring);
			this->panelInsert->Controls->Add(this->txtInsertNomArticle);
			this->panelInsert->Controls->Add(this->lbInsertPrenom);
			this->panelInsert->Controls->Add(this->txtInsertReference);
			this->panelInsert->Controls->Add(this->lbNomInsert);
			this->panelInsert->Location = System::Drawing::Point(264, 306);
			this->panelInsert->Margin = System::Windows::Forms::Padding(4);
			this->panelInsert->Name = L"panelInsert";
			this->panelInsert->Size = System::Drawing::Size(2212, 419);
			this->panelInsert->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 13);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Inserer:";
			// 
			// btnVInsert
			// 
			this->btnVInsert->Location = System::Drawing::Point(1116, 327);
			this->btnVInsert->Margin = System::Windows::Forms::Padding(4);
			this->btnVInsert->Name = L"btnVInsert";
			this->btnVInsert->Size = System::Drawing::Size(244, 85);
			this->btnVInsert->TabIndex = 13;
			this->btnVInsert->Text = L"Inserer";
			this->btnVInsert->UseVisualStyleBackColor = true;
			this->btnVInsert->Click += gcnew System::EventHandler(this, &FormStock::btnVInsert_Click);
			// 
			// txtInsertCouleur
			// 
			this->txtInsertCouleur->AccessibleName = L"couleurProduit";
			this->txtInsertCouleur->Location = System::Drawing::Point(428, 333);
			this->txtInsertCouleur->Margin = System::Windows::Forms::Padding(4);
			this->txtInsertCouleur->Name = L"txtInsertCouleur";
			this->txtInsertCouleur->Size = System::Drawing::Size(298, 31);
			this->txtInsertCouleur->TabIndex = 12;
			this->txtInsertCouleur->Tag = L"color_pr";
			// 
			// lbCity
			// 
			this->lbCity->AutoSize = true;
			this->lbCity->Location = System::Drawing::Point(424, 288);
			this->lbCity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCity->Name = L"lbCity";
			this->lbCity->Size = System::Drawing::Size(151, 25);
			this->lbCity->TabIndex = 11;
			this->lbCity->Text = L"Couleur article";
			// 
			// txtInsertNature
			// 
			this->txtInsertNature->AccessibleName = L"natureProduit";
			this->txtInsertNature->Location = System::Drawing::Point(428, 217);
			this->txtInsertNature->Margin = System::Windows::Forms::Padding(4);
			this->txtInsertNature->Name = L"txtInsertNature";
			this->txtInsertNature->Size = System::Drawing::Size(298, 31);
			this->txtInsertNature->TabIndex = 10;
			this->txtInsertNature->Tag = L"nature_pr";
			// 
			// lbNature
			// 
			this->lbNature->AutoSize = true;
			this->lbNature->Location = System::Drawing::Point(424, 175);
			this->lbNature->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNature->Name = L"lbNature";
			this->lbNature->Size = System::Drawing::Size(140, 25);
			this->lbNature->TabIndex = 9;
			this->lbNature->Text = L"Nature article";
			// 
			// txtInsertSeuil
			// 
			this->txtInsertSeuil->AccessibleName = L"seuilReaprovisionnement";
			this->txtInsertSeuil->Location = System::Drawing::Point(428, 108);
			this->txtInsertSeuil->Margin = System::Windows::Forms::Padding(4);
			this->txtInsertSeuil->Name = L"txtInsertSeuil";
			this->txtInsertSeuil->Size = System::Drawing::Size(298, 31);
			this->txtInsertSeuil->TabIndex = 8;
			this->txtInsertSeuil->Tag = L"reorder_pr";
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->Location = System::Drawing::Point(424, 63);
			this->lbAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(285, 25);
			this->lbAddress->TabIndex = 7;
			this->lbAddress->Text = L"Seuil de réaprovisionnement";
			// 
			// txtInsertQuantite
			// 
			this->txtInsertQuantite->AccessibleName = L"quantite";
			this->txtInsertQuantite->Location = System::Drawing::Point(24, 333);
			this->txtInsertQuantite->Margin = System::Windows::Forms::Padding(4);
			this->txtInsertQuantite->Name = L"txtInsertQuantite";
			this->txtInsertQuantite->Size = System::Drawing::Size(298, 31);
			this->txtInsertQuantite->TabIndex = 6;
			this->txtInsertQuantite->Tag = L"quantity_pr";
			// 
			// lbInsertHiring
			// 
			this->lbInsertHiring->AutoSize = true;
			this->lbInsertHiring->Location = System::Drawing::Point(20, 288);
			this->lbInsertHiring->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbInsertHiring->Name = L"lbInsertHiring";
			this->lbInsertHiring->Size = System::Drawing::Size(168, 25);
			this->lbInsertHiring->TabIndex = 5;
			this->lbInsertHiring->Text = L"Quantité articles";
			// 
			// txtInsertNomArticle
			// 
			this->txtInsertNomArticle->AccessibleName = L"nomArticle";
			this->txtInsertNomArticle->Location = System::Drawing::Point(24, 227);
			this->txtInsertNomArticle->Margin = System::Windows::Forms::Padding(4);
			this->txtInsertNomArticle->Name = L"txtInsertNomArticle";
			this->txtInsertNomArticle->Size = System::Drawing::Size(298, 31);
			this->txtInsertNomArticle->TabIndex = 4;
			this->txtInsertNomArticle->Tag = L"name_pr";
			// 
			// lbInsertPrenom
			// 
			this->lbInsertPrenom->AutoSize = true;
			this->lbInsertPrenom->Location = System::Drawing::Point(20, 183);
			this->lbInsertPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbInsertPrenom->Name = L"lbInsertPrenom";
			this->lbInsertPrenom->Size = System::Drawing::Size(120, 25);
			this->lbInsertPrenom->TabIndex = 3;
			this->lbInsertPrenom->Text = L"Nom article";
			// 
			// txtInsertReference
			// 
			this->txtInsertReference->AccessibleName = L"reference";
			this->txtInsertReference->Location = System::Drawing::Point(24, 108);
			this->txtInsertReference->Margin = System::Windows::Forms::Padding(4);
			this->txtInsertReference->Name = L"txtInsertReference";
			this->txtInsertReference->Size = System::Drawing::Size(298, 31);
			this->txtInsertReference->TabIndex = 2;
			this->txtInsertReference->Tag = L"ref_pr";
			// 
			// lbNomInsert
			// 
			this->lbNomInsert->AutoSize = true;
			this->lbNomInsert->Location = System::Drawing::Point(20, 63);
			this->lbNomInsert->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNomInsert->Name = L"lbNomInsert";
			this->lbNomInsert->Size = System::Drawing::Size(111, 25);
			this->lbNomInsert->TabIndex = 1;
			this->lbNomInsert->Text = L"Référence";
			// 
			// panelUpdate
			// 
			this->panelUpdate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelUpdate->Controls->Add(this->btnVModifier);
			this->panelUpdate->Controls->Add(this->txtUpdateCouleur);
			this->panelUpdate->Controls->Add(this->label4);
			this->panelUpdate->Controls->Add(this->txtUpdateNature);
			this->panelUpdate->Controls->Add(this->label5);
			this->panelUpdate->Controls->Add(this->txtUpdateSeuil);
			this->panelUpdate->Controls->Add(this->label6);
			this->panelUpdate->Controls->Add(this->txtUpdateQuatite);
			this->panelUpdate->Controls->Add(this->label7);
			this->panelUpdate->Controls->Add(this->txtUpdateNomArticle);
			this->panelUpdate->Controls->Add(this->label8);
			this->panelUpdate->Controls->Add(this->txtUpdateReference);
			this->panelUpdate->Controls->Add(this->label9);
			this->panelUpdate->Controls->Add(this->lbUpdate);
			this->panelUpdate->Location = System::Drawing::Point(268, 306);
			this->panelUpdate->Margin = System::Windows::Forms::Padding(4);
			this->panelUpdate->Name = L"panelUpdate";
			this->panelUpdate->Size = System::Drawing::Size(2212, 419);
			this->panelUpdate->TabIndex = 16;
			// 
			// btnVModifier
			// 
			this->btnVModifier->Location = System::Drawing::Point(778, 319);
			this->btnVModifier->Margin = System::Windows::Forms::Padding(4);
			this->btnVModifier->Name = L"btnVModifier";
			this->btnVModifier->Size = System::Drawing::Size(212, 87);
			this->btnVModifier->TabIndex = 25;
			this->btnVModifier->Text = L"Modifier";
			this->btnVModifier->UseVisualStyleBackColor = true;
			this->btnVModifier->Click += gcnew System::EventHandler(this, &FormStock::btnModifier_Click);
			// 
			// txtUpdateCouleur
			// 
			this->txtUpdateCouleur->AccessibleName = L"couleurProduit";
			this->txtUpdateCouleur->Location = System::Drawing::Point(426, 335);
			this->txtUpdateCouleur->Margin = System::Windows::Forms::Padding(4);
			this->txtUpdateCouleur->Name = L"txtUpdateCouleur";
			this->txtUpdateCouleur->Size = System::Drawing::Size(298, 31);
			this->txtUpdateCouleur->TabIndex = 24;
			this->txtUpdateCouleur->Tag = L"color_pr";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(420, 290);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 25);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Couleur article";
			// 
			// txtUpdateNature
			// 
			this->txtUpdateNature->AccessibleName = L"natureProduit";
			this->txtUpdateNature->Location = System::Drawing::Point(426, 219);
			this->txtUpdateNature->Margin = System::Windows::Forms::Padding(4);
			this->txtUpdateNature->Name = L"txtUpdateNature";
			this->txtUpdateNature->Size = System::Drawing::Size(298, 31);
			this->txtUpdateNature->TabIndex = 22;
			this->txtUpdateNature->Tag = L"nature_pr";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(420, 175);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 25);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Nature article";
			// 
			// txtUpdateSeuil
			// 
			this->txtUpdateSeuil->AccessibleName = L"seuilReaprovisionnement";
			this->txtUpdateSeuil->Location = System::Drawing::Point(426, 108);
			this->txtUpdateSeuil->Margin = System::Windows::Forms::Padding(4);
			this->txtUpdateSeuil->Name = L"txtUpdateSeuil";
			this->txtUpdateSeuil->Size = System::Drawing::Size(298, 31);
			this->txtUpdateSeuil->TabIndex = 20;
			this->txtUpdateSeuil->Tag = L"reorder_pr";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(420, 63);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(285, 25);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Seuil de réaprovisionnement";
			// 
			// txtUpdateQuatite
			// 
			this->txtUpdateQuatite->AccessibleName = L"quantite";
			this->txtUpdateQuatite->Location = System::Drawing::Point(22, 335);
			this->txtUpdateQuatite->Margin = System::Windows::Forms::Padding(4);
			this->txtUpdateQuatite->Name = L"txtUpdateQuatite";
			this->txtUpdateQuatite->Size = System::Drawing::Size(298, 31);
			this->txtUpdateQuatite->TabIndex = 18;
			this->txtUpdateQuatite->Tag = L"quantity_pr";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 290);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(168, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Quantité articles";
			// 
			// txtUpdateNomArticle
			// 
			this->txtUpdateNomArticle->AccessibleName = L"nomArticle";
			this->txtUpdateNomArticle->Location = System::Drawing::Point(22, 229);
			this->txtUpdateNomArticle->Margin = System::Windows::Forms::Padding(4);
			this->txtUpdateNomArticle->Name = L"txtUpdateNomArticle";
			this->txtUpdateNomArticle->Size = System::Drawing::Size(298, 31);
			this->txtUpdateNomArticle->TabIndex = 16;
			this->txtUpdateNomArticle->Tag = L"name_pr";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 185);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Nom article";
			// 
			// txtUpdateReference
			// 
			this->txtUpdateReference->AccessibleName = L"reference";
			this->txtUpdateReference->Location = System::Drawing::Point(22, 108);
			this->txtUpdateReference->Margin = System::Windows::Forms::Padding(4);
			this->txtUpdateReference->Name = L"txtUpdateReference";
			this->txtUpdateReference->Size = System::Drawing::Size(298, 31);
			this->txtUpdateReference->TabIndex = 14;
			this->txtUpdateReference->Tag = L"ref_pr";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 63);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 25);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Référence";
			// 
			// lbUpdate
			// 
			this->lbUpdate->AutoSize = true;
			this->lbUpdate->Location = System::Drawing::Point(18, 13);
			this->lbUpdate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbUpdate->Name = L"lbUpdate";
			this->lbUpdate->Size = System::Drawing::Size(101, 25);
			this->lbUpdate->TabIndex = 0;
			this->lbUpdate->Text = L"Modifier :";
			// 
			// btnBack
			// 
			this->btnBack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnBack->Location = System::Drawing::Point(10, 731);
			this->btnBack->Margin = System::Windows::Forms::Padding(4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(250, 100);
			this->btnBack->TabIndex = 18;
			this->btnBack->Text = L"Retour au menu";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &FormStock::btnBack_Click);
			// 
			// txtInsertPriceTTC
			// 
			this->txtInsertPriceTTC->AccessibleName = L"prixTTC";
			this->txtInsertPriceTTC->Location = System::Drawing::Point(764, 333);
			this->txtInsertPriceTTC->Margin = System::Windows::Forms::Padding(4);
			this->txtInsertPriceTTC->Name = L"txtInsertPriceTTC";
			this->txtInsertPriceTTC->Size = System::Drawing::Size(298, 31);
			this->txtInsertPriceTTC->TabIndex = 17;
			this->txtInsertPriceTTC->Tag = L"priceTTC_pa";
			// 
			// txtInsertPriceTVA
			// 
			this->txtInsertPriceTVA->AccessibleName = L"tauxTVA";
			this->txtInsertPriceTVA->Location = System::Drawing::Point(764, 217);
			this->txtInsertPriceTVA->Margin = System::Windows::Forms::Padding(4);
			this->txtInsertPriceTVA->Name = L"txtInsertPriceTVA";
			this->txtInsertPriceTVA->Size = System::Drawing::Size(298, 31);
			this->txtInsertPriceTVA->TabIndex = 16;
			this->txtInsertPriceTVA->Tag = L"priceTVA_pa";
			// 
			// txtInsertPriceHT
			// 
			this->txtInsertPriceHT->AccessibleName = L"prixHT";
			this->txtInsertPriceHT->Location = System::Drawing::Point(764, 108);
			this->txtInsertPriceHT->Margin = System::Windows::Forms::Padding(4);
			this->txtInsertPriceHT->Name = L"txtInsertPriceHT";
			this->txtInsertPriceHT->Size = System::Drawing::Size(298, 31);
			this->txtInsertPriceHT->TabIndex = 15;
			this->txtInsertPriceHT->Tag = L"priceHT_pa";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(760, 63);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 25);
			this->label3->TabIndex = 14;
			this->label3->Text = L"PrixHT";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(760, 171);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 25);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Prix TVA";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(760, 290);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(291, 25);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Prix TTC = Somme TVA + HT";
			// 
			// FormStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2512, 856);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnSupprimer);
			this->Controls->Add(this->btnModifier);
			this->Controls->Add(this->btnInsert);
			this->Controls->Add(this->btnAffiche);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panelInsert);
			this->Controls->Add(this->panelUpdate);
			this->Controls->Add(this->panelDelete);
			this->Controls->Add(this->panelSelect);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormStock";
			this->Text = L"FormStock";
			this->Load += gcnew System::EventHandler(this, &FormStock::FormStock_Load);
			this->panelDelete->ResumeLayout(false);
			this->panelDelete->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelSelect->ResumeLayout(false);
			this->panelSelect->PerformLayout();
			this->panelInsert->ResumeLayout(false);
			this->panelInsert->PerformLayout();
			this->panelUpdate->ResumeLayout(false);
			this->panelUpdate->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAffiche_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Show();
	}
	private: System::Void btnInsert_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Show();
		this->panelUpdate->Hide();
		this->panelSelect->Hide();
	}
	private: System::Void btnModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelUpdate->Show();
		this->panelSelect->Hide();
	}
	private: System::Void btnSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Show();
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Hide();
	}
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Hide();
		this->FormRetour->Show();
		this->Hide();
	}
	private: System::Void FormStock_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Hide();
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl", "Product");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void btnVSelect_Click(System::Object^ sender, System::EventArgs^ e) {
		List<TextBox^>^ textBoxList;
		List<TextBox^>^ nonEmptyTxtBox;
		textBoxList = (gcnew List<TextBox^>());
		nonEmptyTxtBox = (gcnew List<TextBox^>());
		textBoxList->Add(this->txtNomArticle);
		textBoxList->Add(this->txtReference);
		for each (TextBox ^ textBox in textBoxList)
		{
			String^ text = textBox->Text->Trim();
			if (!String::IsNullOrEmpty(text))
			{
				nonEmptyTxtBox->Add(textBox);
			}
		}
		this->dataGridView1->Refresh();
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->oDs = this->oSvc->selectSpe("Rsl", "Product", nonEmptyTxtBox, "*");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: void generateProduct()
	{
		this->objfonction = (gcnew NS_objFonction::objFonction);
		this->textBoxList = (gcnew List<TextBox^>());
		this->textBoxListPrice = (gcnew List<TextBox^>());
		this->textBoxList->Add(txtInsertCouleur);
		this->textBoxList->Add(txtInsertNature);
		this->textBoxList->Add(txtInsertNomArticle);
		this->textBoxList->Add(txtInsertQuantite);
		this->textBoxList->Add(txtInsertReference);
		this->textBoxList->Add(txtInsertSeuil);
		this->textBoxList->Add(txtInsertPriceHT);
		this->textBoxList->Add(txtInsertPriceTVA);
		this->textBoxList->Add(txtInsertPriceTTC);
		for each (TextBox ^ textbox in this->textBoxList)
		{
			if (textbox->AccessibleName == "couleurProduit")
			{
				this->objfonction->article->setCouleurProduit(textbox->Text);
			}
			if (textbox->AccessibleName == "reference")
			{
				this->objfonction->article->setReference(textbox->Text);
			}
			if (textbox->AccessibleName == "nomArticle")
			{
				this->objfonction->article->setNomArticle(textbox->Text);
			}
			if (textbox->AccessibleName == "quantite")
			{
				this->objfonction->article->setQuantite(Convert::ToInt32(textbox->Text));
			}
			if (textbox->AccessibleName == "seuilReaprovisionnement")
			{
				this->objfonction->article->setSeuilReaprovisionnement(Convert::ToInt32(textbox->Text));
			}
			if (textbox->AccessibleName == "natureProduit")
			{
				this->objfonction->article->setNatureProduit(textbox->Text);
			}
			if (textbox->AccessibleName == "prixHT")
			{
				this->objfonction->article->setPrixHT(Convert::ToInt32(textbox->Text));
			}
			if (textbox->AccessibleName == "tauxTVA")
			{
				this->objfonction->article->setTauxTVA(Convert::ToInt32(textbox->Text));
			}
			if (textbox->AccessibleName == "prixTTC")
			{
				this->objfonction->article->setPrixTTC(Convert::ToInt32(textbox->Text));
			}
		}
		this->objfonction->has2Query = true;
		this->objfonction->currentObj = "Article";
	}

	private: System::Void btnVInsert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		generateProduct();
		System::String^ res = "Rsl";
		System::String^ tableName = "Product";
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->oSvc->insertSpe(res, tableName, this->objfonction, this->textBoxList);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
		this->dataGridView1->Refresh();
	}
	};
}

