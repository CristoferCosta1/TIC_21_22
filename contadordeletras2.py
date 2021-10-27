def contadorletras2():
    palabra=raw_input("Dime una palabra: ")
    cont=0
    cont1=0
    for letra in palabra:
        if letra in "aeiou":
            cont+=1
    print(("Vocales: ")+str(cont))
    for letra in palabra:
        if letra in "bcdfghijklmnñpqrstvwxyz":
            cont+=1
    print(("Letras: ")+str(cont))
    for letra in palabra:
        if letra in "bcdfghijklmnñpqrstvwxyz":
            cont1+=1
    print("Vocales: "+str(cont1))
          
contadorletras2()
