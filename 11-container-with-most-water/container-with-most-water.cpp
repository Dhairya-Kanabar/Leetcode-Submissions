class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0;
        int rp=n-1;
        int ans=0;
        int w=0;
        int h=0;
        int current=0;

        while(lp<rp){
                w=rp-lp;
                h=min(height[lp],height[rp]);
                current=w*h;
                ans=max(current,ans);

                if(height[lp]<height[rp]){
                    lp++;
                }else{
                    rp--;
                }
        }

        return ans;
    }
};