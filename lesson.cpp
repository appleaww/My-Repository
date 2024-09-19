#include <cmath>
#include <iostream>
using namespace std;
int main() {
int a;
int b;
int n;
int m;
int c;
float S;
float p;
std::cout << "Введите строну a\n";
std::cin >> a;
std::cout << "Введите строну b\n";
std::cin >> b;
std::cout << "Введите строну c\n";
std::cin >> c;
std::cout << "Введите число m\n";
std::cin >> m;
std::cout << "Введите число n\n";
std::cin >> n;
p = 0.5*(a+b+c);
if (a+b<=c or a+c<=b or c+b<=a)
{
    std::cout<<"Такого треугольника не существует\n";
}
else {
S = sqrt(p*(p-a)*(p-b)*(p-c));
std::cout<<"S = "<< S << "\n";
}
if ( a==b and c==b and c==a  )
{
    std::cout<<"Треугольник равносторонний\n";
}
    return 0;
}