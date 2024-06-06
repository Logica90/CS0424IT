#include<stdio.h>
#include<string.h>
#define MAX 20 //Valore massimo del nome

int sessione(char player[MAX]);
int nuova_domanda(int next_question);

int main(){

    //scelta: serve per memorizzare la scelta utente. 
    //nome: contiene il nome utente con un limite dettato da MAX
    //punteggio: punteggio giocatore
    char opzione, nome[MAX];
    int punteggio;
    
    //ciclo do-while per ripetere il gioco fino a quando l'utente non decida di uscire
    do{
        //Menu
        printf("Quiz\n");
        printf("A - Nuova partita\n");
        printf("B - Uscire dal gioco\n");
        printf("Scelta: ");
    
        //Input Utente. 
        scanf("%c",&opzione);
        getchar();                  //il comando mi serve per togliere lo '\n' che altrimenti finirebbe dentro fgets
        opzione = toupper(opzione);   //uppercase della scelta

        //Pulizia schermo
        system("cls");

        //Controllo input
        if(opzione == 'A'){
            //Inserimento nome. 
            printf("Inserisci nome: ");
            fgets(nome, MAX, stdin);            //fgets evita di avere overflows tring
            nome[strcspn(nome, "\n")] = '\0';   //tramite questo comando elimino lo '\n'
            system("cls");
            punteggio = sessione(nome);         //chiamata funzione sessione
            printf("\nIl punteggio finale di %s e' %d: ",nome, punteggio);
            getch();
        }
        else{
            if(opzione == 'B')
                printf("Arrivederci.");
            else                                //Se nessuna delle opzioni è valida
                printf("Opzione inesistente.");
            getch();
            }
        system("cls");
    }while(opzione != 'B');
    
    return 0;
}

int sessione(char player[MAX]){
    int score = 0, n_domande = 3, i;
    char scelta, answer;
    for(i=0;i<n_domande;i++){
        printf("Nome: %s Punteggio: %d", player, score);
        answer = nuova_domanda(i+1);
        printf("Risposta: ");
        scanf("%c",&scelta);
        scelta = toupper(scelta);
        if(scelta == answer){
            printf("\nRisposta coretta!");
            score++;
            getch();
        }
        else{
            printf("\nRispsota sbagliata.");
            getch();
        }
        getchar();
        system("cls");
    }
    return score;
}

int nuova_domanda(int next_question){

    char risposta;
    switch(next_question){
        case 1:{
            printf("\nIn quale SO Windows e' stata introdotta la PowerShell?\nA - Windows 7\nB - Windows 10\nC - Windows Vista\n");
            risposta = 'A';
        }
        break;
        
        case 2:{
            printf("\nQuali di questi non e' un Firewall?\nA - WAF 7\nB - PROXY\nC - Shell\n");
            risposta = 'C';
        }
        break;

        case 3:{
            printf("\nA quale classe appartiene l'IP 169.254.42.16?\nA - Classe C\nB - Classe B\nC - Classe A\n");
            risposta = 'B';
        }
        break;
    }
    return risposta;
}