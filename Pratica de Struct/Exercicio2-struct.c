#include <stdio.h>

typedef struct {

    int matricula;
    float nota;

} aluno;

int main () {

    //Fazer um for simples comparando as notas dos alunos;

    aluno aluno_matematica[2];
    int contador_aprovado = 0;
    int contador_reprovado = 0;

    for (int i = 0; i < 2; i ++) {

        printf ("Digite o numero da matricula do aluno: \n");
        scanf ("%d", &aluno_matematica[i].matricula);

        printf ("Digite a nota do aluno de matematica: \n");
        scanf ("%f", &aluno_matematica[i].nota);

        printf ("\n");
    }

    for (int j = 0; j < 2; j++) {

        if (aluno_matematica[j].nota < 6) {

            printf ("Numero da matricula: %d\n", aluno_matematica[j].matricula);
            printf ("O aluno não passou na materia!\n");
            printf ("Nota: %.2f\n", aluno_matematica[j].nota);
            contador_reprovado++;

            printf ("\n");
        }

        else {

            printf ("Numero da matricula: %d\n", aluno_matematica[j].matricula);
            printf ("O aluno passou na materia!\n");
            printf ("Nota: %.2f\n", aluno_matematica[j].nota);
            contador_aprovado++;

            printf ("\n");
        }
    }

    printf ("Numero de aprovados: %d\n", contador_aprovado);
    printf ("Numero de reprovados: %d\n", contador_reprovado);

    return 0;
}