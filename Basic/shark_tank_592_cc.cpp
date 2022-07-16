#include <iostream>
using namespace std;

int
main ()
{
  // your code goes here
  int times, x, y = 0;
  cin >> times;

  while (times--)
    {
      cin >> x >> y;

      int valueA = (100 * x) / 10;
      int valueB = (100 * y) / 20;

      if (valueA == valueB)
	{
	  cout << "ANY" << endl;
	}

      else if (valueA > valueB)
	{
	  cout << "FIRST" << endl;
	}

      else
	{
	  cout << "SECOND" << endl;
	}
    }
  return 0;
}
