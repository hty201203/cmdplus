#include<cstdio>
#include<algorithm>
#include<iomanip>
#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>
#include<vector>
#include<map>
#include<iostream>
#include<queue>
#define MAX1 1000000005
#define MAX2 200005
#define MAX3 100005
//#include<conio.h>
using namespace std;
void dofilecom(string a){
	ifstream f(a);
	int l;
	string s;
	f>>l;
	printf("dofilecom|l:%d s:",l);
	cout<<a<<"\n";
	getline(f,s,'\n');
	while(l--){
		getline(f,s,'\n');
		//printf("r00000 s:");
		//cout<<s<<"\n";
		system(s.c_str());
	}
	f.close();
}
void r00000(){dofilecom("save\\00000.txt");}
void r00001(){dofilecom("save\\00001.txt");}
void r00002(){dofilecom("save\\00002.txt");}
void r00003(){
	string s;
	cin>>s;
	if(s=="help") cout<<"r00003 exe starter.\n";
	else if(s=="yushe") dofilecom("save\\00003.txt");
	else{
		string e1 = "exe\\"+s;
		cout<<"prog "<<e1<<"\n";
		system(e1.c_str());
	}
}
void r00004(){
	string s;
	cin>>s;
	if(s=="help") cout<<"r00004 system command.\n";
	//else if(s=="yushe") dofilecom("save\\00003.txt");
	else{
		string e1 = s;
		cout<<"sysml "<<e1<<"\n";
		system(e1.c_str());
	}
}
void r00005(){dofilecom("save\\00005.txt");}
void e00000(string s){
	cout<<"无法将'"<<s<<"'识别为应用程序、快捷启动、\n代码、内部或外部命令、批处理程序";
	cout<<"\n请检查输入是否正确，或转到项目地址\n";
	cout<<"https://github.com/hty201203/cmdplus \n";
}
void r00all(string s){
	dofilecom(s);
}
void normrun(){
	string s;
	printf("CMDP shell>");
	cin>>s;
	if(s=="help") r00001();
	else if(s=="exit") r00002();
	else if(s=="reload") r00000();
	else if(s=="exe") r00003();
	else if(s=="sys") r00004();
	else if(s=="cls") r00005();
	else if(s=="about") r00all("save\\00006.txt");
	else e00000(s);
}
int main(){
	r00000();
	printf("[W]beya ver! not safe!\n");
	while(1>0){
		normrun();
	}
	return 0;
}

