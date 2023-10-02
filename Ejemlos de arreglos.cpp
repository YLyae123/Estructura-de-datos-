#include<iostream>

int main() {
    int numero[6] = { 10,20,30,40,50,60 };
    std::cout << numero[1] << std::endl;
 
    int n[] = { 3,4,5 };
    std::cout << n[0] << std::endl;
    std::cout << n[1] << std::endl;
    std::cout << n[2] << std::endl;

    char c[4] = { 'L' , 'U', 'I','S'};
    std::cout << c[0] << std::endl;
    std::cout << c[1] << std::endl;

    char s[] = { "mona lisa" };
    std::cout << s << std::endl;

    return 0;
}