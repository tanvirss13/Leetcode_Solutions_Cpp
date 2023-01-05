#include<iostream>

// This is for 0(n) time | 0(n) space to print the indices

#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
    unordered_map<int, int> nums;
    for(int i =0; i<array.size(); i++){
        int in = array[i];
        int potentialMatch = targetSum - in;
        if(nums.count(potentialMatch)){
            return vector<int>{nums.at(potentialMatch),i};
        } else {
            nums.insert(make_pair(in, i));
        }
    }
  return {};
}
