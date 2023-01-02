class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // Solution 1
        // vector<int> temp(nums.size());
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     temp[(i+k)%n]=nums[i];
        // }
        // nums=temp;

        //Solution 2
        
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
}
