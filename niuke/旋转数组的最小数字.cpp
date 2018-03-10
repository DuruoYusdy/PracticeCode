/* 时间限制：3秒 空间限制：32768K 热度指数：255486
本题知识点： 查找

题目描述
把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。 例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
*/

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
