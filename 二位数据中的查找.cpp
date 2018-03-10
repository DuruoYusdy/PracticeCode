class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int _row = array.size();
        int _col = array[0].size();
        int i=0,j=_col-1;
        while(i<=_row-1&&j>=0){
            if(target==array[i][j]){
                return true;
            }else if(target>array[i][j]){
                i=i+1;
            }else if(target<array[i][j]){
                j=j-1;
            }
        }
        return false;
    }
};
