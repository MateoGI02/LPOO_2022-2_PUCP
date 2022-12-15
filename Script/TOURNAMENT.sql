--Para eliminar toda la tabla
--DROP TABLE TOURNAMENT

CREATE TABLE TOURNAMENT (
	id INT NOT NULL PRIMARY KEY IDENTITY (1,1),
	nameTournament VARCHAR (250) NOT NULL, 
	organizer VARCHAR (250) NOT NULL, 
	premio VARCHAR (250)  NOT NULL, 
	numteams INT  NOT NULL,
	)									

--Instruccion DML para insertar un registro (fila) a la tabla Player...
INSERT INTO TOURNAMENT(nameTournament, organizer, premio, numteams)
VALUES ('Copa PEru', 'Pedro', 'Casa','12')

--Instruccion DML para consultar todos los registros (fila) a la tabla PRODUCT_...
SELECT * FROM TOURNAMENT