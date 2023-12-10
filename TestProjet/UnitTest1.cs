using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;

using NS_Comp_Mappage;




namespace VotreNamespaceDeTest // Remplacez ceci par votre propre namespace de tests
{
    [TestClass]
    public class CL_Map_ClientTests
    {
        [TestMethod]
        public void Select_Client_Id_Should_Return_Valid_SQL_Query()
        {
            NS_Comp_Mappage.CL_Map_Client test = NS_Comp_Mappage.CL_Map_Client;    // ????? C'est en public ????

            string query = test.Select_Client_Id();

            Assert.IsFalse(string.IsNullOrEmpty(query), "La requête SQL ne devrait pas être vide.");
            Assert.IsTrue(query.Contains("SELECT") && query.Contains("Id"), "La requête doit contenir SELECT et Id.");
        }
    }
}