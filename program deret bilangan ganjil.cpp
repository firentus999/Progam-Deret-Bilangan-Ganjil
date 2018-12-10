#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,i,batas;
    a=-1;
    cout<<"Bilangan Ganjil adalah :";
    cin>>batas;
    for(i=1;i<=batas;i++)
    {
        b=2+a;
        cout<<b<<""<<endl;
        a=b;

    }
    return 0;
}
