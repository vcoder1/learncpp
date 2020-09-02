#include <iostream>
using namespace std;
string getDayOfWeek(int dayNum)
{
	string ans;
	switch(dayNum)
	{
		case 0: ans="Sunday";break;
		case 1: ans="Monday";break;
		case 2: ans="Tuesday";break;
		case 3: ans="Wednesday";break;
		case 4: ans="Thursday";break;
		case 5: ans="Friday";break;
		case 6: ans="Saturday";break;
		default:ans="Don't play the fool with me!";
		break;
	}
	return ans;
}
int main()
{
	int x;
	cin>>x;
	cout<<getDayOfWeek(x)<<endl;
}
