class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0) return 0;
        long long ans =0;
        int l=0,r=0;
        long long pre = 1;
        for(int r=0;r<nums.size();r++) {
            pre = pre*nums[r];
            while(pre >= k && l<r) {
                pre = pre/nums[l];
                l++;
            }
            if(l==r && pre>=k) continue;
            int range = r-l+1;
            ans+= range;
        }
        return ans;
    }
};
