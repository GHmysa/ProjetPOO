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
	/// Description résumée de FormCommandes
	/// </summary>
	public ref class FormCommandes : public System::Windows::Forms::Form
	{
	public:
		FormCommandes(Form^ f0)
		{
			InitializeComponent();
			this->FormRetour = f0;
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
	private: System::Windows::Forms::TextBox^ txtDeleteReference;

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


	private: System::Windows::Forms::TextBox^ txtPrenom;
	private: System::Windows::Forms::Label^ lbprenom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtNom;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelInsert;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnVInsert;
	private: System::Windows::Forms::TextBox^ txtInsertPrenom;









	private: System::Windows::Forms::Label^ lbInsertPrenom;
	private: System::Windows::Forms::TextBox^ txtInsertNom;
	private: System::Windows::Forms::Label^ lbNomInsert;
















	private: System::Windows::Forms::Form^ FormRetour;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtReference;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtInsertReference;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtInsertDeliveryDate;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ txtInsertDateEmission;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtInsertDateDePaiement;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ txtInsertDateDeReglement;
	private: System::Windows::Forms::TextBox^ txtInsertTotalItems;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ lbUpdate;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label8;









	private: System::Windows::Forms::Button^ btnVModifier;
	private: System::Windows::Forms::Panel^ panelUpdate;
	private: System::Windows::Forms::TextBox^ txtUpdateNom;
	private: System::Windows::Forms::TextBox^ txtUpdatePrenom;
	private: System::Windows::Forms::TextBox^ txtUpdateDatePaiement;




















	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ txtUpdateDateEmission;
	private: System::Windows::Forms::TextBox^ txtUpdateDateLivraison;

	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ txtUpdateReference;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ txtUpdateDateReglement;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ txtUpdateTotalItems;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ txtDeleteDateLivraison;
	private: System::Windows::Forms::TextBox^ txtDeleteDateReglement;
	private: System::Windows::Forms::TextBox^ txtDeleteTotalItems;
	private: System::Windows::Forms::TextBox^ txtDeleteDatePaiement;
	private: System::Windows::Forms::TextBox^ txtDeleteDateEmission;
	private: System::Windows::Forms::TextBox^ txtTotalItems;

	private: System::Windows::Forms::TextBox^ txtDatePaiement;
	private: System::Windows::Forms::TextBox^ txtDateEmission;
	private: System::Windows::Forms::TextBox^ txtDateReglement;
	private: System::Windows::Forms::TextBox^ txtDateLivraison;




































































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
			this->lbDelete = (gcnew System::Windows::Forms::Label());
			this->btnVSupprimer = (gcnew System::Windows::Forms::Button());
			this->txtDeleteReference = (gcnew System::Windows::Forms::TextBox());
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
			this->txtPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lbprenom = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelInsert = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnVInsert = (gcnew System::Windows::Forms::Button());
			this->txtInsertPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lbInsertPrenom = (gcnew System::Windows::Forms::Label());
			this->txtInsertNom = (gcnew System::Windows::Forms::TextBox());
			this->lbNomInsert = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->txtReference = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtInsertReference = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtInsertDeliveryDate = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtInsertDateEmission = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtInsertDateDePaiement = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtInsertDateDeReglement = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtInsertTotalItems = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->lbUpdate = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnVModifier = (gcnew System::Windows::Forms::Button());
			this->panelUpdate = (gcnew System::Windows::Forms::Panel());
			this->txtUpdateNom = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdatePrenom = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdateDateEmission = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateDatePaiement = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateTotalItems = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateDateReglement = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateReference = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateDateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->txtDeleteDateEmission = (gcnew System::Windows::Forms::TextBox());
			this->txtDeleteDatePaiement = (gcnew System::Windows::Forms::TextBox());
			this->txtDeleteTotalItems = (gcnew System::Windows::Forms::TextBox());
			this->txtDeleteDateReglement = (gcnew System::Windows::Forms::TextBox());
			this->txtDeleteDateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->txtDateReglement = (gcnew System::Windows::Forms::TextBox());
			this->txtDateEmission = (gcnew System::Windows::Forms::TextBox());
			this->txtDatePaiement = (gcnew System::Windows::Forms::TextBox());
			this->txtTotalItems = (gcnew System::Windows::Forms::TextBox());
			this->txtDateLivraison = (gcnew System::Windows::Forms::TextBox());
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
			this->panelDelete->Controls->Add(this->txtDeleteDateLivraison);
			this->panelDelete->Controls->Add(this->txtDeleteDateReglement);
			this->panelDelete->Controls->Add(this->txtDeleteTotalItems);
			this->panelDelete->Controls->Add(this->txtDeleteDatePaiement);
			this->panelDelete->Controls->Add(this->txtDeleteDateEmission);
			this->panelDelete->Controls->Add(this->lbDelete);
			this->panelDelete->Controls->Add(this->btnVSupprimer);
			this->panelDelete->Controls->Add(this->txtDeleteReference);
			this->panelDelete->Controls->Add(this->label13);
			this->panelDelete->Controls->Add(this->txtDeletePrenom);
			this->panelDelete->Controls->Add(this->label14);
			this->panelDelete->Controls->Add(this->txtDeleteNom);
			this->panelDelete->Controls->Add(this->label15);
			this->panelDelete->Location = System::Drawing::Point(135, 158);
			this->panelDelete->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelDelete->Name = L"panelDelete";
			this->panelDelete->Size = System::Drawing::Size(982, 218);
			this->panelDelete->TabIndex = 26;
			// 
			// lbDelete
			// 
			this->lbDelete->AutoSize = true;
			this->lbDelete->Location = System::Drawing::Point(12, 15);
			this->lbDelete->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbDelete->Name = L"lbDelete";
			this->lbDelete->Size = System::Drawing::Size(60, 13);
			this->lbDelete->TabIndex = 20;
			this->lbDelete->Text = L"Supprimer: ";
			// 
			// btnVSupprimer
			// 
			this->btnVSupprimer->Location = System::Drawing::Point(204, 152);
			this->btnVSupprimer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnVSupprimer->Name = L"btnVSupprimer";
			this->btnVSupprimer->Size = System::Drawing::Size(140, 60);
			this->btnVSupprimer->TabIndex = 19;
			this->btnVSupprimer->Text = L"Supprimer";
			this->btnVSupprimer->UseVisualStyleBackColor = true;
			// 
			// txtDeleteReference
			// 
			this->txtDeleteReference->AccessibleName = L"referenceCommande";
			this->txtDeleteReference->Location = System::Drawing::Point(13, 180);
			this->txtDeleteReference->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDeleteReference->Name = L"txtDeleteReference";
			this->txtDeleteReference->Size = System::Drawing::Size(151, 20);
			this->txtDeleteReference->TabIndex = 18;
			this->txtDeleteReference->Tag = L"ref_o";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(10, 158);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 13);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Reference * ";
			// 
			// txtDeletePrenom
			// 
			this->txtDeletePrenom->AccessibleName = L"prenom";
			this->txtDeletePrenom->Location = System::Drawing::Point(13, 125);
			this->txtDeletePrenom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDeletePrenom->Name = L"txtDeletePrenom";
			this->txtDeletePrenom->Size = System::Drawing::Size(151, 20);
			this->txtDeletePrenom->TabIndex = 16;
			this->txtDeletePrenom->Tag = L"firstname_c";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 102);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Prenom Client";
			// 
			// txtDeleteNom
			// 
			this->txtDeleteNom->AccessibleName = L"nom";
			this->txtDeleteNom->Location = System::Drawing::Point(13, 63);
			this->txtDeleteNom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDeleteNom->Name = L"txtDeleteNom";
			this->txtDeleteNom->Size = System::Drawing::Size(151, 20);
			this->txtDeleteNom->TabIndex = 14;
			this->txtDeleteNom->Tag = L"lastname_c";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(10, 40);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 13);
			this->label15->TabIndex = 13;
			this->label15->Text = L" Nom Client";
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Location = System::Drawing::Point(6, 325);
			this->btnSupprimer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(125, 52);
			this->btnSupprimer->TabIndex = 22;
			this->btnSupprimer->Text = L"Mode Supprimer";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &FormCommandes::btnSupprimer_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Location = System::Drawing::Point(6, 269);
			this->btnModifier->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(125, 52);
			this->btnModifier->TabIndex = 21;
			this->btnModifier->Text = L"Mode Modifier";
			this->btnModifier->UseVisualStyleBackColor = true;
			this->btnModifier->Click += gcnew System::EventHandler(this, &FormCommandes::btnModifier_Click);
			// 
			// btnInsert
			// 
			this->btnInsert->Location = System::Drawing::Point(6, 214);
			this->btnInsert->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(125, 52);
			this->btnInsert->TabIndex = 20;
			this->btnInsert->Tag = L"";
			this->btnInsert->Text = L"Mode Inserer";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &FormCommandes::btnInsert_Click);
			// 
			// btnAffiche
			// 
			this->btnAffiche->Location = System::Drawing::Point(6, 159);
			this->btnAffiche->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAffiche->Name = L"btnAffiche";
			this->btnAffiche->Size = System::Drawing::Size(125, 52);
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
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1111, 149);
			this->dataGridView1->TabIndex = 18;
			// 
			// panelSelect
			// 
			this->panelSelect->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelSelect->Controls->Add(this->txtDateLivraison);
			this->panelSelect->Controls->Add(this->txtTotalItems);
			this->panelSelect->Controls->Add(this->txtDatePaiement);
			this->panelSelect->Controls->Add(this->txtDateEmission);
			this->panelSelect->Controls->Add(this->txtDateReglement);
			this->panelSelect->Controls->Add(this->label10);
			this->panelSelect->Controls->Add(this->txtReference);
			this->panelSelect->Controls->Add(this->btnVSelect);
			this->panelSelect->Controls->Add(this->txtPrenom);
			this->panelSelect->Controls->Add(this->lbprenom);
			this->panelSelect->Controls->Add(this->label3);
			this->panelSelect->Controls->Add(this->txtNom);
			this->panelSelect->Controls->Add(this->label1);
			this->panelSelect->Location = System::Drawing::Point(134, 159);
			this->panelSelect->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelSelect->Name = L"panelSelect";
			this->panelSelect->Size = System::Drawing::Size(982, 218);
			this->panelSelect->TabIndex = 23;
			// 
			// btnVSelect
			// 
			this->btnVSelect->Location = System::Drawing::Point(360, 156);
			this->btnVSelect->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnVSelect->Name = L"btnVSelect";
			this->btnVSelect->Size = System::Drawing::Size(117, 48);
			this->btnVSelect->TabIndex = 7;
			this->btnVSelect->Text = L"Rechercher";
			this->btnVSelect->UseVisualStyleBackColor = true;
			this->btnVSelect->Click += gcnew System::EventHandler(this, &FormCommandes::btnVSelect_Click);
			// 
			// txtPrenom
			// 
			this->txtPrenom->AccessibleName = L"prenom";
			this->txtPrenom->Location = System::Drawing::Point(15, 110);
			this->txtPrenom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPrenom->Name = L"txtPrenom";
			this->txtPrenom->Size = System::Drawing::Size(190, 20);
			this->txtPrenom->TabIndex = 4;
			this->txtPrenom->Tag = L"firstname_c";
			// 
			// lbprenom
			// 
			this->lbprenom->AutoSize = true;
			this->lbprenom->Location = System::Drawing::Point(12, 89);
			this->lbprenom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbprenom->Name = L"lbprenom";
			this->lbprenom->Size = System::Drawing::Size(72, 13);
			this->lbprenom->TabIndex = 3;
			this->lbprenom->Text = L"Prenom Client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 32);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nom Client";
			// 
			// txtNom
			// 
			this->txtNom->AccessibleName = L"nom";
			this->txtNom->Location = System::Drawing::Point(15, 55);
			this->txtNom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(190, 20);
			this->txtNom->TabIndex = 1;
			this->txtNom->Tag = L"lastname_c";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Afficher : ";
			// 
			// panelInsert
			// 
			this->panelInsert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelInsert->Controls->Add(this->label2);
			this->panelInsert->Controls->Add(this->btnVInsert);
			this->panelInsert->Controls->Add(this->txtInsertPrenom);
			this->panelInsert->Controls->Add(this->lbInsertPrenom);
			this->panelInsert->Controls->Add(this->txtInsertNom);
			this->panelInsert->Controls->Add(this->lbNomInsert);
			this->panelInsert->Controls->Add(this->label19);
			this->panelInsert->Controls->Add(this->txtInsertTotalItems);
			this->panelInsert->Controls->Add(this->label18);
			this->panelInsert->Controls->Add(this->txtInsertDateDeReglement);
			this->panelInsert->Controls->Add(this->label17);
			this->panelInsert->Controls->Add(this->txtInsertDateDePaiement);
			this->panelInsert->Controls->Add(this->label16);
			this->panelInsert->Controls->Add(this->txtInsertDateEmission);
			this->panelInsert->Controls->Add(this->label12);
			this->panelInsert->Controls->Add(this->txtInsertDeliveryDate);
			this->panelInsert->Controls->Add(this->label11);
			this->panelInsert->Controls->Add(this->txtInsertReference);
			this->panelInsert->Location = System::Drawing::Point(132, 159);
			this->panelInsert->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelInsert->Name = L"panelInsert";
			this->panelInsert->Size = System::Drawing::Size(982, 218);
			this->panelInsert->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 7);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Inserer:";
			// 
			// btnVInsert
			// 
			this->btnVInsert->Location = System::Drawing::Point(381, 173);
			this->btnVInsert->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnVInsert->Name = L"btnVInsert";
			this->btnVInsert->Size = System::Drawing::Size(122, 44);
			this->btnVInsert->TabIndex = 13;
			this->btnVInsert->Text = L"Inserer";
			this->btnVInsert->UseVisualStyleBackColor = true;
			// 
			// txtInsertPrenom
			// 
			this->txtInsertPrenom->AccessibleName = L"prenom";
			this->txtInsertPrenom->Location = System::Drawing::Point(12, 118);
			this->txtInsertPrenom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtInsertPrenom->Name = L"txtInsertPrenom";
			this->txtInsertPrenom->Size = System::Drawing::Size(112, 20);
			this->txtInsertPrenom->TabIndex = 4;
			this->txtInsertPrenom->Tag = L"firstname_c";
			// 
			// lbInsertPrenom
			// 
			this->lbInsertPrenom->AutoSize = true;
			this->lbInsertPrenom->Location = System::Drawing::Point(10, 95);
			this->lbInsertPrenom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbInsertPrenom->Name = L"lbInsertPrenom";
			this->lbInsertPrenom->Size = System::Drawing::Size(79, 13);
			this->lbInsertPrenom->TabIndex = 3;
			this->lbInsertPrenom->Text = L"Prenom Client *";
			// 
			// txtInsertNom
			// 
			this->txtInsertNom->AccessibleName = L"nom";
			this->txtInsertNom->Location = System::Drawing::Point(12, 56);
			this->txtInsertNom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtInsertNom->Name = L"txtInsertNom";
			this->txtInsertNom->Size = System::Drawing::Size(112, 20);
			this->txtInsertNom->TabIndex = 2;
			this->txtInsertNom->Tag = L"lastname_c";
			// 
			// lbNomInsert
			// 
			this->lbNomInsert->AutoSize = true;
			this->lbNomInsert->Location = System::Drawing::Point(10, 33);
			this->lbNomInsert->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbNomInsert->Name = L"lbNomInsert";
			this->lbNomInsert->Size = System::Drawing::Size(65, 13);
			this->lbNomInsert->TabIndex = 1;
			this->lbNomInsert->Text = L"Nom Client *";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(28, 10);
			this->button1->TabIndex = 28;
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(6, 381);
			this->btnBack->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(125, 52);
			this->btnBack->TabIndex = 27;
			this->btnBack->Text = L"Retour au menu";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &FormCommandes::btnBack_Click);
			// 
			// txtReference
			// 
			this->txtReference->AccessibleName = L"referenceCommande";
			this->txtReference->Location = System::Drawing::Point(287, 56);
			this->txtReference->Margin = System::Windows::Forms::Padding(2);
			this->txtReference->Name = L"txtReference";
			this->txtReference->Size = System::Drawing::Size(190, 20);
			this->txtReference->TabIndex = 8;
			this->txtReference->Tag = L"ref_o";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(285, 41);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Reference*";
			// 
			// txtInsertReference
			// 
			this->txtInsertReference->AccessibleName = L"referenceCommande";
			this->txtInsertReference->Location = System::Drawing::Point(362, 56);
			this->txtInsertReference->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertReference->Name = L"txtInsertReference";
			this->txtInsertReference->Size = System::Drawing::Size(107, 20);
			this->txtInsertReference->TabIndex = 14;
			this->txtInsertReference->Tag = L"ref_o";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(362, 39);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Reference * ";
			// 
			// txtInsertDeliveryDate
			// 
			this->txtInsertDeliveryDate->AccessibleName = L"dateLivraisonPrev";
			this->txtInsertDeliveryDate->Location = System::Drawing::Point(362, 118);
			this->txtInsertDeliveryDate->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertDeliveryDate->Name = L"txtInsertDeliveryDate";
			this->txtInsertDeliveryDate->Size = System::Drawing::Size(107, 20);
			this->txtInsertDeliveryDate->TabIndex = 16;
			this->txtInsertDeliveryDate->Tag = L"deliveryDate_o";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(359, 99);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(86, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Date de livraison";
			// 
			// txtInsertDateEmission
			// 
			this->txtInsertDateEmission->AccessibleName = L"dateEmission";
			this->txtInsertDateEmission->Location = System::Drawing::Point(183, 56);
			this->txtInsertDateEmission->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertDateEmission->Name = L"txtInsertDateEmission";
			this->txtInsertDateEmission->Size = System::Drawing::Size(112, 20);
			this->txtInsertDateEmission->TabIndex = 18;
			this->txtInsertDateEmission->Tag = L"issue_o";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(180, 41);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 13);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Date d\'emmission";
			// 
			// txtInsertDateDePaiement
			// 
			this->txtInsertDateDePaiement->AccessibleName = L"datePaiement";
			this->txtInsertDateDePaiement->Location = System::Drawing::Point(183, 119);
			this->txtInsertDateDePaiement->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertDateDePaiement->Name = L"txtInsertDateDePaiement";
			this->txtInsertDateDePaiement->Size = System::Drawing::Size(112, 20);
			this->txtInsertDateDePaiement->TabIndex = 20;
			this->txtInsertDateDePaiement->Tag = L"paymentDate_o";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(183, 104);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(91, 13);
			this->label17->TabIndex = 21;
			this->label17->Text = L"Date de paiement";
			// 
			// txtInsertDateDeReglement
			// 
			this->txtInsertDateDeReglement->AccessibleName = L"dateReglement";
			this->txtInsertDateDeReglement->Location = System::Drawing::Point(12, 166);
			this->txtInsertDateDeReglement->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertDateDeReglement->Name = L"txtInsertDateDeReglement";
			this->txtInsertDateDeReglement->Size = System::Drawing::Size(112, 20);
			this->txtInsertDateDeReglement->TabIndex = 22;
			this->txtInsertDateDeReglement->Tag = L"settlementDate_o";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(11, 151);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(94, 13);
			this->label18->TabIndex = 23;
			this->label18->Text = L"Date de reglement";
			// 
			// txtInsertTotalItems
			// 
			this->txtInsertTotalItems->AccessibleName = L"totalItems";
			this->txtInsertTotalItems->Location = System::Drawing::Point(183, 165);
			this->txtInsertTotalItems->Margin = System::Windows::Forms::Padding(2);
			this->txtInsertTotalItems->Name = L"txtInsertTotalItems";
			this->txtInsertTotalItems->Size = System::Drawing::Size(112, 20);
			this->txtInsertTotalItems->TabIndex = 24;
			this->txtInsertTotalItems->Tag = L"totalItems_o";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(183, 151);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(58, 13);
			this->label19->TabIndex = 25;
			this->label19->Text = L"Total items";
			// 
			// lbUpdate
			// 
			this->lbUpdate->AutoSize = true;
			this->lbUpdate->Location = System::Drawing::Point(9, 7);
			this->lbUpdate->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbUpdate->Name = L"lbUpdate";
			this->lbUpdate->Size = System::Drawing::Size(50, 13);
			this->lbUpdate->TabIndex = 0;
			this->lbUpdate->Text = L"Modifier :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 33);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Nom Client *";
			this->label9->Click += gcnew System::EventHandler(this, &FormCommandes::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 96);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Prenom Client *";
			this->label8->Click += gcnew System::EventHandler(this, &FormCommandes::label8_Click);
			// 
			// btnVModifier
			// 
			this->btnVModifier->Location = System::Drawing::Point(389, 166);
			this->btnVModifier->Margin = System::Windows::Forms::Padding(2);
			this->btnVModifier->Name = L"btnVModifier";
			this->btnVModifier->Size = System::Drawing::Size(106, 45);
			this->btnVModifier->TabIndex = 25;
			this->btnVModifier->Text = L"Modifier";
			this->btnVModifier->UseVisualStyleBackColor = true;
			// 
			// panelUpdate
			// 
			this->panelUpdate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelUpdate->Controls->Add(this->txtUpdateDateLivraison);
			this->panelUpdate->Controls->Add(this->label30);
			this->panelUpdate->Controls->Add(this->txtUpdateReference);
			this->panelUpdate->Controls->Add(this->label29);
			this->panelUpdate->Controls->Add(this->txtUpdateDateReglement);
			this->panelUpdate->Controls->Add(this->label28);
			this->panelUpdate->Controls->Add(this->label27);
			this->panelUpdate->Controls->Add(this->txtUpdateTotalItems);
			this->panelUpdate->Controls->Add(this->label26);
			this->panelUpdate->Controls->Add(this->txtUpdateDatePaiement);
			this->panelUpdate->Controls->Add(this->label25);
			this->panelUpdate->Controls->Add(this->txtUpdateDateEmission);
			this->panelUpdate->Controls->Add(this->txtUpdatePrenom);
			this->panelUpdate->Controls->Add(this->txtUpdateNom);
			this->panelUpdate->Controls->Add(this->btnVModifier);
			this->panelUpdate->Controls->Add(this->label8);
			this->panelUpdate->Controls->Add(this->label9);
			this->panelUpdate->Controls->Add(this->lbUpdate);
			this->panelUpdate->Location = System::Drawing::Point(134, 159);
			this->panelUpdate->Margin = System::Windows::Forms::Padding(2);
			this->panelUpdate->Name = L"panelUpdate";
			this->panelUpdate->Size = System::Drawing::Size(982, 218);
			this->panelUpdate->TabIndex = 25;
			// 
			// txtUpdateNom
			// 
			this->txtUpdateNom->AccessibleName = L"nom";
			this->txtUpdateNom->Location = System::Drawing::Point(10, 56);
			this->txtUpdateNom->Margin = System::Windows::Forms::Padding(2);
			this->txtUpdateNom->Name = L"txtUpdateNom";
			this->txtUpdateNom->Size = System::Drawing::Size(112, 20);
			this->txtUpdateNom->TabIndex = 26;
			this->txtUpdateNom->Tag = L"lastname_c";
			// 
			// txtUpdatePrenom
			// 
			this->txtUpdatePrenom->AccessibleName = L"prenom";
			this->txtUpdatePrenom->Location = System::Drawing::Point(10, 116);
			this->txtUpdatePrenom->Margin = System::Windows::Forms::Padding(2);
			this->txtUpdatePrenom->Name = L"txtUpdatePrenom";
			this->txtUpdatePrenom->Size = System::Drawing::Size(112, 20);
			this->txtUpdatePrenom->TabIndex = 27;
			this->txtUpdatePrenom->Tag = L"firstname_c";
			// 
			// txtUpdateDateEmission
			// 
			this->txtUpdateDateEmission->AccessibleName = L"dateEmission";
			this->txtUpdateDateEmission->Location = System::Drawing::Point(202, 56);
			this->txtUpdateDateEmission->Margin = System::Windows::Forms::Padding(2);
			this->txtUpdateDateEmission->Name = L"txtUpdateDateEmission";
			this->txtUpdateDateEmission->Size = System::Drawing::Size(112, 20);
			this->txtUpdateDateEmission->TabIndex = 28;
			this->txtUpdateDateEmission->Tag = L"issue_o";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(199, 41);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(89, 13);
			this->label25->TabIndex = 26;
			this->label25->Text = L"Date d\'emmission";
			// 
			// txtUpdateDatePaiement
			// 
			this->txtUpdateDatePaiement->AccessibleName = L"datePaiement";
			this->txtUpdateDatePaiement->Location = System::Drawing::Point(202, 118);
			this->txtUpdateDatePaiement->Margin = System::Windows::Forms::Padding(2);
			this->txtUpdateDatePaiement->Name = L"txtUpdateDatePaiement";
			this->txtUpdateDatePaiement->Size = System::Drawing::Size(112, 20);
			this->txtUpdateDatePaiement->TabIndex = 26;
			this->txtUpdateDatePaiement->Tag = L"paymentDate_o";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(202, 101);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(91, 13);
			this->label26->TabIndex = 29;
			this->label26->Text = L"Date de paiement";
			// 
			// txtUpdateTotalItems
			// 
			this->txtUpdateTotalItems->AccessibleName = L"totalItems";
			this->txtUpdateTotalItems->Location = System::Drawing::Point(202, 171);
			this->txtUpdateTotalItems->Margin = System::Windows::Forms::Padding(2);
			this->txtUpdateTotalItems->Name = L"txtUpdateTotalItems";
			this->txtUpdateTotalItems->Size = System::Drawing::Size(112, 20);
			this->txtUpdateTotalItems->TabIndex = 30;
			this->txtUpdateTotalItems->Tag = L"totalItems_o";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(201, 157);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(58, 13);
			this->label27->TabIndex = 31;
			this->label27->Text = L"Total items";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(7, 157);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(94, 13);
			this->label28->TabIndex = 32;
			this->label28->Text = L"Date de reglement";
			// 
			// txtUpdateDateReglement
			// 
			this->txtUpdateDateReglement->AccessibleName = L"dateReglement";
			this->txtUpdateDateReglement->Location = System::Drawing::Point(11, 173);
			this->txtUpdateDateReglement->Margin = System::Windows::Forms::Padding(2);
			this->txtUpdateDateReglement->Name = L"txtUpdateDateReglement";
			this->txtUpdateDateReglement->Size = System::Drawing::Size(112, 20);
			this->txtUpdateDateReglement->TabIndex = 33;
			this->txtUpdateDateReglement->Tag = L"settlementDate_o";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(386, 41);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(67, 13);
			this->label29->TabIndex = 34;
			this->label29->Text = L"Reference * ";
			// 
			// txtUpdateReference
			// 
			this->txtUpdateReference->AccessibleName = L"referenceCommande";
			this->txtUpdateReference->Location = System::Drawing::Point(388, 56);
			this->txtUpdateReference->Margin = System::Windows::Forms::Padding(2);
			this->txtUpdateReference->Name = L"txtUpdateReference";
			this->txtUpdateReference->Size = System::Drawing::Size(107, 20);
			this->txtUpdateReference->TabIndex = 35;
			this->txtUpdateReference->Tag = L"ref_o";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(386, 104);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(86, 13);
			this->label30->TabIndex = 36;
			this->label30->Text = L"Date de livraison";
			// 
			// txtUpdateDateLivraison
			// 
			this->txtUpdateDateLivraison->AccessibleName = L"dateLivraisonPrev";
			this->txtUpdateDateLivraison->Location = System::Drawing::Point(388, 124);
			this->txtUpdateDateLivraison->Margin = System::Windows::Forms::Padding(2);
			this->txtUpdateDateLivraison->Name = L"txtUpdateDateLivraison";
			this->txtUpdateDateLivraison->Size = System::Drawing::Size(107, 20);
			this->txtUpdateDateLivraison->TabIndex = 37;
			this->txtUpdateDateLivraison->Tag = L"deliveryDate_o";
			// 
			// txtDeleteDateEmission
			// 
			this->txtDeleteDateEmission->AccessibleName = L"dateEmission";
			this->txtDeleteDateEmission->Location = System::Drawing::Point(243, 62);
			this->txtDeleteDateEmission->Margin = System::Windows::Forms::Padding(2);
			this->txtDeleteDateEmission->Name = L"txtDeleteDateEmission";
			this->txtDeleteDateEmission->Size = System::Drawing::Size(112, 20);
			this->txtDeleteDateEmission->TabIndex = 30;
			this->txtDeleteDateEmission->Tag = L"issue_o";
			this->txtDeleteDateEmission->Visible = false;
			// 
			// txtDeleteDatePaiement
			// 
			this->txtDeleteDatePaiement->AccessibleName = L"datePaiement";
			this->txtDeleteDatePaiement->Location = System::Drawing::Point(243, 98);
			this->txtDeleteDatePaiement->Margin = System::Windows::Forms::Padding(2);
			this->txtDeleteDatePaiement->Name = L"txtDeleteDatePaiement";
			this->txtDeleteDatePaiement->Size = System::Drawing::Size(112, 20);
			this->txtDeleteDatePaiement->TabIndex = 31;
			this->txtDeleteDatePaiement->Tag = L"paymentDate_o";
			this->txtDeleteDatePaiement->Visible = false;
			// 
			// txtDeleteTotalItems
			// 
			this->txtDeleteTotalItems->AccessibleName = L"totalItems";
			this->txtDeleteTotalItems->Location = System::Drawing::Point(243, 125);
			this->txtDeleteTotalItems->Margin = System::Windows::Forms::Padding(2);
			this->txtDeleteTotalItems->Name = L"txtDeleteTotalItems";
			this->txtDeleteTotalItems->Size = System::Drawing::Size(112, 20);
			this->txtDeleteTotalItems->TabIndex = 32;
			this->txtDeleteTotalItems->Tag = L"totalItems_o";
			this->txtDeleteTotalItems->Visible = false;
			// 
			// txtDeleteDateReglement
			// 
			this->txtDeleteDateReglement->AccessibleName = L"dateReglement";
			this->txtDeleteDateReglement->Location = System::Drawing::Point(243, 33);
			this->txtDeleteDateReglement->Margin = System::Windows::Forms::Padding(2);
			this->txtDeleteDateReglement->Name = L"txtDeleteDateReglement";
			this->txtDeleteDateReglement->Size = System::Drawing::Size(112, 20);
			this->txtDeleteDateReglement->TabIndex = 33;
			this->txtDeleteDateReglement->Tag = L"settlementDate_o";
			this->txtDeleteDateReglement->Visible = false;
			// 
			// txtDeleteDateLivraison
			// 
			this->txtDeleteDateLivraison->AccessibleName = L"dateLivraisonPrev";
			this->txtDeleteDateLivraison->Location = System::Drawing::Point(243, 3);
			this->txtDeleteDateLivraison->Margin = System::Windows::Forms::Padding(2);
			this->txtDeleteDateLivraison->Name = L"txtDeleteDateLivraison";
			this->txtDeleteDateLivraison->Size = System::Drawing::Size(107, 20);
			this->txtDeleteDateLivraison->TabIndex = 34;
			this->txtDeleteDateLivraison->Tag = L"deliveryDate_o";
			this->txtDeleteDateLivraison->Visible = false;
			// 
			// txtDateReglement
			// 
			this->txtDateReglement->AccessibleName = L"dateReglement";
			this->txtDateReglement->Location = System::Drawing::Point(16, 148);
			this->txtDateReglement->Margin = System::Windows::Forms::Padding(2);
			this->txtDateReglement->Name = L"txtDateReglement";
			this->txtDateReglement->Size = System::Drawing::Size(189, 20);
			this->txtDateReglement->TabIndex = 36;
			this->txtDateReglement->Tag = L"settlementDate_o";
			this->txtDateReglement->Visible = false;
			// 
			// txtDateEmission
			// 
			this->txtDateEmission->AccessibleName = L"dateEmission";
			this->txtDateEmission->Location = System::Drawing::Point(288, 89);
			this->txtDateEmission->Margin = System::Windows::Forms::Padding(2);
			this->txtDateEmission->Name = L"txtDateEmission";
			this->txtDateEmission->Size = System::Drawing::Size(189, 20);
			this->txtDateEmission->TabIndex = 37;
			this->txtDateEmission->Tag = L"issue_o";
			this->txtDateEmission->Visible = false;
			// 
			// txtDatePaiement
			// 
			this->txtDatePaiement->AccessibleName = L"datePaiement";
			this->txtDatePaiement->Location = System::Drawing::Point(287, 121);
			this->txtDatePaiement->Margin = System::Windows::Forms::Padding(2);
			this->txtDatePaiement->Name = L"txtDatePaiement";
			this->txtDatePaiement->Size = System::Drawing::Size(190, 20);
			this->txtDatePaiement->TabIndex = 26;
			this->txtDatePaiement->Tag = L"paymentDate_o";
			this->txtDatePaiement->Visible = false;
			// 
			// txtTotalItems
			// 
			this->txtTotalItems->AccessibleName = L"totalItems";
			this->txtTotalItems->Location = System::Drawing::Point(16, 184);
			this->txtTotalItems->Margin = System::Windows::Forms::Padding(2);
			this->txtTotalItems->Name = L"txtTotalItems";
			this->txtTotalItems->Size = System::Drawing::Size(189, 20);
			this->txtTotalItems->TabIndex = 26;
			this->txtTotalItems->Tag = L"totalItems_o";
			this->txtTotalItems->Visible = false;
			// 
			// txtDateLivraison
			// 
			this->txtDateLivraison->AccessibleName = L"dateLivraisonPrev";
			this->txtDateLivraison->Location = System::Drawing::Point(227, 183);
			this->txtDateLivraison->Margin = System::Windows::Forms::Padding(2);
			this->txtDateLivraison->Name = L"txtDateLivraison";
			this->txtDateLivraison->Size = System::Drawing::Size(107, 20);
			this->txtDateLivraison->TabIndex = 26;
			this->txtDateLivraison->Tag = L"deliveryDate_o";
			this->txtDateLivraison->Visible = false;
			// 
			// FormCommandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1132, 685);
			this->Controls->Add(this->btnInsert);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnSupprimer);
			this->Controls->Add(this->btnModifier);
			this->Controls->Add(this->btnAffiche);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panelSelect);
			this->Controls->Add(this->panelInsert);
			this->Controls->Add(this->panelUpdate);
			this->Controls->Add(this->panelDelete);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
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
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelInsert->Hide();
		this->panelUpdate->Hide();
		this->panelSelect->Hide();
		this->FormRetour->Show();
		this->Hide();
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

	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnVSelect_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
