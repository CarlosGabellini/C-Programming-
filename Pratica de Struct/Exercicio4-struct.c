#include <stdio.h>

typedef struct {

    int matricula;
    float notas[3];
    float media;

} alunos;

int main () {

    /*  Crie uma struct Aluno com:

    int matricula; float notas[3]; float media;

    Para 5 alunos:

    Leia as 3 notas; Calcule a média;

    Determine:

    Aprovado (média ≥ 6); Reprovado;

    Mostre no final:

    A média de cada aluno;
    Quantos foram aprovados;
    A maior média da turma;

    Esse exercício é essencial. Aqui o uso de struct começa a ficar natural.*/

    alunos aluno[5];                    //Declarando a struct que quero trabalhar aqui;
    float acumulador = 0;
    int controle = 0;
    int contador_aprovados = 0;
    float maior_media = 0;

    for (int i = 0; i < 5; i++) {

        printf ("Digite a matricula do aluno: \n");
        scanf ("%d", &aluno[i].matricula);

        for (int j = 0; j < 3; j++) {

            printf ("Digite as notas do aluno neste campo: \n");
            scanf ("%f", &aluno[i].notas[j]);

            acumulador += aluno[i].notas[j];
        }

        aluno[i].media = acumulador / 3;

        acumulador = 0;
    }

    maior_media = aluno[0].media;     //Inicializando a variavel aqui para comparar a maior media antes de entrar no while;

    //Agora fazer um while simples para mostrar a nota dos 3 alunos;

    while (controle < 5) {

        if (aluno[controle].media >= 6) {

            printf ("Aluno APROVADO!\n");
            printf ("Matricula do aluno: %d\n", aluno[controle].matricula);
            printf ("Media do aluno:%.2f\n\n", aluno[controle].media);

            contador_aprovados++;
        }

        else {

            printf ("Aluno REPROVADO!\n");
            printf ("Matricula do aluno: %d\n", aluno[controle].matricula);
            printf ("Media do aluno:%.2f\n\n", aluno[controle].media);
        }

        if (maior_media < aluno[controle].media) {

            maior_media = aluno[controle].media;
        }

        controle++;
    }

    printf ("A maior media da sala foi: %.2f\n", maior_media);
    printf ("Foram %d aprovados!\n", contador_aprovados);

    return 0;
}