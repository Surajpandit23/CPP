#include<iostream>
#include<string>
using namespace std;
 class course{
  private:
  int semester,cid;
  string coursename;
  public:
  course(int sem,int id,string cname)
  {
    semester=sem;
    cid=id;
    coursename=cname;
  }
  void display(){
    cout<<"Semester:"<<semester<<endl;
    cout<<"Course id:"<<cid<<endl;
    cout<<"Course_name:"<<coursename<<endl;
  }
};
int main(){
  int n,semester;
  cout<<"enter semester:";
  cin>>semester;
  cout<<"Enter no. of courses:";
  cin>>n;
  course*cou[n];
 for(int i=0;i<n;i++){
  string coursename;
  int cid;
  cout<<"Enter Courseid:";
  cin>>cid;
  cout<<"enter coursename:";
  cin>>coursename;
  cou[i]=new course(semester,cid,coursename);
 }
  for(int i=0;i<n;i++){
    cou[i]->display();
  }
 return 0;
}
