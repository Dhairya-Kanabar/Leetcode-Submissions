class Solution {
public:
    void sortColors(vector<int>& nums) {
//         int one=0,two=0,zero=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==1){
//                 one++;
//             }else if(nums[i]==2){
//                 two++;
//             }else if(nums[i]==0){
//                 zero++;
//             }
//         }
// int idx=0;
//         for(int i=0;i<zero;i++){          
//             nums[idx++]=0;
//         }
//         for(int i=0;i<one;i++){          
//             nums[idx++]=1;
//         }
//         for(int i=0;i<two;i++){
//             nums[idx++]=2;
//         }
        
    int l=0 , m=0 , h=nums.size()-1;
    while(m<=h){
        if(nums[m]==0){
            swap(nums[m],nums[l]);
            m++,l++;
        }else if(nums[m]==1){
            m++;
        }else{
            swap(nums[m],nums[h]);
            h--;
        }
    }

    }
};