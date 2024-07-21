#include <iostream>
#include <vector>

using namespace std;


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



int main() {

    //declare a test array
    vector<int> ans = { 2, 3, 4, 5, 6 };
    // call the class
    Solution sol;
    // call the method
    vector<int> result = sol.sortedSquares(ans);

    for (int i : result) {
        cout << i << "\n";
    };

}

