class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=nums[0];
        int maximum_sum=nums[0];
        for(int i=0;i<nums.size();i++){
            if(current_sum>=0){
                current_sum+=nums[i];
            }else{
                current_sum=nums[i];
            }
            if(current_sum>maximum_sum){
                maximum_sum=current_sum;
            }
        }
        return maximum_sum;
    }
};