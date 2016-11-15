#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out("e:\\file.txt");
	if(!out)
	{
		cout<<"sdasd"<<endl;
		return 1;
	}
	out<<"welcome to ";
	char ch[]="dsadas";
	int i=0;
	while(ch[i]!='\0') 
	{
		out.put(ch[i]); 
		i++;
	}
	out.close();
	ifstream in("e:\\file.txt");
	if(!in)
	{
		cout<<"dsada"<<endl;
		return 1;
	}
	char gg[80];
	in>>gg;
	cout<<gg;
	in>>gg;
	cout<<gg;
	while(in)
	{
		char c=in.get();
		if(in) cout<<c;
	}
	in.close();
	return 0;
}
