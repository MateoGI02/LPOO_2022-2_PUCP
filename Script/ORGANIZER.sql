--Para eliminar toda la tabla
--DROP TABLE ORGANIZER

CREATE TABLE ORGANIZER (
	id INT NOT NULL PRIMARY KEY IDENTITY (1,1),
	docNumber VARCHAR (250) NOT NULL,
	name VARCHAR (250) NOT NULL,
	surname VARCHAR (250)  NOT NULL,
	username VARCHAR (250)  NOT NULL,
	)

--Instruccion DML para insertar un registro (fila) a la tabla Player...
INSERT INTO ORGANIZER(docNumber, name, surname, username)
VALUES ('123456', 'Pedro', 'Palomino','P.Palomino')

--Instruccion DML para consultar todos los registros (fila) a la tabla PRODUCT_...
SELECT * FROM ORGANIZER