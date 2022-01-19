#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
    {
        string colour;
        cin>>colour;
        int len = colour.length();
        int a = 0;
        int b = 0;
        for(int i = 0; i<len; i++)
        {
            if(colour[i]=='a')
            {
                a++;
            }
            else if(colour[i]=='b')
            {
                b++;
            }
        }
        cout<<min(a,b)<<endl;
    }
    return 0;
}