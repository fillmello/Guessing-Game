#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL));


  int nmrscrt, nmr, dificuldade, tentativas, min1, max1;


  printf("Bem Vindo ao JOGO DA ADVINHAÇÃO\n");
  printf("Escolha uma dificuldade.\n 1 - Fácil\n 2 - Médio\n 3 - Difícil\n");
  scanf("%d", &dificuldade);

  do{
    
    if(dificuldade == 1){
      nmrscrt = (rand() % 10) + 1 + 1;
      tentativas = 5;
      min1 = 1;
      max1 = 10;
      printf("Nesse jogo você terá que adivinhar um número secreto entre 1 e 10.\nVocê tem 5 tentativas. Boa Sorte!!!\n");
    }
    else if(dificuldade == 2){
      nmrscrt = (rand() % 50) + 1;
      tentativas = 7;
      max1 = 50;
      printf("Nesse jogo você terá que adivinhar um número secreto entre 1 e 50.\nVocê tem 7 tentativas. Boa Sorte!!!\n");
    }

    
    else if(dificuldade == 3){
      nmrscrt = (rand() % 100) + 1;
      tentativas = 10;
      printf("Nesse jogo você terá que adivinhar um número secreto entre 1 e 100.\nVocê tem 10 tentativas. Boa Sorte!!!\n");
      max1 = 100;
    }
    else{
      printf("Dificuldade Inválida\n");
  
    }  
    }while (dificuldade < 1 || dificuldade > 3);





  for (int i = 1; i <= tentativas; i++){
    if (i == tentativas){
      printf("Tentativa FINAL! \n");
      scanf("%d", &nmr);
      printf("O número secreto era %d\n", nmrscrt);
    
    
    }else {
      printf("Tentativa %d\n", i);
      scanf("%d", &nmr);
    





} if (nmr < 1 || nmr > max1){
    printf("Número Inválido\n");
    i --;
    


  

  
} else if (nmr == nmrscrt){
    printf("Parabéns! Você acertou!\n");
    break;



} else if(nmr > nmrscrt){
    printf("Que Pena. Você errou. O número que eu escolhi é menor que %d.\n",nmr);


} else if(nmr < nmrscrt){
    printf("OPS! Você errou. O número que eu escolhi é maior que %d.\n", nmr);

  


} 


    
  }





 




  return 0;



}

  





