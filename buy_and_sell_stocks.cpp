// Brute Force Approach ==> O(n^2)
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int size = prices.size();
//         int profit=0;
//         for(int i=0;i<size;i++){
//             int buyPrice = prices[i];
//             for(int j=i+1;j<size;j++){
//                 int currentProfit = prices[j]-buyPrice;
//                 if(currentProfit>profit){
//                     profit=currentProfit;
//                 }
//             }
//         }
//         return profit;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int profit=0, currentProfit=0, minValue=prices[0];
        for(int i=0;i<size;i++){
            if(prices[i]<minValue){
                minValue=prices[i];
            }
             currentProfit = prices[i]-minValue;
            if(currentProfit>profit){
                profit=currentProfit;
            }
            
        }
        return profit;
    }
};