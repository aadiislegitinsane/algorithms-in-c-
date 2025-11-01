#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public: 
        int *arr;
        int top1;
        int top2;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    public:
        //push in first stack
        void push1(int element){
            if(top2 - top1 > 1){
                top1++;
                arr[top1] = element;
            }
        }

        //push in second stack 
        void push2(int element){
            if(top2 - top1 > 1){
                top2--;
                arr[top2] = element;
            }
        }

        //pop from first stack 
        void pop1(){
            if(top1>=0){
                int ans = arr[top1];
                top1--;
                return ans;
            }
            else{
                return -1;
            }
        }

        //pop from second stack 
        void pop2(){
            if(top2<size){
                int ans = arr[top2];
                top2++;
                return ans;
            }
            else{
                return -1;
            }
        }
};