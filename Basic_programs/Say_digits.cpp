#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//Approach 1 using Recursion

void printDigits(int& num){
    if(num==0)return;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int digit = num%10;
    num/=10;
    printDigits(num);
    cout<<arr[digit]<<" ";
}

int main()
{
    int num = 798454;
    printDigits(num);
    return 0;
}


// Approach 2 using Iteration
int main()
{
    int num = 798454;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    std::vector<string> res;
    while(num){
        int digit = num%10;
        res.push_back(arr[digit]);
        num/=10;
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
