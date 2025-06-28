#include <iostream> 
using namespace std;

//Pair of functions which allocate memory for an array and prints its content. The 1° set_array -> allocates mem for an array of int and initializes each element to a value 'a'. The 2° point_array prints each element of the array.

void set_array (int *& arr, int a, int L){
  arr = new int(L);
  for(int i=0; i<L; ++i)
  {
    arr[i] = a;
  }
}

void point_array(int *arr, int L){
  for(int i=0; i<L; ++i){
    cout<<arr[i]<<" ";
  }
}

int main() {
  int* a = {};
  int Length = 5;
  set_array(a, 10, Length);
  point_array(a, Length);


  delete[] a;
  return 0;
}

