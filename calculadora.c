#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");

double numUm, numDois, cdg;

printf("Quer uma calculadora? Então aqui esta! Vamos começar com algumas regrinhas...\n");
printf("caso queira somar, digite 1.\n");
printf("caso queira subtrair, digite 2 \n");
printf("caso queira multiplicar, digite 3 \n");
printf("caso queira dividir, digite 4 \n");
scanf("%f", &cdg);

if (cdg = 1){(numUm + numDois);}
if (cdg = 2) {(numUm - numDois);}
if (cdg = 3) {(numUm * numDois);}
if (cdg = 4) {(numUm / numDois);}

printf("digite dois números: ");
scanf("%f %f", &numUm, &numDois);

printf("sua operação resultou em: %f", cdg);

system("pausa");
	
	
}
