#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  double angle = 60.0; // Angle in degrees
  double radian = angle*M_PIl/180.0; // Convert into radian
  
  cout<<"Sine of 60 degrees:"<<sin(radian)<<endl;
  cout<<"Cosine of 60 degrees:"<<cos(radian)<<endl;
  cout<<"Tangent of 60 degrees:"<<tan(radian)<<endl;
  
  return 0;
}