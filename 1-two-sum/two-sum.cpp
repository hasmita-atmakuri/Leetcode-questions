class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int num=nums[i];
            int a=target-num;
            if(m.find(a)==m.end()){
                m[num]=i;
            }
            else{
                return {m[a],i}; 
            }
        }
        return {-1,-1};
    }
};