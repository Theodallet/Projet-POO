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
	public ref class GestionCommandes : public System::Windows::Forms::Form
	{
	public:
		Form^ Objet;
		GestionCommandes(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		GestionCommandes(Form^ Objet2)
		{
			Objet = Objet2;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionCommandes()
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;












	// private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ AFFICHAGE_COMMANDES;
	private: System::Windows::Forms::TextBox^ TXT_ARTICLE_COMMANDE;
	private: System::Windows::Forms::TextBox^ TXT_ETAGE_LIV_COMMANDE;



	private: System::Windows::Forms::PictureBox^ LOGO;
	private: System::Windows::Forms::DateTimePicker^ TXT_DATE_LIV_COMMANDE;


	private: System::Windows::Forms::Button^ RETURN_COMMANDES_HOME;
	private: System::Windows::Forms::TextBox^ TXT_BAT_LIV_COMMANDE;


	private: System::Windows::Forms::Label^ NomApp;
	private: System::Windows::Forms::TextBox^ TXT_VILLE_LIV_COMMANDE;

	private: System::Windows::Forms::PictureBox^ BarreNoir;
	private: System::Windows::Forms::TextBox^ TXT_ID_CLIENT_COMMANDE;

	private: System::Windows::Forms::TextBox^ TXT_CP_LIV_COMMANDE;



	private: System::Windows::Forms::Label^ TITRE_COMMANDES;
	private: System::Windows::Forms::TextBox^ TXT_RUE_LIV_COMMANDE;

	private: System::Windows::Forms::Label^ LABEL_ID_CLIEN_COMMANDE;



	private: System::Windows::Forms::TextBox^ TXT_ID_COMMANDE;
	private: System::Windows::Forms::Button^ BOUTON_AJOUTER_COMMANDE;




	private: System::Windows::Forms::Label^ LABEL_ID_COMMANDE;
	private: System::Windows::Forms::Button^ BOUTON_MODIFIER_COMMANDE;


	private: System::Windows::Forms::Label^ LABEL_DATE_LIV_COMMANDE;
	private: System::Windows::Forms::Button^ BOUTON_SUPPRIMER_COMMANDE;



	private: System::Windows::Forms::Label^ LABEL_ETAGE_LIV_COMMANDE;
	private: System::Windows::Forms::Button^ BOUTON_AFFICHER_COMMANDE;


	private: System::Windows::Forms::Label^ LABEL_BAT_LIV_COMMANDE;
	private: System::Windows::Forms::Label^ LABEL_RUE_LIV_COMMANDE;
	private: System::Windows::Forms::Label^ ID_ARTICLE_COMMANDE;
	private: System::Windows::Forms::Label^ LABEL_CP_LIV_COMMANDE;
	private: System::Windows::Forms::Label^ LABEL_VILLE_LIV_COMMANDE;
	private: System::Windows::Forms::PictureBox^ BACKGROUND_ZONE_TEXTE;
	private: System::Windows::Forms::PictureBox^ Background;
	private: System::Windows::Forms::Button^ BOUTON_AJOUTER_ARTICLE_COMMANDE;
	private: System::Windows::Forms::Button^ BOUTON_SUPPRIMER_ARTICLE_COMMANDE;
	private: System::Windows::Forms::Button^ BOUTON_AFFICHER_ARTICLE_COMMANDE;
	private: System::Windows::Forms::TextBox^ TXT_QUANTITE_ARTICLE_CLIENT;
	private: System::Windows::Forms::Label^ LABEL_QUANTITE_ARTICLE_COMMANDE;
	private: System::Windows::Forms::Button^ SKIP_CLIENT_GAUCHE;
	private: System::Windows::Forms::Button^ SKIP_CLIENT_DROITE;
	private: System::Windows::Forms::Button^ BOUTON_CLEAR_CLIENT;
	private: System::Windows::Forms::Label^ label40;

	private: NS_Comp_Svc::CLservices_Contient^ oSvc_Contient;
	private: NS_Comp_Svc::CLservices_Commande^ oSvc_Commande;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ TXT_MOYEN_PAIMENT_COMMANDE;
	private: System::Data::DataSet^ oDs;
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionCommandes::typeid));
			   this->label40 = (gcnew System::Windows::Forms::Label());
			   this->AFFICHAGE_COMMANDES = (gcnew System::Windows::Forms::DataGridView());
			   this->TXT_ARTICLE_COMMANDE = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_ETAGE_LIV_COMMANDE = (gcnew System::Windows::Forms::TextBox());
			   this->LOGO = (gcnew System::Windows::Forms::PictureBox());
			   this->TXT_DATE_LIV_COMMANDE = (gcnew System::Windows::Forms::DateTimePicker());
			   this->RETURN_COMMANDES_HOME = (gcnew System::Windows::Forms::Button());
			   this->TXT_BAT_LIV_COMMANDE = (gcnew System::Windows::Forms::TextBox());
			   this->NomApp = (gcnew System::Windows::Forms::Label());
			   this->TXT_VILLE_LIV_COMMANDE = (gcnew System::Windows::Forms::TextBox());
			   this->BarreNoir = (gcnew System::Windows::Forms::PictureBox());
			   this->TXT_ID_CLIENT_COMMANDE = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_CP_LIV_COMMANDE = (gcnew System::Windows::Forms::TextBox());
			   this->TITRE_COMMANDES = (gcnew System::Windows::Forms::Label());
			   this->TXT_RUE_LIV_COMMANDE = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_ID_CLIEN_COMMANDE = (gcnew System::Windows::Forms::Label());
			   this->TXT_ID_COMMANDE = (gcnew System::Windows::Forms::TextBox());
			   this->BOUTON_AJOUTER_COMMANDE = (gcnew System::Windows::Forms::Button());
			   this->LABEL_ID_COMMANDE = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_MODIFIER_COMMANDE = (gcnew System::Windows::Forms::Button());
			   this->LABEL_DATE_LIV_COMMANDE = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_SUPPRIMER_COMMANDE = (gcnew System::Windows::Forms::Button());
			   this->LABEL_ETAGE_LIV_COMMANDE = (gcnew System::Windows::Forms::Label());
			   this->BOUTON_AFFICHER_COMMANDE = (gcnew System::Windows::Forms::Button());
			   this->LABEL_BAT_LIV_COMMANDE = (gcnew System::Windows::Forms::Label());
			   this->LABEL_RUE_LIV_COMMANDE = (gcnew System::Windows::Forms::Label());
			   this->ID_ARTICLE_COMMANDE = (gcnew System::Windows::Forms::Label());
			   this->LABEL_CP_LIV_COMMANDE = (gcnew System::Windows::Forms::Label());
			   this->LABEL_VILLE_LIV_COMMANDE = (gcnew System::Windows::Forms::Label());
			   this->BACKGROUND_ZONE_TEXTE = (gcnew System::Windows::Forms::PictureBox());
			   this->Background = (gcnew System::Windows::Forms::PictureBox());
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE = (gcnew System::Windows::Forms::Button());
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE = (gcnew System::Windows::Forms::Button());
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE = (gcnew System::Windows::Forms::Button());
			   this->TXT_QUANTITE_ARTICLE_CLIENT = (gcnew System::Windows::Forms::TextBox());
			   this->LABEL_QUANTITE_ARTICLE_COMMANDE = (gcnew System::Windows::Forms::Label());
			   this->SKIP_CLIENT_GAUCHE = (gcnew System::Windows::Forms::Button());
			   this->SKIP_CLIENT_DROITE = (gcnew System::Windows::Forms::Button());
			   this->BOUTON_CLEAR_CLIENT = (gcnew System::Windows::Forms::Button());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->TXT_MOYEN_PAIMENT_COMMANDE = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_COMMANDES))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_ZONE_TEXTE))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Background))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label40
			   // 
			   this->label40->AutoSize = true;
			   this->label40->ForeColor = System::Drawing::Color::Red;
			   this->label40->Location = System::Drawing::Point(817, 827);
			   this->label40->Name = L"label40";
			   this->label40->Size = System::Drawing::Size(225, 17);
			   this->label40->TabIndex = 172;
			   this->label40->Text = L"Message erreur potentielle ajouter";
			   // 
			   // AFFICHAGE_COMMANDES
			   // 
			   this->AFFICHAGE_COMMANDES->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->AFFICHAGE_COMMANDES->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->AFFICHAGE_COMMANDES->Location = System::Drawing::Point(777, 114);
			   this->AFFICHAGE_COMMANDES->Name = L"AFFICHAGE_COMMANDES";
			   this->AFFICHAGE_COMMANDES->RowHeadersWidth = 51;
			   this->AFFICHAGE_COMMANDES->Size = System::Drawing::Size(412, 550);
			   this->AFFICHAGE_COMMANDES->TabIndex = 204;
			   // 
			   // TXT_ARTICLE_COMMANDE
			   // 
			   this->TXT_ARTICLE_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_ARTICLE_COMMANDE->Location = System::Drawing::Point(101, 431);
			   this->TXT_ARTICLE_COMMANDE->Name = L"TXT_ARTICLE_COMMANDE";
			   this->TXT_ARTICLE_COMMANDE->Size = System::Drawing::Size(136, 30);
			   this->TXT_ARTICLE_COMMANDE->TabIndex = 202;
			   // 
			   // TXT_ETAGE_LIV_COMMANDE
			   // 
			   this->TXT_ETAGE_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_ETAGE_LIV_COMMANDE->Location = System::Drawing::Point(424, 501);
			   this->TXT_ETAGE_LIV_COMMANDE->Name = L"TXT_ETAGE_LIV_COMMANDE";
			   this->TXT_ETAGE_LIV_COMMANDE->Size = System::Drawing::Size(303, 30);
			   this->TXT_ETAGE_LIV_COMMANDE->TabIndex = 200;
			   // 
			   // LOGO
			   // 
			   this->LOGO->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->LOGO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LOGO.Image")));
			   this->LOGO->Location = System::Drawing::Point(12, 16);
			   this->LOGO->Name = L"LOGO";
			   this->LOGO->Size = System::Drawing::Size(50, 40);
			   this->LOGO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->LOGO->TabIndex = 177;
			   this->LOGO->TabStop = false;
			   // 
			   // TXT_DATE_LIV_COMMANDE
			   // 
			   this->TXT_DATE_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_DATE_LIV_COMMANDE->Location = System::Drawing::Point(98, 317);
			   this->TXT_DATE_LIV_COMMANDE->Name = L"TXT_DATE_LIV_COMMANDE";
			   this->TXT_DATE_LIV_COMMANDE->Size = System::Drawing::Size(286, 30);
			   this->TXT_DATE_LIV_COMMANDE->TabIndex = 183;
			   // 
			   // RETURN_COMMANDES_HOME
			   // 
			   this->RETURN_COMMANDES_HOME->BackColor = System::Drawing::Color::Transparent;
			   this->RETURN_COMMANDES_HOME->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETURN_COMMANDES_HOME.BackgroundImage")));
			   this->RETURN_COMMANDES_HOME->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->RETURN_COMMANDES_HOME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			   this->RETURN_COMMANDES_HOME->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->RETURN_COMMANDES_HOME->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RETURN_COMMANDES_HOME.Image")));
			   this->RETURN_COMMANDES_HOME->Location = System::Drawing::Point(1138, 12);
			   this->RETURN_COMMANDES_HOME->Name = L"RETURN_COMMANDES_HOME";
			   this->RETURN_COMMANDES_HOME->Size = System::Drawing::Size(106, 48);
			   this->RETURN_COMMANDES_HOME->TabIndex = 175;
			   this->RETURN_COMMANDES_HOME->Text = L"RETOUR";
			   this->RETURN_COMMANDES_HOME->UseVisualStyleBackColor = false;
			   this->RETURN_COMMANDES_HOME->Click += gcnew System::EventHandler(this, &GestionCommandes::RETURN_COMMANDES_HOME_Click);
			   // 
			   // TXT_BAT_LIV_COMMANDE
			   // 
			   this->TXT_BAT_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_BAT_LIV_COMMANDE->Location = System::Drawing::Point(425, 431);
			   this->TXT_BAT_LIV_COMMANDE->Name = L"TXT_BAT_LIV_COMMANDE";
			   this->TXT_BAT_LIV_COMMANDE->Size = System::Drawing::Size(302, 30);
			   this->TXT_BAT_LIV_COMMANDE->TabIndex = 190;
			   // 
			   // NomApp
			   // 
			   this->NomApp->AutoSize = true;
			   this->NomApp->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->NomApp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NomApp->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->NomApp->Location = System::Drawing::Point(69, 6);
			   this->NomApp->Name = L"NomApp";
			   this->NomApp->Size = System::Drawing::Size(507, 62);
			   this->NomApp->TabIndex = 173;
			   this->NomApp->Text = L"| Gestion Commandes";
			   // 
			   // TXT_VILLE_LIV_COMMANDE
			   // 
			   this->TXT_VILLE_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_VILLE_LIV_COMMANDE->Location = System::Drawing::Point(425, 353);
			   this->TXT_VILLE_LIV_COMMANDE->Name = L"TXT_VILLE_LIV_COMMANDE";
			   this->TXT_VILLE_LIV_COMMANDE->Size = System::Drawing::Size(302, 30);
			   this->TXT_VILLE_LIV_COMMANDE->TabIndex = 194;
			   // 
			   // BarreNoir
			   // 
			   this->BarreNoir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->BarreNoir->Location = System::Drawing::Point(0, -2);
			   this->BarreNoir->Name = L"BarreNoir";
			   this->BarreNoir->Size = System::Drawing::Size(1291, 69);
			   this->BarreNoir->TabIndex = 174;
			   this->BarreNoir->TabStop = false;
			   // 
			   // TXT_ID_CLIENT_COMMANDE
			   // 
			   this->TXT_ID_CLIENT_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_ID_CLIENT_COMMANDE->Location = System::Drawing::Point(98, 253);
			   this->TXT_ID_CLIENT_COMMANDE->Name = L"TXT_ID_CLIENT_COMMANDE";
			   this->TXT_ID_CLIENT_COMMANDE->Size = System::Drawing::Size(286, 30);
			   this->TXT_ID_CLIENT_COMMANDE->TabIndex = 179;
			   // 
			   // TXT_CP_LIV_COMMANDE
			   // 
			   this->TXT_CP_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_CP_LIV_COMMANDE->Location = System::Drawing::Point(423, 272);
			   this->TXT_CP_LIV_COMMANDE->Name = L"TXT_CP_LIV_COMMANDE";
			   this->TXT_CP_LIV_COMMANDE->Size = System::Drawing::Size(302, 30);
			   this->TXT_CP_LIV_COMMANDE->TabIndex = 186;
			   // 
			   // TITRE_COMMANDES
			   // 
			   this->TITRE_COMMANDES->AutoSize = true;
			   this->TITRE_COMMANDES->BackColor = System::Drawing::Color::Black;
			   this->TITRE_COMMANDES->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TITRE_COMMANDES->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->TITRE_COMMANDES->Location = System::Drawing::Point(94, 134);
			   this->TITRE_COMMANDES->Name = L"TITRE_COMMANDES";
			   this->TITRE_COMMANDES->Size = System::Drawing::Size(381, 25);
			   this->TITRE_COMMANDES->TabIndex = 191;
			   this->TITRE_COMMANDES->Text = L"CARACTERISTIQUES COMMANDES";
			   // 
			   // TXT_RUE_LIV_COMMANDE
			   // 
			   this->TXT_RUE_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_RUE_LIV_COMMANDE->Location = System::Drawing::Point(422, 194);
			   this->TXT_RUE_LIV_COMMANDE->Name = L"TXT_RUE_LIV_COMMANDE";
			   this->TXT_RUE_LIV_COMMANDE->Size = System::Drawing::Size(303, 26);
			   this->TXT_RUE_LIV_COMMANDE->TabIndex = 188;
			   // 
			   // LABEL_ID_CLIEN_COMMANDE
			   // 
			   this->LABEL_ID_CLIEN_COMMANDE->AutoSize = true;
			   this->LABEL_ID_CLIEN_COMMANDE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_ID_CLIEN_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_ID_CLIEN_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ID_CLIEN_COMMANDE->Location = System::Drawing::Point(97, 226);
			   this->LABEL_ID_CLIEN_COMMANDE->Name = L"LABEL_ID_CLIEN_COMMANDE";
			   this->LABEL_ID_CLIEN_COMMANDE->Size = System::Drawing::Size(95, 25);
			   this->LABEL_ID_CLIEN_COMMANDE->TabIndex = 181;
			   this->LABEL_ID_CLIEN_COMMANDE->Text = L"ID Client";
			   // 
			   // TXT_ID_COMMANDE
			   // 
			   this->TXT_ID_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_ID_COMMANDE->Location = System::Drawing::Point(98, 190);
			   this->TXT_ID_COMMANDE->Name = L"TXT_ID_COMMANDE";
			   this->TXT_ID_COMMANDE->Size = System::Drawing::Size(286, 30);
			   this->TXT_ID_COMMANDE->TabIndex = 196;
			   // 
			   // BOUTON_AJOUTER_COMMANDE
			   // 
			   this->BOUTON_AJOUTER_COMMANDE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_AJOUTER_COMMANDE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_AJOUTER_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_AJOUTER_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_AJOUTER_COMMANDE->Location = System::Drawing::Point(98, 587);
			   this->BOUTON_AJOUTER_COMMANDE->Name = L"BOUTON_AJOUTER_COMMANDE";
			   this->BOUTON_AJOUTER_COMMANDE->Size = System::Drawing::Size(139, 53);
			   this->BOUTON_AJOUTER_COMMANDE->TabIndex = 178;
			   this->BOUTON_AJOUTER_COMMANDE->Text = L"AJOUTER COMMANDE";
			   this->BOUTON_AJOUTER_COMMANDE->UseVisualStyleBackColor = false;
			   this->BOUTON_AJOUTER_COMMANDE->Click += gcnew System::EventHandler(this, &GestionCommandes::BOUTON_AJOUTER_COMMANDE_Click);
			   // 
			   // LABEL_ID_COMMANDE
			   // 
			   this->LABEL_ID_COMMANDE->AutoSize = true;
			   this->LABEL_ID_COMMANDE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_ID_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_ID_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ID_COMMANDE->Location = System::Drawing::Point(94, 167);
			   this->LABEL_ID_COMMANDE->Name = L"LABEL_ID_COMMANDE";
			   this->LABEL_ID_COMMANDE->Size = System::Drawing::Size(144, 25);
			   this->LABEL_ID_COMMANDE->TabIndex = 195;
			   this->LABEL_ID_COMMANDE->Text = L"ID commande";
			   // 
			   // BOUTON_MODIFIER_COMMANDE
			   // 
			   this->BOUTON_MODIFIER_COMMANDE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_MODIFIER_COMMANDE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_MODIFIER_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_MODIFIER_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_MODIFIER_COMMANDE->Location = System::Drawing::Point(425, 587);
			   this->BOUTON_MODIFIER_COMMANDE->Name = L"BOUTON_MODIFIER_COMMANDE";
			   this->BOUTON_MODIFIER_COMMANDE->Size = System::Drawing::Size(141, 53);
			   this->BOUTON_MODIFIER_COMMANDE->TabIndex = 197;
			   this->BOUTON_MODIFIER_COMMANDE->Text = L"MODIFIER COMMANDE";
			   this->BOUTON_MODIFIER_COMMANDE->UseVisualStyleBackColor = false;
			   this->BOUTON_MODIFIER_COMMANDE->Click += gcnew System::EventHandler(this, &GestionCommandes::BOUTON_MODIFIER_COMMANDE_Click);
			   // 
			   // LABEL_DATE_LIV_COMMANDE
			   // 
			   this->LABEL_DATE_LIV_COMMANDE->AutoSize = true;
			   this->LABEL_DATE_LIV_COMMANDE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_DATE_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_DATE_LIV_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_DATE_LIV_COMMANDE->Location = System::Drawing::Point(97, 287);
			   this->LABEL_DATE_LIV_COMMANDE->Name = L"LABEL_DATE_LIV_COMMANDE";
			   this->LABEL_DATE_LIV_COMMANDE->Size = System::Drawing::Size(173, 25);
			   this->LABEL_DATE_LIV_COMMANDE->TabIndex = 184;
			   this->LABEL_DATE_LIV_COMMANDE->Text = L"Date de livraison";
			   // 
			   // BOUTON_SUPPRIMER_COMMANDE
			   // 
			   this->BOUTON_SUPPRIMER_COMMANDE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_SUPPRIMER_COMMANDE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_SUPPRIMER_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_SUPPRIMER_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_SUPPRIMER_COMMANDE->Location = System::Drawing::Point(245, 587);
			   this->BOUTON_SUPPRIMER_COMMANDE->Name = L"BOUTON_SUPPRIMER_COMMANDE";
			   this->BOUTON_SUPPRIMER_COMMANDE->Size = System::Drawing::Size(142, 53);
			   this->BOUTON_SUPPRIMER_COMMANDE->TabIndex = 201;
			   this->BOUTON_SUPPRIMER_COMMANDE->Text = L"SUPPRIMER COMMANDE";
			   this->BOUTON_SUPPRIMER_COMMANDE->UseVisualStyleBackColor = false;
			   this->BOUTON_SUPPRIMER_COMMANDE->Click += gcnew System::EventHandler(this, &GestionCommandes::BOUTON_SUPPRIMER_COMMANDE_Click);
			   // 
			   // LABEL_ETAGE_LIV_COMMANDE
			   // 
			   this->LABEL_ETAGE_LIV_COMMANDE->AutoSize = true;
			   this->LABEL_ETAGE_LIV_COMMANDE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_ETAGE_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_ETAGE_LIV_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_ETAGE_LIV_COMMANDE->Location = System::Drawing::Point(420, 469);
			   this->LABEL_ETAGE_LIV_COMMANDE->Name = L"LABEL_ETAGE_LIV_COMMANDE";
			   this->LABEL_ETAGE_LIV_COMMANDE->Size = System::Drawing::Size(177, 25);
			   this->LABEL_ETAGE_LIV_COMMANDE->TabIndex = 193;
			   this->LABEL_ETAGE_LIV_COMMANDE->Text = L"Etage (Livraison)";
			   // 
			   // BOUTON_AFFICHER_COMMANDE
			   // 
			   this->BOUTON_AFFICHER_COMMANDE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_AFFICHER_COMMANDE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_AFFICHER_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_AFFICHER_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_AFFICHER_COMMANDE->Location = System::Drawing::Point(576, 587);
			   this->BOUTON_AFFICHER_COMMANDE->Name = L"BOUTON_AFFICHER_COMMANDE";
			   this->BOUTON_AFFICHER_COMMANDE->Size = System::Drawing::Size(151, 53);
			   this->BOUTON_AFFICHER_COMMANDE->TabIndex = 198;
			   this->BOUTON_AFFICHER_COMMANDE->Text = L"AFFICHAGE COMMANDE";
			   this->BOUTON_AFFICHER_COMMANDE->UseVisualStyleBackColor = false;
			   this->BOUTON_AFFICHER_COMMANDE->Click += gcnew System::EventHandler(this, &GestionCommandes::BOUTON_AFFICHER_COMMANDE_Click);
			   // 
			   // LABEL_BAT_LIV_COMMANDE
			   // 
			   this->LABEL_BAT_LIV_COMMANDE->AutoSize = true;
			   this->LABEL_BAT_LIV_COMMANDE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_BAT_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_BAT_LIV_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_BAT_LIV_COMMANDE->Location = System::Drawing::Point(420, 399);
			   this->LABEL_BAT_LIV_COMMANDE->Name = L"LABEL_BAT_LIV_COMMANDE";
			   this->LABEL_BAT_LIV_COMMANDE->Size = System::Drawing::Size(255, 25);
			   this->LABEL_BAT_LIV_COMMANDE->TabIndex = 192;
			   this->LABEL_BAT_LIV_COMMANDE->Text = L"Nom Batiment (Livraison)";
			   // 
			   // LABEL_RUE_LIV_COMMANDE
			   // 
			   this->LABEL_RUE_LIV_COMMANDE->AutoSize = true;
			   this->LABEL_RUE_LIV_COMMANDE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_RUE_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_RUE_LIV_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_RUE_LIV_COMMANDE->Location = System::Drawing::Point(420, 170);
			   this->LABEL_RUE_LIV_COMMANDE->Name = L"LABEL_RUE_LIV_COMMANDE";
			   this->LABEL_RUE_LIV_COMMANDE->Size = System::Drawing::Size(159, 25);
			   this->LABEL_RUE_LIV_COMMANDE->TabIndex = 185;
			   this->LABEL_RUE_LIV_COMMANDE->Text = L"Rue (Livraison)";
			   // 
			   // ID_ARTICLE_COMMANDE
			   // 
			   this->ID_ARTICLE_COMMANDE->AutoSize = true;
			   this->ID_ARTICLE_COMMANDE->BackColor = System::Drawing::Color::Black;
			   this->ID_ARTICLE_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ID_ARTICLE_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->ID_ARTICLE_COMMANDE->Location = System::Drawing::Point(97, 406);
			   this->ID_ARTICLE_COMMANDE->Name = L"ID_ARTICLE_COMMANDE";
			   this->ID_ARTICLE_COMMANDE->Size = System::Drawing::Size(100, 25);
			   this->ID_ARTICLE_COMMANDE->TabIndex = 199;
			   this->ID_ARTICLE_COMMANDE->Text = L"ID Article";
			   // 
			   // LABEL_CP_LIV_COMMANDE
			   // 
			   this->LABEL_CP_LIV_COMMANDE->AutoSize = true;
			   this->LABEL_CP_LIV_COMMANDE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_CP_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LABEL_CP_LIV_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_CP_LIV_COMMANDE->Location = System::Drawing::Point(420, 240);
			   this->LABEL_CP_LIV_COMMANDE->Name = L"LABEL_CP_LIV_COMMANDE";
			   this->LABEL_CP_LIV_COMMANDE->Size = System::Drawing::Size(239, 25);
			   this->LABEL_CP_LIV_COMMANDE->TabIndex = 187;
			   this->LABEL_CP_LIV_COMMANDE->Text = L"Code Postal (Livraison)";
			   // 
			   // LABEL_VILLE_LIV_COMMANDE
			   // 
			   this->LABEL_VILLE_LIV_COMMANDE->AutoSize = true;
			   this->LABEL_VILLE_LIV_COMMANDE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_VILLE_LIV_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_VILLE_LIV_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_VILLE_LIV_COMMANDE->Location = System::Drawing::Point(420, 321);
			   this->LABEL_VILLE_LIV_COMMANDE->Name = L"LABEL_VILLE_LIV_COMMANDE";
			   this->LABEL_VILLE_LIV_COMMANDE->Size = System::Drawing::Size(163, 25);
			   this->LABEL_VILLE_LIV_COMMANDE->TabIndex = 189;
			   this->LABEL_VILLE_LIV_COMMANDE->Text = L"Ville (Livraison)";
			   // 
			   // BACKGROUND_ZONE_TEXTE
			   // 
			   this->BACKGROUND_ZONE_TEXTE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BACKGROUND_ZONE_TEXTE.BackgroundImage")));
			   this->BACKGROUND_ZONE_TEXTE->Location = System::Drawing::Point(78, 138);
			   this->BACKGROUND_ZONE_TEXTE->Name = L"BACKGROUND_ZONE_TEXTE";
			   this->BACKGROUND_ZONE_TEXTE->Size = System::Drawing::Size(683, 550);
			   this->BACKGROUND_ZONE_TEXTE->TabIndex = 203;
			   this->BACKGROUND_ZONE_TEXTE->TabStop = false;
			   // 
			   // Background
			   // 
			   this->Background->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Background.Image")));
			   this->Background->Location = System::Drawing::Point(0, 50);
			   this->Background->Name = L"Background";
			   this->Background->Size = System::Drawing::Size(1273, 687);
			   this->Background->TabIndex = 176;
			   this->Background->TabStop = false;
			   // 
			   // BOUTON_AJOUTER_ARTICLE_COMMANDE
			   // 
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE->Location = System::Drawing::Point(98, 473);
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE->Name = L"BOUTON_AJOUTER_ARTICLE_COMMANDE";
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE->Size = System::Drawing::Size(139, 26);
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE->TabIndex = 205;
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE->Text = L"AJOUTER ARTICLE";
			   this->BOUTON_AJOUTER_ARTICLE_COMMANDE->UseVisualStyleBackColor = false;
			   // 
			   // BOUTON_SUPPRIMER_ARTICLE_COMMANDE
			   // 
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE->Location = System::Drawing::Point(245, 474);
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE->Name = L"BOUTON_SUPPRIMER_ARTICLE_COMMANDE";
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE->Size = System::Drawing::Size(139, 26);
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE->TabIndex = 206;
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE->Text = L"SUPPRIMER ARTICLE";
			   this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE->UseVisualStyleBackColor = false;
			   // 
			   // BOUTON_AFFICHER_ARTICLE_COMMANDE
			   // 
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE->Location = System::Drawing::Point(98, 505);
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE->Name = L"BOUTON_AFFICHER_ARTICLE_COMMANDE";
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE->Size = System::Drawing::Size(139, 26);
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE->TabIndex = 207;
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE->Text = L"AFFICHER ARTICLES";
			   this->BOUTON_AFFICHER_ARTICLE_COMMANDE->UseVisualStyleBackColor = false;
			   // 
			   // TXT_QUANTITE_ARTICLE_CLIENT
			   // 
			   this->TXT_QUANTITE_ARTICLE_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_QUANTITE_ARTICLE_CLIENT->Location = System::Drawing::Point(245, 430);
			   this->TXT_QUANTITE_ARTICLE_CLIENT->Name = L"TXT_QUANTITE_ARTICLE_CLIENT";
			   this->TXT_QUANTITE_ARTICLE_CLIENT->Size = System::Drawing::Size(139, 30);
			   this->TXT_QUANTITE_ARTICLE_CLIENT->TabIndex = 208;
			   // 
			   // LABEL_QUANTITE_ARTICLE_COMMANDE
			   // 
			   this->LABEL_QUANTITE_ARTICLE_COMMANDE->AutoSize = true;
			   this->LABEL_QUANTITE_ARTICLE_COMMANDE->BackColor = System::Drawing::Color::Black;
			   this->LABEL_QUANTITE_ARTICLE_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->LABEL_QUANTITE_ARTICLE_COMMANDE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->LABEL_QUANTITE_ARTICLE_COMMANDE->Location = System::Drawing::Point(241, 407);
			   this->LABEL_QUANTITE_ARTICLE_COMMANDE->Name = L"LABEL_QUANTITE_ARTICLE_COMMANDE";
			   this->LABEL_QUANTITE_ARTICLE_COMMANDE->Size = System::Drawing::Size(158, 25);
			   this->LABEL_QUANTITE_ARTICLE_COMMANDE->TabIndex = 209;
			   this->LABEL_QUANTITE_ARTICLE_COMMANDE->Text = L"Quantité article";
			   // 
			   // SKIP_CLIENT_GAUCHE
			   // 
			   this->SKIP_CLIENT_GAUCHE->BackColor = System::Drawing::Color::Silver;
			   this->SKIP_CLIENT_GAUCHE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->SKIP_CLIENT_GAUCHE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->SKIP_CLIENT_GAUCHE->Location = System::Drawing::Point(101, 540);
			   this->SKIP_CLIENT_GAUCHE->Name = L"SKIP_CLIENT_GAUCHE";
			   this->SKIP_CLIENT_GAUCHE->Size = System::Drawing::Size(286, 29);
			   this->SKIP_CLIENT_GAUCHE->TabIndex = 210;
			   this->SKIP_CLIENT_GAUCHE->Text = L"<";
			   this->SKIP_CLIENT_GAUCHE->UseVisualStyleBackColor = false;
			   this->SKIP_CLIENT_GAUCHE->Click += gcnew System::EventHandler(this, &GestionCommandes::SKIP_CLIENT_GAUCHE_Click);
			   // 
			   // SKIP_CLIENT_DROITE
			   // 
			   this->SKIP_CLIENT_DROITE->BackColor = System::Drawing::Color::Silver;
			   this->SKIP_CLIENT_DROITE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->SKIP_CLIENT_DROITE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->SKIP_CLIENT_DROITE->Location = System::Drawing::Point(424, 540);
			   this->SKIP_CLIENT_DROITE->Name = L"SKIP_CLIENT_DROITE";
			   this->SKIP_CLIENT_DROITE->Size = System::Drawing::Size(303, 29);
			   this->SKIP_CLIENT_DROITE->TabIndex = 211;
			   this->SKIP_CLIENT_DROITE->Text = L">";
			   this->SKIP_CLIENT_DROITE->UseVisualStyleBackColor = false;
			   this->SKIP_CLIENT_DROITE->Click += gcnew System::EventHandler(this, &GestionCommandes::SKIP_CLIENT_DROITE_Click);
			   // 
			   // BOUTON_CLEAR_CLIENT
			   // 
			   this->BOUTON_CLEAR_CLIENT->BackColor = System::Drawing::Color::DarkRed;
			   this->BOUTON_CLEAR_CLIENT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->BOUTON_CLEAR_CLIENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->BOUTON_CLEAR_CLIENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->BOUTON_CLEAR_CLIENT->Location = System::Drawing::Point(576, 131);
			   this->BOUTON_CLEAR_CLIENT->Name = L"BOUTON_CLEAR_CLIENT";
			   this->BOUTON_CLEAR_CLIENT->Size = System::Drawing::Size(151, 23);
			   this->BOUTON_CLEAR_CLIENT->TabIndex = 212;
			   this->BOUTON_CLEAR_CLIENT->Text = L"CLEAR";
			   this->BOUTON_CLEAR_CLIENT->UseVisualStyleBackColor = false;
			   this->BOUTON_CLEAR_CLIENT->Click += gcnew System::EventHandler(this, &GestionCommandes::BOUTON_CLEAR_CLIENT_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Black;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->label2->Location = System::Drawing::Point(97, 350);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(189, 25);
			   this->label2->TabIndex = 213;
			   this->label2->Text = L"Moyen de paiment";
			   // 
			   // TXT_MOYEN_PAIMENT_COMMANDE
			   // 
			   this->TXT_MOYEN_PAIMENT_COMMANDE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->TXT_MOYEN_PAIMENT_COMMANDE->Location = System::Drawing::Point(98, 376);
			   this->TXT_MOYEN_PAIMENT_COMMANDE->Name = L"TXT_MOYEN_PAIMENT_COMMANDE";
			   this->TXT_MOYEN_PAIMENT_COMMANDE->Size = System::Drawing::Size(286, 30);
			   this->TXT_MOYEN_PAIMENT_COMMANDE->TabIndex = 214;
			   this->TXT_MOYEN_PAIMENT_COMMANDE->TextChanged += gcnew System::EventHandler(this, &GestionCommandes::TXT_MOYEN_PAIMENT_COMMANDE_TextChanged);
			   // 
			   // GestionCommandes
			   // 
			   this->ClientSize = System::Drawing::Size(1256, 725);
			   this->Controls->Add(this->TXT_MOYEN_PAIMENT_COMMANDE);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->BOUTON_CLEAR_CLIENT);
			   this->Controls->Add(this->SKIP_CLIENT_DROITE);
			   this->Controls->Add(this->SKIP_CLIENT_GAUCHE);
			   this->Controls->Add(this->LABEL_QUANTITE_ARTICLE_COMMANDE);
			   this->Controls->Add(this->TXT_QUANTITE_ARTICLE_CLIENT);
			   this->Controls->Add(this->BOUTON_AFFICHER_ARTICLE_COMMANDE);
			   this->Controls->Add(this->BOUTON_SUPPRIMER_ARTICLE_COMMANDE);
			   this->Controls->Add(this->BOUTON_AJOUTER_ARTICLE_COMMANDE);
			   this->Controls->Add(this->AFFICHAGE_COMMANDES);
			   this->Controls->Add(this->TXT_ARTICLE_COMMANDE);
			   this->Controls->Add(this->TXT_ETAGE_LIV_COMMANDE);
			   this->Controls->Add(this->LOGO);
			   this->Controls->Add(this->TXT_DATE_LIV_COMMANDE);
			   this->Controls->Add(this->RETURN_COMMANDES_HOME);
			   this->Controls->Add(this->TXT_BAT_LIV_COMMANDE);
			   this->Controls->Add(this->NomApp);
			   this->Controls->Add(this->TXT_VILLE_LIV_COMMANDE);
			   this->Controls->Add(this->BarreNoir);
			   this->Controls->Add(this->TXT_ID_CLIENT_COMMANDE);
			   this->Controls->Add(this->TXT_CP_LIV_COMMANDE);
			   this->Controls->Add(this->TITRE_COMMANDES);
			   this->Controls->Add(this->TXT_RUE_LIV_COMMANDE);
			   this->Controls->Add(this->LABEL_ID_CLIEN_COMMANDE);
			   this->Controls->Add(this->TXT_ID_COMMANDE);
			   this->Controls->Add(this->BOUTON_AJOUTER_COMMANDE);
			   this->Controls->Add(this->LABEL_ID_COMMANDE);
			   this->Controls->Add(this->BOUTON_MODIFIER_COMMANDE);
			   this->Controls->Add(this->LABEL_DATE_LIV_COMMANDE);
			   this->Controls->Add(this->BOUTON_SUPPRIMER_COMMANDE);
			   this->Controls->Add(this->LABEL_ETAGE_LIV_COMMANDE);
			   this->Controls->Add(this->BOUTON_AFFICHER_COMMANDE);
			   this->Controls->Add(this->LABEL_BAT_LIV_COMMANDE);
			   this->Controls->Add(this->LABEL_RUE_LIV_COMMANDE);
			   this->Controls->Add(this->ID_ARTICLE_COMMANDE);
			   this->Controls->Add(this->LABEL_CP_LIV_COMMANDE);
			   this->Controls->Add(this->LABEL_VILLE_LIV_COMMANDE);
			   this->Controls->Add(this->BACKGROUND_ZONE_TEXTE);
			   this->Controls->Add(this->Background);
			   this->Controls->Add(this->label40);
			   this->Name = L"GestionCommandes";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   this->Load += gcnew System::EventHandler(this, &GestionCommandes::GestionCommandes_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AFFICHAGE_COMMANDES))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarreNoir))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BACKGROUND_ZONE_TEXTE))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Background))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }



#pragma endregion

	private: System::Void GestionCommandes_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc_Contient = gcnew NS_Comp_Svc::CLservices_Contient();
		this->oSvc_Commande = gcnew NS_Comp_Svc::CLservices_Commande();
	}


	private: System::Void RETURN_COMMANDES_HOME_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		Objet->Show();
	}


private: System::Void BOUTON_CLEAR_CLIENT_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->TXT_ID_COMMANDE->Text = "";
		this->TXT_ID_CLIENT_COMMANDE->Text = "";
		this->TXT_DATE_LIV_COMMANDE->Text = "";
		this->TXT_ARTICLE_COMMANDE->Text = "";
		this->TXT_QUANTITE_ARTICLE_CLIENT->Text = "";
		this->TXT_RUE_LIV_COMMANDE->Text = "";
		this->TXT_CP_LIV_COMMANDE->Text = "";
		this->TXT_VILLE_LIV_COMMANDE->Text = "";
		this->TXT_BAT_LIV_COMMANDE->Text = "";
		this->TXT_ETAGE_LIV_COMMANDE->Text = "";

	}


	private: System::Void BOUTON_AJOUTER_COMMANDE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int Commande_ID = Convert::ToInt32(this->TXT_ID_COMMANDE->Text); // A retirer
		int Client_ID = Convert::ToInt32(this->TXT_ID_CLIENT_COMMANDE->Text);
		DateTime Date_Livraison = DateTime::Parse(this->TXT_DATE_LIV_COMMANDE->Text);
		int Article_ID = Convert::ToInt32(this->TXT_ARTICLE_COMMANDE->Text);
		int Article_Quantite = Convert::ToInt32(this->TXT_QUANTITE_ARTICLE_CLIENT->Text);
		String^ Route_Livraison = this->TXT_RUE_LIV_COMMANDE->Text;
		String^ CodePostal_Livraison = this->TXT_CP_LIV_COMMANDE->Text;
		String^ Ville_Livraison = this->TXT_VILLE_LIV_COMMANDE->Text;
		String^ Batiment_Livraison = this->TXT_BAT_LIV_COMMANDE->Text;
		int Etage_Livraison = Convert::ToInt32(this->TXT_ETAGE_LIV_COMMANDE->Text);

		// Action à faire
		this->oSvc_Commande->ajouter_Commande(Date_Livraison,nullptr,nullptr,nullptr,Moyen_Paiment, Client_ID,);
		this
		ajouter_Contient(int Id_Art, int Id_Com, int Quantite_Article) 
			ajouter_Commande(System::String ^ Date_Liv, float Total_HT, float Total_TTC, float Total_TVA, System::String ^ Moyen_Paiment, int Id_Cli, int Adresse_Liv)

		//
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		















































































































































		
		
		
		














































































		
		
		
		
		
		
		
		
		Vide de la page

		this->TXT_ID_COMMANDE->Text = "";  // A retirer
		this->TXT_ID_CLIENT_COMMANDE->Text = "";
		this->TXT_DATE_LIV_COMMANDE->Text = "";
		this->TXT_ARTICLE_COMMANDE->Text = "";
		this->TXT_QUANTITE_ARTICLE_CLIENT->Text = "";
		this->TXT_RUE_LIV_COMMANDE->Text = "";
		this->TXT_CP_LIV_COMMANDE->Text = "";
		this->TXT_VILLE_LIV_COMMANDE->Text = "";
		this->TXT_BAT_LIV_COMMANDE->Text = "";
		this->TXT_ETAGE_LIV_COMMANDE->Text = "";
	}
		   

private: System::Void BOUTON_MODIFIER_COMMANDE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ Commande_ID = this->TXT_ID_COMMANDE->Text;

		String^ Client_ID = this->TXT_ID_CLIENT_COMMANDE->Text;
		String^ Date_Livraison = this->TXT_DATE_LIV_COMMANDE->Text;
		String^ Article_ID = this->TXT_ARTICLE_COMMANDE->Text;
		String^ Article_Quantite = this->TXT_QUANTITE_ARTICLE_CLIENT->Text;
		String^ Route_Livraison = this->TXT_RUE_LIV_COMMANDE->Text;
		String^ CodePostal_Livraison = this->TXT_CP_LIV_COMMANDE->Text;
		String^ Ville_Livraison = this->TXT_VILLE_LIV_COMMANDE->Text;
		String^ Batiment_Livraison = this->TXT_BAT_LIV_COMMANDE->Text;
		String^ Etage_Livraison = this->TXT_ETAGE_LIV_COMMANDE->Text;

		// Action à faire


		// Vide de la page

		this->TXT_ID_COMMANDE->Text = "";

		this->TXT_ID_CLIENT_COMMANDE->Text = "";
		this->TXT_DATE_LIV_COMMANDE->Text = "";
		this->TXT_ARTICLE_COMMANDE->Text = "";
		this->TXT_QUANTITE_ARTICLE_CLIENT->Text = "";
		this->TXT_RUE_LIV_COMMANDE->Text = "";
		this->TXT_CP_LIV_COMMANDE->Text = "";
		this->TXT_VILLE_LIV_COMMANDE->Text = "";
		this->TXT_BAT_LIV_COMMANDE->Text = "";
		this->TXT_ETAGE_LIV_COMMANDE->Text = "";
	}


	private: System::Void BOUTON_SUPPRIMER_COMMANDE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ Commande_ID = this->TXT_ID_COMMANDE->Text;

		// Commannde de suppression

		this->TXT_ID_COMMANDE->Text = "";

	}
	

	private: System::Void BOUTON_AFFICHER_COMMANDE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ Commande_ID = this->TXT_ID_COMMANDE->Text;

		// Commannde d'affichage

		this->TXT_ID_COMMANDE->Text = "";
	}


	private: System::Void SKIP_CLIENT_GAUCHE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ Commande_ID = this->TXT_ID_COMMANDE->Text;

		//Commande de récupération de données via ID précédent

		this->TXT_ID_COMMANDE->Text = "Précédent";

		this->TXT_ID_CLIENT_COMMANDE->Text = "Précédent";
		this->TXT_DATE_LIV_COMMANDE->Text = "06/12/2023 00:00";
		this->TXT_ARTICLE_COMMANDE->Text = "Précédent";
		this->TXT_QUANTITE_ARTICLE_CLIENT->Text = "Précédent";
		this->TXT_RUE_LIV_COMMANDE->Text = "Précédent";
		this->TXT_CP_LIV_COMMANDE->Text = "Précédent";
		this->TXT_VILLE_LIV_COMMANDE->Text = "Précédent";
		this->TXT_BAT_LIV_COMMANDE->Text = "Précédent";
		this->TXT_ETAGE_LIV_COMMANDE->Text = "Précédent";


	}


	private: System::Void SKIP_CLIENT_DROITE_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ Commande_ID = this->TXT_ID_COMMANDE->Text;

		//Commande de récupération de données via ID suivant

		this->TXT_ID_COMMANDE->Text = "";

		this->TXT_ID_CLIENT_COMMANDE->Text = "Suivant"; 
		this->TXT_DATE_LIV_COMMANDE->Text = "06/12/2023 00:00";
		this->TXT_ARTICLE_COMMANDE->Text = "Suivant";
		this->TXT_QUANTITE_ARTICLE_CLIENT->Text = "Suivant";
		this->TXT_RUE_LIV_COMMANDE->Text = "Suivant";
		this->TXT_CP_LIV_COMMANDE->Text = "Suivant";
		this->TXT_VILLE_LIV_COMMANDE->Text = "Suivant";
		this->TXT_BAT_LIV_COMMANDE->Text = "Suivant";
		this->TXT_ETAGE_LIV_COMMANDE->Text = "Suivant";
	}
	


	private: System::Void TXT_MOYEN_PAIMENT_COMMANDE_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}