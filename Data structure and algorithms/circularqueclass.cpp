#include<iostream>
#include<queue>
using namespace std;

class CircularQueue{
    int* arr;
    int front;
    int rear;

    public:
    CircularQueue(int n){
        size = 100001;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value){
        if((front == 0 && rear == size-1) || (rear ==(front-1)%(size))){
            cout << "que is full ";
            return false;
        }
        else if (front == -1){
            front = rear = 0;
            arr[rear] = value;

        }
        else if(rear == size && front ! = 0 ){
            rear = 0;
            arr[rear] = value;

        }
        else{
            rear ++
            arr[rear]= value;
        }
    }

    int dequeue(){
        if(front == -1){
            cout << "Queue is empty ";
            return -1 ;
        }
        int ans == arr[front];
        arr[front] = -1;
        if(front == rear){
            front = rear  = -1;
        }
        else if(front == size -1){
            front = 0;
        }
        else{
            front++;
        }
    }
};