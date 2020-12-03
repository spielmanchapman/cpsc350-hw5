//#include "db.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(int argc, char** argv){
	int input;
	int programController = 1;
	//check curr for facultyTable and studentTable
	cout << "______________________________" << endl;
	cout << "1|Print sorted list of Student data." << endl;
	cout << "2|Print sorted list of Faculty data." << endl;
	cout << "3|Search Students by ID Number." << endl;
	cout << "4|Search Faculty by ID Number." << endl;
	cout << "5|Given a Student’s ID, print the name and info of their faculty advisor." << endl;
	cout << "6|Given a Faculty ID, print ALL the names and info of their advisees." << endl;
	cout << "7|Add a new student." << endl;
	cout << "8|Delete a student given the ID." << endl;
	cout << "9|Add a new faculty member." << endl;
	cout << "10|Delete a faculty member given the ID." << endl;
	cout << "11|Change a student’s advisor given the student ID and the new faculty ID." << endl;
	cout << "12|Remove an advisee from a faculty member given the IDs." << endl;
	cout << "13|Rollback." << endl;
	cout << "14|Exit." << endl;
	cout << "______________________________" << endl;
	cout << "Choose an option by typing a number:" << endl;
	cout << "------------------------------" << endl;
	cin >> input;
	while(programController == 1){
		if (input == 1){	
			cout << ""; //sort list and print student data
			programController ++;
		}
		if (input == 2){	
			cout << ""; //sort and print faculty data
			programController ++;
		}
		if (input == 3){	
			cout << ""; //search student id
			programController ++;
		}
		if (input == 4){	
			cout << ""; //search faculty id
			programController ++;
		}
		if (input == 5){	
			cout << ""; //print students advisor from id
			programController ++;
		}
		if (input == 6){	
			cout << ""; //print facultys advisee info from id
			programController ++;
		}
		if (input == 7){	
			cout << ""; //add student to tree
			programController ++;
		}
		if (input == 8){	
			cout << ""; //delete student from id
			programController ++;
		}
		if (input == 9){	
			cout << ""; //add faculty to tree
			programController ++;
		}
		if (input == 10){	
			cout << ""; //delete faculty from id
			programController ++;
		}
		if (input == 11){	
			cout << ""; //change students advisor
			programController ++;
		}
		if (input == 12){	
			cout << ""; //remove an advisee
			programController ++;
		}
		if (input == 13){	
			cout << ""; //rollback
			programController ++;
		}
		else if (input == 14){	
			programController -= 1;
			//exit program
		}
	}
	return 0;
}