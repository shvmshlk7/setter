#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,s;
	    cin>>x>>y;
	    s=x-y;
	    if(y>=s)
	    {
	        cout<<"YEs"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
