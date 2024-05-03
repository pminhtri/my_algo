class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count=0;
        int result=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0)
            {
                count = 0;
            }
            else{
                count++;
                result=Max(count,result);
            }
        }
        return result;
    }
    public int Max(int a, int b){
        if(a>b) return a;
        else return b;
    }
}