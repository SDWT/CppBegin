#include <iostream>
#include <string>

using namespace std;

int main()
{
  int *a = new int;
  int *b = new int(5);

  *a = 10;
  *b += *a;

  cout << "b is " << *b << endl;

  delete b;
  delete a;

  return 0;
}
