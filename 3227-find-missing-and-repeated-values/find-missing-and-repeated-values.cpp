class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int si=n*n,rep=0,miss=0;
        vector<int> fre(si+1,0);
        for(auto& row:grid){
            for(int num:row){
                fre[num]++;
            }
        }
        for(int i=1;i<=si;i++){
            if(fre[i]==2)
                rep=i;
            if(fre[i]==0)
                miss=i;
        }
        return{rep,miss};
    }
};