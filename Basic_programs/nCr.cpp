
#include <iostream>

using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i=2;i<=num;i++){
        fact *= i;
    }
    return fact;
}

int nCr(int num1,int num2){
    int ans = factorial(num1)/(factorial(num2)*factorial(num1-num2));
    return ans;
}

int main()
{
    int n,r;
    cout<<"Enter two numbers n and r: ";
    cin>>n>>r;
    int result = nCr(n,r);
    cout<<result;
    return 0;
}

// OUTPUT:-
//   Enter two numbers n and r: 12 4
//   495
