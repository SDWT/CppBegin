#include <iostream>
#include <string>

using namespace std;

bool CheckPass(string Password)
{
  string ValidPassword = "0000";

  if (ValidPassword == Password)
  {
    cout << "Correct" << endl;
    return true;
  }
  else
  {
    cout << "Password incorrect" << endl;
    return false;
  }
}

void GetPass()
{
  string UserPassword;
  while (!CheckPass(UserPassword))
  {
    cout << "Enter password: ";
    getline(cin, UserPassword);
  }
}

int main()
{
  GetPass();
  return 0;
}
