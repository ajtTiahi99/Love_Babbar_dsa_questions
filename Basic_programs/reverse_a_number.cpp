
//    I] Method 1:-
     
          #include <iostream>
          #include <array>

          using namespace std;

          int main()
          {
              int arr[4] = {2,7,5,9};
              int size = sizeof(arr)/sizeof(arr[0]);
              int i=0,j=size-1;
              while(i<j){
                  int temp = arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
                  i++;j--;
              }
              int k = 0;
              cout<<"{ ";
              while(k<size){
                  cout<<arr[k]<<" ";
                  k++;
              }
              cout<<"}";
              return 0;
          }
