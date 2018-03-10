class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int length = rotateArray.size();
        for(int i=0;i<length-1;i++){
            if(rotateArray[i+1]<rotateArray[i]){
                return rotateArray[i+1];
            }
        }
        return rotateArray[0];
    }
};
