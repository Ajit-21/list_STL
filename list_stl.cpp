#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l {3,5,33,6,7,44};
    cout<<endl<<"   "<<l.front();
    cout<<endl<<endl<<"   "<<l.back();
    cout<<endl<<endl;
    l.push_front(2);
    l.push_back(88);

    l.emplace_back(55);
    l.emplace_front(1);

    l.pop_front();
    l.pop_back();

    for(auto t= l.begin();t!= l.end();t++)
        cout<<"   "<<*t;
    cout<<endl;
    return 0;
}
