class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vec = nums;
        unordered_map<int, int> mpp; 
        sort(vec.begin(), vec.end());
        int n = nums.size();
        for(int i=n-1; i>=0; i--){
            mpp[vec[i]] = i;
        }
        for(int i=0; i<n; i++){
            nums[i] = mpp[nums[i]];
        }
    return nums;
    }
};