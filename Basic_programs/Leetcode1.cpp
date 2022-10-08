// 1281. Subtract the Product and Sum of Digits of an Integer


class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product = 1;
        while(n){
            int rem = n%10;
            n = n/10;
            product *= rem;
            sum += rem;
        }
        int result = product-sum;
        return result;
        
    }
};
