#include <iostream>

using namespace std;

int main() {
	int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
            cout<<0<<"\n";
        else if(i==2)
            cout<<6<<"\n";
        else
        {
            long p= (long) i*i;
            long j= i-2, k = (long)p * (p - 1)/2;
            k -= 8 * j * (j + 1) / 2;
            cout<<k<<"\n";
        }
        
    }

}