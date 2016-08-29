#include <iostream>

using namespace std;

int main()
{
  int num = 10; /* Create number */
  int *PDarr;
  cout << "Enter integer value: ";
  cin >> num; /* Read number */

  PDarr = new int[num];
  /* Writing to array */
  for (int i = 0; i < num; i++)
  {
    PDarr[i] = i;
    cout << "Value of " << i << " element is " << PDarr[i] << endl;
  }
  delete[] PDarr; /* Clear memory */
  return 0;
}