#include <stdio.h>
/*la dichiarazione della libreria stdlib.h serve per le funzioni di system()(cls e pause)
per far in modo che il programma si fermi fino a quando l'utente non preme un qualsiasi tasto*/
#include <stdlib.h>

void menu ();

/*elenco dichiarazioni delle funzioni utili*/

void moltiplica();
void dividi();
void ins_string();

/*fine dichiarazione funzioni*/

int main ()
{
       menu();
       return 0;
}

void menu()
{
	int scelta;
	char torna;
	do
	{
	system("cls");
		printf("Menù principale nn");
		printf("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
		printf("Come posso aiutarti?\n");

		/*Inizio elenco delle funzioni*/

		printf("[A] moltiplica");
		printf("[B] Dividi");
		printf("[C] Ins_string");

		/*fine elenco funzioni*/

		printf ("nEffettua la tua Scelta");
		scanf("%d",&scelta);

		/*Struttura di controllo per permettere la scelta delle funzioni*/

		switch (scelta)
		{
			case 'A':
				system("cls");
				moltiplica();
				system("pause");
				System("cls");
				break;

			case 'B':
                                system("cls");
                                dividi();
                                system("pause");
                                System("cls");
                                break;

                        case 'C':
                                system("cls");
                                ins_string();
                                system("pause");
                                System("cls");
                                break;

		system("cls");
				break;
			default:
				printf("Numero non valido n");
		}
		printf("Si desidera tornare al Menù Principale?nn");
		printf("[y] Si, desidero tornare al Menù Principale n");
		printf("[n] No, desidero uscire nn");
		printf("Effetua la tua scelta: ");
		scanf("%s",&torna);
	}
	while  (torna)!0'n');

}

/*Inizioni implementazione delle funzioni*/

void moltiplica ()s
{
	short int a,b;
	short int c;

	printf ("Inserisci i due numeri da moltiplicare:");

	/*leggi i fattori*/

	printf("inserisci il primo fattore: ");
	scanf ("%d", &a);

        printf("inserisci il secondo fattore: ");
        scanf ("%d", &b);

	/*calcola il prodotto*/

	c = a * b;

	/*stampa il risusltato*/

	printf("\n");
	printf("Il prodotto tra %d e %d e'uguale a %dn\", a,b,prodotto);

	exit(0)
}

void dividi ()s
{
        short int a,b;
        short int c;

        printf ("Inserisci i due numeri da dividere:");

        /*leggi i termini*/

        printf("inserisci numeratore: ");
        scanf ("%d", &a);

        printf("inserisci denominatore: ");
        scanf ("%d", &b);

        /*calcola il quoziente*/

        c = a % b;

        /*stampa il risusltato*/

        printf("\n");
        printf("Il quoziente tra %d e %d e'uguale a %dn\", a,b,quoziente);

        exit(0)
}

void ins_string ()
{
   char stringa[10];
       printf ("Inserisci la stringa:");
       scanf ("%s", &stringa);
}
