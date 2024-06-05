#include <stdio.h>

//Dichiarazione funzione
void operazioni(int a,int b, int scelta);

int main()
{
    //Dichiarazione variabili
    int opzione, val1, val2;
    
    //Ciclo do-while per ripetere il programma
    do {
        //Menu di selezione
        printf("Calcolattrice\n");
        printf("1 - Somma\n");
        printf("2 - Sottrazione\n");
        printf("3 - Moltiplicazione\n");
        printf("4 - Divisione\n");
        printf("5 - Media\n");
        printf("6 - Modulo\n");
        printf("7 - Esci\n");
    
        //Inserimento opzione
        printf("Quale operazione vuoi eseguire? ");
        scanf("%d", &opzione);

        //Pulizia schermo
        system("cls");
    
        //Controllo opzione
        if (0 < opzione && opzione < 7){

        //Inserimento valori con controllo opzione
        printf("Inserisci il primo valore: ");
        scanf("%d", &val1);
        printf("Inserisci il secondo valore: ");
        scanf("%d", &val2);
        }

        //Funzione per switch
        operazioni(val1,val2,opzione);
         
        //In attesa di input con succesiva pulizia dello schermo
        getch();
        system("cls");
    } while(opzione != 7);
    
    return 0;
}

//Definizione funzione
void operazioni(int a, int b, int scelta)
{

    switch(scelta){
            //SOMMA
            case 1:{
                printf("\nLa somma tra %d e %d e': %d",a, b, a+b);
            }    
            break;
            //SOTTRAZIONE
            case 2:{
                printf("\nLa sottrazione tra %d e %d e': %d",a, b, a-b);
            }    
            break;
            //MOLTIPLICAZIONE
            case 3:{
                printf("\nLa moltiplicazione tra %d e %d e': %d",a, b, a*b);
            }    
            break;
            //DIVISIONE
            case 4:{
                //Controllo denominatore uguale a 0
                if(b == 0)
                    printf("\nOperazione impossibile.");
                else printf("\nLa divisione tra %d e %d e': %.2f",a, b, (float) a/b);
            }    
            break;
            //MEDIA
            case 5:{
                printf("\nLa media tra  %d e %d e': %.2f",a, b, (a+b)/2.0);  
            }
            break;
            //MODULO
            case 6:{
                printf("\nIl modulo tra  %d e %d e': %d",a, b, a%b);  
            }
            break;
            //EXIT
            case 7:{
                printf("Grazie per aver scelto il nostro software.");  
            }
            break;
            //Se l'opzione è fuori dal range di scelta
            default: {
                printf("\nOpzione inesistente. Perfavore inserisci un valore compreso tra 1 e 6. Grazie.");
            }           
        }
}