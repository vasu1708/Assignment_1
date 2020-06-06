#include<iostream>
#include<string.h>
using namespace std;
class Area
{
  public:
      double area(double r)
      {
          return 3.14*r*r;
      }
      double area(double b,double h)
      {
          return 0.5*b*h;
      }
      long area(long l,long b)
      {
          return l*b;
      }
};
int main()
{
    char shape[20];
    long length,breadth;
    double base,height,radius;
    Area object;
    cout<<"Enter shape: ";
    cin>>shape;
    if(strcmpi(shape,"rectangle")==0)
    {
        cout<<"Enter length,breadth: ";
        cin>>length>>breadth;
        cout<<"Area of rectangle is: "<<object.area(length,breadth);
    }
    else if(strcmpi(shape,"circle")==0)
    {
        cout<<"Enter radius: ";
        cin>>radius;
        cout<<"Area of circle: "<<object.area(radius);
    }
    else if(strcmpi(shape,"triangle")==0)
    {
        cout<<"Enter base,height: ";
        cin>>base>>height;
        cout<<"Area of triangle: "<<object.area(base,height);
    }
    else
        cout<<"Shape not defined";
    return 0;

}
