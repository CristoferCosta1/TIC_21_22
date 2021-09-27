def gauss():
    n=input("Hasta que numero quieres que cuente:")
    acum=0
    for cont in range(1,n+1):
        acum=acum+cont
        print(str(cont)+" acum= "+str(acum))

gauss()
    

