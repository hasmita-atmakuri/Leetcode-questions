class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        if(k<=1)
            return k;
        int i=0;
        for(int j=1;j<k;j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};