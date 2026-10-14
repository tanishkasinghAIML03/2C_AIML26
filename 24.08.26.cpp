

#include <iostream>
using namespace std;
#define SIZE 5
int deque[SIZE] = {10, 20, 30, 40, 50};
int front = 0, rear = 4;
void deleteFront()
{
    if (front == -1)
    {
        cout << "Queue underflow" << endl;
    }
    else
    {
        cout << "deleted element : " << deque[front] << endl;
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front ++;+
        }
    }
}
int main ()
{
    deleteFront();
    cout << "dqueue after deletion : ";
    for (int i = front; i <= rear; i++)
    {
        cout << deque[i] << " ";
    }
    return 0;
}