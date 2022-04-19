#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nota1, nota2, nota3, nota4, nota5, media;
	
	printf("digite nota1: \n");
	scanf("%d", &nota1);
	
	printf("digite nota2: \n");
	scanf("%d", &nota2);
	
	printf("digite nota3: \n");
	scanf("%d", &nota3);
	
	printf("digite nota4: \n");
	scanf("%d", &nota4);
	
	printf("digite nota5: \n");
	scanf("%d", &nota5);
	
	media = (nota1 + nota2 + nota3 + nota4 +nota5) / 5;
	
	printf("o valor da media é: %d", media );
	printf("\n");
	
	if (media>6){
	printf ("aprovado");} 
	else { printf ("reprovado");}
	
	printf("\n");
	
	system("pause");
	
}

