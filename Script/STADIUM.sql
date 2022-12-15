--Para eliminar toda la tabla
--DROP TABLE STADIUM

CREATE TABLE STADIUM (
	id INT NOT NULL PRIMARY KEY IDENTITY (1,1),
	name VARCHAR (250) NOT NULL,
	place VARCHAR (250) NOT NULL,
	direction VARCHAR (250)  NOT NULL
	)

--Instruccion DML para insertar un registro (fila) a la tabla Player...
INSERT INTO STADIUM(name, place, direction)
VALUES ('Bernabeu', 'Madrid', 'asdasdasd')

--Instruccion DML para consultar todos los registros (fila) a la tabla PRODUCT_...
SELECT * FROM STADIUM