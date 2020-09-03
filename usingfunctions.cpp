#include<iostream>

using namespace std;

// to make sure that c++ recognizes sayHi()
void sayHi(string saaa, int age);

int main()
{
    string name;
    int yrs;
    cout<<"Enterest thou thy name"<<endl;
    getline(cin ,name);
    cout<<"Enterest thou thy age."<<endl;
    cin>>yrs;
    sayHi(name,yrs);
}

void sayHi(string s,int age)
{
    cout<<"Hello, "<<s<<endl;
    cout<<"Within 366 days shalt thou turn "<<age+1<<endl;
    cout<<"So....."<<endl;
    cout<<"Please do get lost!";
}
