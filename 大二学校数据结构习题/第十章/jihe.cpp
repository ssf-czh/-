//�˽�set�д��� upper_bound �� lower_bound������ʹ�� low���ش����
//upper �����ϸ���� ע������   ����Ҳ����Ż�end������ 
#include <bits/stdc++.h>
using namespace std;
set<int> s;
void find(int v)
{
	set <int>::iterator it=s.lower_bound(v);
	if(s.empty())
	{
		cout<<"Empty!"<<endl;
		return;
	}
	if(it==s.begin()||*it==v)
	{
		cout<<*it<<endl;
		return;
	}
	int a=*it;
	int b=*(--it);
	if(abs(a-v)==abs(b-v))
	cout<<b<<" "<<a<<endl;
	else if(abs(a-v)<abs(b-v))
	cout<<a<<endl;
	else cout<<b<<endl;
	return;
}
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		if(a==1)s.insert(b);
		else
		{
			find(b);
		}
		
	}
	return 0;
}
