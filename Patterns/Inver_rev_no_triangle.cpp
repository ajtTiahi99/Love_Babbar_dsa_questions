Output:-        1 2 3 4 
                  2 3 4 
                    3 4
                      4
Code:-
  

#include <iostream>

using namespace std;

int main()
{
    int n,i=1;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i-1){
            cout<<" ";
            j+=1;
        }
        while(j<=n){
            cout<<j;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

    return 0;
}
