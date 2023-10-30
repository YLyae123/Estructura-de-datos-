using System;

class Program
{
    static int SumaIterativa(int n)
    {
        int suma = 0;

        while (n > 0)
        {
            suma += n % 10;
            n /= 10;
        }
        return suma;
    }

    static int SumaRecursiva(int n)
    {
        if (n < 10)
            return n;
        return n % 10 + SumaRecursiva(n / 10);
    }

    static void Main()
    {
        int opcion;

        do
        {
            Console.Clear();
            Console.WriteLine("____________________________________________________");
            Console.WriteLine(":) Ejercicios de sumas recursivas e iterativas :)");
            Console.WriteLine("____________________________________________________");
            Console.WriteLine("Presione 1 para la suma recursiva, 2 para la suma iterativa, o 3 para salir.");
            Console.WriteLine("1 - Suma Recursiva");
            Console.WriteLine("2 - Suma Iterativa");
            Console.WriteLine("3 - Salir");
            Console.Write("Ingrese una opción: ");

            if (int.TryParse(Console.ReadLine(), out opcion))
            {
                if (opcion == 1 || opcion == 2)
                {
                    Console.Write("Ingrese un número: ");
                    if (int.TryParse(Console.ReadLine(), out int numero))
                    {
                        Console.WriteLine(opcion == 1
                            ? "Suma recursiva: " + SumaRecursiva(numero)
                            : "Suma iterativa: " + SumaIterativa(numero));
                        Console.WriteLine("Presione Enter para continuar...");
                        Console.ReadLine();
                    }
                    else
                    {
                        Console.WriteLine("Número inválido. Presione Enter para continuar...");
                        Console.ReadLine();
                    }
                }
                else if (opcion != 3)
                {
                    Console.WriteLine("Opción inválida. Presione Enter para continuar...");
                    Console.ReadLine();
                }
            }
            else
            {
                Console.WriteLine("Opción inválida. Presione Enter para continuar...");
                Console.ReadLine();
            }

        } while (opcion != 3);
    }
}
