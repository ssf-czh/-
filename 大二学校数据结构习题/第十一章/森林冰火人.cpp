//ֱ�ӱ������� ��Ҫ�Ż�һ�� start ���ǰ��Ѿ���0��ѩ�˶Ѹ�ȥ�� 
#include <bits/stdc++.h>
using namespace std;
vector<int> a,b;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;cin>>t;
		a.push_back(t);
	}
	for(int i=0;i<n;i++)
	{
		int t;cin>>t;
		b.push_back(t);
	}
	int start=0;
	for(int i=0;i<n;i++)
	{
		int sm=0;
		while(start<n&&a[start]==0)
		{
			start++;
		}
		for(int j=start;j<=i;j++)
		{
			if(a[j]>=b[i])
			{
				a[j]-=b[i];
				sm+=b[i];
			}
			else
			{
				sm+=a[j];
				a[j]=0;
			}
		}
		cout<<sm<<" ";
	}
	return 0;
 } 
