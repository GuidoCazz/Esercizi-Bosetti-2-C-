//Exercize:

// Build a class that performs the Hadamard product (element-wise) between vector
// [1, 2, 3] * [1, 2, 3] = [1, 4, 9]
// The class must count the number of multiplications
// Optionally, templetize it to handle different numeric types

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Hadamard{
  private:
    vector<T> v1{1,1};
    vector<T> v2{3,2};
  public:
    Hadamard(vector<T> vec1, vector<T> vec2) : v1(vec1), v2(vec2) {}

    void H_product() {
      vector<T> F(v1.size());
      
      if(v1.size()!=v2.size()) {
        throw runtime_error("Invalid dimension");
      }

      cout<<"Hadamard product = ";
      for(int i=0; i<v1.size(); ++i) {
        F.at(i) = v1.at(i) * v2.at(i);
        cout<<F.at(i)<<" ";
      }
      cout<<endl;
    }

};

int main() {
  vector<double> v1{2.0,4.0,7.0};
  vector<double> v2{2.0,1.0,4.0/7.0};

  Hadamard H(v1,v2);
  H.H_product();

}