#pragma once
#include "FormPersonnel.h"
#include "FormCLient.h"
#include "FormCommandes.h"
#include "FormStock.h"
#include "FormStatistiques.h"
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
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ buttonPersonnel;
	private: System::Windows::Forms::Button^ buttonClient;
	private: System::Windows::Forms::Button^ buttonStock;
	private: System::Windows::Forms::Button^ buttonStats;
	private: System::Windows::Forms::Button^ buttonCommandes;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: NS_sql_Function::sqlFunction^ oSvc;
	private: System::Data::DataSet^ oDs;


	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttonPersonnel = (gcnew System::Windows::Forms::Button());
			this->buttonClient = (gcnew System::Windows::Forms::Button());
			this->buttonStock = (gcnew System::Windows::Forms::Button());
			this->buttonStats = (gcnew System::Windows::Forms::Button());
			this->buttonCommandes = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->buttonPersonnel, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->buttonClient, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->buttonStock, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->buttonStats, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->buttonCommandes, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(6, 415);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 67)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(665, 67);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// buttonPersonnel
			// 
			this->buttonPersonnel->Location = System::Drawing::Point(2, 2);
			this->buttonPersonnel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonPersonnel->Name = L"buttonPersonnel";
			this->buttonPersonnel->Size = System::Drawing::Size(130, 63);
			this->buttonPersonnel->TabIndex = 0;
			this->buttonPersonnel->Text = L"Personnel";
			this->buttonPersonnel->UseVisualStyleBackColor = true;
			this->buttonPersonnel->Click += gcnew System::EventHandler(this, &MyForm::buttonPersonnel_Click);
			// 
			// buttonClient
			// 
			this->buttonClient->Location = System::Drawing::Point(136, 2);
			this->buttonClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonClient->Name = L"buttonClient";
			this->buttonClient->Size = System::Drawing::Size(130, 63);
			this->buttonClient->TabIndex = 1;
			this->buttonClient->Text = L"Client";
			this->buttonClient->UseVisualStyleBackColor = true;
			this->buttonClient->Click += gcnew System::EventHandler(this, &MyForm::buttonClient_Click);
			// 
			// buttonStock
			// 
			this->buttonStock->Location = System::Drawing::Point(404, 2);
			this->buttonStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonStock->Name = L"buttonStock";
			this->buttonStock->Size = System::Drawing::Size(130, 63);
			this->buttonStock->TabIndex = 3;
			this->buttonStock->Text = L"Stock";
			this->buttonStock->UseVisualStyleBackColor = true;
			this->buttonStock->Click += gcnew System::EventHandler(this, &MyForm::buttonStock_Click);
			// 
			// buttonStats
			// 
			this->buttonStats->Location = System::Drawing::Point(538, 2);
			this->buttonStats->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonStats->Name = L"buttonStats";
			this->buttonStats->Size = System::Drawing::Size(130, 63);
			this->buttonStats->TabIndex = 4;
			this->buttonStats->Text = L"Statistiques";
			this->buttonStats->UseVisualStyleBackColor = true;
			this->buttonStats->Click += gcnew System::EventHandler(this, &MyForm::buttonStats_Click);
			// 
			// buttonCommandes
			// 
			this->buttonCommandes->Location = System::Drawing::Point(270, 2);
			this->buttonCommandes->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonCommandes->Name = L"buttonCommandes";
			this->buttonCommandes->Size = System::Drawing::Size(130, 63);
			this->buttonCommandes->TabIndex = 2;
			this->buttonCommandes->Text = L"Commandes";
			this->buttonCommandes->UseVisualStyleBackColor = true;
			this->buttonCommandes->Click += gcnew System::EventHandler(this, &MyForm::buttonCommandes_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(248, 35);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(184, 186);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(676, 489);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(698, 619);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void buttonPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		FormPersonnel^ form1 = gcnew FormPersonnel(this);
		form1->Show();
		this->Hide();
	};
	private: System::Void buttonClient_Click(System::Object^ sender, System::EventArgs^ e) {
		FormClient^ form2 = gcnew FormClient(this);
		form2->Show();
		this->Hide();
	};
	private: System::Void buttonCommandes_Click(System::Object^ sender, System::EventArgs^ e) {
		FormCommandes^ form3 = gcnew FormCommandes(this);
		form3->Show();
		this->Hide();
	};
	private: System::Void buttonStock_Click(System::Object^ sender, System::EventArgs^ e) {
		FormStock^ form4 = gcnew FormStock(this);
		form4->Show();
		this->Hide();
	};
	private: System::Void buttonStats_Click(System::Object^ sender, System::EventArgs^ e) {
		FormStatistiques^ form5 = gcnew FormStatistiques(this);
		form5->Show();
		this->Hide();
	};



private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
