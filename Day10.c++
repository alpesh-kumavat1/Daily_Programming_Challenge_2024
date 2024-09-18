#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string , vector<string> > ans;

        for(auto ele : strs){
            string s = ele;
            sort(s.begin() , s.end());
            ans[s].push_back(ele);
        }

        vector<vector<string> > temp;
        for(auto it = ans.begin(); it!=ans.end(); it++){
            temp.push_back(it->second);
        }
        return temp;
    }




    int main(){
        vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
        vector<vector<string>> ans = groupAnagrams(strs);
        for(auto ele : ans){
            for(int i=0; i<ele.size(); i++){
                cout<<ele[i]<<" ";
            }
            cout<<endl;
        }


        return 0;
    }