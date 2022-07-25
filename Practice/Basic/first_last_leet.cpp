/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Solution
{
public:
  vector < int >searchRange (vector < int >&a, int target)
  {

    int n = a.size ();
    int count = 0;
    int first, last = 0;

    if ((n == 1) && (a[0] == target))
      {
	return
	{
	0, 0};
      }

    else if ((n == 1) && (a[0] != target))
      {
	return
	{
	-1, -1};
      }

    for (int i = 0; i < n; i++)
      {

	if (a[i] == target)
	  {
	    count++;

	    if (count == 1)
	      {
		first = i;
	      }

	    else if (count > 1)
	      {

		last = i;



	      }


	  }




      }

    if (count > 1)
      {
	return
	{
	first, last};
      }

    if ((count == 1) && (first != 0))
      {
	return
	{
	first, first};
      }

    if ((count == 1) && (first == 0))
      {
	return
	{
	first, last};
      }



    return
    {
    -1, -1};



  }
};
