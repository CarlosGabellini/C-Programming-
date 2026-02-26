#include <stdio.h>

struct aluno {

    int matricula;
    float nota;
};

/*Aqui somente é um exercicio simples de struct onde basicamente estou tentando construir um sistema de aluno onde tem a matricula e a sua nota, é 
muito simples e somente aqui eu tento aprender struct*/

int main () {

    struct aluno Alunos;

    printf ("Digite a matricula do aluno: \n");
    scanf ("%d", &Alunos.matricula);
    printf ("Digite a nota do aluno: \n");
    scanf ("%f", &Alunos.nota);

    printf ("\n");

    printf ("Matricula: %d\n", Alunos.matricula);
    printf ("Nota: %.2f\n", Alunos.nota);

    printf ("\n");

    if (Alunos.nota < 6) {

        printf ("O Rafael está reprovado!\n");
    }

    else {

        printf ("O Rafael passou na materia!\n");
    }

    return 0;
}
