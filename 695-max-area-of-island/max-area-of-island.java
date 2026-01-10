class Solution {
    public int dfs(int [] node, boolean[][]vist, int[][] grid){
        int i=node[0];
        int j= node[1];
        vist[i][j]=true;
        int area=1;
        int[][] child= {{i+1,j}, {i-1,j}, {i,j+1}, {i,j-1}};
        for(int k=0;k<4;k++){
            int ci= child[k][0];
            int cj= child[k][1];
            if(ci>=0 && ci<grid.length && cj>=0 && cj<grid[0].length && grid[ci][cj]==1 && !vist[ci][cj]){
                area+=dfs(new int[]{ci, cj}, vist, grid);
            }
        }
        return area;
    }

    public int maxAreaOfIsland(int[][] grid) {
        int n= grid.length;
        int m= grid[0].length;
        boolean[][] vist= new boolean[n][m];
        int island=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vist[i][j]){
                    island=Math.max(island,dfs(new int[]{i,j},vist,grid));              
                }
            }
        }
        return island;
    }
}