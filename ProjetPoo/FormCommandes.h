#pragma once
#include "sqlFunction.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Description résumée de FormCommandes
	/// </summary>
	public ref class FormCommandes : public System::Windows::Forms::Form
	{
	public:
		FormCommandes(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormCommandes()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_sql_Function::sqlFunction^ oSvc;
	private: System::Data::DataSet^ oDs;


	private: System::Windows::Forms::Panel^ panelDelete;
	protected:
	private: System::Windows::Forms::Label^ lbDelete;
	private: System::Windows::Forms::Button^ btnVSupprimer;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox16;
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
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ lbCity;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ lbZipCode;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ lbInsertHiring;
	private: System::Windows::Forms::TextBox^ txtInsertHiring;
	private: System::Windows::Forms::Label^ lbInsertPrenom;
	private: System::Windows::Forms::TextBox^ txtInsertNom;
	private: System::Windows::Forms::Label^ lbNomInsert;
	private: System::Windows::Forms::Panel^ panelUpdate;
	private: System::Windows::Forms::Button^ btnVModifier;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ lbUpdate;

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
			this->panelDelete = (gcnew System::Windows::Forms::Panel());
			this->lbDelete = (gcnew System::Windows::Forms::Label());
			this->btnVSupprimer = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnVInsert = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->lbCity = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->lbZipCode = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->lbInsertHiring = (gcnew System::Windows::Forms::Label());
			this->txtInsertHiring = (gcnew System::Windows::Forms::TextBox());
			this->lbInsertPrenom = (gcnew System::Windows::Forms::Label());
			this->txtInsertNom = (gcnew System::Windows::Forms::TextBox());
			this->lbNomInsert = (gcnew System::Windows::Forms::Label());
			this->panelUpdate = (gcnew System::Windows::Forms::Panel());
			this->btnVModifier = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lbUpdate = (gcnew System::Windows::Forms::Label());
			this->panelDelete->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelSelect->SuspendLayout();
			this->panelInsert->SuspendLayout();
			this->panelUpdate->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelDelete
			// 
			this->panelDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelDelete->Controls->Add(this->lbDelete);
			this->panelDelete->Controls->Add(this->btnVSupprimer);
			this->panelDelete->Controls->Add(this->textBox14);
			this->panelDelete->Controls->Add(this->label13);
			this->panelDelete->Controls->Add(this->textBox15);
			this->panelDelete->Controls->Add(this->label14);
			this->panelDelete->Controls->Add(this->textBox16);
			this->panelDelete->Controls->Add(this->label15);
			this->panelDelete->Location = System::Drawing::Point(271, 304);
			this->panelDelete->Name = L"panelDelete";
			this->panelDelete->Size = System::Drawing::Size(991, 420);
			this->panelDelete->TabIndex = 26;
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
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(26, 347);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(298, 31);
			this->textBox14->TabIndex = 18;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(21, 303);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(193, 25);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Date d\'embauche *";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(26, 241);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(298, 31);
			this->textBox15->TabIndex = 16;
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
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(26, 121);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(298, 31);
			this->textBox16->TabIndex = 14;
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
			this->btnSupprimer->Location = System::Drawing::Point(12, 624);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(250, 100);
			this->btnSupprimer->TabIndex = 22;
			this->btnSupprimer->Text = L"Mode Supprimer";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &FormCommandes::btnSupprimer_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Location = System::Drawing::Point(12, 518);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(250, 100);
			this->btnModifier->TabIndex = 21;
			this->btnModifier->Text = L"Mode Modifier";
			this->btnModifier->UseVisualStyleBackColor = true;
			this->btnModifier->Click += gcnew System::EventHandler(this, &FormCommandes::btnModifier_Click);
			// 
			// btnInsert
			// 
			this->btnInsert->Location = System::Drawing::Point(12, 412);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(250, 100);
			this->btnInsert->TabIndex = 20;
			this->btnInsert->Tag = L"";
			this->btnInsert->Text = L"Mode Inserer";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &FormCommandes::btnInsert_Click);
			// 
			// btnAffiche
			// 
			this->btnAffiche->Location = System::Drawing::Point(12, 306);
			this->btnAffiche->Name = L"btnAffiche";
			this->btnAffiche->Size = System::Drawing::Size(250, 100);
			this->btnAffiche->TabIndex = 19;
			this->btnAffiche->Text = L" Mode Afficher";
			this->btnAffiche->UseVisualStyleBackColor = true;
			this->btnAffiche->Click += gcnew System::EventHandler(this, &FormCommandes::btnAffiche_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1247, 287);
			this->dataGridView1->TabIndex = 18;
			// 
			// panelSelect
			// 
			this->panelSelect->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
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
			this->panelSelect->TabIndex = 23;
			// 
			// btnVSelect
			// 
			this->btnVSelect->Location = System::Drawing::Point(719, 300);
			this->btnVSelect->Name = L"btnVSelect";
			this->btnVSelect->Size = System::Drawing::Size(234, 93);
			this->btnVSelect->TabIndex = 7;
			this->btnVSelect->Text = L"Rechercher";
			this->btnVSelect->UseVisualStyleBackColor = true;
			// 
			// txtBirth
			// 
			this->txtBirth->Location = System::Drawing::Point(577, 106);
			this->txtBirth->Name = L"txtBirth";
			this->txtBirth->Size = System::Drawing::Size(376, 31);
			this->txtBirth->TabIndex = 6;
			// 
			// lbHiring
			// 
			this->lbHiring->AutoSize = true;
			this->lbHiring->Location = System::Drawing::Point(572, 61);
			this->lbHiring->Name = L"lbHiring";
			this->lbHiring->Size = System::Drawing::Size(339, 25);
			this->lbHiring->TabIndex = 5;
			this->lbHiring->Text = L"Date d\'embauche (YYYY-MM-DD)";
			// 
			// txtPrenom
			// 
			this->txtPrenom->Location = System::Drawing::Point(29, 212);
			this->txtPrenom->Name = L"txtPrenom";
			this->txtPrenom->Size = System::Drawing::Size(376, 31);
			this->txtPrenom->TabIndex = 4;
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
			this->txtNom->Location = System::Drawing::Point(29, 106);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(376, 31);
			this->txtNom->TabIndex = 1;
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
			this->panelInsert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelInsert->Controls->Add(this->label2);
			this->panelInsert->Controls->Add(this->btnVInsert);
			this->panelInsert->Controls->Add(this->textBox5);
			this->panelInsert->Controls->Add(this->lbCity);
			this->panelInsert->Controls->Add(this->textBox4);
			this->panelInsert->Controls->Add(this->lbZipCode);
			this->panelInsert->Controls->Add(this->textBox3);
			this->panelInsert->Controls->Add(this->lbAddress);
			this->panelInsert->Controls->Add(this->textBox2);
			this->panelInsert->Controls->Add(this->lbInsertHiring);
			this->panelInsert->Controls->Add(this->txtInsertHiring);
			this->panelInsert->Controls->Add(this->lbInsertPrenom);
			this->panelInsert->Controls->Add(this->txtInsertNom);
			this->panelInsert->Controls->Add(this->lbNomInsert);
			this->panelInsert->Location = System::Drawing::Point(265, 306);
			this->panelInsert->Name = L"panelInsert";
			this->panelInsert->Size = System::Drawing::Size(991, 420);
			this->panelInsert->TabIndex = 24;
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
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(428, 333);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(298, 31);
			this->textBox5->TabIndex = 12;
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(428, 218);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(298, 31);
			this->textBox4->TabIndex = 10;
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(428, 107);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(298, 31);
			this->textBox3->TabIndex = 8;
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
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(25, 333);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(298, 31);
			this->textBox2->TabIndex = 6;
			// 
			// lbInsertHiring
			// 
			this->lbInsertHiring->AutoSize = true;
			this->lbInsertHiring->Location = System::Drawing::Point(20, 289);
			this->lbInsertHiring->Name = L"lbInsertHiring";
			this->lbInsertHiring->Size = System::Drawing::Size(179, 25);
			this->lbInsertHiring->TabIndex = 5;
			this->lbInsertHiring->Text = L"Date d\'embauche";
			// 
			// txtInsertHiring
			// 
			this->txtInsertHiring->Location = System::Drawing::Point(25, 227);
			this->txtInsertHiring->Name = L"txtInsertHiring";
			this->txtInsertHiring->Size = System::Drawing::Size(298, 31);
			this->txtInsertHiring->TabIndex = 4;
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
			this->txtInsertNom->Location = System::Drawing::Point(25, 107);
			this->txtInsertNom->Name = L"txtInsertNom";
			this->txtInsertNom->Size = System::Drawing::Size(298, 31);
			this->txtInsertNom->TabIndex = 2;
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
			this->panelUpdate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelUpdate->Controls->Add(this->btnVModifier);
			this->panelUpdate->Controls->Add(this->textBox1);
			this->panelUpdate->Controls->Add(this->label4);
			this->panelUpdate->Controls->Add(this->textBox6);
			this->panelUpdate->Controls->Add(this->label5);
			this->panelUpdate->Controls->Add(this->textBox7);
			this->panelUpdate->Controls->Add(this->label6);
			this->panelUpdate->Controls->Add(this->textBox8);
			this->panelUpdate->Controls->Add(this->label7);
			this->panelUpdate->Controls->Add(this->textBox9);
			this->panelUpdate->Controls->Add(this->label8);
			this->panelUpdate->Controls->Add(this->textBox10);
			this->panelUpdate->Controls->Add(this->label9);
			this->panelUpdate->Controls->Add(this->lbUpdate);
			this->panelUpdate->Location = System::Drawing::Point(268, 305);
			this->panelUpdate->Name = L"panelUpdate";
			this->panelUpdate->Size = System::Drawing::Size(991, 420);
			this->panelUpdate->TabIndex = 25;
			// 
			// btnVModifier
			// 
			this->btnVModifier->Location = System::Drawing::Point(778, 319);
			this->btnVModifier->Name = L"btnVModifier";
			this->btnVModifier->Size = System::Drawing::Size(212, 87);
			this->btnVModifier->TabIndex = 25;
			this->btnVModifier->Text = L"Modifier";
			this->btnVModifier->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(425, 334);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(298, 31);
			this->textBox1->TabIndex = 24;
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
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(425, 219);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(298, 31);
			this->textBox6->TabIndex = 22;
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
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(425, 108);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(298, 31);
			this->textBox7->TabIndex = 20;
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
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(22, 334);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(298, 31);
			this->textBox8->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 290);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(179, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Date d\'embauche";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(22, 228);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(298, 31);
			this->textBox9->TabIndex = 16;
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
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(22, 108);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(298, 31);
			this->textBox10->TabIndex = 14;
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
			// FormCommandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1290, 859);
			this->Controls->Add(this->panelDelete);
			this->Controls->Add(this->btnSupprimer);
			this->Controls->Add(this->btnModifier);
			this->Controls->Add(this->btnInsert);
			this->Controls->Add(this->btnAffiche);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panelSelect);
			this->Controls->Add(this->panelInsert);
			this->Controls->Add(this->panelUpdate);
			this->Name = L"FormCommandes";
			this->Text = L"FormCommandes";
			this->Load += gcnew System::EventHandler(this, &FormCommandes::FormCommandes_Load);
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
	private: System::Void FormCommandes_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Hide();
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl", "Orders");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
};
}
