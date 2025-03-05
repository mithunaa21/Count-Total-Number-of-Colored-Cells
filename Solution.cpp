class Solution {
public:
    long long coloredCells(int n) {
       long long ans;
        ans=1LL+2LL*(1LL*(n-1)*n);
        return ans;
    }
};
