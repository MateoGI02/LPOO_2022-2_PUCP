--Para eliminar toda la tabla
--DROP TABLE DT

CREATE TABLE DT (
	id INT NOT NULL PRIMARY KEY IDENTITY (1,1),
	docNumber VARCHAR (250) NOT NULL,
	name VARCHAR (250) NOT NULL,
	surname VARCHAR (250)  NOT NULL,
	experience INT  NOT NULL,
	)

--Instruccion DML para insertar un registro (fila) a la tabla Player...
INSERT INTO DT(docNumber, name, surname, experience)
VALUES ('123456', 'Pedro', 'Palomino','10')

--Instruccion DML para consultar todos los registros (fila) a la tabla PRODUCT_...
SELECT * FROM DT