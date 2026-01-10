class Solution {
    public static int subset(int n, int sum, int[] arr, int[][] dp){
        if(n==0){
            if(sum==0)
                return 1;
            return 0;
        }
        if(dp[n][sum] == -1){
            if(arr[n-1]<=sum){
                dp[n][sum]= (subset(n-1, sum, arr, dp) + subset(n-1, sum-arr[n-1], arr, dp));
            }
            else
                dp[n][sum]= subset(n-1,sum, arr, dp);
        }
        else{
            return dp[n][sum];
        }
        return dp[n][sum];
    }

    public int findTargetSumWays(int[] nums, int target) {
        int N= nums.length;
        int sum=0;
        for(int i: nums){
            sum+=i;
        }
        
        if(Math.abs(target)>sum)
            return 0;
        
        if((sum+target) %2 !=0 || sum<target)
            return 0;
            
        int ans= (sum+target)/2;
        
        int [][] dp= new int[N+1][sum+1];
        for(int i=0;i<N+1;i++){
            Arrays.fill(dp[i], -1);
        }
        return subset(N, ans, nums, dp);
    }
}