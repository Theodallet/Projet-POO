using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;

using NS_Comp_Mappage;




namespace VotreNamespaceDeTest
{
    [TestClass]
    public class CL_Map_ClientTests
    {
        [TestMethod]
        public void Select_Client_Id_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int clientIDTest = 1;
            var result = Test.Select_Client_ID(clientIDTest);

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);

        }
        public void Select_Client_Nom_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int NomIDTest = "Brunel";
            var result = Test.Select_Client_Nom(NomIDTest);

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Select_Client_Prenom_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int PrenomIDTest = "Florian";
            var result = Test.Select_Client_Prenom(PrenomIDTest);

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Select_Client_Date_N_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int DateTest = "18/02/2004";
            var result = Test.Select_Client_Date_N(DateTest);

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Select_Client_Mail_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int MailTest = "florian.brunel@viacesi.fr";
            var result = Test.Select_Client_Mail(MailTest);

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Select_Client_Ville_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int VilleTest = "Fresles";
            var result = Test.Select_Client_Ville(VilleTest);

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Select_Client_Rue_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int RueTest = "833 Route de Pommereval";
            var result = Test.Select_Client_Rue(RueTest);

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Select_Client_Code_Postal_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int CPTest = "76270";
            var result = Test.Select_Client_Code_Postal(CPTest);

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Select_Client_Nom_Bat_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int BatTest = "";
            var result = Test.Select_Nom_Bat(BatTest);

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Select_Client_Etage_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int EtageTest = "";
            var result = Test.Select_Client_Etage(EtageTest);

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Select_Client_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            var result = Test.Select_Client();

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Insert_Client_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            String Nom = "Brunel";
            String Prenom = "Florian";
            String Mail = "florian.brunel@viacesi.fr";
            DateTime DatedeNaissance = "18/02/2004";
            String Ville = "Fresles";
            String Rue = "833 Route de Pommereval";
            String CodePostal = "76270";
            String NomBat = "";
            String Etage = "";

            var production = Test.Insert_Client(Nom, Prenom, Mail, DatedeNaissance, Ville, Rue, CodePostal, NomBat, Etage);

            var result = Test.Select_Client();

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

        public void Delete_Client_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int IdASupp = 1;

            var Suppression = Test.Delete_Client(IdASupp);

            var result = Test.Select_Client(); // On vérifie la suppression grâce à l'affichage à l'id sélectionné et on vérifie que tout est vide

            Assert.AreEqual("", result[0]);
            Assert.AreEqual("", result[1]);
            Assert.AreEqual("", result[2]);
            Assert.AreEqual("", result[3]);
            Assert.AreEqual("", result[4]);
            Assert.AreEqual("", result[5]);
            Assert.AreEqual("", result[6]);
            Assert.AreEqual("", result[7]);
            Assert.AreEqual("", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);

        }

        public void Update_Client_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int IdAUpdate

            String Nom = "Laine";
            String Prenom = "Tom";
            String Mail = "tom.laine@viacesi.fr";
            DateTime DatedeNaissance = "18/02/2004";
            String Ville = "Fecamp";
            String Rue = "1 route perdue";
            String CodePostal = "76999";
            String NomBat = "";
            String Etage = "";

            var production = Test.Update_Client(IdAUpdate, Nom, Prenom, Mail, DatedeNaissance, Ville, Rue, CodePostal, NomBat, Etage);

            var result = Test.Select_Client();

            Assert.AreEqual("1", result[0]);
            Assert.AreEqual("Laine", result[1]);
            Assert.AreEqual("Tom", result[2]);
            Assert.AreEqual("18/02/2004", result[3]);
            Assert.AreEqual("tom.laine@viacesi.fr", result[4]);
            Assert.AreEqual("1", result[5]);
            Assert.AreEqual("Fecamp", result[6]);
            Assert.AreEqual("1 route perdue", result[7]);
            Assert.AreEqual("76999", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

    }

    public class CL_Map_PersonnelTests
    {
        public void Select_Personnel_ID_Test()
        {

        }

        public void Select_Personnel_Nom_Test()
        {

        }

        public void Select_Personnel_Prenom_Test()
        {

        }

        public void Select_Personnel_Date_N_Test()
        {

        }

        public void Select_Personnel_Mail_Test()
        {


        }

        public void Select_Personnel_Ville_Test()
        {

        }

        public void Select_Personnel_Rue_Test()
        {

        }

        public void Select_Personnel_Code_Postal_Test()
        {

        }

        public void Select_Personnel_Nom_Bat_Test()
        {

        }
        public void Select_Personnel_Etage_Test()
        {

        }

        public void Select_Personnel_Sup_Id_Test()
        {

        }

        public void Select_Personnel_Role_Test()
        {

        }

        public void Select_Personnel_Date_E_Test()
        {

        }


        public void Select_Personnel_Test()
        {

        }

        public void Insert_Personnel_Test()
        {

        }

        public void Delete_Personnel_Test()
        {

        }

        public void Update_Personnel()
        {

        }


    }

    public class CL_Map_CommandeTests
    {
        public void Select_Article_ID_Test()
        {

        }

        public void Select_Article_Test()
        {

        }

        public void Insert_Article_Test()
        {

        }

        public void Delete_Article_Test()
        {

        }

        public void Update_Article_Test()
        {


        }


    }

    public class CL_Map_ContientTests
    {
        public void Insert_Contient_Test()
        {

        }

        public void Delete_Contient_Test()
        {

        }

        public void Update_Contient_Test()
        {

        }
    }

    public class CL_Map_StockTests
    {
        public void Select_Article_ID_Test()
        {

        }

        public void Select_Article_Test()
        {

        }

        public void Delete_Article_Test()
        {

        }

        public void Insert_Article_Test()
        {

        }

        public void Update_Article_Test()
        {

        }
    }




    public class CL_Map_StatistiquesTests
    {
        public void Calcul_Panier_Moyen_Test()
        {

        }

        public void Calcul_Chiffre_Affaire_Mois_Test()
        {

        }

        public void Produit_Reaprovisionnement_Test()
        {

        }

        public void Total_Achat_Client_Test()
        {

        }

        public void Article_Plus_Vendu_Test()
        {

        }

        public void Article_Moins_Vend_Test()
        {

        }

        public void Valeur_Commercial_Stock_Test()
        {

        }

        public void Valeur_Achat_Stock_Test()
        {

        }

        public void Variations_Valeurs_Commerciales_Test()
        {

        }

        public void Variations_Valeurs_Commerciales_Valeur_Test()
        {

        }

    }




}
