//��������ƥ������ 
//����׼�ǿ�ջ�Ƿ�Ϊ�� ���ƥ�䶼�ɹ� ����Ǹ���ջ 
#include  <bits/stdc++.h>
using namespace std;
stack <int> s;
int a[200000+10];
int cnt=1;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		while(!s.empty())
		s.pop();
		fill(a,a+100000+10,0);
		int n,m;
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
			int u,v;			
			cin>>u>>v;
			a[u]=cnt;
			a[v]=cnt;
			cnt++;
		}
		for(int i=1;i<=2*n;i++)
		{
			if(a[i])//���i�бߵĻ� 
			{
				if(s.empty())
				s.push(a[i]);
				else if(s.top()!=a[i])s.push(a[i]);
				else s.pop();
			}
		}
		if(s.empty())cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

            

