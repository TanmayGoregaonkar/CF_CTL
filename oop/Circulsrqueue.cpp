#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// string -> U & u function
// transform(s.begin(), s.end(), s.begin(), ::toupper);
class Queue
{

    int front, rear, size;
    int *arr;

public:
    Queue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int(size);
    }

    void enqueue(int data)
    {
        if (rear == -1 && front == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = data;
        }
        else if ((rear + 1) % size == front)
        {
            cout << "Overflow\n";
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = data;
        }
    }

    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Underflow\n";
        }
        if (front == rear)
        {
            front = -1, rear = -1;
        }
        else
            front = (front + 1) % size;
    }
    void display()
    {
        if (front == -1)
        {
            printf("\nQueue is Empty");
            return;
        }
        printf("\nElements in Circular Queue are: ");
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                printf("%d ", arr[i]);
        }
        else
        {
            for (int i = front; i < size; i++)
                printf("%d ", arr[i]);

            for (int i = 0; i <= rear; i++)
                printf("%d ", arr[i]);
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    Queue q(6);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(5);
    q.display();
    return 0;
}