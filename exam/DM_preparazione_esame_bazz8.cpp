// Vedi schema: Scheme8.png
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Polygon{
  private:
    int n;
    vector<double> x,y;
    int current_index = 0;
  
  public:
    Polygon(int sides) : n(sides), x(sides), y(sides) {}


    void add_corner(double x_val, double y_val){
      if(current_index < n) {
        x[current_index] = x_val;
        y[current_index] = y_val;
        current_index++;
      }
    }

    double area() const {
      double A = 0.0;
      double Atot;
      for(int i=0; i<n; ++i)
      {
        if(i==n-1)
        {
          A = A + (x[i]*y[0] - x[0]*y[i]);
        }
        else
        {
          A = A + (x[i]*y[i+1] - y[i]*x[i+1]);
        }
      }
      Atot = 0.5 * abs(A);
      return(Atot);
    }

};



int main ()
{
  Polygon triangle(3);
  triangle.add_corner(-1.0,1.0);
  triangle.add_corner(1.0,1.0);
  triangle.add_corner(0.0,-1.0);

  cout<<"Area = "<<triangle.area()<<endl;
  return 0;
}