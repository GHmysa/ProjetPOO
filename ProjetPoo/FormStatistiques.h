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
	/// Description résumée de FormStatistiques
	/// </summary>
	public ref class FormStatistiques : public System::Windows::Forms::Form
	{
	public:
		FormStatistiques(Form^ f0)
		{
			InitializeComponent();
			this->FormRetour = f0;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormStatistiques()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::RadioButton^ radioButtonPM;

	private: System::Windows::Forms::GroupBox^ groupBoxSelectionStat;
	private: System::Windows::Forms::RadioButton^ radioButtonEstimations;


	private: System::Windows::Forms::RadioButton^ radioButtonVAS;

	private: System::Windows::Forms::RadioButton^ radioButtonVCS;

	private: System::Windows::Forms::RadioButton^ radioButtonBottom10;

	private: System::Windows::Forms::RadioButton^ radioButtonTop10;

	private: System::Windows::Forms::RadioButton^ radioButtonMTC;

	private: System::Windows::Forms::RadioButton^ radioButtonPaR;

	private: System::Windows::Forms::RadioButton^ radioButtonCAM;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Panel^ panel_Montant_Total_Client;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtStatNom;
	private: System::Windows::Forms::TextBox^ txtStatPrenom;
	private: System::Windows::Forms::Panel^ ChiffreAffairepanel;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerCAM;
	private: System::Windows::Forms::Panel^ panel_Estimation_Type;


















	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Panel^ EstimationPredetermineesPanel;



	private: System::Windows::Forms::Label^ txtEstimationsPredetermineesDemarques;

	private: System::Windows::Forms::Label^ txtEstimationsPredetermineesRemise;

	private: System::Windows::Forms::Label^ txtEstimationsPredetermineesMarge;
	private: System::Windows::Forms::Label^ txtEstimationsPredetermineesTVA;
private: System::Windows::Forms::RadioButton^ radioButtonEstimationsPersonaliseesNON;

private: System::Windows::Forms::RadioButton^ radioButtonEstimationsPersonaliseesOUI;
	private: System::Windows::Forms::Panel^ panel_CA_mois;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::DateTimePicker^ dateTimePickerChiffreAffaireMensuel;
private: System::Windows::Forms::Panel^ panel_Estimation_Choix;

private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::RadioButton^ radioButtonTVA1;


private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::RadioButton^ radioButtonTVA3;

private: System::Windows::Forms::RadioButton^ radioButtonTVA2;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::RadioButton^ radioButtonDemarque3;
private: System::Windows::Forms::RadioButton^ radioButtonDemarque2;
private: System::Windows::Forms::RadioButton^ radioButtonDemarque1;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::RadioButton^ radioButtonRemise2;
private: System::Windows::Forms::RadioButton^ radioButtonRemise1;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::RadioButton^ radioButtonMarge3;
private: System::Windows::Forms::RadioButton^ radioButtonMarge2;
private: System::Windows::Forms::RadioButton^ radioButtonMarge1;



public: String^ choix_stat = "0";
public: String^ TauxTVA = "";
public: String^ TauxMarge = "";
public: String^ TauxRemise = "";
public: String^ TauxDemarque = "";

public: String^ dateChiffreAffaire = "";
public: String^ nomClient = "";
public: String^ prenomClient = "";

private: System::Windows::Forms::Panel^ panel_Estimation_Libre;
private: NS_sql_Function::sqlFunction^ oSvc;
private: System::Data::DataSet^ oDs;












private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ txtDemarqueEstimationLibre;
private: System::Windows::Forms::TextBox^ txtRemiseEstimationLibre;
private: System::Windows::Forms::TextBox^ txtMargeEstimationLibre;
private: System::Windows::Forms::TextBox^ txtTVAEstimationLibre;






	private: System::Windows::Forms::Form^ FormRetour;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->radioButtonPM = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxSelectionStat = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonEstimations = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonVAS = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonVCS = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonBottom10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTop10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMTC = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPaR = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCAM = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->panel_Montant_Total_Client = (gcnew System::Windows::Forms::Panel());
			this->txtStatPrenom = (gcnew System::Windows::Forms::TextBox());
			this->txtStatNom = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ChiffreAffairepanel = (gcnew System::Windows::Forms::Panel());
			this->dateTimePickerCAM = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButtonEstimationsPersonaliseesNON = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonEstimationsPersonaliseesOUI = (gcnew System::Windows::Forms::RadioButton());
			this->panel_Estimation_Type = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->EstimationPredetermineesPanel = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtEstimationsPredetermineesDemarques = (gcnew System::Windows::Forms::Label());
			this->txtEstimationsPredetermineesRemise = (gcnew System::Windows::Forms::Label());
			this->txtEstimationsPredetermineesMarge = (gcnew System::Windows::Forms::Label());
			this->txtEstimationsPredetermineesTVA = (gcnew System::Windows::Forms::Label());
			this->panel_CA_mois = (gcnew System::Windows::Forms::Panel());
			this->dateTimePickerChiffreAffaireMensuel = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel_Estimation_Choix = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->radioButtonDemarque3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDemarque2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDemarque1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->radioButtonRemise2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonRemise1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->radioButtonMarge3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMarge2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMarge1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->radioButtonTVA3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTVA2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTVA1 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel_Estimation_Libre = (gcnew System::Windows::Forms::Panel());
			this->txtDemarqueEstimationLibre = (gcnew System::Windows::Forms::TextBox());
			this->txtRemiseEstimationLibre = (gcnew System::Windows::Forms::TextBox());
			this->txtMargeEstimationLibre = (gcnew System::Windows::Forms::TextBox());
			this->txtTVAEstimationLibre = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSelectionStat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_Montant_Total_Client->SuspendLayout();
			this->ChiffreAffairepanel->SuspendLayout();
			this->panel_Estimation_Type->SuspendLayout();
			this->EstimationPredetermineesPanel->SuspendLayout();
			this->panel_CA_mois->SuspendLayout();
			this->panel_Estimation_Choix->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel_Estimation_Libre->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnBack->Location = System::Drawing::Point(13, 744);
			this->btnBack->Margin = System::Windows::Forms::Padding(4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(333, 124);
			this->btnBack->TabIndex = 37;
			this->btnBack->Text = L"Retour au menu";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &FormStatistiques::btnBack_Click);
			// 
			// radioButtonPM
			// 
			this->radioButtonPM->AutoSize = true;
			this->radioButtonPM->Location = System::Drawing::Point(0, 37);
			this->radioButtonPM->Name = L"radioButtonPM";
			this->radioButtonPM->Size = System::Drawing::Size(226, 36);
			this->radioButtonPM->TabIndex = 38;
			this->radioButtonPM->TabStop = true;
			this->radioButtonPM->Text = L"Panier moyen";
			this->radioButtonPM->UseVisualStyleBackColor = true;
			this->radioButtonPM->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonPanierMoyen_CheckedChanged);
			// 
			// groupBoxSelectionStat
			// 
			this->groupBoxSelectionStat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBoxSelectionStat->Controls->Add(this->radioButtonEstimations);
			this->groupBoxSelectionStat->Controls->Add(this->radioButtonVAS);
			this->groupBoxSelectionStat->Controls->Add(this->radioButtonVCS);
			this->groupBoxSelectionStat->Controls->Add(this->radioButtonBottom10);
			this->groupBoxSelectionStat->Controls->Add(this->radioButtonTop10);
			this->groupBoxSelectionStat->Controls->Add(this->radioButtonMTC);
			this->groupBoxSelectionStat->Controls->Add(this->radioButtonPaR);
			this->groupBoxSelectionStat->Controls->Add(this->radioButtonCAM);
			this->groupBoxSelectionStat->Controls->Add(this->radioButtonPM);
			this->groupBoxSelectionStat->Location = System::Drawing::Point(13, 313);
			this->groupBoxSelectionStat->Name = L"groupBoxSelectionStat";
			this->groupBoxSelectionStat->Size = System::Drawing::Size(686, 416);
			this->groupBoxSelectionStat->TabIndex = 39;
			this->groupBoxSelectionStat->TabStop = false;
			this->groupBoxSelectionStat->Text = L"Statistiques";
			this->groupBoxSelectionStat->Enter += gcnew System::EventHandler(this, &FormStatistiques::groupBox1_Enter);
			// 
			// radioButtonEstimations
			// 
			this->radioButtonEstimations->AutoSize = true;
			this->radioButtonEstimations->Location = System::Drawing::Point(0, 373);
			this->radioButtonEstimations->Name = L"radioButtonEstimations";
			this->radioButtonEstimations->Size = System::Drawing::Size(676, 36);
			this->radioButtonEstimations->TabIndex = 42;
			this->radioButtonEstimations->TabStop = true;
			this->radioButtonEstimations->Text = L"Estimations des variations commerciales du stock";
			this->radioButtonEstimations->UseVisualStyleBackColor = true;
			this->radioButtonEstimations->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonEstimation_CheckedChanged);
			// 
			// radioButtonVAS
			// 
			this->radioButtonVAS->AutoSize = true;
			this->radioButtonVAS->Location = System::Drawing::Point(0, 331);
			this->radioButtonVAS->Name = L"radioButtonVAS";
			this->radioButtonVAS->Size = System::Drawing::Size(344, 36);
			this->radioButtonVAS->TabIndex = 42;
			this->radioButtonVAS->TabStop = true;
			this->radioButtonVAS->Text = L"Valeur d\'achat du stock";
			this->radioButtonVAS->UseVisualStyleBackColor = true;
			this->radioButtonVAS->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonValeurAchat_CheckedChanged);
			// 
			// radioButtonVCS
			// 
			this->radioButtonVCS->AutoSize = true;
			this->radioButtonVCS->Location = System::Drawing::Point(0, 289);
			this->radioButtonVCS->Name = L"radioButtonVCS";
			this->radioButtonVCS->Size = System::Drawing::Size(414, 36);
			this->radioButtonVCS->TabIndex = 42;
			this->radioButtonVCS->TabStop = true;
			this->radioButtonVCS->Text = L"Valeur commerciale du stock";
			this->radioButtonVCS->UseVisualStyleBackColor = true;
			this->radioButtonVCS->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonValeurCommerciale_CheckedChanged);
			// 
			// radioButtonBottom10
			// 
			this->radioButtonBottom10->AutoSize = true;
			this->radioButtonBottom10->Location = System::Drawing::Point(0, 247);
			this->radioButtonBottom10->Name = L"radioButtonBottom10";
			this->radioButtonBottom10->Size = System::Drawing::Size(407, 36);
			this->radioButtonBottom10->TabIndex = 41;
			this->radioButtonBottom10->TabStop = true;
			this->radioButtonBottom10->Text = L"10 articles les moins vendus";
			this->radioButtonBottom10->UseVisualStyleBackColor = true;
			this->radioButtonBottom10->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonBottom10Articles_CheckedChanged);
			// 
			// radioButtonTop10
			// 
			this->radioButtonTop10->AutoSize = true;
			this->radioButtonTop10->Location = System::Drawing::Point(0, 205);
			this->radioButtonTop10->Name = L"radioButtonTop10";
			this->radioButtonTop10->Size = System::Drawing::Size(384, 36);
			this->radioButtonTop10->TabIndex = 41;
			this->radioButtonTop10->TabStop = true;
			this->radioButtonTop10->Text = L"10 articles les plus vendus";
			this->radioButtonTop10->UseVisualStyleBackColor = true;
			this->radioButtonTop10->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonTop10Articles_CheckedChanged);
			// 
			// radioButtonMTC
			// 
			this->radioButtonMTC->AutoSize = true;
			this->radioButtonMTC->Location = System::Drawing::Point(0, 163);
			this->radioButtonMTC->Name = L"radioButtonMTC";
			this->radioButtonMTC->Size = System::Drawing::Size(351, 36);
			this->radioButtonMTC->TabIndex = 41;
			this->radioButtonMTC->TabStop = true;
			this->radioButtonMTC->Text = L"Montant total d\'un client";
			this->radioButtonMTC->UseVisualStyleBackColor = true;
			this->radioButtonMTC->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonTotalClient_CheckedChanged);
			// 
			// radioButtonPaR
			// 
			this->radioButtonPaR->AutoSize = true;
			this->radioButtonPaR->Location = System::Drawing::Point(0, 121);
			this->radioButtonPaR->Name = L"radioButtonPaR";
			this->radioButtonPaR->Size = System::Drawing::Size(399, 36);
			this->radioButtonPaR->TabIndex = 41;
			this->radioButtonPaR->TabStop = true;
			this->radioButtonPaR->Text = L"Produits à réapprovisionner";
			this->radioButtonPaR->UseVisualStyleBackColor = true;
			this->radioButtonPaR->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonProduitReapprovisionnement_CheckedChanged);
			// 
			// radioButtonCAM
			// 
			this->radioButtonCAM->AutoSize = true;
			this->radioButtonCAM->Location = System::Drawing::Point(0, 79);
			this->radioButtonCAM->Name = L"radioButtonCAM";
			this->radioButtonCAM->Size = System::Drawing::Size(358, 36);
			this->radioButtonCAM->TabIndex = 40;
			this->radioButtonCAM->TabStop = true;
			this->radioButtonCAM->Text = L"Chiffre d\'affaire mensuel";
			this->radioButtonCAM->UseVisualStyleBackColor = true;
			this->radioButtonCAM->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonChiffreAffaireMensuel_CheckedChanged);
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
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1488, 293);
			this->dataGridView1->TabIndex = 40;
			// 
			// btnSearch
			// 
			this->btnSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnSearch->Location = System::Drawing::Point(365, 746);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(333, 124);
			this->btnSearch->TabIndex = 41;
			this->btnSearch->Text = L"Rechercher";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &FormStatistiques::btnSearch_Click);
			// 
			// panel_Montant_Total_Client
			// 
			this->panel_Montant_Total_Client->Controls->Add(this->txtStatPrenom);
			this->panel_Montant_Total_Client->Controls->Add(this->txtStatNom);
			this->panel_Montant_Total_Client->Controls->Add(this->label2);
			this->panel_Montant_Total_Client->Controls->Add(this->label1);
			this->panel_Montant_Total_Client->Location = System::Drawing::Point(737, 351);
			this->panel_Montant_Total_Client->Name = L"panel_Montant_Total_Client";
			this->panel_Montant_Total_Client->Size = System::Drawing::Size(708, 531);
			this->panel_Montant_Total_Client->TabIndex = 42;
			this->panel_Montant_Total_Client->Visible = false;
			// 
			// txtStatPrenom
			// 
			this->txtStatPrenom->AccessibleName = L"prenomClient";
			this->txtStatPrenom->Location = System::Drawing::Point(26, 246);
			this->txtStatPrenom->Name = L"txtStatPrenom";
			this->txtStatPrenom->Size = System::Drawing::Size(657, 38);
			this->txtStatPrenom->TabIndex = 3;
			this->txtStatPrenom->Tag = L"firstname_c";
			// 
			// txtStatNom
			// 
			this->txtStatNom->AccessibleName = L"nomClient";
			this->txtStatNom->Location = System::Drawing::Point(28, 89);
			this->txtStatNom->Name = L"txtStatNom";
			this->txtStatNom->Size = System::Drawing::Size(657, 38);
			this->txtStatNom->TabIndex = 2;
			this->txtStatNom->Tag = L"lastname_c";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prénom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// ChiffreAffairepanel
			// 
			this->ChiffreAffairepanel->Controls->Add(this->dateTimePickerCAM);
			this->ChiffreAffairepanel->Controls->Add(this->label4);
			this->ChiffreAffairepanel->Location = System::Drawing::Point(4, 0);
			this->ChiffreAffairepanel->Name = L"ChiffreAffairepanel";
			this->ChiffreAffairepanel->Size = System::Drawing::Size(705, 531);
			this->ChiffreAffairepanel->TabIndex = 43;
			this->ChiffreAffairepanel->Visible = false;
			// 
			// dateTimePickerCAM
			// 
			this->dateTimePickerCAM->AccessibleName = L"Date";
			this->dateTimePickerCAM->CustomFormat = L"MM yyyy";
			this->dateTimePickerCAM->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerCAM->Location = System::Drawing::Point(26, 83);
			this->dateTimePickerCAM->MaxDate = System::DateTime(9998, 12, 1, 0, 0, 0, 0);
			this->dateTimePickerCAM->Name = L"dateTimePickerCAM";
			this->dateTimePickerCAM->ShowUpDown = true;
			this->dateTimePickerCAM->Size = System::Drawing::Size(200, 38);
			this->dateTimePickerCAM->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 32);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Date";
			// 
			// radioButtonEstimationsPersonaliseesNON
			// 
			this->radioButtonEstimationsPersonaliseesNON->AutoSize = true;
			this->radioButtonEstimationsPersonaliseesNON->Checked = true;
			this->radioButtonEstimationsPersonaliseesNON->Location = System::Drawing::Point(193, 45);
			this->radioButtonEstimationsPersonaliseesNON->Name = L"radioButtonEstimationsPersonaliseesNON";
			this->radioButtonEstimationsPersonaliseesNON->Size = System::Drawing::Size(103, 36);
			this->radioButtonEstimationsPersonaliseesNON->TabIndex = 6;
			this->radioButtonEstimationsPersonaliseesNON->TabStop = true;
			this->radioButtonEstimationsPersonaliseesNON->Text = L"Non";
			this->radioButtonEstimationsPersonaliseesNON->UseVisualStyleBackColor = true;
			this->radioButtonEstimationsPersonaliseesNON->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonEstimationsPersonaliseesNON_CheckedChanged);
			// 
			// radioButtonEstimationsPersonaliseesOUI
			// 
			this->radioButtonEstimationsPersonaliseesOUI->AutoSize = true;
			this->radioButtonEstimationsPersonaliseesOUI->Location = System::Drawing::Point(31, 45);
			this->radioButtonEstimationsPersonaliseesOUI->Name = L"radioButtonEstimationsPersonaliseesOUI";
			this->radioButtonEstimationsPersonaliseesOUI->Size = System::Drawing::Size(96, 36);
			this->radioButtonEstimationsPersonaliseesOUI->TabIndex = 5;
			this->radioButtonEstimationsPersonaliseesOUI->Text = L"Oui";
			this->radioButtonEstimationsPersonaliseesOUI->UseVisualStyleBackColor = true;
			this->radioButtonEstimationsPersonaliseesOUI->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonEstimationsPersonaliseesOUI_CheckedChanged);
			// 
			// panel_Estimation_Type
			// 
			this->panel_Estimation_Type->Controls->Add(this->radioButtonEstimationsPersonaliseesOUI);
			this->panel_Estimation_Type->Controls->Add(this->radioButtonEstimationsPersonaliseesNON);
			this->panel_Estimation_Type->Controls->Add(this->label3);
			this->panel_Estimation_Type->Location = System::Drawing::Point(792, 366);
			this->panel_Estimation_Type->Name = L"panel_Estimation_Type";
			this->panel_Estimation_Type->Size = System::Drawing::Size(708, 100);
			this->panel_Estimation_Type->TabIndex = 45;
			this->panel_Estimation_Type->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(379, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Combinaisons personalisées";
			// 
			// EstimationPredetermineesPanel
			// 
			this->EstimationPredetermineesPanel->Controls->Add(this->panel4);
			this->EstimationPredetermineesPanel->Controls->Add(this->panel3);
			this->EstimationPredetermineesPanel->Controls->Add(this->panel2);
			this->EstimationPredetermineesPanel->Controls->Add(this->txtEstimationsPredetermineesDemarques);
			this->EstimationPredetermineesPanel->Controls->Add(this->txtEstimationsPredetermineesRemise);
			this->EstimationPredetermineesPanel->Controls->Add(this->txtEstimationsPredetermineesMarge);
			this->EstimationPredetermineesPanel->Controls->Add(this->txtEstimationsPredetermineesTVA);
			this->EstimationPredetermineesPanel->Location = System::Drawing::Point(0, 0);
			this->EstimationPredetermineesPanel->Name = L"EstimationPredetermineesPanel";
			this->EstimationPredetermineesPanel->Size = System::Drawing::Size(708, 445);
			this->EstimationPredetermineesPanel->TabIndex = 46;
			this->EstimationPredetermineesPanel->Visible = false;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 100);
			this->panel4->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 100);
			this->panel3->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 2;
			// 
			// txtEstimationsPredetermineesDemarques
			// 
			this->txtEstimationsPredetermineesDemarques->Location = System::Drawing::Point(0, 0);
			this->txtEstimationsPredetermineesDemarques->Name = L"txtEstimationsPredetermineesDemarques";
			this->txtEstimationsPredetermineesDemarques->Size = System::Drawing::Size(100, 23);
			this->txtEstimationsPredetermineesDemarques->TabIndex = 3;
			// 
			// txtEstimationsPredetermineesRemise
			// 
			this->txtEstimationsPredetermineesRemise->Location = System::Drawing::Point(0, 0);
			this->txtEstimationsPredetermineesRemise->Name = L"txtEstimationsPredetermineesRemise";
			this->txtEstimationsPredetermineesRemise->Size = System::Drawing::Size(100, 23);
			this->txtEstimationsPredetermineesRemise->TabIndex = 4;
			// 
			// txtEstimationsPredetermineesMarge
			// 
			this->txtEstimationsPredetermineesMarge->Location = System::Drawing::Point(0, 0);
			this->txtEstimationsPredetermineesMarge->Name = L"txtEstimationsPredetermineesMarge";
			this->txtEstimationsPredetermineesMarge->Size = System::Drawing::Size(100, 23);
			this->txtEstimationsPredetermineesMarge->TabIndex = 5;
			// 
			// txtEstimationsPredetermineesTVA
			// 
			this->txtEstimationsPredetermineesTVA->Location = System::Drawing::Point(0, 0);
			this->txtEstimationsPredetermineesTVA->Name = L"txtEstimationsPredetermineesTVA";
			this->txtEstimationsPredetermineesTVA->Size = System::Drawing::Size(100, 23);
			this->txtEstimationsPredetermineesTVA->TabIndex = 6;
			// 
			// panel_CA_mois
			// 
			this->panel_CA_mois->Controls->Add(this->dateTimePickerChiffreAffaireMensuel);
			this->panel_CA_mois->Controls->Add(this->label6);
			this->panel_CA_mois->Location = System::Drawing::Point(755, 357);
			this->panel_CA_mois->Name = L"panel_CA_mois";
			this->panel_CA_mois->Size = System::Drawing::Size(708, 531);
			this->panel_CA_mois->TabIndex = 46;
			this->panel_CA_mois->Visible = false;
			// 
			// dateTimePickerChiffreAffaireMensuel
			// 
			this->dateTimePickerChiffreAffaireMensuel->CustomFormat = L"MM yyyy";
			this->dateTimePickerChiffreAffaireMensuel->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerChiffreAffaireMensuel->Location = System::Drawing::Point(37, 88);
			this->dateTimePickerChiffreAffaireMensuel->Name = L"dateTimePickerChiffreAffaireMensuel";
			this->dateTimePickerChiffreAffaireMensuel->Size = System::Drawing::Size(200, 38);
			this->dateTimePickerChiffreAffaireMensuel->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 32);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Date";
			// 
			// panel_Estimation_Choix
			// 
			this->panel_Estimation_Choix->Controls->Add(this->panel9);
			this->panel_Estimation_Choix->Controls->Add(this->panel8);
			this->panel_Estimation_Choix->Controls->Add(this->panel7);
			this->panel_Estimation_Choix->Controls->Add(this->panel6);
			this->panel_Estimation_Choix->Controls->Add(this->label5);
			this->panel_Estimation_Choix->Controls->Add(this->label7);
			this->panel_Estimation_Choix->Controls->Add(this->label8);
			this->panel_Estimation_Choix->Controls->Add(this->label9);
			this->panel_Estimation_Choix->Location = System::Drawing::Point(792, 485);
			this->panel_Estimation_Choix->Name = L"panel_Estimation_Choix";
			this->panel_Estimation_Choix->Size = System::Drawing::Size(708, 445);
			this->panel_Estimation_Choix->TabIndex = 47;
			this->panel_Estimation_Choix->Visible = false;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->radioButtonDemarque3);
			this->panel9->Controls->Add(this->radioButtonDemarque2);
			this->panel9->Controls->Add(this->radioButtonDemarque1);
			this->panel9->Location = System::Drawing::Point(37, 364);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(637, 54);
			this->panel9->TabIndex = 15;
			// 
			// radioButtonDemarque3
			// 
			this->radioButtonDemarque3->AutoSize = true;
			this->radioButtonDemarque3->Location = System::Drawing::Point(508, 15);
			this->radioButtonDemarque3->Name = L"radioButtonDemarque3";
			this->radioButtonDemarque3->Size = System::Drawing::Size(92, 36);
			this->radioButtonDemarque3->TabIndex = 2;
			this->radioButtonDemarque3->TabStop = true;
			this->radioButtonDemarque3->Text = L"5%";
			this->radioButtonDemarque3->UseVisualStyleBackColor = true;
			this->radioButtonDemarque3->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonDemarque3_CheckedChanged);
			// 
			// radioButtonDemarque2
			// 
			this->radioButtonDemarque2->AutoSize = true;
			this->radioButtonDemarque2->Location = System::Drawing::Point(278, 15);
			this->radioButtonDemarque2->Name = L"radioButtonDemarque2";
			this->radioButtonDemarque2->Size = System::Drawing::Size(92, 36);
			this->radioButtonDemarque2->TabIndex = 1;
			this->radioButtonDemarque2->TabStop = true;
			this->radioButtonDemarque2->Text = L"3%";
			this->radioButtonDemarque2->UseVisualStyleBackColor = true;
			this->radioButtonDemarque2->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonDemarque2_CheckedChanged);
			// 
			// radioButtonDemarque1
			// 
			this->radioButtonDemarque1->AutoSize = true;
			this->radioButtonDemarque1->Location = System::Drawing::Point(3, 15);
			this->radioButtonDemarque1->Name = L"radioButtonDemarque1";
			this->radioButtonDemarque1->Size = System::Drawing::Size(92, 36);
			this->radioButtonDemarque1->TabIndex = 0;
			this->radioButtonDemarque1->TabStop = true;
			this->radioButtonDemarque1->Text = L"2%";
			this->radioButtonDemarque1->UseVisualStyleBackColor = true;
			this->radioButtonDemarque1->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonDemarque1_CheckedChanged);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->radioButtonRemise2);
			this->panel8->Controls->Add(this->radioButtonRemise1);
			this->panel8->Location = System::Drawing::Point(37, 272);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(637, 54);
			this->panel8->TabIndex = 14;
			// 
			// radioButtonRemise2
			// 
			this->radioButtonRemise2->AutoSize = true;
			this->radioButtonRemise2->Location = System::Drawing::Point(508, 15);
			this->radioButtonRemise2->Name = L"radioButtonRemise2";
			this->radioButtonRemise2->Size = System::Drawing::Size(92, 36);
			this->radioButtonRemise2->TabIndex = 2;
			this->radioButtonRemise2->TabStop = true;
			this->radioButtonRemise2->Text = L"6%";
			this->radioButtonRemise2->UseVisualStyleBackColor = true;
			this->radioButtonRemise2->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonRemise2_CheckedChanged);
			// 
			// radioButtonRemise1
			// 
			this->radioButtonRemise1->AutoSize = true;
			this->radioButtonRemise1->Location = System::Drawing::Point(3, 15);
			this->radioButtonRemise1->Name = L"radioButtonRemise1";
			this->radioButtonRemise1->Size = System::Drawing::Size(92, 36);
			this->radioButtonRemise1->TabIndex = 0;
			this->radioButtonRemise1->TabStop = true;
			this->radioButtonRemise1->Text = L"5%";
			this->radioButtonRemise1->UseVisualStyleBackColor = true;
			this->radioButtonRemise1->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonRemise1_CheckedChanged);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->radioButtonMarge3);
			this->panel7->Controls->Add(this->radioButtonMarge2);
			this->panel7->Controls->Add(this->radioButtonMarge1);
			this->panel7->Location = System::Drawing::Point(37, 173);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(637, 54);
			this->panel7->TabIndex = 13;
			// 
			// radioButtonMarge3
			// 
			this->radioButtonMarge3->AutoSize = true;
			this->radioButtonMarge3->Location = System::Drawing::Point(508, 15);
			this->radioButtonMarge3->Name = L"radioButtonMarge3";
			this->radioButtonMarge3->Size = System::Drawing::Size(108, 36);
			this->radioButtonMarge3->TabIndex = 2;
			this->radioButtonMarge3->TabStop = true;
			this->radioButtonMarge3->Text = L"15%";
			this->radioButtonMarge3->UseVisualStyleBackColor = true;
			this->radioButtonMarge3->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonMarge3_CheckedChanged);
			// 
			// radioButtonMarge2
			// 
			this->radioButtonMarge2->AutoSize = true;
			this->radioButtonMarge2->Location = System::Drawing::Point(278, 15);
			this->radioButtonMarge2->Name = L"radioButtonMarge2";
			this->radioButtonMarge2->Size = System::Drawing::Size(108, 36);
			this->radioButtonMarge2->TabIndex = 1;
			this->radioButtonMarge2->TabStop = true;
			this->radioButtonMarge2->Text = L"10%";
			this->radioButtonMarge2->UseVisualStyleBackColor = true;
			this->radioButtonMarge2->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonMarge2_CheckedChanged);
			// 
			// radioButtonMarge1
			// 
			this->radioButtonMarge1->AutoSize = true;
			this->radioButtonMarge1->Location = System::Drawing::Point(3, 15);
			this->radioButtonMarge1->Name = L"radioButtonMarge1";
			this->radioButtonMarge1->Size = System::Drawing::Size(92, 36);
			this->radioButtonMarge1->TabIndex = 0;
			this->radioButtonMarge1->TabStop = true;
			this->radioButtonMarge1->Text = L"5%";
			this->radioButtonMarge1->UseVisualStyleBackColor = true;
			this->radioButtonMarge1->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonMarge1_CheckedChanged);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->radioButtonTVA3);
			this->panel6->Controls->Add(this->radioButtonTVA2);
			this->panel6->Controls->Add(this->radioButtonTVA1);
			this->panel6->Location = System::Drawing::Point(37, 70);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(637, 54);
			this->panel6->TabIndex = 12;
			// 
			// radioButtonTVA3
			// 
			this->radioButtonTVA3->AutoSize = true;
			this->radioButtonTVA3->Location = System::Drawing::Point(508, 15);
			this->radioButtonTVA3->Name = L"radioButtonTVA3";
			this->radioButtonTVA3->Size = System::Drawing::Size(116, 36);
			this->radioButtonTVA3->TabIndex = 2;
			this->radioButtonTVA3->TabStop = true;
			this->radioButtonTVA3->Text = L"5,5%";
			this->radioButtonTVA3->UseVisualStyleBackColor = true;
			this->radioButtonTVA3->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonTVA3_CheckedChanged);
			// 
			// radioButtonTVA2
			// 
			this->radioButtonTVA2->AutoSize = true;
			this->radioButtonTVA2->Location = System::Drawing::Point(278, 15);
			this->radioButtonTVA2->Name = L"radioButtonTVA2";
			this->radioButtonTVA2->Size = System::Drawing::Size(108, 36);
			this->radioButtonTVA2->TabIndex = 1;
			this->radioButtonTVA2->TabStop = true;
			this->radioButtonTVA2->Text = L"10%";
			this->radioButtonTVA2->UseVisualStyleBackColor = true;
			this->radioButtonTVA2->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonTVA2_CheckedChanged);
			// 
			// radioButtonTVA1
			// 
			this->radioButtonTVA1->AutoSize = true;
			this->radioButtonTVA1->Location = System::Drawing::Point(3, 15);
			this->radioButtonTVA1->Name = L"radioButtonTVA1";
			this->radioButtonTVA1->Size = System::Drawing::Size(108, 36);
			this->radioButtonTVA1->TabIndex = 0;
			this->radioButtonTVA1->TabStop = true;
			this->radioButtonTVA1->Text = L"20%";
			this->radioButtonTVA1->UseVisualStyleBackColor = true;
			this->radioButtonTVA1->CheckedChanged += gcnew System::EventHandler(this, &FormStatistiques::radioButtonTVA1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(270, 32);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Démarque inconnue";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(278, 32);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Remise commerciale";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 125);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(262, 32);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Marge commerciale";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 23);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 32);
			this->label9->TabIndex = 4;
			this->label9->Text = L"TVA";
			// 
			// panel_Estimation_Libre
			// 
			this->panel_Estimation_Libre->Controls->Add(this->txtDemarqueEstimationLibre);
			this->panel_Estimation_Libre->Controls->Add(this->txtRemiseEstimationLibre);
			this->panel_Estimation_Libre->Controls->Add(this->txtMargeEstimationLibre);
			this->panel_Estimation_Libre->Controls->Add(this->txtTVAEstimationLibre);
			this->panel_Estimation_Libre->Controls->Add(this->label10);
			this->panel_Estimation_Libre->Controls->Add(this->label11);
			this->panel_Estimation_Libre->Controls->Add(this->label12);
			this->panel_Estimation_Libre->Controls->Add(this->label13);
			this->panel_Estimation_Libre->Location = System::Drawing::Point(774, 472);
			this->panel_Estimation_Libre->Name = L"panel_Estimation_Libre";
			this->panel_Estimation_Libre->Size = System::Drawing::Size(708, 445);
			this->panel_Estimation_Libre->TabIndex = 48;
			this->panel_Estimation_Libre->Visible = false;
			// 
			// txtDemarqueEstimationLibre
			// 
			this->txtDemarqueEstimationLibre->AccessibleName = L"Demarque";
			this->txtDemarqueEstimationLibre->Location = System::Drawing::Point(24, 378);
			this->txtDemarqueEstimationLibre->Name = L"txtDemarqueEstimationLibre";
			this->txtDemarqueEstimationLibre->Size = System::Drawing::Size(634, 38);
			this->txtDemarqueEstimationLibre->TabIndex = 14;
			// 
			// txtRemiseEstimationLibre
			// 
			this->txtRemiseEstimationLibre->AccessibleName = L"Remise";
			this->txtRemiseEstimationLibre->Location = System::Drawing::Point(24, 279);
			this->txtRemiseEstimationLibre->Name = L"txtRemiseEstimationLibre";
			this->txtRemiseEstimationLibre->Size = System::Drawing::Size(634, 38);
			this->txtRemiseEstimationLibre->TabIndex = 13;
			// 
			// txtMargeEstimationLibre
			// 
			this->txtMargeEstimationLibre->AccessibleName = L"Marge";
			this->txtMargeEstimationLibre->Location = System::Drawing::Point(24, 174);
			this->txtMargeEstimationLibre->Name = L"txtMargeEstimationLibre";
			this->txtMargeEstimationLibre->Size = System::Drawing::Size(634, 38);
			this->txtMargeEstimationLibre->TabIndex = 12;
			// 
			// txtTVAEstimationLibre
			// 
			this->txtTVAEstimationLibre->AccessibleName = L"TVA";
			this->txtTVAEstimationLibre->Location = System::Drawing::Point(24, 69);
			this->txtTVAEstimationLibre->Name = L"txtTVAEstimationLibre";
			this->txtTVAEstimationLibre->Size = System::Drawing::Size(634, 38);
			this->txtTVAEstimationLibre->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(18, 329);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(320, 32);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Démarque inconnue (%)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(18, 230);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(328, 32);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Remise commerciale (%)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(18, 125);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(312, 32);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Marge commerciale (%)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(18, 23);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(119, 32);
			this->label13->TabIndex = 4;
			this->label13->Text = L"TVA (%)";
			// 
			// FormStatistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1514, 951);
			this->Controls->Add(this->panel_Estimation_Libre);
			this->Controls->Add(this->panel_Estimation_Choix);
			this->Controls->Add(this->panel_CA_mois);
			this->Controls->Add(this->panel_Montant_Total_Client);
			this->Controls->Add(this->panel_Estimation_Type);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBoxSelectionStat);
			this->Controls->Add(this->btnBack);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormStatistiques";
			this->Text = L"FormStatistiques";
			this->groupBoxSelectionStat->ResumeLayout(false);
			this->groupBoxSelectionStat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel_Montant_Total_Client->ResumeLayout(false);
			this->panel_Montant_Total_Client->PerformLayout();
			this->ChiffreAffairepanel->ResumeLayout(false);
			this->ChiffreAffairepanel->PerformLayout();
			this->panel_Estimation_Type->ResumeLayout(false);
			this->panel_Estimation_Type->PerformLayout();
			this->EstimationPredetermineesPanel->ResumeLayout(false);
			this->panel_CA_mois->ResumeLayout(false);
			this->panel_CA_mois->PerformLayout();
			this->panel_Estimation_Choix->ResumeLayout(false);
			this->panel_Estimation_Choix->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel_Estimation_Libre->ResumeLayout(false);
			this->panel_Estimation_Libre->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->FormRetour->Show();
		this->Close();
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void radioButtonPanierMoyen_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->choix_stat = "1";

	this->panel_CA_mois->Hide();
	this->panel_Montant_Total_Client->Hide();
	this->panel_Estimation_Choix->Hide();
	this->panel_Estimation_Libre->Hide();
	this->panel_Estimation_Type->Hide();
}
private: System::Void radioButtonChiffreAffaireMensuel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->choix_stat = "2";

	this->panel_CA_mois->Show();
	this->panel_Montant_Total_Client->Hide();
	this->panel_Estimation_Choix->Hide();
	this->panel_Estimation_Libre->Hide();
	this->panel_Estimation_Type->Hide();
}
private: System::Void radioButtonProduitReapprovisionnement_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->choix_stat = "3";

	this->panel_CA_mois->Hide();
	this->panel_Montant_Total_Client->Hide();
	this->panel_Estimation_Choix->Hide();
	this->panel_Estimation_Libre->Hide();
	this->panel_Estimation_Type->Hide();
}
private: System::Void radioButtonTotalClient_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->choix_stat = "4";

	this->panel_CA_mois->Hide();
	this->panel_Montant_Total_Client->Show();
	this->panel_Estimation_Choix->Hide();
	this->panel_Estimation_Libre->Hide();
	this->panel_Estimation_Type->Hide();
}
private: System::Void radioButtonTop10Articles_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->choix_stat = "5";

	this->panel_CA_mois->Hide();
	this->panel_Montant_Total_Client->Hide();
	this->panel_Estimation_Choix->Hide();
	this->panel_Estimation_Libre->Hide();
	this->panel_Estimation_Type->Hide();
}
private: System::Void radioButtonBottom10Articles_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->choix_stat = "6";

	this->panel_CA_mois->Hide();
	this->panel_Montant_Total_Client->Hide();
	this->panel_Estimation_Choix->Hide();
	this->panel_Estimation_Libre->Hide();
	this->panel_Estimation_Type->Hide();
}
private: System::Void radioButtonValeurCommerciale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->choix_stat = "7";

	this->panel_CA_mois->Hide();
	this->panel_Montant_Total_Client->Hide();
	this->panel_Estimation_Choix->Hide();
	this->panel_Estimation_Libre->Hide();
	this->panel_Estimation_Type->Hide();
}
private: System::Void radioButtonValeurAchat_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->choix_stat = "8";

	this->panel_CA_mois->Hide();
	this->panel_Montant_Total_Client->Hide();
	this->panel_Estimation_Choix->Hide();
	this->panel_Estimation_Libre->Hide();
	this->panel_Estimation_Type->Hide();
}
private: System::Void radioButtonEstimation_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->choix_stat = "9";

	this->panel_CA_mois->Hide();
	this->panel_Montant_Total_Client->Hide();
	this->panel_Estimation_Choix->Show();
	this->panel_Estimation_Libre->Hide();
	this->panel_Estimation_Type->Show();
}
private: System::Void radioButtonEstimationsPersonaliseesOUI_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->panel_Estimation_Choix->Hide();
	this->panel_Estimation_Libre->Show();
	this->choix_stat = "10";
}
private: System::Void radioButtonEstimationsPersonaliseesNON_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->panel_Estimation_Choix->Show();
	this->panel_Estimation_Libre->Hide();
	this->choix_stat = "9";
}

private: System::Void radioButtonTVA1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxTVA = "1.2";
}
private: System::Void radioButtonTVA2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxTVA = "1.1";
}
private: System::Void radioButtonTVA3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxTVA = "1.055";
}
private: System::Void radioButtonMarge1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxMarge = "1.05";
}
private: System::Void radioButtonMarge2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxMarge = "1.1";
}
private: System::Void radioButtonMarge3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxMarge = "1.15";
}
private: System::Void radioButtonRemise1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxRemise = "0.95";
}
private: System::Void radioButtonRemise2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxRemise = "0.94";
}
private: System::Void radioButtonDemarque1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxDemarque = "0.98";
}
private: System::Void radioButtonDemarque2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxDemarque = "0.97";
}
private: System::Void radioButtonDemarque3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->TauxDemarque = "0.95";
}

private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	;
	if (this->choix_stat == "0")
	{
		return;
	}
	String^ query = "";

	if (this->choix_stat == "1"){
		query = "SELECT AVG(cout_commande) FROM (SELECT adds.id_o, SUM(adds.quantity * Payement.priceHT_pa) AS cout_commande FROM adds INNER JOIN Product ON adds.id_pr = Product.id_pr INNER JOIN Payement ON Product.id_pa = Payement.id_pa GROUP BY adds.id_o) my_table";
	}
	
	else if (this->choix_stat == "2"){
		this->dateChiffreAffaire = Convert::ToString(this->dateTimePickerChiffreAffaireMensuel->Value);
		query = "SELECT SUM(adds.quantity * (Payement.priceTTC_pa - Payement.priceHT_pa)) AS CA_mensuel FROM adds INNER JOIN Product ON adds.id_pr = Product.id_pr INNER JOIN Payement ON Product.id_pa = Payement.id_pa WHERE id_o IN(SELECT id_o FROM Orders WHERE SUBSTRING(paymentDate_o,6,2) = " + this->dateChiffreAffaire->Substring(3, 2) + " AND SUBSTRING(paymentDate_o,1,4) = " + this->dateChiffreAffaire->Substring(6, 4) + ")";
	}
	else if (this->choix_stat == "3"){
		query = "SELECT name_pr, ref_pr FROM Product WHERE quantity_pr < reorder_pr";
	}

	else if (this->choix_stat == "4"){
		this->nomClient = this->txtStatNom->Text;
		this->prenomClient = this->txtStatPrenom->Text;
		query = "SELECT SUM(adds.quantity * Payement.priceHT_pa) AS montant_achats_client FROM adds INNER JOIN Product ON adds.id_pr = Product.id_pr INNER JOIN Payement ON Product.id_pa = Payement.id_pa WHERE adds.id_o IN(SELECT id_o FROM Orders INNER JOIN Client ON Client.id_c = Orders.id_c WHERE lastname_c = '" + this->nomClient + "' AND firstname_c = '" + this->prenomClient + "')";
	}

	else if (this->choix_stat == "5"){
		query = "SELECT TOP 10 Product.name_pr, Product.ref_pr, SUM(adds.quantity) as quantite_vendue FROM Product INNER JOIN adds ON adds.id_pr = Product.id_pr GROUP BY Product.name_pr, Product.ref_pr ORDER BY quantite_vendue DESC";
	}

	else if (this->choix_stat == "6") {
		query = "SELECT TOP 10 Product.name_pr, Product.ref_pr, SUM(adds.quantity) as quantite_vendue FROM Product INNER JOIN adds ON adds.id_pr = Product.id_pr GROUP BY Product.name_pr, Product.ref_pr ORDER BY quantite_vendue ASC";
	}

	else if (this->choix_stat == "7") {
		query = "SELECT SUM(Product.quantity_pr * Payement.priceHT_pa) AS valeur_commerciale_stock FROM Product INNER JOIN Payement ON Product.id_pa = Payement.id_pa";
	}

	else if (this->choix_stat == "8") {
		query = "SELECT SUM(Product.quantity_pr * Payement.priceTTC_pa) AS valeur_achat_stock FROM Product INNER JOIN Payement ON Product.id_pa = Payement.id_pa";
	}

	else if (this->choix_stat == "9") {
		query = "SELECT (" + this->TauxMarge + "*" + this->TauxTVA + "*" + this->TauxRemise + " - 1 ) *" + this->TauxDemarque + " * SUM(Product.quantity_pr * Payement.priceHT_pa) AS Estimation_valeur_stock FROM Product INNER JOIN Payement ON Product.id_pa = Payement.id_pa";
	}
	else if (this->choix_stat == "10") {
		this->TauxMarge = this->txtMargeEstimationLibre->Text;
		this->TauxTVA = this->txtTVAEstimationLibre->Text;
		this->TauxRemise = this->txtRemiseEstimationLibre->Text;
		this->TauxDemarque = this->txtDemarqueEstimationLibre->Text;
		query = "SELECT ((1 + 0.01 *"+this->TauxMarge +") * (1 + 0.01 *" + this->TauxTVA +") * (1 - 0.01 *" + this->TauxRemise + ") - 1 ) * (1 - 0.01 *" + this->TauxDemarque + ") * SUM(Product.quantity_pr * Payement.priceHT_pa) AS Estimation_valeur_stock FROM Product INNER JOIN Payement ON Product.id_pa = Payement.id_pa";
	}

	this->dataGridView1->Refresh();
	this->oSvc = gcnew NS_sql_Function::sqlFunction();
	this->oDs = this->oSvc->select("Rsl", query);
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}

private: System::Void ChiffreAffairepanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
