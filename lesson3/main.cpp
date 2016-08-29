#include <iostream>
using namespace std;

int main()
{
  double num;

  setlocale(0, "");

  cout << "Введите произвольное число." << endl;
  cin >> num;

  if (num < 10)
    cout << "Это число меньше 10." << endl;
  else if (num == 10)
    cout << "Это число равно 10." << endl;
  else
    cout << "Это число больше 10." << endl;

  return 0;
}
