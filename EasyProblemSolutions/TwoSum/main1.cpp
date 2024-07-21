#include <iostream>

//This is for 0(n^2) time | 0(1) space
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
    for(int i = 0; i < array.size()-1; i++){
        int x = array[i];
        for(int j = i+1; j < array.size(); j++){
            int y = array[j];
            if (x + y == targetSum){
                return vector<int>{x, y};
            }
        }
    }
  return {};
}
