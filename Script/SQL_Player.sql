CREATE PROCEDURE usp_AddPlayer(
	@number INT, 
	@name VARCHAR (250),
	@surname VARCHAR (250),
	@footballTeams VARCHAR (250), 
	@id INT OUT
) AS
	BEGIN
		INSERT PLAYER (number, name, surname, footballTeams)
		SELECT @number, @name, @surname, @footballTeams
		SET @id = SCOPE_IDENTITY()
	END
GO
--Para poder modificar el registro
CREATE PROCEDURE usp_UpdatePlayer(
	@number INT, 
	@name VARCHAR (250),
	@surname VARCHAR (250),
	@footballTeams VARCHAR (250), 
	@id INT OUT
) AS
	BEGIN
		Update PLAYER 
		SET Number=@number, Name=@name, Surname=@surname, footballteams=@footballTeams
		WHERE id=@id 
	END
GO
CREATE PROCEDURE usp_QueryPlayerByNumber(
	@value VARCHAR (250)
) AS
	SELECT * FROM PLAYER
    WHERE Number LIKE '%' + @value + '%'


DECLARE @new_id INT
EXEC dbo.usp_AddPlayer
			@number ='2',
			@name ='Carlos',
			@surname = 'Ascues',
			@footballTeams = 'Cristal',
			@id=@new_id OUTPUT

--SELECT * FROM PLAYER
--Se realiza ya le cambio de las variables
EXEC dbo.usp_UpdatePlayer
			@id=2,
			@number ='3',
			@name ='Reanto',
			@surname = 'Tapia',
			@footballTeams = 'Barcelona'

EXEC dbo.usp_QueryPlayerByNumber 'qu'