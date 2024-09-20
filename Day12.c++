#include<iostream>
#include<stack>
#include<string>
using namespace std;


bool isValid(string s) {
        stack<char> nums;

        for(int i=0; i<s.length(); i++){
            char ch = s[i];

            if(ch == '(' || ch == '[' || ch == '{'){
                nums.push(ch);
            }
            else{
                if(!nums.empty()){
                    char top = nums.top();
                    if(ch == ')' && top == '(')
                        nums.pop();
                    else if(ch == ']' && top == '[')
                        nums.pop();
                    else if(ch == '}' && top == '{')
                        nums.pop();
                    else
                        return false;
                }
                else{
                    return false;
                }
            }
        }
        if(!nums.empty())
            return false;
        return true;
    }

    int main(){
        string s = "()}";
        cout<<isValid(s);


        return 0;
    }