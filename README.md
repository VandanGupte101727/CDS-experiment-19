# CDS-experiment-19
c plus plus and data structures experiment 19

Aim:-to study and implement queue and its operations <br>

Software used:- VS code <br>

Theory:-<br>
A queue is a linear data structure that follows the First In, First Out (FIFO) principle, meaning the first element added is the first one to be removed. It can be visualized as a line of people waiting for a service where the person at the front gets served first.<br>

Basic Queue Operations:<br>
Enqueue: Adds an element to the rear (end) of the queue.<br>
Dequeue: Removes an element from the front of the queue.<br>
Front (Peek): Retrieves the front element without removing it.<br>
IsEmpty: Checks if the queue is empty.<br>
IsFull: Checks if the queue is full (in case of a bounded queue).<br>

CODE:-<br>


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
