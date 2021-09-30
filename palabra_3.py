def palabra_3():
    nombre=raw_input("NOMBRE: ")
    print("Buenos dias, "+nombre)
    print("Tu lindo nombre empieza por la letra "+nombre[0])
    print("Voy a deletrear tu nombre")
    for cont in range(0,20):
        print(nombre[cont])

palabra_3()
