using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
namespace Tablas_De_Multiplicar_Con_While
{
    class program
    {
        static void Main(string[] args)
        {
            int Num, Resul, T, I;
            string linea;
            Console.WriteLine("Cuantas Tablas: ");linea = Console.ReadLine();
            Num = int.Parse(linea);
            T = 1;
            while((T <= Num ))
            {
                I = 10;
                while(!((I < 1)))
                {
                    Resul = T * I;
                    Console.WriteLine("{0} * {1} = {2}",T,I, Resul);
                    I = I - 1;
                }
                Console.WriteLine("Pulse una Tecla:"); Console.ReadLine();
                T = T + 1;
            }
        }
    }
}
