def fecha_mes2():
    fecha=raw_input("Dime una fecha(dd/mm/aa): ")
    meses="Enero,Febrero,Marzo,Abril,Mayo,Junio,Julio,Agosto,Septiembre,Octubre,Noviembre,Diciembre,"
    mimes=int(fecha[3])*10+int(fecha[4])
    int(fecha[3])
    int(fecha[4])
    comas=0
    cont=0
    mes=" "
    print(mimes)
    while(comas<=mimes-1):
        if(meses[cont]==','):
            comas=comas+1
        if(comas==mimes-1):
            if(meses[cont]!=','):
                mes=mes+meses[cont]
           
        cont=cont+1
    print("cont= "+str(cont))
    print("comas= "+str(comas))
    print("estoy en el mes de "+mes)
fecha_mes2()
