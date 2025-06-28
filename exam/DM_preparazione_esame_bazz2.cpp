/* Write a function with the signature double mean(double *v, int len):
INPUT: vector of double, size
OUTPUT: arithmetic mean
*/

#include<iostream>

double mean(double *v, int len){
  double sum = 0;
  for(int i = 0; i<len; ++i)
  {
    sum = sum + v[i];
  }
  return sum/len;
}


int main(){
  double a[] = {1.0,2.0,4.4,6.8};
  std::cout<<"The mean is: "<<mean(a,4);
}