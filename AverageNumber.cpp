#include <iostream>
using namespace std;

int main() {
    int t,n,k;
    long int v;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>v;
        long int a[n],s=0;
        int i=0;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            s=s+a[i];
        }
        long int x=(n+k)*v;
        if((x-s)<=0)
        cout<<-1<<endl;
        else
        {
            if((x-s)%k==0)
            cout<<(x-s)/k<<endl;
            else
            cout<<-1<<endl;
        }
    }
	return 0;
}
