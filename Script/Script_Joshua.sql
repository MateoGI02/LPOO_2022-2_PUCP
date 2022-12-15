CREATE PROCEDURE usp_AddProduct(
	@NameTeam VARCHAR (250), 
	@DT VARCHAR (250),
	@Tournament VARCHAR (250),
	@numplayers int, 
	@photo IMAGE,
	@id INT OUT
) AS
	BEGIN
		INSERT PRODUCT_JOSHUA (NameTeam, DT, Tournament, numplayers, photo)
		SELECT @NameTeam, @DT, @Tournament, @numplayers, @photo
		SET @id = SCOPE_IDENTITY()

	END
GO
--Para poder modificar el registro
CREATE PROCEDURE usp_UpdateProduct(
	@NameTeam VARCHAR (250), 
	@DT VARCHAR (250),
	@Tournament VARCHAR (250),
	@numplayers int, 
	@photo IMAGE,
	@id INT OUT
) AS
	BEGIN
		Update PRODUCT_JOSHUA 
		SET NameTeam=@NameTeam, DT=@DT, Tournament=@Tournament, numplayers=@numplayers, photo=@photo
		WHERE id=@id 
	END
GO
CREATE PROCEDURE usp_QueryProductByNameTeam(
	@value VARCHAR (250)
) AS
	SELECT * FROM PRODUCT_JOSHUA
    WHERE NameTeam LIKE '%' + @value + '%'


DECLARE @new_id INT
EXEC dbo.usp_AddProduct 
			@NameTeam ='BOYS',
			@DT ='Zidane',
			@Tournament = 'Copa del rey',
			@numplayers = '25',
			@photo = NULL,
			@id=@new_id OUTPUT

--SELECT * FROM PRODUCT_JOSHUA
--Se realiza ya le cambio de las variables
EXEC dbo.usp_UpdateProduct
			@id=2,
			@NameTeam ='BOYS',
			@DT ='Zidane',
			@Tournament = 'Copa del rey',
			@numplayers = '25',
			@photo = NULL

EXEC dbo.usp_QueryProductByNameTeam 'qu'