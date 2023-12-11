using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;





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

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);


        }
        public void Select_Client_Nom_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            String^ NomIDTest = "Brunel";
            var result = Test.Select_Client_Nom(NomIDTest);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

        }

        public void Select_Client_Prenom_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            String^ PrenomIDTest = "Florian";
            var result = Test.Select_Client_Prenom(PrenomIDTest);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

        }

        public void Select_Client_Date_N_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int DateTest = 18 / 02 / 2004;
            var result = Test.Select_Client_Date_N(DateTest);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

        }

        public void Select_Client_Mail_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int MailTest = "florian.brunel@viacesi.fr";
            var result = Test.Select_Client_Mail(MailTest);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

        }

        public void Select_Client_Ville_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            string VilleTest = "Fresles";
            var result = Test.Select_Client_Ville(VilleTest);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

        }

        public void Select_Client_Rue_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            string RueTest = "833 Route de Pommereval";
            var result = Test.Select_Client_Rue(RueTest);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

        }

        public void Select_Client_Code_Postal_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            string CPTest = "76270";
            var result = Test.Select_Client_Code_Postal(CPTest);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

        }

        public void Select_Client_Nom_Bat_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            string BatTest = "";
            var result = Test.Select_Nom_Bat(BatTest);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

        }

        public void Select_Client_Etage_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            string EtageTest = "";
            var result = Test.Select_Client_Etage(EtageTest);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

        }

        public void Select_Client_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            var result = Test.Select_Client();

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

        }

        public void Insert_Client_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            String Nom = "Brunel";
            String Prenom = "Florian";
            String Mail = "florian.brunel@viacesi.fr";
            DateTime DatedeNaissance = 18 / 02 / 2004;
            String Ville = "Fresles";
            String Rue = "833 Route de Pommereval";
            String CodePostal = "76270";
            String NomBat = "";
            String Etage = "";

            var production = Test.Insert_Client(Nom, Prenom, Mail, DatedeNaissance, Ville, Rue, CodePostal, NomBat, Etage);

            var result = Test.Select_Client();

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

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


        }

        public void Update_Client_Test()
        {
            CL_Map_ClientTests Test = new CL_Map_Client();

            int IdAUpdate = 1;

            String Nom = "Laine";
            String Prenom = "Tom";
            String Mail = "tom.laine@viacesi.fr";
            DateTime DatedeNaissance = 18 / 02 / 2004 10:00:00;
            String Ville = "Fecamp";
            String Rue = "1 route perdue";
            String CodePostal = "76999";
            String NomBat = "";
            String Etage = "";

            var production = Test.Update_Client(IdAUpdate, Nom, Prenom, Mail, DatedeNaissance, Ville, Rue, CodePostal, NomBat, Etage);

            var result = Test.Select_Client();

            Assert.AreEqual(2, result[0]);
            Assert.AreEqual("Laine", result[1]);
            Assert.AreEqual("Tom", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("tom.laine@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fecamp", result[6]);
            Assert.AreEqual("1 route perdue", result[7]);
            Assert.AreEqual(76999, result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
        }

    }

    public class CL_Map_PersonnelTests
    {
        public void Select_Personnel_ID_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            int PersonnelIDTest = 1;
            var result = Test.Select_Personnel_ID(PersonnelIDTest);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Select_Personnel_Nom_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string PersonnelNom = "Brunel";
            var result = Test.Select_Personnel_Nom(PersonnelNom);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Select_Personnel_Prenom_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string TestVal = "Prenom";
            var result = Test.Select_Personnel_Prenom(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Select_Personnel_Date_N_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            DateTime TestVal = 18 / 02 / 2004 10:00:00;
            var result = Test.Select_Personnel_Date_N(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Select_Personnel_Mail_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string TestVal = "florian.brunel@viacesi.fr";
            var result = Test.Select_Personnel_Mail(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);

        }

        public void Select_Personnel_Ville_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string TestVal = "Fresles";
            var result = Test.Select_Personnel_Ville(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Select_Personnel_Rue_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string TestVal = "833 Route de Pommereval";
            var result = Test.Select_Personnel_Rue(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Select_Personnel_Code_Postal_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string TestVal = "76270";
            var result = Test.Select_Code_Postal(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Select_Personnel_Nom_Bat_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string TestVal = "";
            var result = Test.Select_Personnel_Nom_Bat(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }
        public void Select_Personnel_Etage_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string TestVal = "";
            var result = Test.Select_Personnel_Etage(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Select_Personnel_Sup_Id_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string TestVal = 36;
            var result = Test.Select_Personnel_Sup_Id(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Select_Personnel_Role_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string TestVal = "Directeur";
            var result = Test.Select_Personnel_Role(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Select_Personnel_Date_E_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            string TestVal = 10 / 12 / 2023;
            var result = Test.Select_Personel_Date_E(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual("", result[11]);
            Assert.AreEqual("10/12/2023", result[12]);
            Assert.AreEqual("Directeur", result[13]);
            Assert.AreEqual(36, result[14]);
        }


        public void Select_Personnel_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();


            var result = Test.Select_Personnel(TestVal);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual("10/12/2023", result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Insert_Personnel_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            String Nom = "Brunel";
            String Prenom = "Florian";
            String Mail = "florian.brunel@viacesi.fr";
            DateTime DatedeNaissance = 18 - 02 - 2004;
            String Ville = "Fresles";
            String Rue = "833 Route de Pommereval";
            String CodePostal = "76270";
            String NomBat = "";
            String Etage = "";

            DateTime DateEmbauche = 10 / 12 / 2023;
            String Role = "Directeur";
            int IDSup = 36;




            var production = Test.Insert_Personnel(Nom, Prenom, Mail, DatedeNaissance, Ville, Rue, CodePostal, NomBat, Etage, DateEmbauche, Role, IDSup);

            var result = Test.Select_Personnel();

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);

            Assert.AreEqual(10 / 12 / 2023, result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }

        public void Delete_Personnel_Test()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            int IdASupp = 1;

            var Suppression = Test.Delete_Personnel(IdASupp);

            var result = Test.Select_Personnel(); // On vérifie la suppression grâce à l'affichage à l'id sélectionné et on vérifie que tout est vide


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
            Assert.AreEqual("", result[12]);
            Assert.AreEqual("", result[13]);
        }

        public void Update_Personnel()
        {
            CL_Map_PersonnelTests Test = new CL_Map_Personnel();

            int IdAUpdate = 1;

            String Nom = "Laine";
            String Prenom = "Tom";
            String Mail = "tom.laine@viacesi.fr";
            DateTime DatedeNaissance = 18 / 02 / 2004 10:00:00;
            String Ville = "Fecamp";
            String Rue = "1 route perdue";
            String CodePostal = "76999";
            String NomBat = "";
            String Etage = "";

            DateTime DateEmbauche = 25 / 12 / 2023;
            String Role = "Technicien de surface";
            int IDSUPP = 1;

            var production = Test.Update_Personnel(IdAUpdate, Nom, Prenom, Mail, DatedeNaissance, Ville, Rue, CodePostal, NomBat, Etage, DateEmbauche, Role, IDSUPP);

            var result = Test.Select_Personnel();

            Assert.AreEqual(2, result[0]);
            Assert.AreEqual("Laine", result[1]);
            Assert.AreEqual("Tom", result[2]);
            Assert.AreEqual(18 / 02 / 2004, result[3]);
            Assert.AreEqual("tom.laine@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fecamp", result[6]);
            Assert.AreEqual("1 route perdue", result[7]);
            Assert.AreEqual(76999, result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual(25 / 12 / 2023, result[11]);
            Assert.AreEqual("Technicien de surface", result[12]);
            Assert.AreEqual(1, result[13]);
        }
    }

    public class CL_Map_CommandeTests
    {
        public void Select_Commande_Test()
        {
            CL_Map_CommandeTests Test = new CL_Map_Commande();

            var result = Test.Select_Commande();

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("FLBR23FRE1", result[1]);
            Assert.AreEqual(11 / 12 / 2023, result[2]);
            Assert.AreEqual(10 / 12 / 2023, result[3]);
            Assert.AreEqual(15, result[4]);
            Assert.AreEqual(17, result[5]);
            Assert.AreEqual(2, result[6]);
            Assert.AreEqual("Paypal", result[7]);

            Assert.AreEqual(1, result[8]);
            Assert.AreEqual("Adresse Florian", result[9]);

            Assert.AreEqual(1, result[10]);
            Assert.AreEqual(15, result[11]);

        }

        public void Select_Commande_Id_Test()
        {
            CL_Map_CommandeTests Test = new CL_Map_Commande();

            int IdSelect = 1;

            var result = Test.Select_Commande_Id(IdSelect);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("FLBR23FRE1", result[1]);
            Assert.AreEqual(11 / 12 / 2023, result[2]);
            Assert.AreEqual(10 / 12 / 2023, result[3]);
            Assert.AreEqual(15, result[4]);
            Assert.AreEqual(17, result[5]);
            Assert.AreEqual(2, result[6]);
            Assert.AreEqual("Paypal", result[7]);

            Assert.AreEqual(1, result[8]);
            Assert.AreEqual("Adresse Florian", result[9]);

            Assert.AreEqual(1, result[10]);
            Assert.AreEqual(15, result[11]);
        }

        public void Insert_Commande_Test()
        {
            CL_Map_CommandeTests Test = new CL_Map_Commande();


            int IdCom = 1;
            String RefCom = "FLBR23FRE1";
            DateTime DateLiv = 11 / 12 / 2023;
            DateTime DateEmi = 10 / 12 / 2023;
            float TotalHT = 15;
            float TotalTTC = 17;
            float TotalTVA = 2;
            String MoyenPaiement = "Paypal";

            int IdAdr = 1;
            String AdresseLiv = "Adresse Florian";

            int IdArt = 1;
            int Quantite = 15;


            var result = Test.Select_Commande(IdCom, RefCom, DateLiv, DateEmi, TotalHT, TotalTTC, TotalTVA, MoyenPaiement, IdAdr, AdresseLiv, IdArt, Quantite);

            Assert.AreEqual(2, result[0]);
            Assert.AreEqual("FLBR23FRE1", result[1]);
            Assert.AreEqual(11 / 12 / 2023, result[2]);
            Assert.AreEqual(10 / 12 / 2023, result[3]);
            Assert.AreEqual(15, result[4]);
            Assert.AreEqual(17, result[5]);
            Assert.AreEqual(2, result[6]);
            Assert.AreEqual("Paypal", result[7]);

            Assert.AreEqual(1, result[8]);
            Assert.AreEqual("Adresse Florian", result[9]);

            Assert.AreEqual(1, result[10]);
            Assert.AreEqual(15, result[11]);
        }

        public void Delete_Commande_Test()
        {
            CL_Map_CommandeTests Test = new CL_Map_Commande();

            int IDSupp = 1;

            var engine = Test.Delete_Commande(IDSupp);
            var result = Test.Select_Commande_Id(IDSupp);

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

        public void Update_Commande_Test()
        {
            CL_Map_CommandeTests Test = new CL_Map_Commande();


            int IdCom = 1;
            String RefCom = "TOLA23FRE1";
            DateTime DateLiv = 10 / 12 / 2023;
            DateTime DateEmi = 12 / 12 / 2023;
            float TotalHT = 10;
            float TotalTTC = 12;
            float TotalTVA = 2;
            String MoyenPaiement = "CB";

            int IdAdr = 1;
            String AdresseLiv = "Adresse Tom";

            int IdArt = 1;
            int Quantite = 15;

            var engine = Test.Update_Commande(IdCom, RefCom, DateLiv, DateEmi, TotalHT, TotalTTC, TotalTVA, MoyenPaiement, IdAdr, AdresseLiv, IdArt, Quantite);

            var result = Test.Select_Commande_Id(IdCom);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("TOLA23FRE1", result[1]);
            Assert.AreEqual(10 / 12 / 2023, result[2]);
            Assert.AreEqual(12 / 12 / 2023, result[3]);
            Assert.AreEqual(10, result[4]);
            Assert.AreEqual(12, result[5]);
            Assert.AreEqual(2, result[6]);
            Assert.AreEqual("CB", result[7]);

            Assert.AreEqual(1, result[8]);
            Assert.AreEqual("Adresse Tom", result[9]);

            Assert.AreEqual(1, result[10]);
            Assert.AreEqual(, result[11]);
        }

        public void Update_Total_Commande_Test()
        {
            // ?
        }



    }

    public class CL_Map_ContientTests
    {
        public void Insert_Contient_Test()
        {
            CL_Map_ContientTests Test = new CL_Map_Contient();

            int IDArt = 1;
            int IDComm = 1;
            int Quantite = 1;

            var production = Test.Insert_Contient(IDArt, IDComm, Quantite);
            var result = Test.Select_Contient();

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual(1, result[1]);
            Assert.AreEqual(1, result[2]);

        }

        public void Delete_Contient_Test()
        {
            CL_Map_ContientTests Test = new CL_Map_Contient();

            int IDArt = 1;
            int IDComm = 1;


            var production = Test.Delete_Contient(IDArt, IDComm);
            var result = Test.Select_Contient();


            Assert.AreEqual("", result[0]);
            Assert.AreEqual("", result[1]);
            Assert.AreEqual("", result[2]);


        }

        public void Update_Contient_Test()
        {
            CL_Map_ContientTests Test = new CL_Map_Contient();

            int IDArt = 1;
            int IDComm = 1;
            int Quantite = 5;


            var production = Test.Update_Contient(IDArt, IDComm, Quantite);
            var result = Test.Select_Contient();


            Assert.AreEqual(1, result[0]);
            Assert.AreEqual(1, result[1]);
            Assert.AreEqual(5, result[2]);
        }
    }

    public class CL_Map_StockTests
    {
        public void Select_Article_ID_Test()
        {
            CL_Map_StockTests Test = new CL_Map_Stock();

            int Id = 1;


            var result = Test.Select_Article_ID(Id);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual(15, result[1]);
            Assert.AreEqual("Arduino UNO", result[2]);
            Assert.AreEqual("Vert", result[3]);
            Assert.AreEqual(5, result[4]);
            Assert.AreEqual(20, result[5]);


        }

        public void Select_Article_Test()
        {
            CL_Map_StockTests Test = new CL_Map_Stock();

            var result = Test.Select_Article();

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual(15, result[1]);
            Assert.AreEqual("Arduino UNO", result[2]);
            Assert.AreEqual("Vert", result[3]);
            Assert.AreEqual(5, result[4]);
            Assert.AreEqual(20, result[5]);
        }

        public void Insert_Article_Test()
        {
            CL_Map_StockTests Test = new CL_Map_Stock();

            int IDArt = 1;
            float Prix = 15;
            String Nom = "Arduino UNO";
            String Couleur = "Vert";
            int Stock = 5;
            float TVA = 20;

            var result = Test.Insert_Article(IDArt, Prix, Nom, Couleur, Stock, TVA);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual(15, result[1]);
            Assert.AreEqual("Arduino UNO", result[2]);
            Assert.AreEqual("Vert", result[3]);
            Assert.AreEqual(5, result[4]);
            Assert.AreEqual(20, result[5]);
        }

        public void Delete_Article_Test()
        {
            CL_Map_StockTests Test = new CL_Map_Stock();

            int IDSup = 1;

            var result = Test.Delete_Article(IDSup);

            Assert.AreEqual("", result[0]);
            Assert.AreEqual("", result[1]);
            Assert.AreEqual("", result[2]);
            Assert.AreEqual("", result[3]);
            Assert.AreEqual("", result[4]);
            Assert.AreEqual("", result[5]);
        }

        public void Update_Article_Test()
        {
            CL_Map_StockTests Test = new CL_Map_Stock();

            int IDArt = 1;
            float Prix = 20;
            String Nom = "Arduino MEGA";
            String Couleur = "Noir";
            int Stock = 5;
            float TVA = 20;

            var result = Test.Update_Article(IDArt, Prix, Nom, Couleur, Stock, TVA);

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual(20, result[1]);
            Assert.AreEqual("Arduino MEGA", result[2]);
            Assert.AreEqual("Noir", result[3]);
            Assert.AreEqual(5, result[4]);
            Assert.AreEqual(20, result[5]);

        }
    }



    /*
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

    */


}
