#include<bits/stdc++.h>

using namespace std;
int main()
{
    double tong=0;
    int dem=0;
    while(1)
    {
        double n;
        cin>>n;
        if(n>=0&&n<=10)
        {
            tong+=n;
            dem++;
        }
        else if(n<0) break;
    }
    cout<<fixed<<setprecision(2)<<tong/dem;
}
