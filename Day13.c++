    #include <iostream>
    #include<string>
    using namespace std;
    bool isPalindrome(string &s , int start , int end){
        while(start <= end){
            if(s[start] != s[end]){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0; i<s.length(); i++){
            for(int j=i; j<s.length(); j++){
                if(isPalindrome(s,i,j)){
                    string temp = s.substr(i,j-i+1);
                    ans = ans.length() > temp.length() ? ans : temp;
                }
            }
        }
        return ans;
    }

    int main(){
        string s = "babad";
        cout<<longestPalindrome(s);

        return 0;
    }