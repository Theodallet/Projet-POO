USE [Projet_POO]
GO
/****** Object:  StoredProcedure [dbo].[Delete_Client]    Script Date: 11/12/2023 20:14:09 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

CREATE PROC Delete_Client
@Id_Inde int
AS 
	delete from Client where Id_Ind = @Id_Inde
	delete from Individu where Id_Ind = @Id_Inde
	delete from Adresse where Id_Adr = @Id_Inde
	
	







