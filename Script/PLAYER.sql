CREATE TABLE PLAYER (
	id INT NOT NULL PRIMARY KEY IDENTITY (1,1),
	number  Int NOT NULL,
	name VARCHAR (250) NOT NULL,
	surname VARCHAR (250) NOT NULL,
	footballTeams VARCHAR (250)  NOT NULL
	)

--Instruccion DML para insertar un registro (fila) a la tabla Player...
INSERT INTO PLAYER(number, name, surname, footballteams)
VALUES ('1', 'Cristiano', 'Ronaldo', 'Real Madrid')

--Instruccion DML para consultar todos los registros (fila) a la tabla PRODUCT_...
SELECT * FROM PLAYER