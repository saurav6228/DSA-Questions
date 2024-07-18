class Solution {
public:
    int numSquares(int n) {
        vector<int> arr;
        for(int i=1;i*i<=n;i++) {
            arr.push_back(i*i);
        }
        int dp[n+1];
        memset(dp, 10000, sizeof dp);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++) {
            for(int j=0;j<arr.size();j++) {
                if(arr[j]<=i) dp[i] = min(dp[i], dp[i-arr[j]]+1);
            }
        }
        return dp[n];
    }
};
