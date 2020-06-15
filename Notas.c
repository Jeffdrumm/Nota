#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct Lista{
  int tamanho;
  float elementos[5];
  };
typedef struct Lista Lista;

//fun��es

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, cont, notas10, n = 0;
  int a = 0;
  double medianotasn1;
  double n1;
  double nota10 = 10;
    printf("@@@@@@@@@@@@@@@@@\n");
	printf(" A5 de Engenharia");
	printf("\n@@@@@@@@@@@@@@@@@@@");
	printf("\n Integrantes: \n Yuri Brito de Paula \n Amanda Ribeiro \n Edlanilson Cruz \n Jeferson Almeida \n Pedro H Valasques\n");    
  printf("\nDigite a quantidade de alunos: ");
  scanf("%d",&n);

  Lista** listaAluno = malloc(sizeof(Lista*)*n);
  
  for(i=0; i<n; i++){ // n repeti��es para os n alunos
    printf("\nDigite o valor das notas para o aluno %d:",(i+1));
    float A1,A2,A3,A4,A5;
    printf("\nA1: ");
    scanf("%f",&A1);
    printf("A2: ");
    scanf("%f",&A2);
    printf("A3: ");
    scanf("%f",&A3);
    printf("A4: ");
    scanf("%f",&A4);
    printf("A5: ");
    scanf("%f",&A5);
    listaAluno[i] = malloc(sizeof(Lista)); // aloca uma lista
    listaAluno[i]->elementos[0] = A1;
    listaAluno[i]->elementos[1] = A2;
    listaAluno[i]->elementos[2] = A3;
    listaAluno[i]->elementos[3] = A4;
    listaAluno[i]->elementos[4] = A5;
  }
  
	// Calculo da M�dia da N1 dos Alunos...
    for(i=0; i<n; i++){
	n1 = listaAluno[i]->elementos[0]+listaAluno[i]->elementos[1]+listaAluno[i]->elementos[2];
	medianotasn1 = n1/3;
	printf ("\n A M�DIA DA NOTA DO ALUNO %d �:  %.1f\t",i, medianotasn1);	
	n1 = 0;
	medianotasn1 = 0;
	}
	cont=0;
	//Calculo de quantos Alunos tiraram 10 na N1...
	for(i=0; i<n; i++){
	n1 = listaAluno[i]->elementos[0]+listaAluno[i]->elementos[1]+listaAluno[i]->elementos[2];
	medianotasn1 = n1/3;
			if (medianotasn1==nota10){
			cont++;
			}
	n1 = 0;
	medianotasn1 = 0;
	}
	
	// Verifica se possui Alunos que tiraram 10 na N1 e os imprimi...
	if (cont>0){
		printf ("\n\n A QUANTIDADE DE ALUNOS QUE TIRARAM NOTA 10 NA N1 �: %d \n\n", cont);	
	}else{
		printf ("\n\n NENHUM ALUNO TIROU NOTA 10 NA N1 \n\n,");
	}
system ("pause");
  
// Qual a m�dia das notas dos alunos na N1?				
// Quantos alunos ficaram com nota 10 na N1?

}