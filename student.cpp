#include <iostream>
#include <string>

using namespace std;

class student{
  student();
  student(int idNum, string stuName, string grade, string major, double gpa, int adIdNum);
  ~student();
public:
  int studentID;
  int advisorID;

  double Gpa;

  string studentName;
  string standing;
  string major;
};

student::student(){
  studentID = 0000000;
  studentName = "None";
  standing = "Unknown";
  major = "Undeclared";
  Gpa = 0.0;
  advisorID = 0000000;

}

student::student(int idNum, string stuName, string grade, string major, double gpa, int adIdNum){
  this->studentID = idNum;
  this->studentName = stuName;
  this->standing = grade;
  this->major = major;
  this->Gpa = gpa;
  this->advisorID = adIdNum;
}

student::~student(){
  //do nothing
}
