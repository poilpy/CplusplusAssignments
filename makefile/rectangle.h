/* File:   rectangle.h
   CIS 279 Quiz 7:  Makefiles
   Description:   example of creating a class from scratch, class declaration
   Files:  rectangle.h, rectangle.cpp, exRect.cpp
*/

#define DEF_VAL 1.0

class Rectangle {
private:
  double m_height;
  double m_width;
public:
  double GetHeight();
  double GetWidth ();
  void SetHeight(double h);
  void SetWidth (double w);
  
  Rectangle(double h = DEF_VAL, double w = DEF_VAL);
  
  bool IsSquare();
  double CalcPerim();
  double CalcArea ();
  
  void PrintRectInfo();
} ;
