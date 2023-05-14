//write a program to remove the last node of list and insert it in the beginning, without changing the info part of any node.
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* link=nullptr;

    node(int data)
    {
        this->data=data;
        this->link=nullptr;
    }
};

void add(node* &start,int val)
{
    node* p= start;
    while(p->link!=nullptr)
        p=p->link;
    node* temp= new node(val);
    p->link=temp;
    temp=nullptr;
    p=nullptr;
}

void display(node* start)
{
    cout<<endl;
    while(start!=nullptr)
    {
        cout<<"   "<<start->data;
        start=start->link;
    }
    cout<<endl;
}

void RemoveInsert(node* &start)
{
    node* p=start;
    while(p->link->link!=nullptr)
        p=p->link;
    node* temp=p->link;
    p->link=nullptr;
    temp->link=start;
    start=temp;
    temp=nullptr;
    p=nullptr;
}

int main()
{
    node* start= new node(34);
    add(start,5);
    add(start,56);
    add(start,66);
    add(start,23);
    add(start,2);
    RemoveInsert(start);
    display(start);
    return 0;
}
