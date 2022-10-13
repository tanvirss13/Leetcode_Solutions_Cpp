class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int poss_dups = 0;
        int len = arr.size()-1;
        
        for(int left=0; left<=len-poss_dups;left++){
            if(arr[left]==0){
                if(left==len-poss_dups){
                    arr[len]=0;
                    len-=1;
                    break;
                }
                poss_dups++;
            }
        }
        int last = len - poss_dups;
        
        for(int i=last; i>=0; i--){
            if(arr[i] == 0){
                arr[i+poss_dups] = 0;
                poss_dups--;
                arr[i+poss_dups] = 0;
            } else {
                arr[i+poss_dups] = arr[i];
            }
        }
    }
};
