class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1=0, count2=0, count0=0;
        vector<int>returnArr;
        
        for(int i=0;i<nums.size();i++){
            nums[i]==1?count1++:nums[i]==2?count2++:count0++;    
        }
        int index=0;
        for(int i=0;i<count0;i++){
            nums[index]=0;
            index++;
        }
        for(int i=0;i<count1;i++){
            nums[index]=1;
            index++;
        }
        for(int i=0;i<count2;i++){
            nums[index]=2;
            index++;
        }
    }
};