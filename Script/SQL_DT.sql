CREATE PROCEDURE usp_AddDT(
	@docNumber VARCHAR (250), 
	@name VARCHAR (250),
	@surname VARCHAR (250),
	@experience INT, 
	@id INT OUT
) AS
	BEGIN
		INSERT DT (docnumber, name, surname, experience)
		SELECT @docNumber, @name, @surname, @experience
		SET @id = SCOPE_IDENTITY()
	END
GO
--Para poder modificar el registro
CREATE PROCEDURE usp_UpdateDT(
	@docNumber VARCHAR (250), 
	@name VARCHAR (250),
	@surname VARCHAR (250),
	@experience INT, 
	@id INT OUT
) AS
	BEGIN
		Update DT 
		SET DocNumber=@docNumber, Name=@name, Surname=@surname, experience=@experience
		WHERE id=@id 
	END
GO
CREATE PROCEDURE usp_QueryDTByDocNumber(
	@value VARCHAR (250)
) AS
	SELECT * FROM DT
    WHERE DocNumber LIKE '%' + @value + '%'


DECLARE @new_id INT
EXEC dbo.usp_AddDT
			@docNumber ='2123456',
			@name ='Carlos',
			@surname = 'Ascues',
			@yearexp = '15',
			@id=@new_id OUTPUT

--SELECT * FROM DT
--Se realiza ya le cambio de las variables
EXEC dbo.usp_UpdateDT
			@id=2,
			@docNumber ='3456987',
			@name ='Reanto',
			@surname = 'Tapia',
			@yearexp = '7'

EXEC dbo.usp_QueryDTByDocNumber 'qu'

CREATE PROCEDURE dbo.usp_QueryAllDT
AS
	SELECT *
	FROM DT
--	INNER JOIN PREMISE P ON S.id = P.id
--	INNER JOIN EMPLOYEE E ON S.store_manager_id = E.id
--	INNER JOIN PERSON PE ON E.id = PE.id
--	INNER JOIN DISTRICT D ON P.district_id = D.id
	ORDER BY id
GO
CREATE PROCEDURE dbo.usp_QueryDTById (
	@id INT
)
AS
	SELECT id as id, D.docNumber as doc_number, D.name as name, D.surname as surname, D.experience as experience
	FROM DT D
	WHERE id = @id

GO
----------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------Stadium-------------------------------------------------------------------
CREATE PROCEDURE dbo.usp_QueryAllStadium
AS
	SELECT *
	FROM STADIUM
--	INNER JOIN PREMISE P ON S.id = P.id
--	INNER JOIN EMPLOYEE E ON S.store_manager_id = E.id
--	INNER JOIN PERSON PE ON E.id = PE.id
--	INNER JOIN DISTRICT D ON P.district_id = D.id
	ORDER BY id
GO
CREATE PROCEDURE dbo.usp_QueryStadiumById (
	@id INT
)
AS
	SELECT*
	FROM STADIUM 
	WHERE id = @id
----------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------Organizer-------------------------------------------------------------------
CREATE PROCEDURE dbo.usp_QueryAllOrganizer
AS
	SELECT *
	FROM Organizer
--	INNER JOIN PREMISE P ON S.id = P.id
--	INNER JOIN EMPLOYEE E ON S.store_manager_id = E.id
--	INNER JOIN PERSON PE ON E.id = PE.id
--	INNER JOIN DISTRICT D ON P.district_id = D.id
	ORDER BY id
GO
CREATE PROCEDURE dbo.usp_QueryOrganizerById (
	@id INT
)
AS
	SELECT*
	FROM Organizer 
	WHERE id = @id
----------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------Referee-------------------------------------------------------------------
CREATE PROCEDURE dbo.usp_QueryAllReferee
AS
	SELECT *
	FROM REFEREE
--	INNER JOIN PREMISE P ON S.id = P.id
--	INNER JOIN EMPLOYEE E ON S.store_manager_id = E.id
--	INNER JOIN PERSON PE ON E.id = PE.id
--	INNER JOIN DISTRICT D ON P.district_id = D.id
	ORDER BY id
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryRefereeById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].usp_QueryRefereeById
END
GO
CREATE PROCEDURE dbo.usp_QueryRefereeById (
	@id INT
)
AS
	SELECT*
	FROM REFEREE 
	WHERE id = @id