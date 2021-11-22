def piramide():
    fila_completa=" "
    n=input("Dame un numero: ")
    for fil in range(n,0,-1):
        for col in range(1,fil+1):
            fila_completa=fila_completa+str(fil)
        print fila_completa
        fila_completa=" "
            

piramide()






















        
