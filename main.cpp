#include <iostream>
using namespace std;

#include "student.h"
int main(int argc, char* argv[]) {
  int N = (argc-1)/2;
  student a[N];


  int i,j,age,b;
  string n;

   // 1. Ask for N names and N age using cin
    for(i=1,j=0;i<argc;i+=2,j++){
      a[j].set_name(argv[i]);
      a[j].set_age(atoi(argv[i+1]));
  }


   /*
  for(i=1;i<N;i++){
    cout<<"Student No."<<i<<endl;
    cout<<"Name : "<<endl;
    cin>>n;
    a[i].set_name(n);
    cout<<"Age : "<<endl;
    cin>>b;
    a[i].set_age(b);
  }
  */
  
 
  //2. Print name and age of all N ppl
  for(i=0;i<N;i++){
    a[i].display();
  }
  
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
  student youngest = a[0];

  for(i=1;i<N;i++){
    if(youngest.get_age()>a[i].get_age()) youngest = a[i];
  }

  
  // Print all info for the yougest person
    cout<<"Youngest student"<<endl;
    
    for(i=0;i<N;i++){
    if(youngest.get_age() == a[i].get_age()){
        a[i].display();
    }
  }
  
  
  //4. Change input from cin to argv


 return 0;  
  }
  
  


