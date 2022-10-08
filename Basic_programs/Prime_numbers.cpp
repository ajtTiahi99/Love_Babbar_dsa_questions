#include <iostream>

using namespace std;

int main()
{
    int n;
    bool isPrime=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=n-1;i>=2;i--){
        if(n%i==0){
            cout<<"Number is not prime.";
            isPrime=0;
            break;
        }
    }
    if(isPrime==1) cout<<"Number is prime.";
    
    return 0;
}
