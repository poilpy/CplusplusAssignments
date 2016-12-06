/* File:   rectangle.cpp
   CIS 279 Quiz 7:  Makefiles
   Desc:   example of creating a class from scratch, function definitions
   Files:  rectangle.h, rectangle.cpp, exRect.cpp
*/

using namespace std;

#include <iostream>
#include "rectangle.h"

double Rectangle::GetHeight()
{
  return m_height;
}

double Rectangle::GetWidth ()
{
  return m_width;
}

void Rectangle::SetHeight(double h)
{
  if (h > 0)
  {
    m_height = h;
  }
  else
  {
    cout << "ERROR: Height " << h << " is not valid.  Value not set. :(" 
	 << endl;
  }
}

void Rectangle::SetWidth (double w)
{
  if (w > 0)
  {
    m_width = w;
  }
  else
  {
    cout << "ERROR: Width " << w << " is not valid.  Value not set. :(" 
	 << endl;
  }
}

Rectangle::Rectangle(double h, double w)
{
  /* We added this initialization to handle invalid inputs to the 
     constructor.  We STILL need the default parameters: they let us
     call the constructor with something other than the full set
     of arguments, so we can create "Rectangle test;" etc */
  m_height = m_width = DEF_VAL;

  SetHeight(h);
  SetWidth(w);

}
  
bool Rectangle::IsSquare()
{
  return (m_height == m_width);
}

double Rectangle::CalcPerim()
{
  return (2 * (m_width + m_height));
}

double Rectangle::CalcArea ()
{
  return m_width * m_height;
}
  
void Rectangle::PrintRectInfo()
{
  cout << "The rectangle is " << m_height << " km high and " 
       << m_width << " km wide." << endl;
}
