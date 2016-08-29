#include <iostream>
#include <string>

#define MAX_STUDENTS 10

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int i, arr[10];
  std::string students[MAX_STUDENTS] =
  {
    "Иванов", "Петров", "Сидоров", "Ахмедов", "Ерошкин", "Выхин", "Андреев", "Вин Дизель", "Картошкин", "Чубайс"
  };

  for (i = 0; i < MAX_STUDENTS; i++)
    cout << students[i] << endl;

  for (i = 0; i < 10; i++)
  {
    cout << "[" << i + 1 << "]: ";
    cin >> arr[i];
  }
  cout << "\nYour array: ";

  for (i = 0; i < 10; i++)
    cout << arr[i] << " ";

  cout << endl;
  return 0;
}