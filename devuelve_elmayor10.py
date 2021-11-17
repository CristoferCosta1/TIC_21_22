def devuelve_el_mayor10():
    mayor=input("Dime un numero: ")
    for cont in range(1,10):
        num=input("Dime un numero: ")
        if(num>mayor):
            mayor=num
        print("MAYOR= "+str(mayor))
devuelve_el_mayor10()
    
