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
	string LCW;
	ifstream infile;
	infile.open(argv[1]);

	while(!infile.eof()){
		getline(infile, STRING);
		cout<<STRING<<endl;
	}
	infile.close();
	//Code to process the strings



	//Output
    cout << "The Longest Consecutive Sequence of Worlds beloing to "<<argv[1]<< " is: "<<LCW<<endl;
	
		
	
	return 0;
}
