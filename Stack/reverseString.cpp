#include<stack>
#include<iostream>
#include<string>
using namespace std;

int main(){
    string ch = "aaditya";

    stack<char>s;

    for(int i=0; i<ch.length(); i++){
        char c = ch[i];
        s.push(c);
    }

    string ans = "";

    while(!s.empty()) {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout << "answer is " << ans << endl;

    return 0;

}
