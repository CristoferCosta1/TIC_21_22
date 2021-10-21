def cambia_vocales2():
    palabra=raw_input("Dime una palabra: ")
    letra=raw_input("Dime la vocal que quieres que utilice: ")
    cont=0
    while(cont<len(palabra)):
        if(palabra[cont]=='a'):
           print(letra)
        else:
            if(palabra[cont]=='e'):
                print(letra)
            else:
                if(palabra[cont]=='i'):
                    print(letra)
                else:
                    if(palabra[cont]=='o'):
                        print(letra)
                    else:
                        if(palabra[cont]=='u'):
                            print(letra)
                        else:
                            print(palabra[cont])
        cont=cont+1
           
    print("palabra transformada "+palabra)

cambia_vocales2()
