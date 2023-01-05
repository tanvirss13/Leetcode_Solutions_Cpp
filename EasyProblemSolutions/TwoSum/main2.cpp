#include<iostream>
// This is for 0(n(log(n)) time | 0(1) space
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
    sort(array.begin(), array.end());
    int left = 0;
    int right = array.size() - 1;
    while(left < right){
        int currentSum = array[left] + array[right];
        if(currentSum == targetSum){
            return {array[left], array[right]};
        } else if(currentSum < targetSum){
            left++;
        } else{
            right--;
        }
    }
  return {};
}
