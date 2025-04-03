 
/*
2. Construa um programa que define um tipo novo de dados, 
para uma estrutura de um animal, deverá conter atributos 
como: raça, cor, peso e sexo.  E solicite ao usuário do 
programa 10 espécies e depois imprima em tela
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
 char raca[30], cor[30], sexo;
 float peso;
}Animal;

Animal inserir(void);

void lista(Animal a[], int n);

int main (void){
 Animal bd[10];
 int indice=0, opcao;
 
 do{
  system("cls");
  printf("1 - Inserir\n");
  printf("2 - Lista\n");
  printf("3 - Sair\n");
  printf("\nDigite um opcao: ");
  scanf("%i",&opcao);
  
  switch(opcao){
   case 1:
    if(indice <10){
     bd[indice]=inserir();
     indice++;
     printf("Dados inserido no espaco %i\n",indice);
    }else{
     printf("Lista ja esta cheia\n");
    }
    break;
   case 2:
    lista(bd,indice);
    break;
   case 3:
    break;
   default:
    printf("Erro! Nao tem esta opcao\n");
  }
  system("pause");
 }while(opcao!=3);
 
 return 0;
}

Animal inserir(void){
 Animal a;
 
 fflush(stdin);
 printf("Digite a raca: ");
 gets(a.raca);
 fflush(stdin);
 printf("Digite a cor: ");
 gets(a.cor);
 fflush(stdin);
 printf("Digite o sexo (f/m): ");
 scanf("%c",&a.sexo);
 fflush(stdin);
 printf("Digite o peso: ");
 scanf("%f",&a.peso);
 fflush(stdin);
 return a;
}
void lista(Animal a[], int n){
 system("cls");
 printf("RACA\tCOR\tSEXO\tPESO\n\n");
 for(int i=0;i<n;i++){
  printf("%s\t%s\t%c\t%.1f\n",a[i].raca,a[i].cor,a[i].sexo,a[i].peso);
 }
}
 