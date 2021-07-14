class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int finalIndex=nums.size();
        vector<int>arr(finalIndex, 0);
        for(int i=0;i<finalIndex;i++){
            arr[nums[i]]++;
        }
        for(int i=0;i<finalIndex;i++){
            if(arr[i]>=2){
                return i;
                break;
            }
        }
        return -1;
        //return 0;
    }
};