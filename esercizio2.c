#include <stdio.h>

int main()

{
	int a, b, c;
	float media;

	printf("inserisci il primo numero:\n");
	scanf("%d", &a);
	printf("inserisci il secondo numero:\n");
        scanf("%d", &b);
	printf("inserisci il terzo numero:\n");
        scanf("%d", &c);

	media=(float)(a+b+c)/3;
	printf("la media è:", media)

return 0;

}
