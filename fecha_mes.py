def fecha_mes():
    fecha=raw_input("Dime una fecha(dd/mm/aa): ")
    meses="EneFebMarAbrMayJunJulAgoSepOctNovDic"
    numero_mes=int(fecha[3])*10+int(fecha[4])
    print(numero_mes)
    mes_elegido=meses[(numero_mes-1)*3:(numero_mes-1)*3+3]
    print(mes_elegido)
   
   
fecha_mes()
