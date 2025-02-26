#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

 

  

  srand(time(NULL));


  int nmrscrt = (rand() % 10) + 1, nmr;


  printf("Bem Vindo ao JOGO DA ADVINHAÇÃO\nNesse jogo você terá que adivinhar um número secreto entre 1 e 10.\nBoa Sorte!!!\n");
  scanf("%d", &nmr);


  if (nmr < 0 || nmr > 10){
  
    printf("Número Inválido\n");}



  else if (nmr == nmrscrt){
  printf("Parabéns! Você acertou!\n");}

  else if(nmr > nmrscrt){
  printf("Que Pena. Você errou. O número que eu escolhi é menor que %d.\n",nmr);
  }

  else if(nmr < nmrscrt){
    printf("OPS! Você errou. O número que eu escolhi é maior que %d.\n", nmr);
  }
  

  

  return 0;

  
}



