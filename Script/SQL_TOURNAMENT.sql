CREATE PROCEDURE usp_AddTOURNAMENT(
	@nameTournament VARCHAR (250),
	@organizer VARCHAR (250),
	@premio VARCHAR (250), 
	@numteams INT,
	@id INT OUT
) AS
	BEGIN
		INSERT TOURNAMENT(nameTournament, organizer, premio, numteams)
		SELECT @nameTournament, @organizer, @premio, @numteams
		SET @id = SCOPE_IDENTITY()
	END
GO
--Para poder modificar el registro
CREATE PROCEDURE usp_UpdateTOURNAMENT(
	@nameTournament VARCHAR (250),
	@organizer VARCHAR (250),
	@premio VARCHAR (250), 
	@numteams INT,
	@id INT OUT
) AS
	BEGIN
		Update TOURNAMENT 
		SET  NameTournament=@nameTournament, Organizer=@organizer, Premio=@premio, numteams=@numteams
		WHERE id=@id 
	END
GO
CREATE PROCEDURE usp_QueryDTByNameTournament(
	@value VARCHAR (250)
) AS
	SELECT * FROM TOURNAMENT
    WHERE NameTournament LIKE '%' + @value + '%'


DECLARE @new_id INT
EXEC dbo.usp_AddTOURNAMENT
			@nameTournament ='Carlos',
			@organizer = 'adfasdf',
			@premio = 'fdsafasdf',
			@numteams= '8',
			@id=@new_id OUTPUT

--SELECT * FROM TOURNAMENT
--Se realiza ya le cambio de las variables
EXEC dbo.usp_UpdateTOURNAMENT
			@id=2,
			@nameTournament ='Carlos',
			@organizer = 'adfasdf',
			@premio = 'fdsafasdf',
			@numteams= '8'

EXEC dbo.usp_QueryDTByNameTournament 'qu'