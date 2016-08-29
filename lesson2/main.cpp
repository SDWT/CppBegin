#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  setlocale(0, "");

  cout << "Введите первое число." << endl;
  cin >> a;
  cout << "Введите второе число." << endl;
  cin >> b;
  
  c = a + b;
  cout << "Сумма чисел равна " << c << endl;
  c = a - b;
  cout << "Разность чисел равна " << c << endl;
  c = a * b;
  cout << "Произведение чисел равна " << c << endl;
  return 0;
}
