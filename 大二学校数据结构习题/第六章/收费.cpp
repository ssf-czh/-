//father[i]��ʾi���ͨ�����ڵ��·��Ȩֵ 
//���ͼΪ�������� ���Կ����������ʾ i��㸸�ڵ����i/2 
//ע��Ȩֵ�� father����Ҫ�� longlong ��Ȼ�ᱬ���� 
#include <bits/stdc++.h>
#define N 1000010
using namespace std;
long long father[N];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;cin>>t;
		if(t==1)
		{
			int u,v;
			long long val;
			cin>>u>>v>>val;
			while(u!=v)
			{
				if(u>v)
				{
					father[u]+=val;
					u/=2;
				}
				else{
					father[v]+=val;
					v/=2;
				}
			}
		}
		else
		{
			int u,v;
			cin>>u>>v;
			long long sm=0;
			while(u!=v)
			{
				if(u>v)
				{
					sm+=father[u];
					u/=2;
				}
				else{
					sm+=father[v];
					v/=2;
				}
			}
			cout<<sm<<endl;
		}
	}
	return 0;
} 
