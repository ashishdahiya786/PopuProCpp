using namespace std;
#include <iostream>
int main()
{
    int n,i;
    long long val=1;

    cout<<"Enter the number...\n";
    cin>>n;

    for(i=1; i<=n; i++)
        val = val*i;

    cout<<val;
    return 0;
}
