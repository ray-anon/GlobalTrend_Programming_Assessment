#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node * next;
        Node(int x){
            data = x;
            next = NULL;
        }
};
Node* head = NULL;
void insert(int x)
{
    Node* new_node = new Node(x);
    if(head == NULL){
        head = new_node;
        return;
    }
    new_node->next = head;
    head = new_node;
    return;
}
void reverse()
{
    Node* current = head;
    Node* prev = NULL;
    Node* next;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void print()
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
    return;
}
int main()
{
    int n , x;
    cout<< "Enter the size of linked list: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cout<<"Enter the element at " << i << " : ";
        cin>> x;
        insert(x);
    }
    cout<<"Before reversing: " ;
    print();
    cout<<"\n";
    reverse();
    cout<<"After reversing: " ;
    print();
}