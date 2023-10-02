#include<iostream>
using namespace std;
const int NUM = 8;
int main()
{
	int nums[NUM];
	int total = 0;
	for (int i = 0; i < NUM; i++)
	{
		cout << "por favor, introduzca un numero: ";
		cin >> nums[i];
		total += nums[i];

	}
	cout << "el total de numeros es:  " << total << endl;

	return 0;
}