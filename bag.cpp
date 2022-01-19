#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if( ( a<=e && b+c<=d) || ( b<=e && a+c<=d) || ( c<=e && b+a<=d) )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}