#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a=0;
    int b=1;
    if(n==1){
        cout<<a<<" ";
    }
    else{
        cout<<a<<" "<<b<<" "; 
        while(n-2>0){
            int sum=a+b;
            cout<<sum<<" ";
            a=b;b=sum;
            n--;
        }

    }
    
    return 0;
}
