//���鼯�Ĳ���
//������� ʱ�临�Ӷ�̫��
//next[i]��ʾ��i��ˮ������һ������ˮ���ı�� ��ʼ��Ϊ���� 
#include <bits/stdc++.h>
#define N 100000+10
using namespace std;
int full[N];
int cur[N];
int next[N];
int findnext(int x)
{
	if(next[x]==x)return x;
	int f=findnext(next[x]);
	next[x]=f;
	return f;
}//·��ѹ�� 
void merge(int a,int b)//b=a+1 ���a����֮��a��next�͵���b��next
{
	next[a]=next[b];
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>full[i];
	for(int i=0;i<=n+1;i++)
	next[i]=i;
	int q;
	cin>>q;
	while(q--)
	{
		int a;
		cin>>a;
		if(a==1)
		{
			int x,y;
			cin>>x>>y;
			while(y)
			{
				x=findnext(x);
//				cout<<"xxx="<<x<<endl;
				if(x==n+1)break;
//				cout<<"! "<<full[x]-cur[x]<<endl;
				if(full[x]-cur[x]>=y)
				{
					
					cur[x]+=y;
					y=0;
//					cout<<cur[x]<<" !"<<endl;
				}
				else
				{
					y-=(full[x]-cur[x]);
					cur[x]=full[x];
					merge(x,x+1);
				}
			}	
		}
		else
		{
			int x;cin>>x;
			cout<<cur[x]<<endl;
		}
	}
	return 0;
}
