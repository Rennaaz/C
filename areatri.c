#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");
	
int h, b, A;
printf ("digite a altura do tri�ngulo: ");	
scanf ("%d", &h);

printf ("digite o comprimento da base do tri�ngulo: ");
scanf("%d", &b);

A = (h*b) /2;

printf("a �rea do tri�ngulo equilatero �: %d", A);	
printf("\n");

system("pause");	
	
}
