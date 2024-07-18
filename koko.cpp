// koko eating bananas
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(), piles.end());
        int ans=1e9;
        while(l<=r) {
            int mid = l + (r-l)/2;
            if(check(mid, piles, h)) {
                r=mid-1;
                ans= min(ans, mid);
            } else {
                l=mid+1;
            }
        }

        return ans;
    }

    bool check(int k, vector<int>& piles, int H) {
        long h=0;
        for(auto i: piles) {
            h+=i/k;
            if(i%k!=0) h+=1; 
        }
        return h<=H;
    }
