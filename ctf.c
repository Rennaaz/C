#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");
	
int c;
double f;

printf ("digite a temperatrura em °C: ");
scanf ("%d", &c);

f =(c * 1.8)+ 32;

printf ("esta fazendo %f F°", f);
printf ("\n");

if (f>0){ printf("temperatura positiva");
} else { printf("temperatura negativa");}
	
	
}
