#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "printing the array" << endl;

    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "printing done " << endl;
    


}

int main() {
    // declaring
    int number[15];

    // accessing an element
    cout << "Value at 0 Index " << number[0] << endl;

    cout << "Value at 20 Index " << number[20] << endl;

    // initializing
    int second[3] = {19, 20, 21};

    // accessing an elemnent
    cout << "Value at 2 Index " << second[2] << endl;

    // print the array
    int third[15] = {2, 7};

    int n = 15;
    printArray(third, 15);

    
    // Initializing all locations with zeros

    int fourth[10]={0};

    int n1 = 10;
    printArray(fourth, 10);
    // Initializing all locations with one 

    int fifth[10]={1};

    int n2 = 10;
    printArray(fifth, 10);
    



    return 0;
}
