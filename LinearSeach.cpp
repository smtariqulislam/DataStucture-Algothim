

// Linear Search in C++

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int array[] = {2, 4, 0, 1, 9};
  int x = -1;

  int n = sizeof(array) / sizeof(array[0]);//sizeof return value with byte. 4 byte = 1 int. 
 
  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
  // nother way to print:
  //     if(result==-1){
  //       cout<<"Element not found"<<"\n";
  // } else{
  //       cout << "Element found at index: " << result;
  // }
}
