#include<stdio.h>
#include<locale.h>
main(){
	setlocale (LC_ALL, "Portuguese");
	
	int r;
	float cir;

	printf ("digite o comprimento do raio: ");
	scanf ("%d", &r);
	
	cir = 3.14 * (r * r);
	
	printf ("a área do circulo corresponde a: %f", cir);
	printf("\n");
	
	system("pause");
	
}
