#include <iostream>
#include <string>

using namespace std;

class faculty{
  faculty();
  faculty(int idNum, string facName, string pos, string dept);
  ~faculty();

public:
  int facultyID;

  string facultyName;
  string position;
  string department;
};

faculty::faculty(){
  facultyID = 0000000;
  facultyName = "None";
  position = "New Hire";
  department = "Unknown";
}

faculty::faculty(int idNum, string facName, string pos, string dept){
  this->facultyID = idNum;
  this->facultyName = facName;
  this->position = pos;
  this->department = dept;
}

faculty::~faculty(){
  //delete nothing
}
