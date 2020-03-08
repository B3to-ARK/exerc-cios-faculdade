SELECT aluno.nome as nome_aluno, professor.nome as nome_professor, disciplina.nome as nome_disciplina
FROM professor
JOIN aluno 
join disciplina 
join alunodisciplina 
on aluno.IDaluno=alunodisciplina.IDaluno 
and disciplina.IDdisciplina=alunodisciplina.IDdisciplina
and professor.nome='Manoel';