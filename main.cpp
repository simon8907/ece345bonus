//Ximeng Wang 996888998 ECE345 Bonus Assignment
//Longest Consecutive Subsequent Strings
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
//#include <hashtable.h>

using namespace std;

int main (int argc, char* argv[]){

	if (argc != 2) {
		cout << "Usage: ./lcw [inputfile.txt] \n";
		return 1;	
	}

	//Usage: using the second arg in main to get the text file name
	cout << "Finding LCSS in "<< argv[1] << endl;
	cout << "******************Content of file: " << argv[1] << "*************" << endl;

	//Basic vars

	size_t numberoflines = 0;
	string line;
	string LCW;
	//using a vector of strings to store the file content
	vector< string > lines;

	//File handling
	ifstream infile;
	infile.open(argv[1]);

	if(infile.is_open()){
		string buffer;
		while( getline( infile, buffer ).good()){
			lines.push_back( buffer );
		}
		
		infile.close();
		//Number of lines in the file
		numberoflines = lines.size();
		//Checking if we have all the lines from the input file in the program
		ostream_iterator<string> out(cout, "\n");
		copy( lines.begin(), lines.end(), out);
	}
	else cout << "Unable to open file" << endl;
	//Code to process the strings



	//Output
	cout << "*******************************************************" << endl;
	cout << "There are total of "<<numberoflines<<" lines in the file "<<argv[1]<<endl;
    cout << "The Longest Consecutive Sequence of Worlds beloing to "<<argv[1]<< " is: "<<LCW<<endl;
	
		
	
	return 0;
}
