def contador_letras():
    palabra=raw_input("Dime una palabra: ")
    cont=0 
    for letra in palabra:
        if letra in "aeiou":
            cont+=1
    print(("Vocales: ")+str(cont))
contador_letras()
