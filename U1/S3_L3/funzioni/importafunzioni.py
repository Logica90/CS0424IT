import os

def controllo(opzione):
    while True:
        opzione = input("\nVuoi rinserire i valori? (y/n): ")
        if opzione == 'y' or opzione == 'n':
            os.system('cls')
            break
        elif opzione != 'y' and opzione != 'n': 
            input("Il valore inserito non è corretto.")
            os.system('cls')
    
    return opzione