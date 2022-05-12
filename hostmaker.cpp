#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string file_name;
	cout<<"[?] File name : ";
	getline(cin, file_name);
	
	string format;
	cout<<"[?] Format file : ";
	getline(cin, format);
	
	string ip_gtps;
	cout<<"[?] IP : ";
	getline(cin, ip_gtps);
	
	ofstream file(file_name+format);
	
	file<<ip_gtps<<" growtopia1.com\n"<<ip_gtps<<" growtopia2.com"<<endl;
	
	file.close();
	
	cout<<"\n[SYS] Host sukses dibuat | FILE : "<<file_name<<" | FORMAT : "<<format<<" | IP : "<<ip_gtps<<endl;
}