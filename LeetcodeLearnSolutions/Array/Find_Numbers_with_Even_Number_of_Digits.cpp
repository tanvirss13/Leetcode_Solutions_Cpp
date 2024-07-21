#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i=0; i<nums.size();i++){
            if((std::to_string(nums[i]).size())%2==0){
                count += 1;
            }
        }
        return count;
    }
};
