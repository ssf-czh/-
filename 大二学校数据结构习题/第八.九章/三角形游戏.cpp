//�򵥵�ӳ��map�Ĳ��� �ѱ�������Ū��һһ��Ӧ���ַ��� ��ӳ��
//��ʼ��������β����� ��Ĭ��Ϊ0
//Ҳ������mp.count(string temp)���жϸ���������mp.find(string temp)==mp.end()���ж��Ƿ���� 
#include <bits/stdc++.h>
using namespace std;
map<string,int> mp;
int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string str[3];
		cin>>str[0]>>str[1]>>str[2];
		sort(str,str+3);
		string temp=str[0]+" "+str[1]+" "+str[2];
		mp[temp]++;
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		string str[3];
		cin>>str[0]>>str[1]>>str[2];
		sort(str,str+3);
		string temp=str[0]+" "+str[1]+" "+str[2];
		cout<<mp[temp]<<endl;
	}
	return 0;
}
