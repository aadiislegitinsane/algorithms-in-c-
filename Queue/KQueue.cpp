#include<iostream>
using namespace std;

queue<int> reverse(queue<int>q){
    //step 1 : push all queue elements into the stack 
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    
    return q;
}