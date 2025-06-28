// create a function that is able to, given an array and its length as inputs, mirror it respect to it's center.

#include<iostream>
using namespace std;

void mirror(int *arr, int L){
  int p=0; 
  for(int i=0; i<L/2; ++i)
  { 
    p = arr[i];
    arr[i] = arr[L-1-i];
    arr[L-1-i] = p;
  }
}

int main(){
  int a[] = {1,4,90,87,3};
  mirror(a,5);

  
  cout<<"Swapped Array"<<endl;
  for(int j=0; j<5; ++j){
    cout<<a[j]<<" ";
  }
}