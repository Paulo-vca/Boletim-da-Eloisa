// IFMS - TADS
// Eloisa e Paulo
/*MODELO TABELA EXIBIÇÃO:
PERIODO MATERIA	ALUNO	GENERO	IDADE	N1	N2	N3	MEDIA	SITUAÇÃO*/


// Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

// Declaração

void um();
void dois();
void tres();
void quatro();



int main(){
    //adaptação
    setlocale(LC_ALL, "Portuguese");
    //Declaração das variaveis
    int op, cont = 1;

    //laço de reptição 
    // Selecionar uma opção
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

        //escolha - para chamar a função
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
                //sair do laço
                 cont++;
            break;
            default:
                //Alternativa digitada nao verdadeira 
                printf("Você digitou uma opção invalida!\n");
            }

    }

return 0;
}

void um(){
    //linpar tela
    system("clear");

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
    //leitura do arquivo
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

    system("clear");
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

    system("clear");

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

    system("clear");

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
            printf("Nota 01: %.2f \n",n1);
            printf("NOta 02: %.2f \n",n2);
            printf("Nota 03: %.2f \n",n3);
            printf("Média: %.2f \n", media);
            printf("Situação: Reprovado\n\n");

            arqS = fopen("saidaArqui.txt", "a");
                if (arqS == NULL){
                    printf("Erro ao abrir o arquivo!\n");
                    return 1;
                }

                //adicionando no arquivo
                fprintf(arqS, "%d ", id);
                fprintf(arqS, "%s ", periodo);
                fprintf(arqS, "%s ", materia);
                fprintf(arqS, "%s ", aluno);
                fprintf(arqS, "%.2f ", n1);
                fprintf(arqS, "%.2f ", n2);
                fprintf(arqS, "%.2f ", n3);
                fprintf(arqS, "%.2f ", media);



            sleep(1);
        }
        else{
            printf("ID: %d \n", id);
            printf("Periodo: %s \n",periodo);
            printf("Materia: %s \n",materia);
            printf("Aluno: %s \n",aluno);
            printf("Nota 01: %.2f \n",n1);
            printf("NOta 02: %.2f \n",n2);
            printf("Nota 03: %.2f \n",n3);
            printf("Média: %.2f \n", media);
            printf("Situação: Aprovado\n\n");

            arqS = fopen("saidaArqui.txt", "a");
                if (arqS == NULL){
                    printf("Erro ao abrir o arquivo!\n");
                    return 1;
                }


                fprintf(arqS, "%d ", id);
                fprintf(arqS, "%s ", periodo);
                fprintf(arqS, "%s ", materia);
                fprintf(arqS, "%s ", aluno);
                fprintf(arqS, "%.2f ", n1);
                fprintf(arqS, "%.2f ", n2);
                fprintf(arqS, "%.2f ", n3);
                fprintf(arqS, "%.2f \n", media);

                fclose(arqS);


        }

    }



}
//fechando arquivo
fclose(arq);