#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// string -> U & u function
// transform(s.begin(), s.end(), s.begin(), ::toupper);
class Queue{
    int *arr,rear,front,size;
    public:
        Queue(int size){
            this->size = size;
            rear = -1,front=-1;
            arr = new int(size);
        }

        void enqueue(int data){
            if(front == -1 && rear ==-1){
                front = 0,rear = 0;
                arr[rear] = data;
            }
            else if((rear+1)%size == front){
                cout<<"overflow\n";
                return;
            }
            else{
                rear = (rear+1)%size;
                arr[rear] = data;
            }
        }

        void dequeue(){
            if(front == -1 && rear == -1){
                cout<<"Underflow\n";
            }
            else if(front == rear){
                front = -1,rear =-1;
            }
            else
            {
                front = (front+1)%size;
            }
            
        }
        void display(){
            if(front == -1)return;
            else if(rear>=front){
                for(int i = front;i<=rear;i++){
                    cout<<arr[i]<<" ";
                }cout<<endl;
            }
            else{
                for(int i = front;i<=size;i++){
                    cout<<arr[i]<<" ";
                }cout<<endl;
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
    q.display();
    return 0;
}