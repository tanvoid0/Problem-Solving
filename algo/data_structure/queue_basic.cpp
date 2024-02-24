#include<bits/stdc++.h>
#define MAX_SIZE 5
using namespace std;

int* plateStack = new int[MAX_SIZE];
int currentPlateIndex = 0;

void print() {
    cout << "Current plate stack: ";
    for (int i=0; i < currentPlateIndex; i++) {
        cout << plateStack[i];
        if (i != currentPlateIndex -1) {
            cout << ", ";
        } else {
            cout << endl;
        }
    }
}

void push(int plateNo) {
    if (currentPlateIndex >= MAX_SIZE) {
        cout << "Cannot insert " << plateNo << ". Stack size max quota " << MAX_SIZE << " reached." << endl;
        return;
    }
    cout << "Inserting plate no =" << plateNo <<" to stack" << endl;
    plateStack[currentPlateIndex] = plateNo;
    currentPlateIndex++;
    print();
}

void pop() {
    cout <<"Getting top plate no = " << plateStack[currentPlateIndex-1] << endl;
    plateStack[currentPlateIndex-1] = 0;
    currentPlateIndex--;
    print();
}



// Queue example
int main()
{
    push(1);
    push(2);
    push(3);
    pop();
    push(4);
    pop();
    pop();
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);

    return 0;
}