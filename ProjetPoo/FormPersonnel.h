#include "sqlFunction.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Description résumée de FormPersonnel
	/// </summary>
	public ref class FormPersonnel : public System::Windows::Forms::Form
	{
	public:
		FormPersonnel(Form ^f0)
		{
			InitializeComponent();
			this->FormRetour = f0;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_sql_Function::sqlFunction^ oSvc;
	private: System::Data::DataSet^ oDs;
	public: NS_objFonction::objFonction^ objfonction;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnAffiche;
	private: System::Windows::Forms::Button^ btnInsert;
	private: System::Windows::Forms::Button^ btnModifier;
	private: System::Windows::Forms::Button^ btnSupprimer;
	private: System::Windows::Forms::Panel^ panelSelect;
	private: System::Windows::Forms::Panel^ panelInsert;
	private: System::Windows::Forms::Panel^ panelUpdate;
	private: System::Windows::Forms::Panel^ panelDelete;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNom;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnVSelect;
	private: System::Windows::Forms::TextBox^ txtHiring;

	private: System::Windows::Forms::Label^ lbHiring;

	private: System::Windows::Forms::TextBox^ txtPrenom;
	private: System::Windows::Forms::Label^ lbprenom;
	private: System::Windows::Forms::TextBox^ txtInsertCity;

	private: System::Windows::Forms::Label^ lbCity;
	private: System::Windows::Forms::TextBox^ txtInsertZip;


	private: System::Windows::Forms::Label^ lbZipCode;
	private: System::Windows::Forms::TextBox^ txtInsertAddress;


	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::TextBox^ txtInsertHiring;



	private: System::Windows::Forms::Label^ lbInsertHiring;
	private: System::Windows::Forms::TextBox^ txtInsertPrenom;



	private: System::Windows::Forms::Label^ lbInsertPrenom;
	private: System::Windows::Forms::TextBox^ txtInsertNom;
	private: System::Windows::Forms::Label^ lbNomInsert;
	private: System::Windows::Forms::Button^ btnVInsert;
	private: System::Windows::Forms::Label^ lbUpdate;
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
	private: System::Windows::Forms::Label^ lbDelete;
	private: System::Windows::Forms::Button^ btnVSupprimer;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtInsertSup;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtInsertLand;
	private: List<TextBox^>^ textBoxList;

	private: System::Windows::Forms::Form^ FormRetour;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtUpdateId;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPersonnel::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnAffiche = (gcnew System::Windows::Forms::Button());
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->panelSelect = (gcnew System::Windows::Forms::Panel());
			this->btnVSelect = (gcnew System::Windows::Forms::Button());
			this->txtHiring = (gcnew System::Windows::Forms::TextBox());
			this->lbHiring = (gcnew System::Windows::Forms::Label());
			this->txtPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lbprenom = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelInsert = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtInsertLand = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtInsertSup = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnVInsert = (gcnew System::Windows::Forms::Button());
			this->txtInsertCity = (gcnew System::Windows::Forms::TextBox());
			this->lbCity = (gcnew System::Windows::Forms::Label());
			this->txtInsertZip = (gcnew System::Windows::Forms::TextBox());
			this->lbZipCode = (gcnew System::Windows::Forms::Label());
			this->txtInsertAddress = (gcnew System::Windows::Forms::TextBox());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->txtInsertHiring = (gcnew System::Windows::Forms::TextBox());
			this->lbInsertHiring = (gcnew System::Windows::Forms::Label());
			this->txtInsertPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lbInsertPrenom = (gcnew System::Windows::Forms::Label());
			this->txtInsertNom = (gcnew System::Windows::Forms::TextBox());
			this->lbNomInsert = (gcnew System::Windows::Forms::Label());
			this->panelUpdate = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateId = (gcnew System::Windows::Forms::TextBox());
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
			this->panelDelete = (gcnew System::Windows::Forms::Panel());
			this->lbDelete = (gcnew System::Windows::Forms::Label());
			this->btnVSupprimer = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelSelect->SuspendLayout();
			this->panelInsert->SuspendLayout();
			this->panelUpdate->SuspendLayout();
			this->panelDelete->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1265, 287);
			this->dataGridView1->TabIndex = 0;
			// 
			// btnAffiche
			// 
			this->btnAffiche->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnAffiche->Location = System::Drawing::Point(13, 307);
			this->btnAffiche->Name = L"btnAffiche";
			this->btnAffiche->Size = System::Drawing::Size(250, 100);
			this->btnAffiche->TabIndex = 1;
			this->btnAffiche->Text = L" Mode Afficher";
			this->btnAffiche->UseVisualStyleBackColor = true;
			this->btnAffiche->Click += gcnew System::EventHandler(this, &FormPersonnel::btnAffiche_Click);
			// 
			// btnInsert
			// 
			this->btnInsert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnInsert->Location = System::Drawing::Point(13, 413);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(250, 100);
			this->btnInsert->TabIndex = 2;
			this->btnInsert->Tag = L"";
			this->btnInsert->Text = L"Mode Inserer";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &FormPersonnel::btnInsert_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnModifier->Location = System::Drawing::Point(13, 519);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(250, 100);
			this->btnModifier->TabIndex = 3;
			this->btnModifier->Text = L"Mode Modifier";
			this->btnModifier->UseVisualStyleBackColor = true;
			this->btnModifier->Click += gcnew System::EventHandler(this, &FormPersonnel::btnModifier_Click);
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnSupprimer->Location = System::Drawing::Point(13, 625);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(250, 100);
			this->btnSupprimer->TabIndex = 4;
			this->btnSupprimer->Text = L"Mode Supprimer";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &FormPersonnel::btnSupprimer_Click);
			// 
			// panelSelect
			// 
			this->panelSelect->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelSelect->Controls->Add(this->btnVSelect);
			this->panelSelect->Controls->Add(this->txtHiring);
			this->panelSelect->Controls->Add(this->lbHiring);
			this->panelSelect->Controls->Add(this->txtPrenom);
			this->panelSelect->Controls->Add(this->lbprenom);
			this->panelSelect->Controls->Add(this->label3);
			this->panelSelect->Controls->Add(this->txtNom);
			this->panelSelect->Controls->Add(this->label1);
			this->panelSelect->Location = System::Drawing::Point(269, 307);
			this->panelSelect->Name = L"panelSelect";
			this->panelSelect->Size = System::Drawing::Size(1009, 420);
			this->panelSelect->TabIndex = 5;
			// 
			// btnVSelect
			// 
			this->btnVSelect->Location = System::Drawing::Point(719, 300);
			this->btnVSelect->Name = L"btnVSelect";
			this->btnVSelect->Size = System::Drawing::Size(234, 93);
			this->btnVSelect->TabIndex = 7;
			this->btnVSelect->Text = L"Rechercher";
			this->btnVSelect->UseVisualStyleBackColor = true;
			this->btnVSelect->Click += gcnew System::EventHandler(this, &FormPersonnel::btnVSelect_Click);
			// 
			// txtHiring
			// 
			this->txtHiring->Location = System::Drawing::Point(484, 106);
			this->txtHiring->Margin = System::Windows::Forms::Padding(2);
			this->txtHiring->Name = L"txtHiring";
			this->txtHiring->Size = System::Drawing::Size(283, 31);
			this->txtHiring->TabIndex = 6;
			this->txtHiring->Tag = L"hiring_p";
			// 
			// lbHiring
			// 
			this->lbHiring->AutoSize = true;
			this->lbHiring->Location = System::Drawing::Point(488, 61);
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
			this->txtPrenom->Tag = L"firstname_p";
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
			this->txtNom->Tag = L"lastname_p";
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
			this->panelInsert->Controls->Add(this->label16);
			this->panelInsert->Controls->Add(this->label12);
			this->panelInsert->Controls->Add(this->label11);
			this->panelInsert->Controls->Add(this->txtInsertLand);
			this->panelInsert->Controls->Add(this->label10);
			this->panelInsert->Controls->Add(this->txtInsertSup);
			this->panelInsert->Controls->Add(this->label2);
			this->panelInsert->Controls->Add(this->btnVInsert);
			this->panelInsert->Controls->Add(this->txtInsertCity);
			this->panelInsert->Controls->Add(this->lbCity);
			this->panelInsert->Controls->Add(this->txtInsertZip);
			this->panelInsert->Controls->Add(this->lbZipCode);
			this->panelInsert->Controls->Add(this->txtInsertAddress);
			this->panelInsert->Controls->Add(this->lbAddress);
			this->panelInsert->Controls->Add(this->txtInsertHiring);
			this->panelInsert->Controls->Add(this->lbInsertHiring);
			this->panelInsert->Controls->Add(this->txtInsertPrenom);
			this->panelInsert->Controls->Add(this->lbInsertPrenom);
			this->panelInsert->Controls->Add(this->txtInsertNom);
			this->panelInsert->Controls->Add(this->lbNomInsert);
			this->panelInsert->Location = System::Drawing::Point(266, 307);
			this->panelInsert->Name = L"panelInsert";
			this->panelInsert->Size = System::Drawing::Size(1009, 420);
			this->panelInsert->TabIndex = 6;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(317, 149);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(129, 25);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Code Postal";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(20, 147);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(106, 25);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Prenom * ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(611, 63);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 25);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Pays";
			// 
			// txtInsertLand
			// 
			this->txtInsertLand->AccessibleName = L"pays";
			this->txtInsertLand->Location = System::Drawing::Point(615, 100);
			this->txtInsertLand->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertLand->Name = L"txtInsertLand";
			this->txtInsertLand->Size = System::Drawing::Size(113, 31);
			this->txtInsertLand->TabIndex = 16;
			this->txtInsertLand->Tag = L"land_a";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(611, 152);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(105, 25);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Supérieur";
			// 
			// txtInsertSup
			// 
			this->txtInsertSup->AccessibleName = L"superieur";
			this->txtInsertSup->Location = System::Drawing::Point(615, 189);
			this->txtInsertSup->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertSup->Name = L"txtInsertSup";
			this->txtInsertSup->Size = System::Drawing::Size(113, 31);
			this->txtInsertSup->TabIndex = 14;
			this->txtInsertSup->Tag = L"sup_p";
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
			this->btnVInsert->Click += gcnew System::EventHandler(this, &FormPersonnel::btnVInsert_Click);
			// 
			// txtInsertCity
			// 
			this->txtInsertCity->AccessibleName = L"ville";
			this->txtInsertCity->Location = System::Drawing::Point(321, 269);
			this->txtInsertCity->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertCity->Name = L"txtInsertCity";
			this->txtInsertCity->Size = System::Drawing::Size(224, 31);
			this->txtInsertCity->TabIndex = 12;
			this->txtInsertCity->Tag = L"city_a";
			// 
			// lbCity
			// 
			this->lbCity->AutoSize = true;
			this->lbCity->Location = System::Drawing::Point(329, 233);
			this->lbCity->Name = L"lbCity";
			this->lbCity->Size = System::Drawing::Size(53, 25);
			this->lbCity->TabIndex = 11;
			this->lbCity->Text = L"Ville";
			// 
			// txtInsertZip
			// 
			this->txtInsertZip->AccessibleName = L"codePostal";
			this->txtInsertZip->Location = System::Drawing::Point(321, 176);
			this->txtInsertZip->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertZip->Name = L"txtInsertZip";
			this->txtInsertZip->Size = System::Drawing::Size(224, 31);
			this->txtInsertZip->TabIndex = 10;
			this->txtInsertZip->Tag = L"zipcode_a";
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
			this->txtInsertAddress->Location = System::Drawing::Point(321, 102);
			this->txtInsertAddress->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertAddress->Name = L"txtInsertAddress";
			this->txtInsertAddress->Size = System::Drawing::Size(224, 31);
			this->txtInsertAddress->TabIndex = 8;
			this->txtInsertAddress->Tag = L"address_a";
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->Location = System::Drawing::Point(317, 63);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(91, 25);
			this->lbAddress->TabIndex = 7;
			this->lbAddress->Text = L"Adresse";
			// 
			// txtInsertHiring
			// 
			this->txtInsertHiring->AccessibleName = L"dateEmbauche";
			this->txtInsertHiring->Location = System::Drawing::Point(19, 269);
			this->txtInsertHiring->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertHiring->Name = L"txtInsertHiring";
			this->txtInsertHiring->Size = System::Drawing::Size(224, 31);
			this->txtInsertHiring->TabIndex = 6;
			this->txtInsertHiring->Tag = L"hiring_p";
			// 
			// lbInsertHiring
			// 
			this->lbInsertHiring->AutoSize = true;
			this->lbInsertHiring->Location = System::Drawing::Point(20, 233);
			this->lbInsertHiring->Name = L"lbInsertHiring";
			this->lbInsertHiring->Size = System::Drawing::Size(179, 25);
			this->lbInsertHiring->TabIndex = 5;
			this->lbInsertHiring->Text = L"Date d\'embauche";
			// 
			// txtInsertPrenom
			// 
			this->txtInsertPrenom->AccessibleName = L"prenom";
			this->txtInsertPrenom->Location = System::Drawing::Point(19, 183);
			this->txtInsertPrenom->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertPrenom->Name = L"txtInsertPrenom";
			this->txtInsertPrenom->Size = System::Drawing::Size(224, 31);
			this->txtInsertPrenom->TabIndex = 4;
			this->txtInsertPrenom->Tag = L"firstname_p";
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
			this->txtInsertNom->Location = System::Drawing::Point(19, 102);
			this->txtInsertNom->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertNom->Name = L"txtInsertNom";
			this->txtInsertNom->Size = System::Drawing::Size(224, 31);
			this->txtInsertNom->TabIndex = 2;
			this->txtInsertNom->Tag = L"lastname_p";
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
			this->panelUpdate->Controls->Add(this->label17);
			this->panelUpdate->Controls->Add(this->txtUpdateId);
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
			this->panelUpdate->Location = System::Drawing::Point(269, 306);
			this->panelUpdate->Name = L"panelUpdate";
			this->panelUpdate->Size = System::Drawing::Size(1009, 420);
			this->panelUpdate->TabIndex = 7;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(773, 62);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(135, 25);
			this->label17->TabIndex = 27;
			this->label17->Text = L"ID Personnel";
			// 
			// txtUpdateId
			// 
			this->txtUpdateId->AccessibleName = L"idPersonnel";
			this->txtUpdateId->Location = System::Drawing::Point(772, 107);
			this->txtUpdateId->Name = L"txtUpdateId";
			this->txtUpdateId->Size = System::Drawing::Size(208, 31);
			this->txtUpdateId->TabIndex = 26;
			this->txtUpdateId->Tag = L"id_p";
			// 
			// btnVModifier
			// 
			this->btnVModifier->Location = System::Drawing::Point(778, 319);
			this->btnVModifier->Name = L"btnVModifier";
			this->btnVModifier->Size = System::Drawing::Size(212, 87);
			this->btnVModifier->TabIndex = 25;
			this->btnVModifier->Text = L"Modifier";
			this->btnVModifier->UseVisualStyleBackColor = true;
			this->btnVModifier->Click += gcnew System::EventHandler(this, &FormPersonnel::btnVModifier_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(425, 334);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(298, 31);
			this->textBox1->TabIndex = 24;
			this->textBox1->Tag = L"city_a";
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
			this->textBox6->Tag = L"zipcode_a";
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
			this->textBox7->Tag = L"address_a";
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
			this->textBox8->Tag = L"hiring_p";
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
			this->textBox9->Tag = L"firstname_p";
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
			this->textBox10->Tag = L"lastname_p";
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
			// panelDelete
			// 
			this->panelDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelDelete->Controls->Add(this->lbDelete);
			this->panelDelete->Controls->Add(this->btnVSupprimer);
			this->panelDelete->Controls->Add(this->textBox14);
			this->panelDelete->Controls->Add(this->label13);
			this->panelDelete->Controls->Add(this->textBox15);
			this->panelDelete->Controls->Add(this->label14);
			this->panelDelete->Controls->Add(this->textBox16);
			this->panelDelete->Controls->Add(this->label15);
			this->panelDelete->Location = System::Drawing::Point(272, 305);
			this->panelDelete->Name = L"panelDelete";
			this->panelDelete->Size = System::Drawing::Size(1009, 420);
			this->panelDelete->TabIndex = 8;
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
			this->btnVSupprimer->Click += gcnew System::EventHandler(this, &FormPersonnel::btnVSupprimer_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(26, 347);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(298, 31);
			this->textBox14->TabIndex = 18;
			this->textBox14->Tag = L"hiring_p";
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
			this->textBox15->Tag = L"firstname_p";
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
			this->textBox16->Tag = L"lastname_p";
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			// 
			// btnBack
			// 
			this->btnBack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnBack->Location = System::Drawing::Point(13, 731);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(250, 100);
			this->btnBack->TabIndex = 9;
			this->btnBack->Text = L"Retour au menu";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &FormPersonnel::btnBack_Click);
			// 
			// FormPersonnel
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
			this->Name = L"FormPersonnel";
			this->Text = L"Gestion Personnel";
			this->Load += gcnew System::EventHandler(this, &FormPersonnel::FormPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelSelect->ResumeLayout(false);
			this->panelSelect->PerformLayout();
			this->panelInsert->ResumeLayout(false);
			this->panelInsert->PerformLayout();
			this->panelUpdate->ResumeLayout(false);
			this->panelUpdate->PerformLayout();
			this->panelDelete->ResumeLayout(false);
			this->panelDelete->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void FormPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Hide();
		this->dataGridView1->Refresh();
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl", "Personnel");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void btnAffiche_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Show();
	}
	private: System::Void btnInsert_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelSelect->Hide();
		this->panelUpdate->Hide();
		this->panelInsert->Show();
	
	
	}
	private: System::Void btnModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelSelect->Hide();
		this->panelUpdate->Show();
	}
	private: System::Void btnSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Hide();
		this->panelDelete->Show();
	}

	private: System::Void btnVSelect_Click(System::Object^ sender, System::EventArgs^ e) {
		List<TextBox^>^ textBoxList;
		List<TextBox^>^ nonEmptyTxtBox;
		textBoxList = (gcnew List<TextBox^>());
		nonEmptyTxtBox = (gcnew List<TextBox^>());
		textBoxList->Add(this->txtPrenom);
		textBoxList->Add(this->txtNom);
		textBoxList->Add(this->txtHiring);
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
		this->oDs = this->oSvc->selectSpe("Rsl", "Personnel", nonEmptyTxtBox,"*");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";

	}
	private: void generatePersonnel()
	{
		this->objfonction = (gcnew NS_objFonction::objFonction);
		this->textBoxList = (gcnew List<TextBox^>());
		this->textBoxList->Add(this->txtInsertPrenom);
		this->textBoxList->Add(this->txtInsertNom);
		this->textBoxList->Add(this->txtInsertHiring);
		this->textBoxList->Add(this->txtInsertAddress);
		this->textBoxList->Add(this->txtInsertZip);
		this->textBoxList->Add(this->txtInsertCity);
		this->textBoxList->Add(this->txtInsertLand);
		this->textBoxList->Add(this->txtInsertSup);
		for each (TextBox ^ textbox in textBoxList)
		{
			if (textbox->AccessibleName == "prenom")
			{
				this->objfonction->personnel->setPrenom(textbox->Text);
			}
			if (textbox->AccessibleName == "nom")
			{
				this->objfonction->personnel->setNom(textbox->Text);
			}
			if (textbox->AccessibleName == "dateEmbauche")
			{
				this->objfonction->personnel->setDateEmbauche(textbox->Text);
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
			if (textbox->AccessibleName == "superieur")
			{
				this->objfonction->personnel->setSuperieur(textbox->Text);
			}
		}
		this->objfonction->personnel->setAdresse(this->objfonction->adresse);
		this->objfonction->has2Query = true;
		this->objfonction->currentObj = "Personnel";


	}
	private: System::Void btnVInsert_Click(System::Object^ sender, System::EventArgs^ e) {
		generatePersonnel();
		System::String^ res = "Rsl";
		System::String^ tableName = "Personnel";
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->oSvc->insertSpe(res, tableName, this->objfonction, this->textBoxList);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
		this->dataGridView1->Refresh();
	}

	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Hide();
		this->FormRetour->Show();
		this->Hide();
	}

	private: System::Void btnVSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		this->objfonction = (gcnew NS_objFonction::objFonction);
		List<TextBox^>^ nonEmptyTxtBox = (gcnew List<TextBox^>());
		TextBox^ txtBox = gcnew(TextBox);
		this->textBoxList = (gcnew List<TextBox^>());
		this->textBoxList->Add(this->textBox16);
		this->textBoxList->Add(this->textBox15);
		this->textBoxList->Add(this->textBox14);
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
		this->oDs = this->oSvc->deleteSpe("Rsl", "Personnel", nonEmptyTxtBox, "idPersonnel", "id_p");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void btnVModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ res = "Rsl";
		System::String^ tableName = "Personnel";
		List<TextBox^>^ nonEmptyTxtBox;
		nonEmptyTxtBox = (gcnew List<TextBox^>());
		oSvc = gcnew NS_sql_Function::sqlFunction();
		this->textBoxList = (gcnew List<TextBox^>());
		this->textBoxList->Add(textBox10);
		this->textBoxList->Add(textBox9);
		this->textBoxList->Add(textBox8);
		this->textBoxList->Add(textBox7);
		this->textBoxList->Add(textBox6);
		this->textBoxList->Add(textBox1);
		this->textBoxList->Add(txtUpdateId);
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
		this->oDs = this->oSvc->updateSpe(res, tableName, nonEmptyTxtBox, "idPersonnel", "id_p");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
};
}
