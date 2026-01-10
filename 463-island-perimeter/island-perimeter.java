class Solution {
    public int dfs(int [] node, boolean[][]vist, int[][] grid){
        int i=node[0];
        int j= node[1];
        vist[i][j]=true;
        int perimeter=0;
        int[][] child= {{i+1,j}, {i-1,j}, {i,j+1}, {i,j-1}};
        for(int k=0;k<4;k++){
            int ci= child[k][0];
            int cj= child[k][1];
            if(ci<0 || ci>=grid.length || cj<0 || cj>=grid[0].length || grid[ci][cj]==0){
                perimeter++;
            }
            else if(!vist[ci][cj])
                perimeter+=dfs(new int[]{ci, cj}, vist, grid);
        }
        return perimeter;
    }
    public int islandPerimeter(int[][] grid) {
        int n= grid.length;
        int m= grid[0].length;
        boolean[][] vist= new boolean[n][m];
        int peri=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vist[i][j]){
                   return dfs(new int[]{i,j},vist,grid);              
                }
            }
        }
        return 0;
    }
}