#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  setlocale(0, "");

  cout << "������� ������ �����." << endl;
  cin >> a;
  cout << "������� ������ �����." << endl;
  cin >> b;
  
  c = a + b;
  cout << "����� ����� ����� " << c << endl;
  c = a - b;
  cout << "�������� ����� ����� " << c << endl;
  c = a * b;
  cout << "������������ ����� ����� " << c << endl;
  return 0;
}
