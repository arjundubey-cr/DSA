//Brute Force Approach TLE on large value of n
// class Solution {
// public:
//     double myPow(double x, int n) {
//         double ans=1;
//         if(n>=0){
//             for(long int i=0;i<n;i++){
//                 ans*=x;             
//             }
//             return ans;
//         }
//         if(n<0){
//             for(long int i=0;i<(-n);i++){
//                 ans*=x;              
//             }
//             double returnValue = 1/ans;
//             return (returnValue);
//         }
//         return 0;
//     }
// };
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        if(n == INT_MIN){
            x = x * x;
            n = n/2;
        }
        if(n < 0) {
            n = -n;
            x = 1/x;
        } 
        return (n%2 == 0) ? myPow(x * x, n/2) : x *  myPow(x * x, n/2);
    }
};
