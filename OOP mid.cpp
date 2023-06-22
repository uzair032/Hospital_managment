 #include<iostream>
using namespace std;
class Name
{
	private:
		string first_name,last_name;
	
	public:
	    void setvalues(string fn,string ln)
	    {
		 	first_name=fn;
		 	last_name=ln;
	    }
		void display()
		{
			cout<<"Name:"<<first_name<<" "<<last_name<<endl;
		}	
};
class Date
{
	private:
		int day,month,year;
	public:
		void setdate_birth(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
		void setdate_check(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
		void setdate_app(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
		void setdate_join(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
		void displayb()
		{
			cout<<"Date: "<<day<<"- "<<month<<"- "<<year<<endl;
		}
		void displaycheck()
		{
			cout<<"Date: "<<day<<"- "<<month<<"- "<<year<<endl;
		}
		void displayjoin()
		{
			cout<<"Date: "<<day<<"- "<<month<<"- "<<year<<endl;
		}
		void displayappoint()
		{
			cout<<"Date: "<<day<<"- "<<month<<"- "<<year<<endl;
		}
};
class Doctor
{
	public:
		string doc_id;
		Name nd;
		Date dj;
		string specialization;
		char *assign_duty;
		int room;
		void display_duty_and_room()
		{
			if(doc_id=="D1")
			{
				cout<<"ID: "<<doc_id<<endl;
				assign_duty="Routine check";
				room=101;
				cout<<"Duty: "<<assign_duty<<"\nRoom: "<<room;
			}
			else if(doc_id=="D2")
			{
				cout<<"ID: "<<doc_id<<endl;
				assign_duty="Issue Medicine";
				room=102;
				cout<<"Duty: "<<assign_duty<<"\nRoom: "<<room;
			}
			else if(doc_id=="D3")
			{
				cout<<"ID: "<<doc_id<<endl;
				assign_duty="Emergency";
				room=103;
				cout<<"Duty: "<<assign_duty<<"\nRoom: "<<room;
			}
		}
		void displayspec()
		{
			cout<<"\nSpecialization: "<<specialization<<endl<<endl;
		}
};
class Patient
{
	public:
		Name np;
		int id;
		Date db;
		Date dc;
		int purpose;
		Doctor pd;
		Date exp_app;
		void display()
		{
			cout<<"Id: "<<id<<endl;
		}
		void display_purpose()
		{
			if(purpose==1)
			{
				cout<<"Purpose: Routine checkup\n";
				pd.doc_id="D1";
				pd.room=101;
				cout<<"Doctor id: "<<pd.doc_id<<"\nGO to room: "<<pd.room<<endl;
			}
			else if(purpose==2)
			{
				cout<<"Purpose: Issue medicine\n";
				pd.doc_id="D2";
				pd.room=102;
				cout<<"Doctor id: "<<pd.doc_id<<"\nGO to room: "<<pd.room<<endl;
			}
			else if(purpose==3)
			{
				cout<<"Purpose: Emergency\n";
				pd.doc_id="D3";
				pd.room=103;
				cout<<"Doctor id: "<<pd.doc_id<<"\nGO to room: "<<pd.room<<endl;
			}
		}
};
int main()
{
	Doctor doc[10];
	Patient pat[10];
	int opt,i,n1=3,n2,sn=0,counts=0,d,m,y;
	string fn,ln;
	char s;
	for(i=0;i<n1;i++)
	{
		cout<<"Enter doc id(D1,D2,D3): ";
		cin>>doc[i].doc_id;
		cin.ignore();
		cout<<"Enter first name: ";
		getline(cin,fn);
		cout<<"Enter last name: ";
		getline(cin,ln);
		doc[i].nd.setvalues(fn,ln);
		cout<<"Enter date of joining:\nDay: ";
		cin>>d;
		cout<<"Enter month: ";
		cin>>m;
		cout<<"Enter year: ";
		cin>>y;
		doc[i].dj.setdate_join(d,m,y);
		cout<<"Enter Specialization: ";
		cin>>doc[i].specialization;
		cout<<endl;
	}
	system("CLS");
	while(1)
	{
		cout<<"Select from the options:\nPress 1 to enter Patient data\nPress 2 to display doctors data\nPress 3 to display Patient data\n";
		cin>>opt;
		cout<<endl;
		switch(opt)
		{
			case 1:
				{
					sn=1;
				    if(counts==0)
				    {
				    	counts=counts+sn;
				    	for(i=0;i<sn;i++)
				    	{
				    		cout<<"Enter patients id: ";
				    		cin>>pat[i].id;
				    		cin.ignore();
				    	    cout<<"Enter first name: ";
				    	    getline(cin,fn);
				    	    cout<<"Enter last name: ";
				    	    getline(cin,ln);
				    	    pat[i].np.setvalues(fn,ln);
				    	    cout<<"Enter date of birth:\nDay: ";  cin>>d;
				    	    cout<<"Enter month: ";  cin>>m;
				    	    cout<<"Enter year: ";  cin>>y;
				    	    pat[i].db.setdate_birth(d,m,y);
				    	    cout<<"Enter date of checkup:\nDay: ";  cin>>d;
				    	    cout<<"Enter month: ";  cin>>m;
				    	    cout<<"Enter year: ";  cin>>y;
				    	    pat[i].dc.setdate_check(d,m,y);
				    	    cout<<"Select the purpose of checkup:\n1.Routine Checkup\n2.Issue medicine\n3.Emergency\n";
				    	    cin>>pat[i].purpose;
				    	    cout<<"Enter next date of appointment:\nDay: ";  cin>>d;
				    	    cout<<"Enter month: ";  cin>>m;
				    	    cout<<"Enter year: ";  cin>>y;
				    	    pat[i].exp_app.setdate_app(d,m,y);
				        }
					}
					else
					{
						for(i=counts;i<sn+counts;i++)
						{
						    cout<<"Enter patients id: ";
				    		cin>>pat[i].id;
				    		cin.ignore();
				    	    cout<<"Enter first name: ";
				    	    getline(cin,fn);
				    	    cout<<"Enter last name: ";
				    	    getline(cin,ln);
				    	    pat[i].np.setvalues(fn,ln);
				    	    cout<<"Enter date of birth:\nDay: ";  cin>>d;
				    	    cout<<"Enter month: ";  cin>>m;
				    	    cout<<"Enter year: ";  cin>>y;
				    	    pat[i].db.setdate_birth(d,m,y);
				    	    cout<<"Enter date of checkup:\nDay: ";  cin>>d;
				    	    cout<<"Enter month: ";  cin>>m;
				    	    cout<<"Enter year: ";  cin>>y;
				    	    pat[i].dc.setdate_check(d,m,y);
				    	    cout<<"Select the purpose of checkup:\n1.Routine Checkup\n2.Issue medicine\n3.Emergency\n";
				    	    cin>>pat[i].purpose;
				        }
					 	counts=counts+sn;    
				    }
				    break;
				}
			case 2:
			    {
			    	for(i=0;i<n1;i++)
			    	{
			    		doc[i].nd.display();
			    		doc[i].display_duty_and_room();
			    		doc[i].displayspec();
					}
					break;
				}
			case 3:
			    {
			    	for(i=0;i<counts;i++)
			    	{
			    	    pat[i].np.display();
			    	    pat[i].display_purpose();
			    	    pat[i].exp_app.displayappoint();
			    	    cout<<endl;
					}
				}			
		}
		cout<<"Press A to continue and B to exit\n";
			cin>>s;
			system("CLS");
			if(s=='A')
			continue;
			else
			break;
	}
}