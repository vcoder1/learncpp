#include <iostream>
using namespace std;
int main()
{
    cout<<"For the following, enter 0 if false and 1 if true."<<endl;
    bool isMale;
    bool isTall;
    cout<<"Are you male?"<<endl;
    cin>>isMale;
    cout<<"Are you tall?"<<endl;
    cin>>isTall;
    if(isMale||isTall)
    {
        cout<<"You are a male";
    }
    else{
        cout<<"You aren't male.";
    }
    cout<<"here: "<<isMale<<endl;
}
