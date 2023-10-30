#include <iostream>

int SumaIterativa(int n) {
    int suma = 0;

    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int SumaRecursiva(int n) {
    if (n < 10)
        return n;
    return n % 10 + SumaRecursiva(n / 10);
}

int main() {
    int opcion;
    int operacion;

    do {
        std::cout << "____________________________________________________\n";
        std::cout << ":) Ejercicios de sumas recursivas e iterativas :)\n";
        std::cout << "____________________________________________________\n";
        std::cout << "Presione 1 para la suma recursiva, 2 para la suma iterativa o 3 para salir.\n";
        std::cout << "1 - Suma Recursiva\n";
        std::cout << "2 - Suma Iterativa\n";
        std::cout << "3 - Salir\n";
        std::cout << "Ingrese una opción: ";

        std::cin >> opcion;

        switch (opcion) {
        case 1:
            std::cout << "Ingrese un número para la suma recursiva: ";
            std::cin >> operacion;
            std::cout << "Suma recursiva: " << SumaRecursiva(operacion) << std::endl;
            break;
        case 2:
            std::cout << "Ingrese un número para la suma iterativa: ";
            std::cin >> operacion;
            std::cout << "Suma iterativa: " << SumaIterativa(operacion) << std::endl;
            break;
        case 3:
            std::cout << "Fin del programa :)\n";
            break;
        default:
            std::cout << "Opción inválida. Inténtelo de nuevo.\n";
            break;
        }

    } while (opcion != 3);

    return 0;
}
