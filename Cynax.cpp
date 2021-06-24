#include <iostream>
#include <fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
class toolkit {
	public:
	void interface (){
				system ("cls");
	cout<< "\t\t®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®"<<endl;
	cout<< "\t\t          ||        ®®®         ||      "<<endl;
	cout<< "\t\t          ||         ®          ||    "<<endl;
	cout<< "\t\t (¯´•._.• ||  Cynax Toolkit V.1 || •._.•´¯)"<<endl;
	cout<< "\t\t          ||         ®          ||   "<<endl;
	cout<< "\t\t          ||        ®®®         ||      "<<endl;
	cout<< "\t\t®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®"<<endl;
	cout << "\n\n\n\t\t•> (1) Bio\n\t\t•> (2) Enter Toolkit ";
		
	}
	void interface2(){
		system ("CLS");
						cout<<"\t\t :---:---:----:---:"<<endl;
						cout<<"\t\t :----------------:"<<endl;
						cout<< "\t\t  Active Domains  "<<endl;
						cout<<"\t\t :----------------:"<<endl;
						cout<<"\t\t :----------------:"<<endl<<endl<<endl;
		
						cout<< "\t\t1--) Cynax Cipher"<<endl;
	
						cout<< "\t\t2--) Cynax Hash "<<endl;
	
						cout<< "\t\t3--) Cynax Firewall"<<endl;
		
						cout<< "\t\t4--) Cynax Password Generator"<<endl<<endl;
						cout<< "\t\tEnter Your Choice : "; 
	}
};
bool sec;
class security : toolkit {

	private:
		string name,pass;
		int id;
	public:
		void setname (string n)
		{
			name=n;
		}
		string getname (){
			return name;
		}
		void setpass (string p)
		{
			pass=p;
		}
		string getpass (){
			return pass;
		}
		void setid (int i)
		{
			id=i;
		}
		int getid (){
			return id;
		}
		void authentication(){
			int x;string p;
			cout<< "\t\t      Wait A Minute Who Are You O_o"<<endl<<endl;
	cout<< "\t\t 	  1 >--<> Shuja <>--< ?" <<endl;
	cout<< "\t\t 	  2 >--<> Umair <>--< ?" <<endl;
	cout<< "\t\t 	  3 >--<> Sufian<>--< ?" <<endl;
	cout<< "\t\t\t   ";cin>>x;
	if (x==1){
		p="Shuja";
	}
	if (x==2){
		p="Umair";
	}
	if (x==3){
		p="Sufian";
	}
	cout<< "\t\t   >--<>--<>--<"<<p<<" Prove Yourself>--<>--<>--<"<<endl<<endl;
			string nn,pp;
			int ii;
			cout<<endl <<"\t\tEnter Your Nick Name : ";cin>>nn;
			setname(nn);
		    if (((nn=="SHUJA")|| (nn =="SUFIAN") || (nn=="UMAIR"))){
			cout<< "\t\t"<<getname()<<" Now You Have To Complete 2-Step Authentication : "<<endl<<endl;
			cout<< "\t\tEnter Your (5-Digit) Login ID : ";cin>>ii;
			setid(ii);
			if (id==12345)
			
					{
						cout<< "\t\tHold On...! Last Step Left :"<<endl<<endl;
						cout<< "\t\tEnter Your Login Paswword : ";cin>>pp;
						setpass(pp);
							if ((nn == "SHUJA" && pp=="shahlove") || (nn== "UMAIR" && pp == "miki") || (nn=="SUFIAN" && pp== "sufi")){
								sec=true;
								
						}
						else 
						{
						
							cout<<"\t\tInvalid Password...!";
							sec=false;
						}
					}
					else
					{
					
					cout<< "\t\t"<<name<< "Your Id IS Ivalid...! ";
					sec=false;
				}
				}
				else
				{
				
				cout<<"\n\n\t\t"<<name<<" Your Name Not Found In List Of Admins...!";
				sec=false;
			}
			}
	
};
class tools: public toolkit{
	public:
		void cipher(){
			cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << "::Welcome To Cynax Cipher Machine::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << "\n\n\nUse(_)Underscores Instead of Blank Spaces" << endl;

                cout << "Enter the message:" << endl;
                char msg[100];
                char ch;
                string pk;
                cin >> msg;

                int i = 0, w = 5, j, choice, key;

                cout << "Enter key: ";
                cin >> pk;//take the key as input
                if (pk == "bhai")
                {
                    cout << "Miki And Sufi Cipher Conversation Activated...!\n";
                    key = 5;
                }
                if (pk == "gamer")
                {
                    cout << "Miki And Shah Jee Cipher Conversation Activated...!\n";
                    key = 3;
                }
                if (pk == "capstan")
                {
                    cout << "Sufi And Shah Jee Cipher Conversation Activated...!\n";
                    key = 7;
                }
                cout << "Enter your choice \n1. Encryption \n2. Decryption \n";
                cin >> choice;
                if (choice == 1) //for encryption
                {

                    for (int i = 0; msg[i] != '\0'; ++i) {
                        ch = msg[i];
                        //encrypt for lowercase letter
                        if (ch >= 'a' && ch <= 'z') {
                            ch = ch + key;
                            if (ch > 'z') {
                                ch = ch - 'z' + 'a' - 1;
                            }
                            msg[i] = ch;
                        }
                        //encrypt for uppercase letter
                        else if (ch >= 'A' && ch <= 'Z') {
                            ch = ch + key;
                            if (ch > 'Z') {
                                ch = ch - 'Z' + 'A' - 1;
                            }
                            msg[i] = ch;
                        }
                    }
                    cout << "The Encrypted Message is = \n";cout << msg;
                }
                if (choice == 2) {//for decryption
                    char ch;
                    for (int i = 0; msg[i] != '\0'; ++i) {
                        ch = msg[i];
                        //decrypt for lowercase letter
                        if (ch >= 'a' && ch <= 'z') {
                            ch = ch - key;
                            if (ch < 'a') {
                                ch = ch + 'z' - 'a' + 1;
                            }
                            msg[i] = ch;
                        }


                        //decrypt for uppercase letter
                        else if (ch >= 'A' && ch <= 'Z') {
                            ch = ch - key;
                            if (ch < 'A') {
                                ch = ch + 'Z' - 'A' + 1;
                            }
                            msg[i] = ch;
                        }
                    }
                    cout << "Decrypted message is = \n " << msg;


                }
            }
unsigned int SHF (string input)
{
unsigned int init = 123456432;
unsigned int magic = 567537;
unsigned int hash;
for (int i = 0; i< input.length(); i++)
{
hash = hash ^ (input[i]);
hash = hash * magic;
}
return hash;
}
		void hash(){
			cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << "::Welcome To Cynax Hash Machine::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
		char x[100];
		cout<<endl<<"Enter Text: ";
 		cin>>x;
  		cout << "Hashed Value Is = " << SHF (x);
  		getchar();
			
		}
		void firewall(){
				cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << "::  Welcome To Cynax Firewall  ::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
			 char site[20],ch;
    ifstream in;
    ofstream out;
	int i;
	cout<< "To Block A Site Press 1 : \nTo Unblock All Sites Press 2 : ";
	cin>> i;
	if (i==1){
	
    cout<<"Enter the Name of the Site to Block \n";
    cin>>site;

    out.open("C:/Windows/System32/drivers/etc/hosts",ios::app);
    if(!out){
	
        cout<<"Either File Not Found or Permission Denied, Run as Admin the EXE of the Program";}
    else
    {
	
	
    out<<"127.0.0.1"<<"\t"<<site;}
    out.close();
    cout << "\nBlocked";
    system ("pause");
}
	if (i==2)
       {

     out.open("C:/Windows/System32/drivers/etc/hosts");
     if(!out)
     {
	 cout<<"File Not Found(not for linux)";
	 }
     else
     {
	 out<<"\n127.0.0.1"<<"\t"<<"localhost";
	 cout<<"\nAll site are unblocked";

     }
     out.close();
 }
 if (i!=1&&i!=2)
 {
 	cout << "Invalid ";
 }
			
		}
		void pg(){
			cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << "::Welcome To Cynax Password Machine::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
                cout << ":::::::::::::::::::::::::::::::::::" << endl;
	const char alphanum2[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int string_length2 = sizeof(alphanum2);
	const char alphanum3[] = "0123456789!@#$%^&*<>;]abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int string_length3 = sizeof(alphanum3);
	 int n;
    cout<<"Enter the length of password:";
    cin>>n;
    int ch;
    cout<<"For Easy Pasword (Only Numbers) Press 1:\nFor Medium Password Press 2:\nFor Strong Pasword Press 3:";
    cin>>ch;
    if (ch==1)
    {
    srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < n; i++)
    cout << rand() % 10;
	}
	if (ch==2)
	{
	
    srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < n; i++)
    cout << alphanum2[rand() % string_length2];
   }
	if (ch==3)
{
	 srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < n; i++)
    cout << alphanum3[rand() % string_length3];
}
			
		}
};
class info : public toolkit {
	public:
	void data(){
		
		int i;
		system ("CLS");
		cout<< "\t\t1>>Data of Umair "<<endl;
		cout<< "\t\t2>>Data Of Shujja"<<endl;
		cout<< "\t\t3>>Data Of Sufian"<<endl;
		 cin>>i;
		if (i==1){
			cout<< "Name : Umair Sabir \nClass : BsCys-2B\nContact XYZ\n Occupation : Student";
		}
				if (i==2){
			cout<< "Name : Shujja Abubaker \nClass : BsCys-2B\nContact XYZ\n Occupation : Student";
		}
				if (i==3){
			cout<< "Name : Sufian Aziz \nClass : BsCys-2B\nContact XYZ\n Occupation : Student";
		}
	}
};
int main (){
	toolkit t1;
	info d1;
	security ss;
	tools tt1;
	t1.interface();
	int x;
	cin>>x;
	if (x==1){
		d1.data();
	}
	else if (x==2){
	start:
	ss.authentication();
	if (sec==true){
		char ch;
		do {
		
			t1.interface2();
			int chh;
			char ch;
			cin>>chh;
			if (chh==1){
				do {
				
				tt1.cipher();
				cout<<endl<<"Use Again Y/N ? ";cin>>ch;
			}
			while (ch=='Y'||ch=='y');
			}
			if (chh==2)
			{
					tt1.hash();
			}
			if (chh==3)
			{
				tt1.firewall();
			}
			if (chh==4)
			{
			tt1.pg();	
			}	
			cout<<endl<<"Use Again Y/N ? ";cin>>ch;
		}
			while (ch=='Y'||ch=='y');
	
	}
	else  {
			goto start;

		}
	}
	else 
	{
		cout << "Invalid";
	}

	}

	

	
