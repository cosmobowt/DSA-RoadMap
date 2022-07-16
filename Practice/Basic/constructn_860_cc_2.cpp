#include <iostream>
using namespace std;

int
main ()
{
  // your code goes here

  int times, n = 0;
  cin >> times;
  while (times--)
    {

      cin >> n;
      if ((n == 1) || (n == 3) || (n == 5))
	{
	  cout << "NO" << endl;
	}

      else
	{
	  cout << "YES" << endl;
	}


    }








  return 0;
}
