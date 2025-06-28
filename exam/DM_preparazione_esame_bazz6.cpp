// Implement the function point_t with x,y and another function that is capable of inizializing it, returning void

#include <iostream> 
using namespace std;

class point_t{
  private:
    double x;
    double y;

  public:
    point_t() {}

  void init(double x_val, double y_val) {
      x = x_val;
      y = y_val;
  }

  void print() {
    cout<< x<<endl;
    cout<< y<<endl;
  }
};

int main()
{
  point_t p;

  p.init(3.3,8.8);
  p.print();

}
