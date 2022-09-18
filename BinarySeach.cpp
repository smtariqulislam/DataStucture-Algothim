

// Binery Search in C++

#include<bits/stdc++.h>
#include <iostream>
using namespace std;



int BinerySearch(int a[], int n, int key){

       int FirstI=0;
       int lastI=n;

       while(FirstI<=lastI){

            int mid=(FirstI+lastI)/2;

            if(a[mid]==key){
                  return mid;
            }

            else if (a[mid]>key)
            {
                  lastI=mid-1;
            }
            else 
            {
                 FirstI=mid+1;
            }
       }return -1;
}

int main() {
  int array[] = {2, 4, 5, 6, 9};
  int x = 4;

  int n = sizeof(array) / sizeof(array[0]);//sizeof return value with byte. 4 byte = 1 int. 
 
  int result = BinerySearch(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
  // nother way to print:
  //     if(result==-1){
  //       cout<<"Element not found"<<"\n";
  // } else{
  //       cout << "Element found at index: " << result;
  // }
}
