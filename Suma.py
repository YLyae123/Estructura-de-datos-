def suma_iterativa(n):
    suma = 0
    while n > 0:
        suma += n % 10
        n //= 10
    return suma

def suma_recursiva(n):
    if n < 10:
        return n
    return n % 10 + suma_recursiva(n // 10)

while True:
    print("__________________\n")
    print(":) Ejercicios de sumas recursivas e iterativas :) \n")
    print("__________________\n")
    print("Presione 1 para la suma recursiva, 2 para la suma iterativa o 3 para salir. \n")
    print("1.- La suma Recursiva. \n")
    print("2.- La suma Iterativa. \n")
    print("3.- Salir. \n")

    las_opciones = int(input("Ingrese una opción: "))

    if las_opciones == 1:
        operacion = int(input("Ingrese un número para la suma recursiva: "))
        print("Suma recursiva:", suma_recursiva(operacion))
    elif las_opciones == 2:
        operacion = int(input("Ingrese un número para la suma iterativa: "))
        print("Suma iterativa:", suma_iterativa(operacion))
    elif las_opciones == 3:
        print("Fin del programa :)")
        break
    else:
        print("Opción no válida. Inténtelo de nuevo.")
