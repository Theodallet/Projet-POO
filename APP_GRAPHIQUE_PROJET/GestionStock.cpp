#include "GestionStock.h"
/*#include <iostream>
#include <stdexcept>
#include <Windows.h> 
#include <msclr/marshal_cppstd.h>
#include <regex>

#pragma comment(lib, "user32.lib")

using namespace std;

float Article_Prix = Convert::ToSingle(this->TXT_PRIX_ARTICLE->Text);
float Article_TVA = Convert::ToSingle(this->TXT_TVA_ARTICLE->Text);

bool check_article_price_entry();
bool check_article_TVA_entry();


bool APPGRAPHIQUEPROJET::GestionStock::check_article_ID_entry()
{
	String^ Article_ID = this->TXT_ID_ARTICLE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Article_ID)) {
		MessageBoxA(NULL, "Le champ ID article ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string articleIDString = msclr::interop::marshal_as<std::string>(Article_ID);

	// On vérifie que le texte ne contient que des chiffres
	for (char c : articleIDString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champs ID article client ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : articleIDString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ID article ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}



//
// 2) Méthode pour checker les entrées pour le nom du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionStock::check_article_name_entry()
{
	String^ Article_Nom = this->TXT_NOM_ARTICLE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Article_Nom)) {
		MessageBoxA(NULL, "Le champ Nom article ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientNomStdString = msclr::interop::marshal_as<std::string>(Article_Nom);

	// On vérifie que le texte ne contient que des lettres
	for (char c : clientNomStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ 'nom' article ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : clientNomStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom article ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}




//
// 3) Méthode pour checker les entrées pour le prénom du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionStock::check_article_color_entry();
{
	String^ Article_Couleur = this->TXT_COULEUR_ARTICLE->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Article_Couleur)) {
		MessageBoxA(NULL, "Le champ Prenom client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string articleColorStdString = msclr::interop::marshal_as<std::string>(Article_Couleur);

	// On vérifie que le texte ne contient que des lettres
	for (char c : articleColorStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ prénom client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : articleColorStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ prénom client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}
//
// 4) Méthode pour checker l' entrée pour la ville du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_mail_entry()
{
	String^ Client_Mail = this->TXT_PRENOM_CLIENT->Text;

	// Convertir System::String^ en std::string
	std::string emailStdString = msclr::interop::marshal_as<std::string>(this->TXT_MAIL_CLIENT->Text);

	// Expression régulière pour valider une adresse e-mail simple
	std::regex regexPattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");

	// Vérifier si la chaîne correspond à l'expression régulière
	if (std::regex_match(emailStdString, regexPattern) == FALSE) {
		MessageBoxA(NULL, "Mail invalide.", "Erreur", MB_OK | MB_ICONERROR);
		return FALSE;
	}

	return true;

}
//
// 6) Méthode pour checker l' entrée pour la ville du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_ville_entry()
{
	String^ Client_Ville = this->TXT_VILLE_CLIENT->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Client_Ville)) {
		MessageBoxA(NULL, "Le champ Ville client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientVilleStdString = msclr::interop::marshal_as<std::string>(Client_Ville);

	// On vérifie que le texte ne contient que des lettres
	for (char c : clientVilleStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ ville client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : clientVilleStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ ville client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}
//
// 7) Méthode pour checker l' entrée pour la rue du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_rue_entry()
{
	String^ Client_Rue = this->TXT_RUE_CLIENT->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Client_Rue)) {
		MessageBoxA(NULL, "Le champ Rue client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientRuedString = msclr::interop::marshal_as<std::string>(Client_Rue);

	// On vérifie que le texte ne contient que des lettres
	for (char c : clientRuedString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ nom client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : clientRuedString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}
//
// 8) Méthode pour checker l' entrée pour le code postal du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_code_postal_entry()
{
	String^ Client_Code_Postal = this->TXT_CP_CLIENT->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Client_Code_Postal)) {
		MessageBoxA(NULL, "Le champ Code Postal client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string clientCodePostaldString = msclr::interop::marshal_as<std::string>(Client_Code_Postal);

	// On vérifie que le texte ne contient que des lettres
	for (char c : clientCodePostaldString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ nom client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : clientCodePostaldString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}
//
// 9) Méthode pour checker l' entrée pour le nom du bâtiment + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionClient::check_client_name_building_entry()
{
	String^ Client_Batiment = this->TXT_BAT_CLIENT->Text;

	// Convertir System::String^ en std::string
	std::string clientBatimentdString = msclr::interop::marshal_as<std::string>(Client_Batiment);

	// On vérifie que le texte ne contient que des lettres
	for (char c : clientBatimentdString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ nom client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : clientBatimentdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

bool APPGRAPHIQUEPROJET::GestionStock::check_article_quantity_entry();
{
	int Article_Stock = Convert::ToInt32(this->TXT_STOCK_ARTICLE->Text);

	// Convertir System::String^ en std::string
	std::string articleEtageString = msclr::interop::marshal_as<std::string>(Article_Stock);

	// On vérifie que le texte ne contient que des chiffres
	for (char c : articleEtageString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ batiment client ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : articleEtageString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

*/