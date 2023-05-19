#include<iostream>
using namespace std;
class course
{
int credits; 
char course_name[50];
char course_code[50];
     public:
     course ();                                                       //Constructor
    ~course();                                                      //Destructor
    void input();
    void display() const;
    
   };
course :: course()
{
        cout<<"\nThis is Course Details constructor called..........."<<endl;
}
void course::input()       
{
    cout<<"Enter the Course Code: ";
    cin>>course_code;
    cout<<"Enter Course name: ";
    cin.ignore();
    cin.getline(course_name,50);
    cout<<"Enter credits:";
    cin>>credits;
}
void course::display() const      
{
    cout<<"\nCourse Code: "<<course_code;
    cout<<"\nCourse Name : "<<course_name;
    cout<<"\nCredits : "<<credits;
}
course :: ~course()
{
        cout<<"\n\nStudent Detail is Closed.............\n";
}
int main()
{
    course c;                 
    c.input ();
    c.display();
   return 0;
}
