using namespace std;
#include <iostream>
int main()
{
    int n,i,z=0;
    cout<<"enter the number...";
    cin>>n;
    for(i=5; i<=n; i=i*5)
        z = z + (n/i);
    cout<<z;
    return 0;
}
