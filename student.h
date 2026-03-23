#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class student{
private:
  string name;
  int age;

public:
  void set_name(string);
  void print_name();
  void set_age(int);
  int get_age();
  void display();
};

void student::set_name(string n){
  name=n; 
}

void student::print_name(){
  cout<<"Name: "<<name<<endl;
}

void student::set_age(int b){
  age=b;
}

int student::get_age(){
  return age;
}

void student::display(){
  print_name();
  cout<<"Age:"<<" "<<age<<endl;
}

// 1. set_age --> set ค่า age 
// 2. get_age --> return ค่า age
