// Output:-          1 
//                 2 3
//               4 5 6
//             7 8 9 10
                    

// Code:-
  
  
#include <iostream>

using namespace std;

int main()
{
    int n,i=1,st=1;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j+=1;
        }
        while(j<=n){
            cout<<st;
            st++;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

    return 0;
}
