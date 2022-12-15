CREATE PROCEDURE usp_AddSTADIUM(
	@name VARCHAR (250),
	@place VARCHAR (250),
	@direction VARCHAR (250), 
	@id INT OUT
) AS
	BEGIN
		INSERT STADIUM(name, place, direction)
		SELECT @name, @place, @direction
		SET @id = SCOPE_IDENTITY()
	END
GO
--Para poder modificar el registro
CREATE PROCEDURE usp_UpdateSTADIUM(
	@name VARCHAR (250), 
	@place VARCHAR (250),
	@direction VARCHAR (250),
	@id INT OUT
) AS
	BEGIN
		Update STADIUM 
		SET  Name=@name, Place=@place, Direction=@direction
		WHERE id=@id 
	END
GO
CREATE PROCEDURE usp_QueryDTByNameStadium(
	@value VARCHAR (250)
) AS
	SELECT * FROM STADIUM
    WHERE Name LIKE '%' + @value + '%'


DECLARE @new_id INT
EXEC dbo.usp_AddSTADIUM
			@name ='Carlos',
			@place = 'adfasdf',
			@direction = 'fdsafasdf',
			@id=@new_id OUTPUT

--SELECT * FROM ORGANIZER
--Se realiza ya le cambio de las variables
EXEC dbo.usp_UpdateSTADIUM
			@id=2,
			@name ='Renato',
			@place = 'Tapia',
			@direction = 'Copa Perú'

EXEC dbo.usp_QueryDTByNameStadium 'qu'