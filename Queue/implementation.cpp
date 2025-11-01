#include<iostream>
using namespace std;

class Queue{
    //data members 
    int *arr;
    int size;
    int qfront;
    int rear;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    //push operation 
    void enqueue(int data){
        //check for full
        if(rear == size){
            cout << "queue is full" << endl;
            return ;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    bool isEmpty(){
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
    }

    //pop operation 
    int dequeue(){
        //check for empty 
        if(qfront == rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front(){
        //check for empty 
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};