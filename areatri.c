#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");
	
int h, b, A;
printf ("digite a altura do triângulo: ");	
scanf ("%d", &h);

printf ("digite o comprimento da base do triângulo: ");
scanf("%d", &b);

A = (h*b) /2;

printf("a área do triângulo equilatero é: %d", A);	
printf("\n");

system("pause");	
	
}
