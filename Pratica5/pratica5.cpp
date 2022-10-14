#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int idade , estudante;
	printf ("Desconto do ingressso do cinema para ser par \n\n");
	
	printf ("Digite sua idade: ");
	scanf ("%d", &idade);
	
	printf ("Digite sua idade: ");
	scanf ("%d", &estudante);
	
	if (idade %2==0) 
	
	{
	printf ("DESCONTO");
	}
	
	return 0;
}
