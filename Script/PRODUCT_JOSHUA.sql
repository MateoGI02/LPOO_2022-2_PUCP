--Instrucción DML para crear una tabla que permite almacenar los productos del sistema.
CREATE TABLE PRODUCT_JOSHUA (
	id INT NOT NULL PRIMARY KEY IDENTITY (1,1),
	NameTeam VARCHAR (250) NOT NULL,
	DT VARCHAR (250) NOT NULL,
	Tournament VARCHAR (250) NOT NULL,
	numplayers int  NOT NULL,
	photo IMAGE NULL
	)
--Sirve para cambiar valores dentro de la tabla, si es que ya existen datos
GO
ALTER TABLE PRODUCT_JOSHUA ALTER COLUMN

--Instruccion DML para insertar un registro (fila) a la tabla PRODUCT_...
INSERT INTO PRODUCT_JOSHUA(NameTeam, DT,Tournament, numplayers)
VALUES ('Alianza Lima', 'Simeone', 'Copa Perú', '20')

--Instruccion DML para consultar todos los registros (fila) a la tabla PRODUCT_...
SELECT * FROM PRODUCT_JOSHUA

--Instruccion DML para modificar un registro (fila) a la tabla PRODUCT_...
UPDATE PRODUCT_JOSHUA
SET Tournament = 'Copa Santander'
WHERE id=1

--Instruccion DML para eliminar un registro (fila) a la tabla PRODUCT_...
DELETE PRODUCT_JOSHUA
WHERE Tournament= 'Copa Perú'