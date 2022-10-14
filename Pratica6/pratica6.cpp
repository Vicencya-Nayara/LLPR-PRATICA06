#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int idade , estudante;
	printf ("Desconto do ingressso do cinema para ser ímpar\n\n");
	
	printf ("Digite sua idade: ");
	scanf ("%d", &idade);
	
	printf ("Digite sua idade: ");
	scanf ("%d", &estudante);
	
	if ((idade %2==1) || (estudante %2==1))
	
	{
	printf ("DESCONTO");
	}
	
	return 0;
}
