#include<bits/stdc++.h>
using namespace std;
#define ll long long
void multiply(ll int F[2][2], ll int M[2][2]);
void power(ll int F[2][2], ll int n);

ll int fib(ll int n)
{
ll int F[2][2] = {{1,1},{1,0}};
if (n == 0)
	return 0;
power(F, n-1);
return F[0][0];
}

void power(ll int F[2][2], ll int n)
{
if( n == 0 || n == 1)
	return;
ll int M[2][2] = {{1,1},{1,0}};

power(F, n/2);
multiply(F, F);

if (n%2 != 0)
	multiply(F, M);
}

void multiply(ll int F[2][2], ll int M[2][2])
{
ll int x = F[0][0]*1ll*M[0][0] + F[0][1]*1ll*M[1][0];
ll int y = F[0][0]*1ll*M[0][1] + F[0][1]*1ll*M[1][1];
ll int z = F[1][0]*1ll*M[0][0] + F[1][1]*1ll*M[1][0];
ll int w = F[1][0]*1ll*M[0][1] + F[1][1]*1ll*M[1][1];

F[0][0] = x;
F[0][1] = y;
F[1][0] = z;
F[1][1] = w;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        ll n;
        cin>>n;
        cout<<fib(n+2)<<endl;
    }
return 0;
}

