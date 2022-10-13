class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr_2(n);
        
        int left = 0;
        int right = n-1;
        
        for(int i=n-1; i>=0; i--){
            int sq;
            if (abs(nums[left])<abs(nums[right])){
                sq = nums[right];
                right--;
            }
            else{
                sq = nums[left];
                left++;
            }
            arr_2[i]=sq*sq;
        }
        return arr_2;
    } 
};
