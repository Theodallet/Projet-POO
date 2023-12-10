#pragma once
#include "CL_services.h"


namespace APPGRAPHIQUEPROJET {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionClient1
	/// </summary>
	public ref class ManuelUtilisation : public System::Windows::Forms::Form
	{
	public:
		Form^ ObjetManuel;
		ManuelUtilisation(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		ManuelUtilisation(Form^ Objet)
		{
			ObjetManuel = Objet;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ManuelUtilisation()
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
		System::ComponentModel::Container^ components;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ RETURN_MAUNEL_UTILISATION_HOME;
	private: System::Windows::Forms::Label^ TitreManuel;

	private: System::Windows::Forms::PictureBox^ BarreNoir;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;







	private: System::Windows::Forms::PictureBox^ pictureBox1;






#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ManuelUtilisation::typeid));
			   this->RETURN_MAUNEL_UTILISATION_HOME = (gcnew System::Windows::Forms::Button());
			   this->TitreManuel = (gcnew System::Windows::Forms::Label());
			   this->BarreNoir = (gcnew System::Windows::Forms::PictureBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // RETURN_MAUNEL_UTILISATION_HOME
			   // 
			   this->RETURN_MAUNEL_UTILISATION_HOME->BackColor = System::Drawing::Color::Brown;
			   this->RETURN_MAUNEL_UTILISATION_HOME->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->RETURN_MAUNEL_UTILISATION_HOME->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->RETURN_MAUNEL_UTILISATION_HOME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			   this->RETURN_MAUNEL_UTILISATION_HOME->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->RETURN_MAUNEL_UTILISATION_HOME->Location = System::Drawing::Point(1133, 9);
			   this->RETURN_MAUNEL_UTILISATION_HOME->Name = L"RETURN_MAUNEL_UTILISATION_HOME";
			   this->RETURN_MAUNEL_UTILISATION_HOME->Size = System::Drawing::Size(93, 62);
			   this->RETURN_MAUNEL_UTILISATION_HOME->TabIndex = 243;
			   this->RETURN_MAUNEL_UTILISATION_HOME->Text = L"RETOUR";
			   this->RETURN_MAUNEL_UTILISATION_HOME->UseVisualStyleBackColor = false;
			   this->RETURN_MAUNEL_UTILISATION_HOME->Click += gcnew System::EventHandler(this, &ManuelUtilisation::RETURN_STATS_HOME_Click);
			   // 
			   // TitreManuel
			   // 
			   this->TitreManuel->AutoSize = true;
			   this->TitreManuel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->TitreManuel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TitreManuel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->TitreManuel->Location = System::Drawing::Point(68, 0);
			   this->TitreManuel->Name = L"TitreManuel";
			   this->TitreManuel->Size = System::Drawing::Size(494, 62);
			   this->TitreManuel->TabIndex = 241;
			   this->TitreManuel->Text = L"| Manuel d\'utilisation";
			   this->TitreManuel->Click += gcnew System::EventHandler(this, &ManuelUtilisation::TitreManuel_Click);
			   // 
			   // BarreNoir
			   // 
			   this->BarreNoir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->BarreNoir->Location = System::Drawing::Point(-21, -80);
			   this->BarreNoir->Name = L"BarreNoir";
			   this->BarreNoir->Size = System::Drawing::Size(1291, 159);
			   this->BarreNoir->TabIndex = 242;
			   this->BarreNoir->TabStop = false;
			   // 
			   // label2
			   // 
			   this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->label2->Location = System::Drawing::Point(714, 142);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(1973, 1153);
			   this->label2->TabIndex = 244;
			   this->label2->Text = resources->GetString(L"label2.Text");
			   this->label2->Click += gcnew System::EventHandler(this, &ManuelUtilisation::label2_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(27, 167);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(403, 51);
			   this->label3->TabIndex = 245;
			   this->label3->Text = L"Un jour, un sdf à dit : ";
			   this->label3->Click += gcnew System::EventHandler(this, &ManuelUtilisation::label3_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(12, 243);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(675, 380);
			   this->label4->TabIndex = 246;
			   this->label4->Text = resources->GetString(L"label4.Text");
			   this->label4->Click += gcnew System::EventHandler(this, &ManuelUtilisation::label4_Click);
			   // 
			   // ManuelUtilisation
			   // 
			   this->ClientSize = System::Drawing::Size(1256, 725);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->RETURN_MAUNEL_UTILISATION_HOME);
			   this->Controls->Add(this->TitreManuel);
			   this->Controls->Add(this->BarreNoir);
			   this->Name = L"ManuelUtilisation";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }



#pragma endregion
	private: System::Void RETURN_STATS_HOME_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		ObjetManuel->Show();
	}

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TitreManuel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
