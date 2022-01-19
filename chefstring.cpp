#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int len = s1.length();
        int min=0;
        int max=0;
        for(int i = 0; i<len; i++)
        {
            if(s1[i]=='?' || s2[i]=='?')
            {
                max++;
            }
            if(s1[i]!=s2[i] && s1[i]!='?' && s1[i]!='?' && s2[i]!='?')
            {
                min++;
                max++;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}