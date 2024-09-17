#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i = 0;

        while(true){
            char temp = 0;
            for(auto ele : strs){
                if(i>=ele.length()){
                    temp = 0;
                    break;
                }
                
                if(temp == 0){
                    temp = ele[i];
                }
                else if(ele[i] != temp){
                    temp = 0;
                    break;
                }
            }
            if(temp == 0){
                break;
            }
            ans.push_back(temp);
            i++;
           
        }
    return ans;  
}



int main(){
    vector<string> nums = {"flower", "flow", "flight"};
    string ans = longestCommonPrefix(nums);
    cout<<ans<<endl;

    vector<string> nums1 = {"dog", "racecar", "car"};
    string ans1 = longestCommonPrefix(nums1);
    cout<<ans1<<endl;

    vector<string> nums2 = {"apple", "ape", "april"};
    string ans2 = longestCommonPrefix(nums2);
    cout<<ans2<<endl;

    vector<string> nums3 = {"alone"};
    string ans3 = longestCommonPrefix(nums3);
    cout<<ans3<<endl;
    return 0;
}