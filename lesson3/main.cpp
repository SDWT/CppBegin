#include <iostream>
using namespace std;

int main()
{
  double num;

  setlocale(0, "");

  cout << "������� ������������ �����." << endl;
  cin >> num;

  if (num < 10)
    cout << "��� ����� ������ 10." << endl;
  else if (num == 10)
    cout << "��� ����� ����� 10." << endl;
  else
    cout << "��� ����� ������ 10." << endl;

  return 0;
}
