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



int main(){
    setlocale(LC_ALL, "Portuguese");
    int op, cont = 1;


    while(cont==1){
        printf("=====================================================\n");
        printf("\t\tTABELA DE EXIBIÇÃO\n");
        printf("=====================================================\n");
        printf("1 - Apresentar arquivo dos alunos\n");
        printf("2 - Exibir alunos matriculados em determinada materia\n");
        printf("3 - Média dos alunos em determinada materia\n");
        printf("4 - Situação dos alunos\n");
        printf("5 - Sair\n");
        printf("=====================================================\n");

        printf("Digite sua opção: ");
        scanf("%d", &op);
        printf("=====================================================\n\n");


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
                 cont++;
            break;
            default:
                printf("Você digitou uma opção invalida!\n");
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

    printf("\t\t--- ARQUIVO ---\n\n");

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



    printf("\t  --- UNIDADES CURRICULARES ---\n\n");
    printf("123 - INTERFACE-HOMEM-COMPUTADOR\n");
    printf("234 - PROGRAMAÇÃO-DE-COMPUTADORES\n");
    printf("345 - LABORATORIO-DE-SISTEMAS-OPERACIONAIS\n");
    printf("=====================================================\n");

    printf("Digite o código da unidade curricular: ");
    scanf("%d", &op1);
    printf("=====================================================\n\n");

    printf("\t--- UNIDADE CURRICULAR - %d ---\n\n",op1);


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

void tres(){

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

        media=(n1+n2+n3)/3;

        //APRESENTANDO ARQUIVO

            printf("ID: %d \n", id);
            printf("Periodo: %s \n",periodo);
            printf("Materia: %s \n",materia);
            printf("Aluno: %s \n",aluno);
            //printf("Genero: %c \n",genero);
            //printf("Idade: %d \n",idade);
            printf("Nota 01: %.2f \n",n1);
            printf("NOta 02: %.2f \n",n2);
            printf("Nota 03: %.2f \n",n3);
            printf("Média: %.2f \n\n", media);

            sleep(1);

        }
    }

    fclose(arq);


void quatro(){

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


    FILE *arq, *arqS;

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

        media=(n1+n2+n3)/3;
        if(media<7){

            printf("ID: %d \n", id);
            printf("Periodo: %s \n",periodo);
            printf("Materia: %s \n",materia);
            printf("Aluno: %s \n",aluno);
            //printf("Genero: %c \n",genero);
            //printf("Idade: %d \n",idade);
            printf("Nota 01: %.2f \n",n1);
            printf("NOta 02: %.2f \n",n2);
            printf("Nota 03: %.2f \n",n3);
            printf("Média: %.2f \n", media);
            printf("Situação: Reprovado\n\n");
            //fprintf(arq, "%.2f\n", media);
            //printf("Situação: Reprovado\n\n");

            sleep(1);
        }
        else{
            printf("ID: %d \n", id);
            printf("Periodo: %s \n",periodo);
            printf("Materia: %s \n",materia);
            printf("Aluno: %s \n",aluno);
            //printf("Genero: %c \n",genero);
            //printf("Idade: %d \n",idade);
            printf("Nota 01: %.2f \n",n1);
            printf("NOta 02: %.2f \n",n2);
            printf("Nota 03: %.2f \n",n3);
            printf("Média: %.2f \n", media);
            printf("Situação: Aprovado\n\n");
            //\fprintf(arq, " %.2f\n", media);

        }

    }

            arqS = fopen("saidaArquivo.txt", "a");
                if (arqS == NULL){
                    printf("Erro ao abrir o arquivo!\n");
                    return 1;
                }

                fprintf(arqS, "%d ", &id);
                fprintf(arqS, "%s ", &periodo);
                fprintf(arqS, "%s ", &materia);
                fprintf(arqS, "%s ", &aluno);
                fprintf(arqS, "%c ", &genero);
                fprintf(arqS, "%d ", &idade);
                fprintf(arqS, "%f ", &n1);
                fprintf(arqS, "%f ", &n2);
                fprintf(arqS, "%f ", &n3);
                fprintf(arqS, "%f", &media);

                fclose(arqS);

}

    fclose(arq);
