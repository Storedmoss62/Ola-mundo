#include <stdio.h>

void main ()
{
	float n1, n2;
	
	printf("Por favor, insira o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Insira o segundo numero: ");
	scanf("%f", &n2);

	if(n1>n2){printf("O maior numero e : %f",n1);
	}
	if(n2>n1){printf("O maior numero e: %f",n2);
	}
	
	if(n1==n2){printf("Os dois numeros sao iguais");
	}
}

