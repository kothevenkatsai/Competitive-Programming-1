#include<iostream>
using namespace std;
int check(int no)
{
    if(no<0)
        return 0;
    int sum=0,temp=no;
    while(no>0)
    {
        int a=no%10;
        sum=sum*10+a;
        no=no/10;
    }
    if(temp==sum)
        return 1;
    else
        return 0;
}
int main()
{
    int no;
    cout<<"enter a no: "<<endl;
    cin>>no;
    if(check(no))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
