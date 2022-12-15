--Para eliminar toda la tabla
--DROP TABLE REFEREE

CREATE TABLE REFEREE (
	id INT NOT NULL PRIMARY KEY IDENTITY (1,1),
	docnumber  VARCHAR(250), 
	name VARCHAR (250) NOT NULL,
	surname VARCHAR (250) NOT NULL,
	tournament VARCHAR (250)  NOT NULL
	)

--Instruccion DML para insertar un registro (fila) a la tabla Player...
INSERT INTO REFEREE(docnumber, name,surname, tournament)
VALUES ('123456', 'Paulo', 'Caceres', 'Copa peru')

--Instruccion DML para consultar todos los registros (fila) a la tabla PRODUCT_...
SELECT * FROM REFEREE