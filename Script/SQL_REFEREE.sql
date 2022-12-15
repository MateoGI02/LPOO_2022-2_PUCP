CREATE PROCEDURE usp_AddREFEREE(
	@docNumber VARCHAR (250), 
	@name VARCHAR (250),
	@surname VARCHAR (250),
	@tournament VARCHAR (250), 
	@id INT OUT
) AS
	BEGIN
		INSERT REFEREE(docnumber, name, surname, tournament)
		SELECT @docNumber, @name, @surname, @tournament
		SET @id = SCOPE_IDENTITY()
	END
GO
--Para poder modificar el registro
CREATE PROCEDURE usp_UpdateREFEREE(
	@docNumber VARCHAR (250), 
	@name VARCHAR (250),
	@surname VARCHAR (250),
	@tournament VARCHAR (250), 
	@id INT OUT
) AS
	BEGIN
		Update REFEREE 
		SET DocNumber=@docNumber, Name=@name, Surname=@surname, Tournament=@tournament
		WHERE id=@id 
	END
GO
CREATE PROCEDURE usp_QueryDTByDocNumberReferee(
	@value VARCHAR (250)
) AS
	SELECT * FROM REFEREE
    WHERE DocNumber LIKE '%' + @value + '%'


DECLARE @new_id INT
EXEC dbo.usp_AddREFEREE
			@docNumber ='2123456',
			@name ='Carlos',
			@surname = 'Ascues',
			@tournament = 'Copa Perú',
			@id=@new_id OUTPUT

--SELECT * FROM ORGANIZER
--Se realiza ya le cambio de las variables
EXEC dbo.usp_UpdateREFEREE
			@id=2,
			@docNumber ='3456987',
			@name ='Renato',
			@surname = 'Tapia',
			@tournament = 'Copa Perú'

EXEC dbo.usp_QueryDTByDocNumberReferee 'qu'