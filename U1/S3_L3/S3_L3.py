import os
import funzioni.importafunzioni as funzione

param_1 = 0
param_2 = 0
risultato = 0

while True:
    scelta = int(input("Menu\n1 - Calcolo perimetro quadrato\n2 - Calcolo perimetro rettangolo\n"
                   "3 - Calcolo circonferenza di un cerchio\n4 - Esci \nScelta: "))

    if scelta == 1:
        while True:
            param_1 = input("Inserisci il valore del lato: ")
        
            if param_1.isdigit() == True and int(param_1) > 0:
                risultato = str(int(param_1) * 4)
                print(f"Il perimetro di un quadrato avente lato uguale a {param_1} e': {risultato}")
                input("Premi un tasto per continuare...")
                break
            else:
                print("Errore: È stato inserito un carrattere o un valore minore di zero.")

                scelta = funzione.controllo(scelta)
            
                if scelta == 'n':
                    print("Arrivederci!")
                    break
       


    elif scelta == 2:
        while True:
            while True:
                param_1 = input("Inserisci il valore della base: ")
                if param_1.isdigit() == False or int(param_1) < 0:
                    print("Il valore inserito non è un valore accettabile.")
                else: 
                    break
         
            while True:
                param_2 = input("Inserisci il valore dell'altezza: ")
                if param_2.isdigit() == False or int(param_2) < 0:
                    print("Il valore inserito non è un valore accettabile.")
                else: 
                    break

            if param_1 != param_2:
                risultato = str((int(param_1)*2) + (int(param_2)*2))
                print(f"Il perimetro di un rettangolo avente base uguale a {param_1} e altezza uguale a {param_2} e': {risultato}")
                input("Premi un tasto per continuare...")
                break
            else: 
                print("La figura inserita non è un rettangolo.")
            
                scelta = funzione.controllo(scelta)
            
                if scelta == 'n':
                    print("Arrivederci!")
                    break

    elif scelta == 3:
        while True:
            param_1 = input("Inserisci il valore del raggio del cerchio: ")
    
            if param_1.isdigit() == True and int(param_1) > 0:
                risultato = round( (2 * 3.14 * int(param_1)), 2 )
                risultato = str(risultato)
                print(f"La circonferenza di un cerchio avente ragio uguale a {param_1} e': {risultato}")
                input("Premi un tasto per continuare...")
            else: 
                print("Errore: È stato inserito un carrattere o un valore minore di zero.")
            
                scelta = funzione.controllo(scelta)
            
                if scelta == 'n':
                    input("\nArrivederci!")
                    break

    elif scelta == 4:
        input("\nArrivederci!")
        break
    os.system("cls")

