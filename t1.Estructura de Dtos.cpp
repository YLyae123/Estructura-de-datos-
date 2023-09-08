// Yael Aceituno 

#include <iostream>

using namespace std;

const int Num = 8;

int main()
{
    int nums[Num]; 
    int total = 0;
    
    for (int i = 0; i < Num; i++) 
    {
        cout << "Por favor introduzca un numero: ";
        cin >> nums[i]; 
        total += nums[i]; 
    }
    
    cout << "El total de numeros es " << total << endl;
    return 0;
}

