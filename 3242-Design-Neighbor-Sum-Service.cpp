class neighborSum {
private:
    vector<vector<int>>ingrid;
public:
    neighborSum(vector<vector<int>>& grid) {
        ingrid = grid;
    }
    
    int adjacentSum(int value) {
        int sum=0;
        int rows = ingrid.size();
        int cols = ingrid[0].size();
        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                if(ingrid[i][j] == value){
                    if(i > 0) sum += ingrid[i-1][j];
                    if(i < rows-1) sum += ingrid[i+1][j];
                    if(j > 0) sum += ingrid[i][j-1];
                    if(j < cols-1) sum += ingrid[i][j+1];
                }
            }
            
        }
        return sum;
    }
    
    int diagonalSum(int value) {
        int sum=0;
        int rows = ingrid.size();
        int cols = ingrid[0].size();
        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                if(ingrid[i][j] == value){
                    if(i> 0 and j>0) sum += ingrid[i-1][j-1];
                    if(i > 0 and j<cols-1) sum += ingrid[i-1][j+1];
                    if(i<rows-1 and j>0) sum += ingrid[i+1][j-1];
                    if(i < rows-1 and j<cols-1) sum += ingrid[i+1][j+1];
                }
            }
            
        }   
        return sum;     
    }
};
