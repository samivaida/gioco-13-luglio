#include <stdio.h>
#include <stlib.h>
int main(void)
{
	int a ; //numero inserito

	/*legge il numero*/

	printf("Inserisci un numero");
	scanf("%d", &a);

	/*verifica se il numero è positivo o negativo*/

	if(a >= 0)
	{
		/*numero è positivo o nullo*/
		printf("il numero %d è positivo\n", a);
	}
	else
	{

		/*in numero è negativo*/
		printf("il numero &d è negativo\n",a);
	}
	exit(0) ;
}
