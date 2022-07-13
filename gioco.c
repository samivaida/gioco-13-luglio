/*inclusione delle librerie*/
#include <stdio.h>
#include <stdlib.h>

/*Inizio della funzione main*/

int conta=0, x=0, 
{

/*dichiarazione delle variabili*/

    int scelta; x;
    char utente[21];
    int conta=0; x=0; z=0;

/*Presentazione del gioco*/   

    printf("\nBella rega\n")
    printf("\nchi non sbaglia vince\n");

/*inizio del while*/
    do
    {
    printf("\nSelezionare l\'opzione A per iniziare la partita\n")
    printf("\nSelezionare l\'opzione B per uscire dal gioco\n")

    scanf("%d", &scelta);

/*Utilizzo della switch*/

    switch(scelta)
    {
        case 1:
        printf("nScegliere il nome dell\'utente:\n")
        scanf("%s", &utente);

        printf("\nDi che colore è il cavallo bianco di Napoleone?'\n");
        printf("\n1)Verde acqua\n");
        printf("\n2)Fedez\n");
        printf("\n3)Blanco\n");
        scanf("%d" , &x);
        if(x='3')
        {
            conta++
        }
         
        printf("\nIl marito lo dava alla moglie, Il papa ce l'ha ma non lo usa, alle suore non serve, Nicola ce l'ha piu lungo di Samuel'\n");
        printf("\n1)il Potere\n");
        printf("\n2)Il cognome\n");
        printf("\n3)il codice\n");
        scanf("%d" , &x);
        if(x='3')
        {
            conta++
        }

        printf("\nUno piu Uno uomo non fa?'\n");
        printf("\n1)Tre\n");
        printf("\n2)Sei\n");
        printf("\n3)Nove\n");
        scanf("%d" , &x);
        if(x='3')
        {
            conta++
        }

        printf("\nIL punteggio di %s e\' %d" , utente, conta);
        break;
        case 2;
        break;
    }
    }while(scelta '1');
    return 0;
}