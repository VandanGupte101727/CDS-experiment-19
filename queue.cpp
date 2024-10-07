#include<iostream>
using namespace std;

#define MAX 5
class Queue {
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int val) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow\n";
        } else {
            if (front == -1) front = 0; // Initialize front
            arr[++rear] = val;
            cout << "Enqueued " << val << " into the queue.\n";
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
        } else {
            cout << "Dequeued " << arr[front++] << " from the queue.\n";
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, val;

    do {
        cout << "\nQueue Operations: \n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> val;
                q.enqueue(val);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, try again!\n";
        }
    } while (choice != 4);

    return 0;
}
