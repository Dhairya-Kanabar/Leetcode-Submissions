class Solution {
 public:
  int maxArea(vector<int>& height) {
    int n=height.size();
    // int cvol=0;
    // int mvol=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         cvol=min(height[i], height[j]) * (j - i);
    //         mvol=max(mvol,cvol);
    //     }
    // }
    // return mvol;
    int lp=0;
    int rp=n-1;
    int cvol=0;
    int ans=0;
    int w=0,h=0;
    while(lp<rp){
        w=rp-lp;
        h=min(height[lp],height[rp]);
        cvol=w*h;
        ans=max(ans,cvol);

        if(height[lp]<height[rp]){
            lp++;
        }else { rp--;}
    }
return ans;
  }
};