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
	/// Description résumée de FormClient
	/// </summary>
	public ref class FormClient : public System::Windows::Forms::Form
	{
	public:

		
		FormClient(Form ^f0)
		{
			InitializeComponent();
			this->FormRetour = f0;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelDelete;
	protected:
	private: System::Windows::Forms::Label^ lbDelete;
	private: System::Windows::Forms::Button^ btnVSupprimer;
	private: System::Windows::Forms::TextBox^ txtDeleteBirth;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtDeletePrenom;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtDeleteNom;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ btnSupprimer;
	private: System::Windows::Forms::Button^ btnModifier;
	private: System::Windows::Forms::Button^ btnInsert;
	private: System::Windows::Forms::Button^ btnAffiche;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panelSelect;
	private: System::Windows::Forms::Button^ btnVSelect;
	private: System::Windows::Forms::TextBox^ txtBirth;
	private: System::Windows::Forms::Label^ lbHiring;
	private: System::Windows::Forms::TextBox^ txtPrenom;
	private: System::Windows::Forms::Label^ lbprenom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtNom;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelInsert;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnVInsert;
	private: System::Windows::Forms::TextBox^ txtInsertCity;

	private: System::Windows::Forms::Label^ lbCity;
	private: System::Windows::Forms::TextBox^ txtInsertZipcode;

	private: System::Windows::Forms::Label^ lbZipCode;
	private: System::Windows::Forms::TextBox^ txtInsertAddress;

	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::TextBox^ txtInsertBirth;

	private: System::Windows::Forms::Label^ lbInsertHiring;
	private: System::Windows::Forms::TextBox^ txtInsertPrenom;

	private: System::Windows::Forms::Label^ lbInsertPrenom;
	private: System::Windows::Forms::TextBox^ txtInsertNom;
	private: System::Windows::Forms::Label^ lbNomInsert;
	private: System::Windows::Forms::Panel^ panelUpdate;
	private: System::Windows::Forms::Button^ btnVModifier;
	private: System::Windows::Forms::TextBox^ txtUpdateCity;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtUpdateZip;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtUpdateAddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtUpdateBirth;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtUpdatePrenom;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtUpdateNom;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ lbUpdate;

	
	private: List<TextBox^>^ textBoxList;
	public: NS_objFonction::objFonction^ objfonction;
	private: NS_sql_Function::sqlFunction^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ btnBack;

	private: System::Windows::Forms::Form^ FormRetour;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtInsertLand;
	private: System::Windows::Forms::TextBox^ txtUpdateLand;
	private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ lbl;
private: System::Windows::Forms::TextBox^ txtUpdateIdClient;





	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormClient::typeid));
			this->panelDelete = (gcnew System::Windows::Forms::Panel());
			this->lbDelete = (gcnew System::Windows::Forms::Label());
			this->btnVSupprimer = (gcnew System::Windows::Forms::Button());
			this->txtDeleteBirth = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtDeletePrenom = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtDeleteNom = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->btnAffiche = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panelSelect = (gcnew System::Windows::Forms::Panel());
			this->btnVSelect = (gcnew System::Windows::Forms::Button());
			this->txtBirth = (gcnew System::Windows::Forms::TextBox());
			this->lbHiring = (gcnew System::Windows::Forms::Label());
			this->txtPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lbprenom = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelInsert = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtInsertLand = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnVInsert = (gcnew System::Windows::Forms::Button());
			this->txtInsertCity = (gcnew System::Windows::Forms::TextBox());
			this->lbCity = (gcnew System::Windows::Forms::Label());
			this->txtInsertZipcode = (gcnew System::Windows::Forms::TextBox());
			this->lbZipCode = (gcnew System::Windows::Forms::Label());
			this->txtInsertAddress = (gcnew System::Windows::Forms::TextBox());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->txtInsertBirth = (gcnew System::Windows::Forms::TextBox());
			this->lbInsertHiring = (gcnew System::Windows::Forms::Label());
			this->txtInsertPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lbInsertPrenom = (gcnew System::Windows::Forms::Label());
			this->txtInsertNom = (gcnew System::Windows::Forms::TextBox());
			this->lbNomInsert = (gcnew System::Windows::Forms::Label());
			this->panelUpdate = (gcnew System::Windows::Forms::Panel());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->txtUpdateIdClient = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdateLand = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btnVModifier = (gcnew System::Windows::Forms::Button());
			this->txtUpdateCity = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateZip = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateBirth = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtUpdatePrenom = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateNom = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lbUpdate = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
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
			this->panelDelete->Controls->Add(this->lbDelete);
			this->panelDelete->Controls->Add(this->btnVSupprimer);
			this->panelDelete->Controls->Add(this->txtDeleteBirth);
			this->panelDelete->Controls->Add(this->label13);
			this->panelDelete->Controls->Add(this->txtDeletePrenom);
			this->panelDelete->Controls->Add(this->label14);
			this->panelDelete->Controls->Add(this->txtDeleteNom);
			this->panelDelete->Controls->Add(this->label15);
			this->panelDelete->Location = System::Drawing::Point(271, 304);
			this->panelDelete->Name = L"panelDelete";
			this->panelDelete->Size = System::Drawing::Size(991, 420);
			this->panelDelete->TabIndex = 35;
			// 
			// lbDelete
			// 
			this->lbDelete->AutoSize = true;
			this->lbDelete->Location = System::Drawing::Point(25, 28);
			this->lbDelete->Name = L"lbDelete";
			this->lbDelete->Size = System::Drawing::Size(122, 25);
			this->lbDelete->TabIndex = 20;
			this->lbDelete->Text = L"Supprimer: ";
			// 
			// btnVSupprimer
			// 
			this->btnVSupprimer->Location = System::Drawing::Point(403, 279);
			this->btnVSupprimer->Name = L"btnVSupprimer";
			this->btnVSupprimer->Size = System::Drawing::Size(279, 116);
			this->btnVSupprimer->TabIndex = 19;
			this->btnVSupprimer->Text = L"Supprimer";
			this->btnVSupprimer->UseVisualStyleBackColor = true;
			this->btnVSupprimer->Click += gcnew System::EventHandler(this, &FormClient::btnVSupprimer_Click);
			// 
			// txtDeleteBirth
			// 
			this->txtDeleteBirth->AccessibleName = L"dateNaissance";
			this->txtDeleteBirth->Location = System::Drawing::Point(26, 347);
			this->txtDeleteBirth->Name = L"txtDeleteBirth";
			this->txtDeleteBirth->Size = System::Drawing::Size(298, 31);
			this->txtDeleteBirth->TabIndex = 18;
			this->txtDeleteBirth->Tag = L"birth_c";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(21, 303);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(191, 25);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Date de naissance";
			// 
			// txtDeletePrenom
			// 
			this->txtDeletePrenom->AccessibleName = L"prenom";
			this->txtDeletePrenom->Location = System::Drawing::Point(26, 241);
			this->txtDeletePrenom->Name = L"txtDeletePrenom";
			this->txtDeletePrenom->Size = System::Drawing::Size(298, 31);
			this->txtDeletePrenom->TabIndex = 16;
			this->txtDeletePrenom->Tag = L"firstname_c";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(21, 197);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 25);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Prenom *";
			// 
			// txtDeleteNom
			// 
			this->txtDeleteNom->AccessibleName = L"nom";
			this->txtDeleteNom->Location = System::Drawing::Point(26, 121);
			this->txtDeleteNom->Name = L"txtDeleteNom";
			this->txtDeleteNom->Size = System::Drawing::Size(298, 31);
			this->txtDeleteNom->TabIndex = 14;
			this->txtDeleteNom->Tag = L"lastname_c";
			this->txtDeleteNom->Text = L"  ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(21, 77);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(70, 25);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Nom *";
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnSupprimer->Location = System::Drawing::Point(12, 624);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(250, 100);
			this->btnSupprimer->TabIndex = 31;
			this->btnSupprimer->Text = L"Mode Supprimer";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &FormClient::btnSupprimer_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnModifier->Location = System::Drawing::Point(12, 518);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(250, 100);
			this->btnModifier->TabIndex = 30;
			this->btnModifier->Text = L"Mode Modifier";
			this->btnModifier->UseVisualStyleBackColor = true;
			this->btnModifier->Click += gcnew System::EventHandler(this, &FormClient::btnModifier_Click);
			// 
			// btnInsert
			// 
			this->btnInsert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnInsert->Location = System::Drawing::Point(12, 412);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(250, 100);
			this->btnInsert->TabIndex = 29;
			this->btnInsert->Tag = L"";
			this->btnInsert->Text = L"Mode Inserer";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &FormClient::btnInsert_Click);
			// 
			// btnAffiche
			// 
			this->btnAffiche->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnAffiche->Location = System::Drawing::Point(12, 306);
			this->btnAffiche->Name = L"btnAffiche";
			this->btnAffiche->Size = System::Drawing::Size(250, 100);
			this->btnAffiche->TabIndex = 28;
			this->btnAffiche->Text = L" Mode Afficher";
			this->btnAffiche->UseVisualStyleBackColor = true;
			this->btnAffiche->Click += gcnew System::EventHandler(this, &FormClient::btnAffiche_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1247, 287);
			this->dataGridView1->TabIndex = 27;
			// 
			// panelSelect
			// 
			this->panelSelect->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelSelect->Controls->Add(this->btnVSelect);
			this->panelSelect->Controls->Add(this->txtBirth);
			this->panelSelect->Controls->Add(this->lbHiring);
			this->panelSelect->Controls->Add(this->txtPrenom);
			this->panelSelect->Controls->Add(this->lbprenom);
			this->panelSelect->Controls->Add(this->label3);
			this->panelSelect->Controls->Add(this->txtNom);
			this->panelSelect->Controls->Add(this->label1);
			this->panelSelect->Location = System::Drawing::Point(268, 306);
			this->panelSelect->Name = L"panelSelect";
			this->panelSelect->Size = System::Drawing::Size(991, 420);
			this->panelSelect->TabIndex = 32;
			// 
			// btnVSelect
			// 
			this->btnVSelect->Location = System::Drawing::Point(719, 300);
			this->btnVSelect->Name = L"btnVSelect";
			this->btnVSelect->Size = System::Drawing::Size(234, 93);
			this->btnVSelect->TabIndex = 7;
			this->btnVSelect->Text = L"Rechercher";
			this->btnVSelect->UseVisualStyleBackColor = true;
			this->btnVSelect->Click += gcnew System::EventHandler(this, &FormClient::btnVSelect_Click);
			// 
			// txtBirth
			// 
			this->txtBirth->AccessibleName = L"dateNaissance";
			this->txtBirth->Location = System::Drawing::Point(577, 106);
			this->txtBirth->Name = L"txtBirth";
			this->txtBirth->Size = System::Drawing::Size(376, 31);
			this->txtBirth->TabIndex = 6;
			this->txtBirth->Tag = L"birth_c";
			// 
			// lbHiring
			// 
			this->lbHiring->AutoSize = true;
			this->lbHiring->Location = System::Drawing::Point(572, 61);
			this->lbHiring->Name = L"lbHiring";
			this->lbHiring->Size = System::Drawing::Size(191, 25);
			this->lbHiring->TabIndex = 5;
			this->lbHiring->Text = L"Date de naissance";
			// 
			// txtPrenom
			// 
			this->txtPrenom->AccessibleName = L"prenom";
			this->txtPrenom->Location = System::Drawing::Point(29, 212);
			this->txtPrenom->Name = L"txtPrenom";
			this->txtPrenom->Size = System::Drawing::Size(376, 31);
			this->txtPrenom->TabIndex = 4;
			this->txtPrenom->Tag = L"firstname_c";
			// 
			// lbprenom
			// 
			this->lbprenom->AutoSize = true;
			this->lbprenom->Location = System::Drawing::Point(24, 172);
			this->lbprenom->Name = L"lbprenom";
			this->lbprenom->Size = System::Drawing::Size(86, 25);
			this->lbprenom->TabIndex = 3;
			this->lbprenom->Text = L"Prenom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nom";
			// 
			// txtNom
			// 
			this->txtNom->AccessibleName = L"nom";
			this->txtNom->Location = System::Drawing::Point(29, 106);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(376, 31);
			this->txtNom->TabIndex = 1;
			this->txtNom->Tag = L"lastname_c";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Afficher : ";
			// 
			// panelInsert
			// 
			this->panelInsert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelInsert->Controls->Add(this->label10);
			this->panelInsert->Controls->Add(this->txtInsertLand);
			this->panelInsert->Controls->Add(this->label2);
			this->panelInsert->Controls->Add(this->btnVInsert);
			this->panelInsert->Controls->Add(this->txtInsertCity);
			this->panelInsert->Controls->Add(this->lbCity);
			this->panelInsert->Controls->Add(this->txtInsertZipcode);
			this->panelInsert->Controls->Add(this->lbZipCode);
			this->panelInsert->Controls->Add(this->txtInsertAddress);
			this->panelInsert->Controls->Add(this->lbAddress);
			this->panelInsert->Controls->Add(this->txtInsertBirth);
			this->panelInsert->Controls->Add(this->lbInsertHiring);
			this->panelInsert->Controls->Add(this->txtInsertPrenom);
			this->panelInsert->Controls->Add(this->lbInsertPrenom);
			this->panelInsert->Controls->Add(this->txtInsertNom);
			this->panelInsert->Controls->Add(this->lbNomInsert);
			this->panelInsert->Location = System::Drawing::Point(265, 306);
			this->panelInsert->Name = L"panelInsert";
			this->panelInsert->Size = System::Drawing::Size(991, 420);
			this->panelInsert->TabIndex = 33;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(776, 61);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 25);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Pays";
			// 
			// txtInsertLand
			// 
			this->txtInsertLand->AccessibleName = L"pays";
			this->txtInsertLand->Location = System::Drawing::Point(781, 107);
			this->txtInsertLand->Name = L"txtInsertLand";
			this->txtInsertLand->Size = System::Drawing::Size(175, 31);
			this->txtInsertLand->TabIndex = 14;
			this->txtInsertLand->Tag = L"land_a";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Inserer:";
			// 
			// btnVInsert
			// 
			this->btnVInsert->Location = System::Drawing::Point(763, 333);
			this->btnVInsert->Name = L"btnVInsert";
			this->btnVInsert->Size = System::Drawing::Size(244, 84);
			this->btnVInsert->TabIndex = 13;
			this->btnVInsert->Text = L"Inserer";
			this->btnVInsert->UseVisualStyleBackColor = true;
			this->btnVInsert->Click += gcnew System::EventHandler(this, &FormClient::btnVInsert_Click);
			// 
			// txtInsertCity
			// 
			this->txtInsertCity->AccessibleName = L"ville";
			this->txtInsertCity->Location = System::Drawing::Point(428, 333);
			this->txtInsertCity->Name = L"txtInsertCity";
			this->txtInsertCity->Size = System::Drawing::Size(298, 31);
			this->txtInsertCity->TabIndex = 12;
			this->txtInsertCity->Tag = L"city_a";
			// 
			// lbCity
			// 
			this->lbCity->AutoSize = true;
			this->lbCity->Location = System::Drawing::Point(423, 289);
			this->lbCity->Name = L"lbCity";
			this->lbCity->Size = System::Drawing::Size(53, 25);
			this->lbCity->TabIndex = 11;
			this->lbCity->Text = L"Ville";
			// 
			// txtInsertZipcode
			// 
			this->txtInsertZipcode->AccessibleName = L"codePostal";
			this->txtInsertZipcode->Location = System::Drawing::Point(428, 218);
			this->txtInsertZipcode->Name = L"txtInsertZipcode";
			this->txtInsertZipcode->Size = System::Drawing::Size(298, 31);
			this->txtInsertZipcode->TabIndex = 10;
			this->txtInsertZipcode->Tag = L"zipcode_a";
			// 
			// lbZipCode
			// 
			this->lbZipCode->AutoSize = true;
			this->lbZipCode->Location = System::Drawing::Point(423, 174);
			this->lbZipCode->Name = L"lbZipCode";
			this->lbZipCode->Size = System::Drawing::Size(127, 25);
			this->lbZipCode->TabIndex = 9;
			this->lbZipCode->Text = L"Code postal";
			// 
			// txtInsertAddress
			// 
			this->txtInsertAddress->AccessibleName = L"Address";
			this->txtInsertAddress->Location = System::Drawing::Point(428, 107);
			this->txtInsertAddress->Name = L"txtInsertAddress";
			this->txtInsertAddress->Size = System::Drawing::Size(298, 31);
			this->txtInsertAddress->TabIndex = 8;
			this->txtInsertAddress->Tag = L"address_a";
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->Location = System::Drawing::Point(423, 63);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(91, 25);
			this->lbAddress->TabIndex = 7;
			this->lbAddress->Text = L"Adresse";
			// 
			// txtInsertBirth
			// 
			this->txtInsertBirth->AccessibleName = L"dateNaissance";
			this->txtInsertBirth->Location = System::Drawing::Point(25, 333);
			this->txtInsertBirth->Name = L"txtInsertBirth";
			this->txtInsertBirth->Size = System::Drawing::Size(298, 31);
			this->txtInsertBirth->TabIndex = 6;
			this->txtInsertBirth->Tag = L"birth_c";
			// 
			// lbInsertHiring
			// 
			this->lbInsertHiring->AutoSize = true;
			this->lbInsertHiring->Location = System::Drawing::Point(20, 289);
			this->lbInsertHiring->Name = L"lbInsertHiring";
			this->lbInsertHiring->Size = System::Drawing::Size(191, 25);
			this->lbInsertHiring->TabIndex = 5;
			this->lbInsertHiring->Text = L"Date de naissance";
			// 
			// txtInsertPrenom
			// 
			this->txtInsertPrenom->AccessibleName = L"prenom";
			this->txtInsertPrenom->Location = System::Drawing::Point(25, 227);
			this->txtInsertPrenom->Name = L"txtInsertPrenom";
			this->txtInsertPrenom->Size = System::Drawing::Size(298, 31);
			this->txtInsertPrenom->TabIndex = 4;
			this->txtInsertPrenom->Tag = L"firstname_c";
			// 
			// lbInsertPrenom
			// 
			this->lbInsertPrenom->AutoSize = true;
			this->lbInsertPrenom->Location = System::Drawing::Point(20, 183);
			this->lbInsertPrenom->Name = L"lbInsertPrenom";
			this->lbInsertPrenom->Size = System::Drawing::Size(100, 25);
			this->lbInsertPrenom->TabIndex = 3;
			this->lbInsertPrenom->Text = L"Prenom *";
			// 
			// txtInsertNom
			// 
			this->txtInsertNom->AccessibleName = L"nom";
			this->txtInsertNom->Location = System::Drawing::Point(25, 107);
			this->txtInsertNom->Name = L"txtInsertNom";
			this->txtInsertNom->Size = System::Drawing::Size(298, 31);
			this->txtInsertNom->TabIndex = 2;
			this->txtInsertNom->Tag = L"lastname_c";
			// 
			// lbNomInsert
			// 
			this->lbNomInsert->AutoSize = true;
			this->lbNomInsert->Location = System::Drawing::Point(20, 63);
			this->lbNomInsert->Name = L"lbNomInsert";
			this->lbNomInsert->Size = System::Drawing::Size(70, 25);
			this->lbNomInsert->TabIndex = 1;
			this->lbNomInsert->Text = L"Nom *";
			// 
			// panelUpdate
			// 
			this->panelUpdate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelUpdate->Controls->Add(this->lbl);
			this->panelUpdate->Controls->Add(this->txtUpdateIdClient);
			this->panelUpdate->Controls->Add(this->txtUpdateLand);
			this->panelUpdate->Controls->Add(this->label11);
			this->panelUpdate->Controls->Add(this->btnVModifier);
			this->panelUpdate->Controls->Add(this->txtUpdateCity);
			this->panelUpdate->Controls->Add(this->label4);
			this->panelUpdate->Controls->Add(this->txtUpdateZip);
			this->panelUpdate->Controls->Add(this->label5);
			this->panelUpdate->Controls->Add(this->txtUpdateAddress);
			this->panelUpdate->Controls->Add(this->label6);
			this->panelUpdate->Controls->Add(this->txtUpdateBirth);
			this->panelUpdate->Controls->Add(this->label7);
			this->panelUpdate->Controls->Add(this->txtUpdatePrenom);
			this->panelUpdate->Controls->Add(this->label8);
			this->panelUpdate->Controls->Add(this->txtUpdateNom);
			this->panelUpdate->Controls->Add(this->label9);
			this->panelUpdate->Controls->Add(this->lbUpdate);
			this->panelUpdate->Location = System::Drawing::Point(268, 305);
			this->panelUpdate->Name = L"panelUpdate";
			this->panelUpdate->Size = System::Drawing::Size(991, 420);
			this->panelUpdate->TabIndex = 34;
			// 
			// lbl
			// 
			this->lbl->AccessibleName = L"idClient";
			this->lbl->AutoSize = true;
			this->lbl->Location = System::Drawing::Point(755, 175);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(90, 25);
			this->lbl->TabIndex = 29;
			this->lbl->Text = L"Id Client";
			// 
			// txtUpdateIdClient
			// 
			this->txtUpdateIdClient->AccessibleName = L"idClient";
			this->txtUpdateIdClient->Location = System::Drawing::Point(760, 219);
			this->txtUpdateIdClient->Name = L"txtUpdateIdClient";
			this->txtUpdateIdClient->Size = System::Drawing::Size(207, 31);
			this->txtUpdateIdClient->TabIndex = 28;
			this->txtUpdateIdClient->Tag = L"id_c";
			// 
			// txtUpdateLand
			// 
			this->txtUpdateLand->AccessibleName = L"pays";
			this->txtUpdateLand->Location = System::Drawing::Point(760, 106);
			this->txtUpdateLand->Name = L"txtUpdateLand";
			this->txtUpdateLand->Size = System::Drawing::Size(225, 31);
			this->txtUpdateLand->TabIndex = 27;
			this->txtUpdateLand->Tag = L"land_a";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(755, 62);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 25);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Pays";
			// 
			// btnVModifier
			// 
			this->btnVModifier->Location = System::Drawing::Point(778, 319);
			this->btnVModifier->Name = L"btnVModifier";
			this->btnVModifier->Size = System::Drawing::Size(212, 87);
			this->btnVModifier->TabIndex = 25;
			this->btnVModifier->Text = L"Modifier";
			this->btnVModifier->UseVisualStyleBackColor = true;
			this->btnVModifier->Click += gcnew System::EventHandler(this, &FormClient::btnVModifier_Click);
			// 
			// txtUpdateCity
			// 
			this->txtUpdateCity->AccessibleName = L"ville";
			this->txtUpdateCity->Location = System::Drawing::Point(425, 334);
			this->txtUpdateCity->Name = L"txtUpdateCity";
			this->txtUpdateCity->Size = System::Drawing::Size(298, 31);
			this->txtUpdateCity->TabIndex = 24;
			this->txtUpdateCity->Tag = L"city_a";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(420, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 25);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Ville";
			// 
			// txtUpdateZip
			// 
			this->txtUpdateZip->AccessibleName = L"codePostal";
			this->txtUpdateZip->Location = System::Drawing::Point(425, 219);
			this->txtUpdateZip->Name = L"txtUpdateZip";
			this->txtUpdateZip->Size = System::Drawing::Size(298, 31);
			this->txtUpdateZip->TabIndex = 22;
			this->txtUpdateZip->Tag = L"zipcode_a";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(420, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 25);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Code postal";
			// 
			// txtUpdateAddress
			// 
			this->txtUpdateAddress->AccessibleName = L"Address";
			this->txtUpdateAddress->Location = System::Drawing::Point(425, 108);
			this->txtUpdateAddress->Name = L"txtUpdateAddress";
			this->txtUpdateAddress->Size = System::Drawing::Size(298, 31);
			this->txtUpdateAddress->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(420, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 25);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Adresse";
			// 
			// txtUpdateBirth
			// 
			this->txtUpdateBirth->AccessibleName = L"dateNaissance";
			this->txtUpdateBirth->Location = System::Drawing::Point(22, 334);
			this->txtUpdateBirth->Name = L"txtUpdateBirth";
			this->txtUpdateBirth->Size = System::Drawing::Size(298, 31);
			this->txtUpdateBirth->TabIndex = 18;
			this->txtUpdateBirth->Tag = L"birth_c";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 290);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(191, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Date de naissance";
			// 
			// txtUpdatePrenom
			// 
			this->txtUpdatePrenom->AccessibleName = L"prenom";
			this->txtUpdatePrenom->Location = System::Drawing::Point(22, 228);
			this->txtUpdatePrenom->Name = L"txtUpdatePrenom";
			this->txtUpdatePrenom->Size = System::Drawing::Size(298, 31);
			this->txtUpdatePrenom->TabIndex = 16;
			this->txtUpdatePrenom->Tag = L"firstname_c";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 184);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Prenom *";
			// 
			// txtUpdateNom
			// 
			this->txtUpdateNom->AccessibleName = L"nom";
			this->txtUpdateNom->Location = System::Drawing::Point(22, 108);
			this->txtUpdateNom->Name = L"txtUpdateNom";
			this->txtUpdateNom->Size = System::Drawing::Size(298, 31);
			this->txtUpdateNom->TabIndex = 14;
			this->txtUpdateNom->Tag = L"lastname_c";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 25);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Nom *";
			// 
			// lbUpdate
			// 
			this->lbUpdate->AutoSize = true;
			this->lbUpdate->Location = System::Drawing::Point(17, 14);
			this->lbUpdate->Name = L"lbUpdate";
			this->lbUpdate->Size = System::Drawing::Size(101, 25);
			this->lbUpdate->TabIndex = 0;
			this->lbUpdate->Text = L"Modifier :";
			// 
			// btnBack
			// 
			this->btnBack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnBack->Location = System::Drawing::Point(12, 731);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(250, 100);
			this->btnBack->TabIndex = 36;
			this->btnBack->Text = L"Retour au menu";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &FormClient::btnBack_Click);
			// 
			// FormClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1290, 859);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnSupprimer);
			this->Controls->Add(this->btnModifier);
			this->Controls->Add(this->btnInsert);
			this->Controls->Add(this->btnAffiche);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panelDelete);
			this->Controls->Add(this->panelSelect);
			this->Controls->Add(this->panelInsert);
			this->Controls->Add(this->panelUpdate);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormClient";
			this->Text = L"FormClient";
			this->Load += gcnew System::EventHandler(this, &FormClient::FormClient_Load);
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
	private: System::Void FormClient_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Hide();
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl", "Client");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
		
	}
	private: System::Void btnVSelect_Click(System::Object^ sender, System::EventArgs^ e) {
		List<TextBox^>^ textBoxList;
		List<TextBox^>^ nonEmptyTxtBox;
		textBoxList = (gcnew List<TextBox^>());
		nonEmptyTxtBox = (gcnew List<TextBox^>());
		textBoxList->Add(this->txtPrenom);
		textBoxList->Add(this->txtNom);
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
		this->oDs = this->oSvc->selectSpe("Rsl","Client", nonEmptyTxtBox,"*");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
  	}
	
		   
	private: void generateClient()
	{
		this->objfonction = (gcnew NS_objFonction::objFonction);
		this->textBoxList = (gcnew List<TextBox^>());
		this->textBoxList->Add(this->txtInsertPrenom);
		this->textBoxList->Add(this->txtInsertNom);
		this->textBoxList->Add(this->txtInsertBirth);
		this->textBoxList->Add(this->txtInsertAddress);
		this->textBoxList->Add(this->txtInsertZipcode);
		this->textBoxList->Add(this->txtInsertCity);
		this->textBoxList->Add(this->txtInsertLand);
		for each (TextBox ^ textbox in this->textBoxList)
		{
			if (textbox->AccessibleName == "prenom")
			{
				this->objfonction->client->setPrenom(textbox->Text);
			}
			if (textbox->AccessibleName == "nom")
			{
				this->objfonction->client->setNom(textbox->Text);
			}
			if (textbox->AccessibleName == "dateNaissance")
			{
				this->objfonction->client->setDateNaissance(textbox->Text);
			}
			if (textbox->AccessibleName == "Address")
			{
				this->objfonction->adresse->setAdresse(textbox->Text);
			}
			if (textbox->AccessibleName == "codePostal")
			{
				this->objfonction->adresse->setCodePostal(textbox->Text);
			}
			if (textbox->AccessibleName == "ville")
			{
				this->objfonction->adresse->setVille(textbox->Text);
			}
			if (textbox->AccessibleName == "pays")
			{
				this->objfonction->adresse->setPays(textbox->Text);
			}
		}
		this->objfonction->has2Query = true;
		this->objfonction->currentObj = "Client";
	}
	private: System::Void btnVInsert_Click(System::Object^ sender, System::EventArgs^ e) {
		generateClient();
		System::String^ res = "Rsl";
		System::String^ tableName = "Client";
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->oSvc->insertSpe(res, tableName, this->objfonction, this->textBoxList);
		this->dataGridView1->Refresh();
	}
	private: System::Void btnVModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		this->objfonction = (gcnew NS_objFonction::objFonction);
		List<TextBox^>^ nonEmptyTxtBox;
		nonEmptyTxtBox = (gcnew List<TextBox^>());
		this->textBoxList = (gcnew List<TextBox^>());
		this->textBoxList->Add(this->txtUpdateNom);
		this->textBoxList->Add(this->txtUpdatePrenom);
		this->textBoxList->Add(this->txtUpdateBirth);
		this->textBoxList->Add(this->txtUpdateAddress);
		this->textBoxList->Add(this->txtUpdateLand);
		this->textBoxList->Add(this->txtUpdateCity);
		this->textBoxList->Add(this->txtUpdateZip);
		this->textBoxList->Add(this->txtUpdateIdClient);
		for each (TextBox ^ textBox in this->textBoxList)
		{
			String^ text = textBox->Text->Trim();
			if (!String::IsNullOrEmpty(text))
			{
				nonEmptyTxtBox->Add(textBox);
			}
		}
		this->dataGridView1->Refresh();
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->oDs = this->oSvc->updateSpe("Rsl", "Client", nonEmptyTxtBox, "idClient","id_c");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void btnVSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		this->objfonction = (gcnew NS_objFonction::objFonction);
		List<TextBox^>^ nonEmptyTxtBox = (gcnew List<TextBox^>());
		this->textBoxList = (gcnew List<TextBox^>());
		this->textBoxList->Add(this->txtDeleteBirth);
		this->textBoxList->Add(this->txtDeleteNom);
		this->textBoxList->Add(this->txtDeletePrenom);
		for each (TextBox ^ textBox in this->textBoxList)
		{
			String^ text = textBox->Text->Trim();
			if (!String::IsNullOrEmpty(text))
			{
				nonEmptyTxtBox->Add(textBox);
			}
		}
		this->dataGridView1->Refresh();
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->oDs = this->oSvc->deleteSpe("Rsl", "Client", nonEmptyTxtBox, "idClient", "id_c");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}

};
}
