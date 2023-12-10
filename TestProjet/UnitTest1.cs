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
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client_Id();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Id"), "La requête doit contenir SELECT et Id.");
        }
        public void Select_Client_Nom_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client_Nom();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Nom"), "La requête doit contenir SELECT et Nom.");
        }

        public void Select_Client_Prenom_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client_Prenom();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Prenom"), "La requête doit contenir SELECT et Prenom.");
        }

        public void Select_Client_Date_N_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client_Date_N();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Date_N"), "La requête doit contenir SELECT et Date_N.");
        }

        public void Select_Client_Mail_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client_Mail();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Mail"), "La requête doit contenir SELECT et Mail.");
        }

        public void Select_Client_Ville_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client_Ville();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Ville"), "La requête doit contenir SELECT et Ville.");
        }

        public void Select_Client_Rue_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client_Rue();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Rue"), "La requête doit contenir SELECT et Rue.");
        }

        public void Select_Client_Code_Postal_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client_Code_Postal();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Code_Postal"), "La requête doit contenir SELECT et Code_Postal.");
        }

        public void Select_Client_Nom_Bat_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client_Bat();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Bat"), "La requête doit contenir SELECT et Bat.");
        }

        public void Select_Client_Etage_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client_Etage();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Etage"), "La requête doit contenir SELECT et Etage.");
        }

        public void Select_Client_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Select_Client();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT"), "La requête doit contenir SELECT.");
        }

        public void Insert_Client_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Insert_Client();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("INSERT"), "La requête doit contenir INSERT.");
        }

        public void Delete_Client_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Delete_Client();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("DELETE"), "La requête doit contenir DELETE.");
        }

        public void Update_Client_Test()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // Perso ça m'affiche des erreurs

            string query = test.Update_Client();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("UPDATE"), "La requête doit contenir UPDATE.");
        }
            
    }

    public class CL_Map_PersonnelTests
    {






    }

    public class CL_Map_CommandeTests
    {

    }


    public class CL_Map_StockTests
    {

    }


    public class CL_Map_StatistiquesTests
    {

    }


}
