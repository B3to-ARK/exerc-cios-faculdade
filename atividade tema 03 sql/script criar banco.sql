CREATE database tema03;

USE tema03;

CREATE TABLE IF NOT EXISTS professor (
    IDprofessor INT AUTO_INCREMENT,
    nome VARCHAR(255) NOT NULL,
    titulacao VARCHAR(255) NOT NULL, 
    PRIMARY KEY (IDprofessor)
);

CREATE TABLE IF NOT EXISTS aluno (
    IDaluno INT AUTO_INCREMENT,
    IDprofessor INT,
    nome VARCHAR(255) NOT NULL,
    curso VARCHAR(255) NOT NULL,
    PRIMARY KEY (IDaluno),
    FOREIGN KEY (IDprofessor)
        REFERENCES professor (IDprofessor)
);

CREATE TABLE IF NOT EXISTS disciplina (
    IDdisciplina INT AUTO_INCREMENT,
    nome VARCHAR(255) NOT NULL,
    carga int NOT NULL,
    PRIMARY KEY (IDdisciplina)
);

CREATE TABLE IF NOT EXISTS alunoDisciplina (
    IDalunoDisciplina INT AUTO_INCREMENT,
    IDaluno INT,
    IDdisciplina INT,
    PRIMARY KEY (IDalunoDisciplina),
    FOREIGN KEY (IDaluno)
        REFERENCES aluno (IDaluno)
        ON UPDATE RESTRICT ON DELETE CASCADE,
        FOREIGN KEY (IDdisciplina)
        REFERENCES disciplina (IDdisciplina)
        ON UPDATE RESTRICT ON DELETE CASCADE
);