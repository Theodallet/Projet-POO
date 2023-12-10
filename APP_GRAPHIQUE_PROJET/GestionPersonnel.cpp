#include "GestionPersonnel.h"

#include <iostream>
#include <stdexcept>
#include <Windows.h> 
#include <msclr/marshal_cppstd.h>

#pragma comment(lib, "user32.lib")

using namespace std;
// 
// I) Pour checker les entrées de l'interface Client
// 

//
// 1) Méthode pour checker les entrées pour le id du client + éviter les injections SQL
//
bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_ID_entry()
{
	String^ Personnel_ID = this->TXT_ID_PERSONNEL->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_ID)) {
		MessageBoxA(NULL, "Le champ ID client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string peronnelIDString = msclr::interop::marshal_as<std::string>(Personnel_ID);

	// On vérifie que le texte ne contient que des chiffres
	for (char c : peronnelIDString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ batiment client ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : peronnelIDString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}



//
// 2) Méthode pour checker les entrées pour le nom du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_name_entry()
{
	String^ Personnel_Nom = this->TXT_NOM_PERSONNEL->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Nom)) {
		MessageBoxA(NULL, "Le champ Nom client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelNomStdString = msclr::interop::marshal_as<std::string>(Personnel_Nom);

	// On vérifie que le texte ne contient que des lettres
	for (char c : personnelNomStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ 'nom' client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : personnelNomStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}




//
// 3) Méthode pour checker les entrées pour le prénom du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_surname_entry()
{
	String^ Personnel_Prenom = this->TXT_PRENOM_PERSONNEL->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Prenom)) {
		MessageBoxA(NULL, "Le champ Prenom client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelPrenomStdString = msclr::interop::marshal_as<std::string>(Personnel_Prenom);

	// On vérifie que le texte ne contient que des lettres
	for (char c : personnelPrenomStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ prénom client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : personnelPrenomStdString) {
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

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_mail_entry()
{
	String^ Personnel_Mail = this->TXT_MAIL_PERSONNEL->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Mail)) {
		MessageBoxA(NULL, "Le champ Prenom client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelMailStdString = msclr::interop::marshal_as<std::string>(Personnel_Mail);

	// On vérifie que le texte ne contient que des caractères alphanumériques et l'@
	bool is_valid = true;
	for (char c : personnelMailStdString) {
		if (!isalnum(c) && c != '@') {
			is_valid = false;
			break;
		}
	}

	if (!is_valid) {
		MessageBoxA(NULL, "Le champ mail client ne doit contenir que des lettres, des chiffres et l'@.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : personnelMailStdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ mail client ne doit pas contenir de caractères spéciaux pouvant être utilisés pour des injections SQL.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte contient un @
	int atIndex = Personnel_Mail->IndexOf('@');
	if (atIndex == -1 || atIndex == 0 || atIndex == Personnel_Mail->Length - 1) {
		MessageBoxA(NULL, "Le champ mail doit contenir un @ et ne peut pas commencer ou se terminer par @.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// On vérifie que le texte contient une extension de mail valide
	String^ extension = Personnel_Mail->Substring(atIndex + 1);
	std::string clientExtensionStdString = msclr::interop::marshal_as<std::string>(extension);

	// Liste des extensions valides
	std::vector<std::string> valid_extensions = { "gmail.com", ".fr", ".net", ".org", ".edu" };

	bool is_valid_extension = false;

	for (const std::string& valid_extension : valid_extensions) {
		// Comparaison insensible à la casse
		if (_stricmp(clientExtensionStdString.c_str(), valid_extension.c_str()) == 0) {
			is_valid_extension = true;
			break;
		}
	}

	if (!is_valid_extension) {
		MessageBoxW(NULL, L"Le champ mail doit contenir une extension valide.", L"Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Le texte est valide -> on retourne true
	return true;
}


//
// 6) Méthode pour checker l' entrée pour la ville du client + éviter les injections SQL
//

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_ville_entry()
{
	String^ Personnel_Ville = this->TXT_VILLE_PERSONNEL->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Ville)) {
		MessageBoxA(NULL, "Le champ Ville client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelVilleStdString = msclr::interop::marshal_as<std::string>(Personnel_Ville);

	// On vérifie que le texte ne contient que des lettres
	for (char c : personnelVilleStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ ville client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : personnelVilleStdString) {
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

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_rue_entry()
{
	String^ Personnel_Rue = this->TXT_RUE_PERSONNEL->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Rue)) {
		MessageBoxA(NULL, "Le champ Rue client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelRueStdString = msclr::interop::marshal_as<std::string>(Personnel_Rue);

	// On vérifie que le texte ne contient que des lettres
	for (char c : personnelRueStdString) {
		if (!isalpha(c)) {
			MessageBoxA(NULL, "Le champ nom client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : personnelRueStdString) {
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

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_code_postal_entry()
{
	String^ Personnel_Code_Postal = this->TXT_CP_PERSONNEL->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_Code_Postal)) {
		MessageBoxA(NULL, "Le champ Code Postal client ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string personnelCodePostaldString = msclr::interop::marshal_as<std::string>(Personnel_Code_Postal);

	// On vérifie que le texte ne contient que des lettres
	for (char c : personnelCodePostaldString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ nom client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : personnelCodePostaldString) {
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

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_name_building_entry()
{
	String^ Personnel_Batiment = this->TXT_BAT_PERSONNEL->Text;

	// Convertir System::String^ en std::string
	std::string personnelBatimentdString = msclr::interop::marshal_as<std::string>(Personnel_Batiment);

	// On vérifie que le texte ne contient que des lettres
	for (char c : personnelBatimentdString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ nom client ne doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : personnelBatimentdString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_floor_entry()
{
	String^ Personnel_Etage = this->TXT_ETAGE_PERSONNEL->Text;

	// Convertir System::String^ en std::string
	std::string clientEtageString = msclr::interop::marshal_as<std::string>(Personnel_Etage);

	// On vérifie que le texte ne contient que des chiffres
	for (char c : clientEtageString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ batiment client ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : clientEtageString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}


bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_role_entry()
{
	String^ Personnel_Role = this->TEXT_ROLE_PERSONNEL->Text;

	// Convertir System::String^ en std::string
	std::string personnelRoledString = msclr::interop::marshal_as<std::string>(Personnel_Role);

	// On vérifie que le texte ne contient que des lettres
	for (char c : personnelRoledString) {
		if (!isalnum(c)) { // VARIANTE AVEC DE l'ALPHANUMERIQUE
			MessageBoxA(NULL, "Le champ role personnel doit contenir que des lettres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : personnelRoledString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ role personnel ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}

bool APPGRAPHIQUEPROJET::GestionPersonnel::check_personnel_ID_supperior_entry()
{
	String^ Personnel_ID_Supperieur = this->TXT_ID_SUP->Text;

	// Vérifier si l'entrée est nulle ou non 
	if (String::IsNullOrEmpty(Personnel_ID_Supperieur)) {
		MessageBoxA(NULL, "Le champ ID supérieur personnel ne peut pas être vide.", "Erreur", MB_OK | MB_ICONERROR);
		return false;
	}

	// Convertir System::String^ en std::string
	std::string peronnelIDSuppString = msclr::interop::marshal_as<std::string>(Personnel_ID_Supperieur);

	// On vérifie que le texte ne contient que des chiffres
	for (char c : peronnelIDSuppString) {
		if (!Char::IsDigit(c)) {
			MessageBoxA(NULL, "Le champ id supérieur personnel ne doit contenir que des chiffres.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// On vérifie que le texte ne contient pas de caractères spéciaux pouvant être utilisés pour des injections SQL
	for (char c : peronnelIDSuppString) {
		if (c == '"' || c == '\'' || c == '\\' || c == ';' || c == '`' || c == '<' || c == '>') {
			MessageBoxA(NULL, "Le champ nom client ne doit pas contenir de caractères spéciaux.", "Erreur", MB_OK | MB_ICONERROR);
			return false;
		}
	}

	// Le texte est valide -> on retourne true
	return true;
}