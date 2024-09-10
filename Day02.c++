#include<iostream>
#include<vector>
using namespace std;



int Find_Misssing_Num2(vector<int>nums){
    int first = 1;
    int i = 0;
    while(i<nums.size()){
        if(first != nums[i]){
            return first;
            break;
        }
        else{
            first = nums[i] + 1;
        }   
        i++;
    }
    return first;
}


int main(){

    vector<int>nums{1,2,4,5};
    int ans; 
    
    cout<<"\nMissing Number 1 : "<<Find_Misssing_Num2(nums);

    vector<int>nums2{2,3,4,5};
  
    cout<<"\nMissing Number 2 : "<< Find_Misssing_Num2(nums2);

    vector<int>nums3{1,2,3,4};
   
    cout<<"\nMissing Number 3 : "<<Find_Misssing_Num2(nums3);

    vector<int>nums4{1};
   
    cout<<"\nMissing Number 1 : "<< Find_Misssing_Num2(nums4);


    return 0;
}
