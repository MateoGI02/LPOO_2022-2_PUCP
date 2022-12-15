CREATE PROCEDURE usp_AddORGANIZER(
	@docNumber VARCHAR (250), 
	@name VARCHAR (250),
	@surname VARCHAR (250),
	@username VARCHAR (250), 
	@id INT OUT
) AS
	BEGIN
		INSERT ORGANIZER (docnumber, name, surname, username)
		SELECT @docNumber, @name, @surname, @username
		SET @id = SCOPE_IDENTITY()
	END
GO
--Para poder modificar el registro
CREATE PROCEDURE usp_UpdateORGANIZER(
	@docNumber VARCHAR (250), 
	@name VARCHAR (250),
	@surname VARCHAR (250),
	@username VARCHAR (250), 
	@id INT OUT
) AS
	BEGIN
		Update ORGANIZER 
		SET DocNumber=@docNumber, Name=@name, Surname=@surname, Username=@username
		WHERE id=@id 
	END
GO
CREATE PROCEDURE usp_QueryDTByDocNumberOrganizer(
	@value VARCHAR (250)
) AS
	SELECT * FROM ORGANIZER
    WHERE DocNumber LIKE '%' + @value + '%'


DECLARE @new_id INT
EXEC dbo.usp_AddORGANIZER
			@docNumber ='2123456',
			@name ='Carlos',
			@surname = 'Ascues',
			@username = 'C.Ascues',
			@id=@new_id OUTPUT

--SELECT * FROM ORGANIZER
--Se realiza ya le cambio de las variables
EXEC dbo.usp_UpdateORGANIZER
			@id=2,
			@docNumber ='3456987',
			@name ='Renato',
			@surname = 'Tapia',
			@username = 'R.Tap'

EXEC dbo.usp_QueryDTByDocNumberOrganizer 'qu'