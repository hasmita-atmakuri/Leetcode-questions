class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less(nums.size()), high(nums.size()), result(nums.size());
        int cnt=0,i=0,j=0;
        for(int n:nums){
            if(n<pivot)
                less[i++]=n;
            else if(n==pivot)
                cnt++;
            else
                high[j++]=n;
        }
        int ind=0;
        for(int a=0;a<i;a++)
            result[ind++]=less[a];
        for(int a=0;a<cnt;a++)
            result[ind++]=pivot;
        for(int a=0;a<j;a++)
            result[ind++]=high[a];
        return result;
    }
};