#include <iostream> // Include the necessary header for 'cout'

class Queue {
private:
    int* arr;
    int qqfront;
    int rear;
    int size;

public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qqfront = 0;
        rear = 0;
    }

    void enqueue(int data) {
        if (rear == size) {
            std::cout << "Queue is full" << std::endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {  // Changed return type to 'int'
        if (qqfront == rear) {
            return -1;
        } else {
            int ans = arr[qqfront];
            arr[qqfront] = -1;
            qqfront++;
            if (qqfront == rear) {
                qqfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int qfront() {  // Changed function name to 'qfront'
        if (qqfront == rear) {
            return -1;
        } else {
            return arr[qqfront];
        }
    }

    bool isEmpty() {
        return qqfront == rear;  // Simplified the expression
    }
};