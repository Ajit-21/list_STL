#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l {3,5,33,6,7,44};
    cout<<endl<<"   "<<l.front();
    cout<<endl<<endl<<"   "<<l.back();
    cout<<endl<<endl;
    for(auto t= l.begin();t!= l.end();t++)
        cout<<"   "<<*t;
    cout<<endl;
    return 0;
}
