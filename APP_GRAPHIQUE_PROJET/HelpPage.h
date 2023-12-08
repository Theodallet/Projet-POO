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
	private: System::Windows::Forms::Label^ TEXT_MANUEL;
	private: System::Windows::Forms::PictureBox^ PLANET;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ LOGO;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ Black_Background;

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
			   this->TEXT_MANUEL = (gcnew System::Windows::Forms::Label());
			   this->PLANET = (gcnew System::Windows::Forms::PictureBox());
			   this->LOGO = (gcnew System::Windows::Forms::PictureBox());
			   this->Black_Background = (gcnew System::Windows::Forms::PictureBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PLANET))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Black_Background))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // RETURN_MAUNEL_UTILISATION_HOME
			   // 
			   this->RETURN_MAUNEL_UTILISATION_HOME->BackColor = System::Drawing::Color::Black;
			   this->RETURN_MAUNEL_UTILISATION_HOME->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETURN_MAUNEL_UTILISATION_HOME.BackgroundImage")));
			   this->RETURN_MAUNEL_UTILISATION_HOME->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->RETURN_MAUNEL_UTILISATION_HOME->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->RETURN_MAUNEL_UTILISATION_HOME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			   this->RETURN_MAUNEL_UTILISATION_HOME->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->RETURN_MAUNEL_UTILISATION_HOME->Location = System::Drawing::Point(1157, 6);
			   this->RETURN_MAUNEL_UTILISATION_HOME->Name = L"RETURN_MAUNEL_UTILISATION_HOME";
			   this->RETURN_MAUNEL_UTILISATION_HOME->Size = System::Drawing::Size(69, 62);
			   this->RETURN_MAUNEL_UTILISATION_HOME->TabIndex = 243;
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
			   this->TitreManuel->Location = System::Drawing::Point(68, 12);
			   this->TitreManuel->Name = L"TitreManuel";
			   this->TitreManuel->Size = System::Drawing::Size(494, 62);
			   this->TitreManuel->TabIndex = 241;
			   this->TitreManuel->Text = L"| Manuel d\'utilisation";
			   // 
			   // BarreNoir
			   // 
			   this->BarreNoir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->BarreNoir->Location = System::Drawing::Point(0, 0);
			   this->BarreNoir->Name = L"BarreNoir";
			   this->BarreNoir->Size = System::Drawing::Size(1291, 69);
			   this->BarreNoir->TabIndex = 242;
			   this->BarreNoir->TabStop = false;
			   // 
			   // TEXT_MANUEL
			   // 
			   this->TEXT_MANUEL->AutoSize = true;
			   this->TEXT_MANUEL->BackColor = System::Drawing::Color::Black;
			   this->TEXT_MANUEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TEXT_MANUEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->TEXT_MANUEL->Location = System::Drawing::Point(75, 189);
			   this->TEXT_MANUEL->Name = L"TEXT_MANUEL";
			   this->TEXT_MANUEL->Size = System::Drawing::Size(505, 250);
			   this->TEXT_MANUEL->TabIndex = 259;
			   this->TEXT_MANUEL->Text = resources->GetString(L"TEXT_MANUEL.Text");
			   // 
			   // PLANET
			   // 
			   this->PLANET->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PLANET.Image")));
			   this->PLANET->Location = System::Drawing::Point(925, 52);
			   this->PLANET->Name = L"PLANET";
			   this->PLANET->Size = System::Drawing::Size(348, 687);
			   this->PLANET->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->PLANET->TabIndex = 244;
			   this->PLANET->TabStop = false;
			   // 
			   // LOGO
			   // 
			   this->LOGO->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LOGO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LOGO.Image")));
			   this->LOGO->Location = System::Drawing::Point(12, 12);
			   this->LOGO->Name = L"LOGO";
			   this->LOGO->Size = System::Drawing::Size(50, 40);
			   this->LOGO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->LOGO->TabIndex = 245;
			   this->LOGO->TabStop = false;
			   // 
			   // Black_Background
			   // 
			   this->Black_Background->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->Black_Background->Location = System::Drawing::Point(-48, 58);
			   this->Black_Background->Name = L"Black_Background";
			   this->Black_Background->Size = System::Drawing::Size(996, 711);
			   this->Black_Background->TabIndex = 260;
			   this->Black_Background->TabStop = false;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Black;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->label2->Location = System::Drawing::Point(74, 128);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(448, 36);
			   this->label2->TabIndex = 261;
			   this->label2->Text = L"Un jour, un grand sage à dit ...\r\n";
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(693, 93);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(432, 553);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox2->TabIndex = 262;
			   this->pictureBox2->TabStop = false;
			   // 
			   // ManuelUtilisation
			   // 
			   this->ClientSize = System::Drawing::Size(1256, 725);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->LOGO);
			   this->Controls->Add(this->RETURN_MAUNEL_UTILISATION_HOME);
			   this->Controls->Add(this->TitreManuel);
			   this->Controls->Add(this->BarreNoir);
			   this->Controls->Add(this->TEXT_MANUEL);
			   this->Controls->Add(this->PLANET);
			   this->Controls->Add(this->Black_Background);
			   this->Name = L"ManuelUtilisation";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PLANET))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Black_Background))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }



#pragma endregion
	private: System::Void RETURN_STATS_HOME_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		ObjetManuel->ShowDialog();
	}
};
}
