#include<iostream>
using namespace std;

class KQueue{
    public:
    int *arr;
    int *front;
    int *rear;
    int *next;
    int n,k;
    int freeSpot;

    public:
         KQueue(int n, int k){
            this->n = n;
            this->k = k;
            rear = new int[k];
            front = new int[k];
            for(int i=0; i<k; i++){
                front[i] = -1;
                rear[i] = -1;
            }
            next = new int[n];
            for(int i=0; i<n; i++){
                next[i] = i+1;
            }

            next[n-1] = -1;
            arr = new int[n];
            freeSpot = 0;
         }
        
        void enqueue(int data, int qn){
            //overflow
            if(freeSpot == -1){
                cout << "No empty space available" << endl;
                return ;
            }

            //find first free index 
            int index = freeSpot;

            //update freespot
            freeSpot = next[index];

            //check whether first element
            if(front[qn-1] == -1){
                front[qn-1] = index;
            }
            else{
                //link new element to previous element
                next[rear[qn-1]] = index;
            }
            //update next 
            next[qn-1] = -1;

            //update rear 
            rear[qn-1] = index;

            //push element 
            arr[index] = data;
        }

        int dequeue(int qn){
            //underflow 
            if(front[qn-1] == -1){
                cout << "queue is empty" << endl;
                return -1;
            }

            //find index to pop
            int index = front[qn-1];

            //front ko aage badhao 
            front[qn-1] = next[index];

            //manage freespots
            next[index] = freeSpot;
            freeSpot = index;
            return arr[index];
            
        }    
};