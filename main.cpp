//Ximeng Wang 996888998 ECE345 Bonus Assignment
//Longest Consecutive Subsequent Strings
//basic file operations
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (int argc, char* argv[]){

	cout << "Finding LCSS in "<< argv[1] << endl;
	string STRING;
	ifstream readmyfile;
	readmyfile.open(argv[1]);

	while(!readmyfile.eof()){
		getline(readmyfile, STRING);
		cout<<STRING<<endl;
	}
	readmyfile.close();
	
		
	
	return 0;
}
