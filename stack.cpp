#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define max 1000
const int N = sqrt(1e9) + 5;
const int MOD = 1e9 + 7;

// Defining Modulo
const int M = 1e9 + 7;
// To store prime factors
vector<ll> pr;
vector<bool> primes(N, 1);
// string -> U & u function
// transform(s.begin(), s.end(), s.begin(), ::toupper);
ll binExpIter(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        // If b is odd
        if (b & 1)
        {
            ans = (ans * a) % M;
        }
        // Reaching to current power of a
        a = (a * a) % M;
        // Dividing or right shifting b
        b >>= 1;
    }
    return ans;
}
class Stack
{

    int top;

public:
    int arr[max];

    Stack()
    {
        top = -1;
    }
    void push(int x)
    {
        if (top >= (max - 1))
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            arr[++top] = x;
            cout << x << " pushed in stack" << endl;
        }
    }
    bool isEmpty()
    {
        if(top==-1)return 1;
        return 0;
    }
    int isfull()
    {
        if (top >= max - 1)
        {
            return 0;
        }
        return 1;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow";
            return 0;
        }
        int x = arr[top--];
        return x;
    }
    int peek()
    {
        if (top < 0)
        {
            return -1;
        }
        else
        {
            int x = arr[top];
            return x;
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// #define MAX 1000

// class Stack
// {
//     int top;

// public:
//     int a[MAX]; // Maximum size of Stack

//     Stack() { top = -1; }
//     bool push(int x);
//     int pop();
//     int peek();
//     bool isEmpty();
// };

// bool Stack::push(int x)
// {
//     if (top >= (MAX - 1))
//     {
//         cout << "Stack Overflow";
//         return false;
//     }
//     else
//     {
//         a[++top] = x;
//         cout << x << " pushed into stack\n";
//         return true;
//     }
// }

// int Stack::pop()
// {
//     if (top < 0)
//     {
//         cout << "Stack Underflow";
//         return 0;
//     }
//     else
//     {
//         int x = a[top--];
//         return x;
//     }
// }
// int Stack::peek()
// {
//     if (top < 0)
//     {
//         cout << "Stack is Empty";
//         return 0;
//     }
//     else
//     {
//         int x = a[top];
//         return x;
//     }
// }

// bool Stack::isEmpty()
// {
//     return (top < 0);
// }

// // Driver program to test above functions
// int main()
// {
//     class Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     cout << s.pop() << " Popped from stack\n";

//     // print top element of stack after popping
//     cout << "Top element is : " << s.peek() << endl;

//     // print all elements in stack :
//     cout << "Elements present in stack : ";
//     while (!s.isEmpty())
//     {
//         // print top element in stack
//         cout << s.peek() << " ";
//         // remove top element in stack
//         s.pop();
//     }

//     return 0;
// }