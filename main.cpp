//Ximeng Wang 996888998 ECE345 Bonus Assignment
//Longest Consecutive Subsequent Strings
//basic file operations
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main (int argc, char* argv[]){

	//Usage: using the second arg in main to get the text file name
	cout << "Finding LCSS in "<< argv[1] << endl;
	cout << "******************Content of file: " << argv[1] << "*************" << endl;

	//Basic vars

	int numberoflines = 0;
	string line;
	string LCW;

	//File handling
	ifstream infile;
	infile.open(argv[1]);

	if(infile.is_open()){

		while(getline(infile, line)){
			numberoflines++;
		}

		infile.clear();
		infile.seekg(0, ios::beg);

		if(!infile.eof()){

			string STRING[numberoflines];
			int i = 0;

			while(getline(infile, STRING[i])){

				cout<<STRING[i]<<endl;
				i++;
			}
		}
		
		infile.close();
	}
	
	else cout << "Unable to open file" << endl;
	//Code to process the strings



	//Output
	cout << "********************************************************" << endl;
	cout << "There are total of "<<numberoflines<<" lines in the file "<<argv[1]<<endl;
    cout << "The Longest Consecutive Sequence of Worlds beloing to "<<argv[1]<< " is: "<<LCW<<endl;
	
		
	
	return 0;
}
