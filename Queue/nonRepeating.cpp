#include<iostream>
using namespace std;

class Solution{
    public:
        String FirstNonRepeating(String A){
            map<char,int> m;
            string ans = "";
            queue<char>q;

            for(int i=0; i<A.length(); i++){
                char ch = A[i];
                m[ch]++;

                //push into queue
                q.push(ch);

                while(!q.empty()){
                    if(m[q.front()] > 1){
                        q.pop();
                    }
                    else{
                        ans.push_back(q.front());
                        break;
                    }
                }
                if(q.empty()){
                    ans.push_back("#");
                }
            }
            return ans;
        }
};