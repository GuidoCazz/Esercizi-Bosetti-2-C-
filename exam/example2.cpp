// Assume that the namespace std is already loaded
// function is templated and accepts vectors of any type
#include<iostream>
#include<vector>
using namespace std;

template<class T>
void reverse(vector<T> &v) {
  // your code here (and only here!)
  if(v.empty()) {
    throw std::runtime_error("Vector is empty");  
  }

  for (size_t i = 0; i< v.size()/2; ++i) {
    T d = v[i];
    v[i] = v[v.size()-1-i];
    v[v.size()-1-i] = d;
      
  }
}

template<class T>
void printarr(vector<T> &v) {
  // your code here (and only here!)
  if(v.empty()) {
    throw std::runtime_error("Vector is empty");  
  }

  for (size_t i = 0; i< v.size(); ++i) {
      std::cout<<v[i]<<" ";
  }
}

int main (){
  std::vector<int> data = {0,1,2,3,4};

  reverse(data);
  printarr(data);

  return 0;
};