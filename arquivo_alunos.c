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
    int op, cont = 1;


    while(cont==1){
        printf("=====================================================\n");
        printf("OPÇÕES\n");
        printf("=====================================================\n");
        printf("1 - Apresentar dados dos arquivos\n");
        printf("2 - Exibir alunos matriculados em determinada materia\n");
        printf("3 - Calcular média\n");
        printf("4 - Situação do aluno\n");
        printf("5 - Sair\n");
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
                quatro();
            break;
            case 5:
                cinco();
            break;
            default:
                cont++;
                printf("Você escolheu sair...\n");
            }

    }

return 0;
}

void um(){

     //ABRINDO E LENDO O ARQUIVO

    int id;
    char periodo[11];
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
        fscanf(arq, "%f", &n3);



    //APRESENTANDO ARQUIVO

        printf("ID: %d \n", id);
        printf("Periodo: %s \n",periodo);
        printf("Materia: %s \n",materia);
        printf("Aluno: %s \n",aluno);
        printf("Genero: %c \n",genero);
        printf("Idade: %d \n",idade);
        printf("Nota 01: %.2f \n",n1);
        printf("NOta 02: %.2f \n",n2);
        printf("Nota 03: %.2f \n\n",n3);

        sleep(1);
    }
    fclose(arq);

}
void dois(){

 //ABRINDO E LENDO O ARQUIVO

    int id;
    char periodo[11];
    char materia[50];
    char aluno[30];
    char genero;
    int idade;
    float n1;
    float n2;
    float n3;
    float media;
    char situacao;
    int op1;

    FILE *arq;

    arq = fopen("Alunos.txt", "r");

    if (arq == NULL){
        printf("Erro ao abrir o arquivo!");
        return 1;
    }


    printf("\nVisualizar alunos em tal materia\n");
    printf("=====================================================\n");
    printf("OPÇÕES\n");
    printf("=====================================================\n");
    printf("123 - INTERFACE-HOMEM-COMPUTADOR\n");
    printf("234 - PROGRAMAÇÃO-DE-COMPUTADORES\n");
    printf("345 - LABORATORIO-DE-SISTEMAS-OPERACIONAIS\n");
    printf("=====================================================\n");
    scanf("%d", &op1);

    while (fscanf(arq, "%d ", &id) != EOF){
        fscanf(arq, "%s ", &periodo);
        fscanf(arq, "%s ", &materia);
        fscanf(arq, "%s ", &aluno);
        fscanf(arq, "%c ", &genero);
        fscanf(arq, "%d ", &idade);
        fscanf(arq, "%f ", &n1);
        fscanf(arq, "%f ", &n2);
        fscanf(arq, "%f", &n3);

        if(id == op1){

        //APRESENTANDO ARQUIVO

            printf("ID: %d \n", id);
            printf("Periodo: %s \n",periodo);
            printf("Materia: %s \n",materia);
            printf("Aluno: %s \n",aluno);
            printf("Genero: %c \n",genero);
            printf("Idade: %d \n",idade);
            printf("Nota 01: %.2f \n",n1);
            printf("NOta 02: %.2f \n",n2);
            printf("Nota 03: %.2f \n\n",n3);

            sleep(1);

        }
    }

    fclose(arq);
}

void tres(){ }

void quatro(){ }

void cinco(){ }
