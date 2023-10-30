def main():
    Num = int(input("Cuantas Tablas: "))
    T = 1
    while T <= Num:
        I = 10
        while I >= 1:
            Resul = T * I
            print(f"{T} * {I} = {Resul}")
            I -= 1
        input("Pulse una Tecla:")
        T += 1

if __name__ == "__main__":
    main()
