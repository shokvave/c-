#include<iostream>
#include<queue>
using namespace std;

int main(){
    create a queue
    queue<int> q;
    q.push(11);
    q.push(15);
    q.push(13);

    cout<<"Size of queue is " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "Size of queue is "<< q.size() << endl;

    if(q.empty()){
        cout << "Queue is empty "<< endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }


    return 0; 
}