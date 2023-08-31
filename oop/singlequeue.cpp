#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
// string -> U & u function
// transform(s.begin(), s.end(), s.begin(), ::toupper);
class Queue
{
    int front, rear, size, *arr;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int(size);
    }

    void enqueue(int data)
    {
        
         if (rear == size)
        {
            cout << "overflow\n";
            return;
        }
        else
        {
            arr[rear] = data;
            rear = rear + 1;
        }
    }
    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Underflow\n";
            return;
        }
        if (front == rear)
        {
            front = -1, rear = -1;
        }
        else
        {
            front++;
        }
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
    return 0;
}