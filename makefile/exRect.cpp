/* File:   exRect.cpp
   CIS 279 Quiz 7:  Makefiles
   Desc:   example of using a created class
   Files:  rectangle.h, rectangle.cpp, exRect.cpp
*/

using namespace std;

#include <iostream>
#include "rectangle.h"

int main()
{
  Rectangle r1;          // this rectangle will get the default params
  Rectangle r2d2(7, 10); // this rectangle we are setting height and width

  /* because our class has simple member variables, we
     can use the assignment operator (=) like this */
  Rectangle r3 = r2d2;

  /* this rectangle has invalid values -- what will happen? */
  Rectangle terrible(-1111111, -0.7777);

  cout << endl
       << "The two following rectangles should have the same value: " << endl
       << "-------------------------------------------------------- " << endl;
  r2d2.PrintRectInfo();
  r3.PrintRectInfo();

  cout << endl << endl 
       << "Here is what we get when we pass in invalid values: " << endl
       << "--------------------------------------------------- " << endl;
  terrible.PrintRectInfo();

  cout << endl << endl 
       << "Testing for squareness: " << endl
       << "------------------------" << endl;
  cout << "The rectangle titled 'terrible' is ";
  if ( !terrible.IsSquare() )
  {
    cout << "not ";
  }
  cout << "a square." << endl << endl;

  return 0;
}
