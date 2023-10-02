#include <iostream>
#include <cstdlib>
#define maxf 3
#define maxc 5

using namespace std;

int main(int argc, char* argv[])
{
    float a[maxf][maxc];
    int f, c;

    // Leer la matriz
    for (f = 0; f < maxf; f++)
    {
        for (c = 0; c < maxc; c++) {
            cin >> a[f][c];
        }
    }

    // Imprimir la matriz
    for (f = 0; f < maxf; f++)
    {
        for (c = 0; c < maxc; c++) {
            cout << a[f][c] << " ";  // Imprimir el valor y un espacio
        }
        cout << endl;  // Agregar una nueva línea después de cada fila
    }

    system("PAUSE");
    return EXIT_SUCCESS;3
}
