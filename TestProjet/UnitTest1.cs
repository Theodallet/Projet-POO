using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using System.Data;
using System.Transactions;


namespace VotreNamespaceDeTest
{
    [TestClass]


    public class CL_services_PersonnelTests
    {
        [TestMethod]
        public void Insert_Personnel_Test()
        {

            CL_Map_Personnel Test = new CL_Map_Personnel();

            string Nom = "Brunel";
            string Prenom = "Florian";
            string Mail = "florian.brunel@viacesi.fr";
            DateTime DatedeNaissance = new DateTime(2004, 2, 18);
            string Ville = "Fresles";
            string Rue = "833 Route de Pommereval";
            string CodePostal = "76270";
            string NomBat = "";
            int Etage = 0;
            DateTime DateEmbauche = new DateTime(2023, 12, 10);
            string Role = "Directeur";
            int IDSup = 36;

            var production = Test.ajouter_Personel(Nom, Prenom, Mail, DatedeNaissance, Ville, Rue, CodePostal, NomBat, Etage, DateEmbauche, Role, IDSup);

            var result = Test.Select_Personnel();

            Assert.AreEqual(1, result[0]);
            Assert.AreEqual("Brunel", result[1]);
            Assert.AreEqual("Florian", result[2]);
            Assert.AreEqual(new DateTime(2004, 2, 18), result[3]);
            Assert.AreEqual("florian.brunel@viacesi.fr", result[4]);
            Assert.AreEqual(1, result[5]);
            Assert.AreEqual("Fresles", result[6]);
            Assert.AreEqual("833 Route de Pommereval", result[7]);
            Assert.AreEqual("76270", result[8]);
            Assert.AreEqual("", result[9]);
            Assert.AreEqual("", result[10]);
            Assert.AreEqual(new DateTime(2023, 12, 10), result[11]);
            Assert.AreEqual("Directeur", result[12]);
            Assert.AreEqual(36, result[13]);
        }
    }
}