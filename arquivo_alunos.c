/*MODELO TABELA EXIBIÇÃO:

PERIODO MATERIA	ALUNO	GENERO	IDADE	N1	N2	N3	MEDIA	SITUAÇÃO*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

void um();
void dois();
void tres();
void quatro();
void cinco();

int main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int op;

    //ABRINDO E LENDO O ARQUIVO

    int id;
    char periodo[10];
    char materia[50];
    char aluno[30];
    char genero;
    int idade;
    float n1;
    float n2;
    float n3;
    float media;
    char situacao;

    FILE *arq;

    arq = fopen("Alunos.txt", "r");

    if (arq == NULL){
        printf("Erro ao abrir o arquivo!");
        return 1;
    }


    while (fscanf(arq, "%d ", &id) != EOF){
        fscanf(arq, "%s ", &periodo);
        fscanf(arq, "%s ", &materia);
        fscanf(arq, "%s ", &aluno);
        fscanf(arq, "%c ", &genero);
        fscanf(arq, "%d ", &idade);
        fscanf(arq, "%f ", &n1);
        fscanf(arq, "%f ", &n2);
        fscanf(arq, "%f ", &n3);
    }

    fclose(arq);

    do{
        printf("=====================================================\n");
        printf("OPÇÕES\n");
        printf("=====================================================\n");
        printf("1 - Apresentar dados dos arquivos\n");
        printf("2 - Realizar matricula de aluno\n");
        printf("3 - Lançar notas\n");
        printf("4 - Calcular média\n");
        printf("5 - Situação do aluno\n");
        printf("6 - Sair\n");
        printf("=====================================================\n");
        scanf("%d", &op);

        switch(op){

            case 1:
                um();
            break;
            
            case 2:
                dois();
            break;

            case 3:
                tres();
            break;

            case 4:
                quatro;
            break;
            case 5:
                cinco;
            break;
            default:
                printf("Você escolheu sair...\n");
        }

    }while(op >= 1 && op <= 5);

return 0;
}

void um(){ }
void dois(){ }
void tres(){ }
void quatro(){ }
void cinco(){ }