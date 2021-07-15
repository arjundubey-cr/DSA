//i=0; [1,3] <-tempInterval;
//1=1; [2,6]
//i=2; [8,10]
//i=3; [15,18]

//[1,6]
//[8,10]
//[15,18]

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1){
            return intervals;
        }
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>mergedArray;
        vector<int> tempInterval = intervals[0];
        
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0]<=tempInterval[1]){
                 tempInterval[1]=max(intervals[i][1], tempInterval[1]);
            }
            else{
                mergedArray.push_back(tempInterval);
                tempInterval = intervals[i];
            }
        }
        mergedArray.push_back(tempInterval);
        return mergedArray;
    }
};