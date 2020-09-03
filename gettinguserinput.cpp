#include<iostream>
#include<cmath>
using namespace std;
int not_main()
{
    cout<<"hey! 'tis not_main";
    return 0;
}
int main()
{
    cout<<"hey! 'tis main"<<endl;
    not_main(); 
    return 0;
}