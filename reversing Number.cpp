#include<iostream>
using namespace std;
int main()
{
	int n,i,temp=0,rem,rev;
	cin>>n;
	cout<<"enter n value:"<<n<<endl;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
    }
    cout<<"reverse string:"<<rev<<endl;
 } 
