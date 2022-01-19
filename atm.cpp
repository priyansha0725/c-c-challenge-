#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        string sum="";
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int j = 0; j < n; j++)
	    {
	        if((k - arr[j]) >= 0)
	        {
	            k = k - arr[j];
	            sum = sum + "1";
	        }
	        else
	        {
	            sum = sum + "0";
	        }
	    }
	    cout << sum << endl;
    }
    return 0;
}