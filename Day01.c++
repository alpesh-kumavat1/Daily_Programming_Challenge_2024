#include <iostream>
#include<vector>
using namespace std;
void sortNum(vector<int>& nums){
    int i = 0; 
    int start = 0;
    int end = nums.size()-1;


    while(i <= end){
        if(nums[i] == 0){
            swap(nums[i],nums[start]);
            start++;
            i++;
        }
        else if(nums[i] == 1){
            i++;
        }
        else{
            swap(nums[i],nums[end]);
            end--;
        }
    } 
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i];
    }
}

int main(){
    vector<int>num = {0,1,0,1,0,0,2,2,1,2,1};
    sortNum(num);
    return 0;
}