#include<iostream>
using namespace std;
class student
{
	protected:
	     int rollno;
	     string name;
	     float mark;
	     public:
	     	void accept()
	     	{
	     		cout<<"\n enter rollno = ";
	     		cin>>rollno;
	     		cout<<"\n enter name = ";
	     		cin>>name;
	     		cout<<"\n enter mark = ";
	     		cin>>mark;
			}
};
class library:public student
{
	private:
		int bid;
		string bname;
	public:
	   void get()
	   {
	   	cout<<"\n enter bid = ";
	   	cin>>bid;
	   	cout<<"\n enter bname = ";
	   	cin>>bname;
		   }	

        void display()
        {
        	cout<<"\n roll no ="<<rollno;
        	   cout<<"\n name="<<name;
        	   cout<<"\n mark="<<mark;
        	   cout<<"\n bid="<<bid;
        	   cout<<"\n bname="<<bname;
	}
};
main()
{
	library l;
	l.accept();
	l.get();
	l.display();
}
