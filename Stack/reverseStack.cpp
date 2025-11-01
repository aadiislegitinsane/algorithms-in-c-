#include<stack>

void insertAtBottom(stack<int> &s, int element){
    //base case 
    if(s.empty()){
        s.push(element);
        return ;
    }
    int num = s.top();
    s.pop();

    //recursive call
    insertAtBottom(s,element);
    s.push(num);
}

void reverseStack(stack<int> &inputStack){
    if(inputStack.empty()){
        return ;
    }

    int element = inputStack.top();
    inputStack.pop();

    reverseStack(inputStack);
    insertAtBottom(inputStack, element);
}