#include <iostream>

using namespace std;

/* Main arguments */
int main( int argc, char *argv[] )
{
  for (int i = 0; i < argc; i++)
  {
    /* Display arguments list in loop */
    cout << "Argument " << i << ": " << argv[i] << endl;
  }
  /*
  
  atoi( <string> ); - out integer
  atof( <string> ); - out double

  */
  return 0;
}