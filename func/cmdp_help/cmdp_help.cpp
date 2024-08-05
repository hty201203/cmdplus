#include<cstdio>
#include<algorithm>
#include<iomanip>
#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>
#include<vector>
#include <unistd.h>
#include<map>
#include<iostream>
#include<queue>
#define MAX1 1000000005
#define MAX2 200005
#define MAX3 100005
//#include<conio.h>
using namespace std;
void filecat(string a){
	ifstream f(a);
	int l;
	string s;
	f>>l;
	printf("filecat|l:%d s:",l);
	cout<<a<<"\n";
	getline(f,s,'\n');
	while(l--){
		getline(f,s,'\n');
		//printf("r00000 s:");
		cout<<s<<"\n";
		//system(s.c_str());
	}
	f.close();
}
bool contains(const std::string& str, const std::string& substr) {
    return str.find(substr) != std::string::npos;
}
string filep = "";
void jumpcd(){//need contains [def]
	string str = "func\\cmdp_help";
	char buffer[FILENAME_MAX];
    if (getcwd(buffer, sizeof(buffer)) != nullptr) {
        std::cout << "当前工作目录是：" << buffer << std::endl;
    }
    if(contains(buffer,str)==0){
    	//printf("open with cmdp\n");
    	//printf("jump cd to ");
    	//cout<<str<<"\n";
    	string s1 = "cd ";
    	string s2 = s1+str;
    	cout<<s2<<"\n";
    	system(s2.c_str());
    	filep = str+"\\";
	}
    //else printf("open\n");
}
int main(){
	system("title cmdp help system");
	jumpcd();
	//printf("norm help reading file\n");
	string s1 = filep+"help.txt";
	filecat(s1);
	return 0;
}

