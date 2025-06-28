// ary is an input parameter, ary_size is its length
// ary is an array of any type T


#include<iostream>

template<class T>
void reverse(T ary[], unsigned int ary_size) {
  // your code here (and only here!)
  for(unsigned int i=0; i<ary_size/2; ++i){
  T arr2 = ary[i];
  ary[i] = ary[ary_size-1-i];
  ary[ary_size-1-i] = arr2;
}
}

template<class T>
void printarr(T ary[], unsigned int ary_size) {
  for(unsigned int i=0; i<ary_size; ++i) {
  std::cout<<ary[i]<<" ";
  }
}

int main (){
int data[] = {0,1,2,3,4};
int size = sizeof(data) / sizeof(data[0]);

reverse(data,size);
printarr(data,size);
return 0;
};