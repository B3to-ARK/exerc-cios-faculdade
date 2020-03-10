INSERT INTO professor (nome, titulacao)
VALUES ('Manoel', 'Dr');

INSERT INTO professor (nome, titulacao)
VALUES ('Tavares', 'Dr');

INSERT INTO disciplina (nome, carga)
VALUES ('Algoritmos', 60);

INSERT INTO disciplina (nome, carga)
VALUES ('Redes', 60);

INSERT INTO aluno (nome, curso, IDprofessor)
VALUES ('Paulo', 'CC', 1);

INSERT INTO aluno (nome, curso, IDprofessor)
VALUES ('Manoel', 'Redes', 1);

INSERT INTO aluno (nome, curso, IDprofessor)
VALUES ('Pedro', 'CC', 1);

INSERT INTO aluno (nome, curso, IDprofessor)
VALUES ('Maria', 'Redes', 2);

INSERT INTO alunodisciplina (IDaluno, IDdisciplina)
VALUES (1, 1);	

INSERT INTO alunodisciplina (IDaluno, IDdisciplina)
VALUES (1, 2);	

INSERT INTO alunodisciplina (IDaluno, IDdisciplina)
VALUES (2, 2);

INSERT INTO alunodisciplina (IDaluno, IDdisciplina)
VALUES (3, 1);