#include<iostream>
using namespace std;

string reverseWords(string &s) {
        int n  = s.length();
        int i = 0;
        string ans;
        while(i<n){
            while(i<n && s[i]==' '){
                i++;
                if(i>=n){
                    break;
                }
            }
            int j = i;
            string temp = "";
            while(j<n && s[j] != ' '){
                temp += s[j++];
            }
            if(temp.length()>0){
                if(ans.length() == 0){
                    ans = temp;
                }
                else{
                    ans = temp + " " + ans;
                }
                i = j +1;
            }
        }
     return ans;
}

int main(){
    string s =  "the sky is blue";
    string p = reverseWords(s);
    cout<<p;

    return 0;
}