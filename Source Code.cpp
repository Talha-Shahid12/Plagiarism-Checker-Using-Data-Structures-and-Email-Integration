#include<iostream>
#include<string.h>
#include<fstream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<windows.h>
#include<ctime>
using namespace std;

// Mail Work
COORD coord = { 0, 0 };
void gotoxy(int x, int y) {
    coord.X = x; coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void loading()
{ 
 	 int i = 0;
	 int a=219; 
 	 char load[26]; 
 	 while(i < 25) 
 		{ 
 		 system("cls"); 
 		 load[i++] = a; 
 		 load[i] = '\0'; 
		 printf("\n\n\n\n\n\n\n\n\t\t\t\tLOADING %-25s", load);
 		usleep(19900); 
 		} 
    
	   system("cls"); 
	   printf("\n"); 
} 

/* Mail work */

    FILE* locBit;
	FILE* locBit1;
	FILE* locBit2;
	FILE* locBit3;
	FILE *locBit4;
	FILE* MainCRET;
int Init(void)
{
	 locBit = fopen("GmailUR.txt","w");
 	locBit1 =fopen("Mail.txt","w");
 	locBit2 =fopen("Message.txt","w");
 	locBit3 =fopen("PassUR.txt","w");
 	locBit4 =fopen("Subject.txt","w");	
  	MainCRET=fopen("Mail.aysoat","w");
 	loading();
 	printf("\n\n\n\n\n\n\t\t\t\tInitiating Please wait ......");
 	fprintf(MainCRET,"import smtplib\nurm=open('GmailUR.txt','r')\nurp=open('PassUR.txt','r')\nsocmail = urm.read()\npassword = urp.read()\nsub = open('Subject.txt','r')\nsubject = sub.read()\nsandesh = open('Message.txt','r')\nsmessage = sandesh.read()\nmailid = open('Mail.txt','r')\nj = mailid.readline()\nEmail=j.split()\ns = smtplib.SMTP('smtp.gmail.com', 587)\ns.starttls()\ns.login(socmail, password)\nbody =''\nding = 'Subject:{}{}'.format(subject, body)\nmessage = ding+smessage\n#print('Message Sent to',Email)\ns.sendmail(socmail, Email, message)\n#print('We Have Sent An Mail On Your Given Gmail Please Check And Also Check Spam Folder Of Gmail')\n\n");
 	fclose(MainCRET);
     return 0;
}

int p=0;
void logo()
{
		cout<<"						   PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"<<endl<<
		  "						   PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"<<endl
		<<"						   PPPPPPPPPPPPP                    PPPPPPPPPPPP"<<endl
		<<"							PPPPPPPP                    PPPPPPPPPPPP"<<endl
		<<"							PPPPPPPP                    PPPPPPPPPPPP"<<endl
		<<"							PPPPPPPP                    PPPPPPPPPPPP"<<endl
		<<"							PPPPPPPP                    PPPPPPPPPPPP"<<endl
		<<"							PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"<<endl
		<<"							PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"<<endl
		<<"							PPPPPPPPPPP"<<endl<<
		  "							PPPPPPPPPPP"<<endl<<
		  "							PPPPPPPPPPP"<<endl<<
		  "							PPPPPPPPPPP"<<endl<<
		  "							PPPPPPPPPPP"<<endl<<
		  "							PPPPPPPPPPP"<<endl<<
		  "							PPPPPPPPPPP"<<endl<<
		  "							PPPPPPPPPPP"<<endl<<
		  "							PPPPPPPPPPP"<<endl<<		  		  
		  "						   PPPPPPPPPPPPPPPPPPP"<<endl<<
		  "						   PPPPPPPPPPPPPPPPPPP"<<endl;
}

void fillDat(char *msg,char emi[256], char subj[256])
{
	Init();
	char GMAILID[2561]=/*"Your Email From which you are wanting to send Email"*/;
	fprintf(locBit,"%s",GMAILID);
	char PASSWARD[256]=/*"For Password of above email for this code use this video (https://www.youtube.com/watch?v=hXiPshHn9Pw&ab_channel=TweakLibrary)"*/;
	fprintf(locBit3,"%s",PASSWARD);
	char SENDMAIL[256];
    strcpy(SENDMAIL,emi);
	fprintf(locBit1,"%s",SENDMAIL);
	char SUBJECT[20];
    strcpy(SUBJECT,subj);
	fprintf(locBit4,"%s",SUBJECT);
	char MESSAGE[1000];
    strcpy(MESSAGE,msg);
    fprintf(locBit2,"%s",MESSAGE);
	printf("\a");
	fclose(locBit);
	fclose(locBit1);
	fclose(locBit2);
	fclose(locBit3);
	fclose(locBit4);
}


int SendMail(int returnVal)
{
system("python Mail.aysoat");
switch(returnVal)
{
case 0:
return 0;
break;
case -1:
return -1;
break;
default:
return 0;
break;	  	  	
}
system("attrib -h -s Mail.aysoat");
}
/* Mail Work */
class stack{
	public:
		char data;
		stack *next;
		void push(char);
		void pop();
};
stack *top=NULL;
void stack::push(char d)
{
	stack *newnode=new stack();
	newnode->data=d;
	newnode->next=top;
	top=newnode;
}
void stack::pop()
{
	stack *temp;
	temp=top;
	cout<<temp->data;
	top=top->next;
}
class User{
	public:
		char name[50];
		char phone[50];
		int age;
		char character[50];
		char email[50];
		char password[50];
		char customerID[50];
		float per;
		char* setName();
		int setAge();
		char* setPhone();
		char* setCharacter();
		char* setPassword();
		char* setEmail();
		char* setCustomerID();
		float setPlagPercentage(float);
		void setData();
		void SaveUser();
		void showData();
		void show();
		void checkPlagiarism(char*, char*);
		void accountInfo();
		void deleteCall(char*, char*);
		void deleteAccount(char*, char*);
		void loginUser();
		void showAllUser();
		
};
float User::setPlagPercentage(float p)
{
	per=p;
	return per;
}
char* User::setCustomerID()
    {
    int x=0;
    char *c_ID[50];
    char cof[50];
    srand(time(NULL));
    x=1000+rand()%9000;
    char ch[10+sizeof(char)];
    sprintf(ch, "%d", x);
    strcpy(cof,"26F-");
    *c_ID=strcat(cof,ch);
    strcpy(customerID,*c_ID);
    return customerID;
    }
char* User::setName()
{
	cout<<"Enter name : ";
	cin.sync();
	cin.getline(name,49);
	return name;
}
char* User::setPhone()
{
	cout<<"Enter Phone : ";
	cin.sync();
	cin.getline(phone,49);
	return phone;
}
int User::setAge()
{
	cout<<"Enter age : ";
	cin>>age;
	return age;
}
char* User::setCharacter()
{
	int choice;
	cout<<"\n\n1- Student\n2- Teacher\nEnter choice : ";
	cin>>choice;
	if(choice==1)
	{
		strcpy(character,"Student");
	}
	else
	{
		strcpy(character,"Teacher");
	}
	return character;
}
char* User::setEmail()
{
	cout<<"Enter email : ";
	cin.sync();
	cin.getline(email,49);
	return email;
}
char* User::setPassword()
{
	cout<<"Set password to login again : ";
	cin.sync();
	cin.getline(password,49);
	return password;
}
void User::setData()
{
	setName();
	setAge();
	setEmail();
	setPassword();
	setCharacter();
	setPhone();
	setCustomerID();
}

void User::SaveUser()
{
	fstream fileout;
  fileout.open("UserData.dat",ios::app | ios::binary);
  setData();
  fileout.write((char *)this, sizeof(*this));
  fileout.close();
  	char firststr[50];
        char secondstr[50];
        char thirdstr[50];
        char fourthstr[50];
        char fifthstr[50];
        char sixthstr[50];
        char *seventhstr[50];
        char *eigthstr[50];
        char *ninthstr[50];
        char *tenthstr[50];
        char *eleventhstr[50];
        char cusId[50];
        char cusTh[50];
        char *c_idcom[50];
        char *thanksstr[50];
        strcpy(firststr,"Hello Mr,");
        strcpy(secondstr,name);
        *seventhstr=strcat(firststr,secondstr);
        strcpy(thirdstr,"\n\n\t********Welcome To Plagiarizm.io Application********");
        strcpy(fourthstr,"\n\n\nThanks For Registration In Plagiarizm.io. ");
        *eigthstr=strcat(thirdstr,fourthstr);
        strcpy(cusId,customerID);
        strcpy(cusTh,"\n\n\nYour Customer ID : ");
        *c_idcom=strcat(cusTh,cusId);
        strcpy(fifthstr," .\n\n\nHave any question or need help? just shoot us an email!");
        strcpy(sixthstr,"\n\nThanks & Regards\n\n\nPlagiarizm.io Team.");
        *thanksstr=strcat(fifthstr,sixthstr);
        *ninthstr=strcat(*seventhstr,*eigthstr);
        *tenthstr=strcat(*c_idcom,*thanksstr);
        *eleventhstr=strcat(*ninthstr,*tenthstr);
        char em[256];
        char sub[256];
        strcpy(sub,"Welcome To Plagiarizm.io Application!\n\n");
        strcpy(em,email);
        fillDat(*eleventhstr,em,sub);
        SendMail(0);
               system("cls");
        logo();
        loginUser();
}

void User::show()
{
	cout<<"\nName	 	:	 "<<name;
	cout<<"\nAge   		:   	 "<<age;
	cout<<"\nEmail 		: 	 "<<email;
	cout<<"\nPasswrod 	:  	 "<<password;
	cout<<"\nCharacter 	: 	 "<<character;
	cout<<"\nPhone 		:  	 "<<phone;
	cout<<"\nCustomerID 	: 	 "<<customerID;
}

void User::showData()
{
	fstream filein;
	filein.open("UserData.dat", ios::in | ios::binary);
	if(!filein)
	{
		cout<<"\nNo record Found!\n";
	}
	else
	{
		filein.read((char*)this,sizeof(this));
		while(!filein.eof())
		{
			show();
			filein.read((char*)this,sizeof(this));
		}
		
		filein.close();
	}
}

void User::showAllUser()
{
	fstream filein;
       filein.open("UserData.dat",ios::in | ios::binary);
    if(!filein)
    {
        cout<<"\nSorry NO Record Found!\n";
    }
    else
    {
       filein.read((char *)this, sizeof(*this)); 
       while (!filein.eof())
       {
        cout<<endl<<endl;
        show();
        filein.read((char *)this, sizeof(*this));
       }
       filein.close();
    }
}

void User::checkPlagiarism(char* pass, char *c_d)
{

		char em[100];
		char na[100];
		cout<<"\nEnter student's Email ID : ";
		cin.sync();
		cin.getline(em,99);
		cout<<"Enter student's name : ";
		cin.sync();
		cin.getline(na,99);
		
		int ver=0;
		
		cout<<"\nPlease select version of assignment to be compared with...\n1. New Assignment.\n2. Compare with previous assignments.\n(Select b/w 1 & 2 option only.)";
		cin>>ver;
	
		stack s;
		string ch;
		string content1 = "",content2 = "", matched_content="";


		string st="";
		string assignment="";
    

		fstream fout;
		fstream fout1;
		int co=0;
		fout.open("CurrentStudetAssignemt.txt", ios::out);
	
		if(ver==2){
		fout1.open("AllStudentsAssignment.txt", ios::app);}
	
		if(ver==1){
	remove("AllStudentsAssignment.txt");	
	fout1.open("AllStudentsAssignment.txt", ios::app);}	
	
	
	
	
	cout<<"Just copy and paste your text here it will compare with all previous assignments it will work specific subject at a time! : \n";
		do {
			cin.sync();
 		getline(cin, st);
 		assignment += st;
			} while (st.length() > 0);
			
			
			if(fout1==NULL)
			{
				co=0;
			}
			else
			{
				co=1;
			}
			
	fout<<assignment;

	fout.close();

	fstream fp;
	
	fp.open("CurrentStudetAssignemt.txt", ios::in);
	while(!fp.eof())
	{
		getline(fp,ch);
		content1+=ch;
	}

	
	cout<<"\n\n*****************************************************************\n\n";
	cout << "CURRENT STUDENT ASSIGNMENT FILE:" << endl << endl << content1 << endl;
	
	fp.close();
	
	
	fstream fp2;
	double total;
	double comparison=0;
	double equalcounter = 0;
	double notequalcounter = 0;	
	int length;
	double plagsum;
	
	fp2.open("AllStudentsAssignment.txt", ios::in);
	
		while(!fp2.eof())
		{
		while(!fp2.eof())
		{
			getline(fp2,ch,'\n');
			content2+=ch;cout<<"\n";
			break;
		}
		
	if (content1.size() > content2.size()){
		length = content1.size();
	}
	else {
		length = content2.size();
	}
	
	for (int i = 0; i < length; i++){
		if (content1[i] == content2[i] && content1[i]!=' ' && content2[i]!=' '){
			s.push(content1[i]);
			equalcounter++;
			if(content1[i]==' ')
			equalcounter--;
		}
		else if (content1[i] != content2[i]){
			notequalcounter++;
		}
	}
	cout<<endl;
	total = equalcounter + notequalcounter;
	plagsum = equalcounter / total * 100;
	
	if(plagsum>comparison)
	comparison=plagsum;
	
	plagsum=0;
		}
	
	if(comparison>100){
		comparison=99.9;
	}	

	cout<<"\n\n*****************************************************************\n\n";
	cout << endl << "ALL STUDENTS ASSIGNMENT FILE: " << endl << endl << content2 << endl;
	
	
	fp2.close();
	
	cout<<"\nSimilarity Percentage : "<<comparison<<endl;
	if(comparison<12 || co==0)
	{
	p=0;
		
		cout<<"\n\n*****************************************************************\n\n";
		cout<<"\nCongratulations! No plag was detected :) \n";
	}
	else
	{
			cout<<"\n\n*****************************************************************\n\n";
	cout<<"Matching similarity are below : \n\n\n";
	for(int i=0; i<equalcounter; i++)
	{
	s.pop();
}
		cout<<endl;
					cout<<"\n\n*****************************************************************\n\n";

		p=1;	
		cout << endl << endl << "You got plag :(\n\nPercentage Comparison: " << comparison << " %" << endl; 
	
	cout<<"\n\n*****************************************************************\n\n";
		


cout<<"Press any key to continue...\n";
getch();



		/* Mail work for Plagiarism Detection*/
		
		char cha[10+sizeof(char)];
        sprintf(cha, "%.2f", comparison);
		char firststr[500];
        char secondstr[500];
        char thirdstr[500];
        char fourthstr[500];
        char fifthstr[500];
        char sixthstr[500];
        char *seventhstr[500];
        char *eigthstr[500];
        char *ninthstr[500];
        char *tenthstr[500];
        char *eleventhstr[500];
        strcpy(firststr,"Hello Mr ");
        strcpy(secondstr,na);
        *seventhstr=strcat(firststr,secondstr);
        strcpy(thirdstr,"\n\n\n************ A t t e n t i o n ! ************\n\n\nIt is inform to you that you have got ");
        strcpy(fourthstr,cha);
        *eigthstr=strcat(thirdstr,fourthstr);
        strcpy(fifthstr," % plagiarism in your assignment.\n\n\nIt may become the cause of deduction of marks from your Grand Total");
        strcpy(sixthstr,"\n\n\nThanks & Regards\n\n\nPlagiarizm.io Team.");
        *ninthstr=strcat(fifthstr,sixthstr);
        *tenthstr=strcat(*seventhstr,*eigthstr);
        *eleventhstr=strcat(*tenthstr,*ninthstr);
        
        char sub[1000];
        strcpy(sub,"PLAGIARISM DETECTED\n\n");
        strcpy(em,email);
        fillDat(*eleventhstr,em,sub);
        SendMail(0);
		
		/* Mail work for Plagiarism Detection*/
		
	
}
		if(p==0){
		fout1<<assignment;
		fout1<<"\n";
		}
	
	fout1.close();
}


void User::deleteCall(char* n, char* e)
    {
    	
    	char firststr[50];
        char secondstr[50];
        char thirdstr[50];
        char fourthstr[50];
        char fifthstr[50];
        char sixthstr[50];
        char *seventhstr[50];
        char *eigthstr[50];
        char *ninthstr[50];
        char *tenthstr[50];
        char *eleventhstr[50];
        strcpy(firststr,"Hello Mr,");
        strcpy(secondstr,n);
        *seventhstr=strcat(firststr,secondstr);
        strcpy(thirdstr,"\n\n\t\t************ A l e r t ! *************");
        strcpy(fourthstr,"\n\n\nYour Plagiarizm.io Account");
        *eigthstr=strcat(thirdstr,fourthstr);
        strcpy(fifthstr," has been deleted successfully!");
        strcpy(sixthstr,"\n\n\nThanks & Regards\n\n\nPlagiarizm.io Team.");
        *ninthstr=strcat(fifthstr,sixthstr);
        *tenthstr=strcat(*seventhstr,*eigthstr);
        *eleventhstr=strcat(*tenthstr,*ninthstr);
        char em[256];
        char sub[256];
        strcpy(sub,"Plagiarizm.io Account Deleted!\n\n");
        strcpy(em,e);
        fillDat(*eleventhstr,em,sub);
        SendMail(0);
	}


void User::deleteAccount(char *t,char *id)
{
	int count=0;
	
	char n[50],em[50];
	
	
    fstream fin;
    fstream fout;
    fin.open("UserData.dat",ios::in | ios::binary);
    if(!fin)
    {
        cout<<"\nSorry no record Found!";
    }
    else
    {
        fout.open("temp.dat",ios::out | ios::binary);
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            if(strcmp(password,t) && strcmp(customerID,id))
            {
                fout.write((char *)this, sizeof(*this));
            }
            else
            count=1;
            fin.read((char *)this, sizeof(*this));
            strcpy(em,email);
            strcpy(n,name);
		}
        fin.close();
        fout.close();
        remove("UserData.dat");
        rename("temp.dat","UserData.dat");
    }
    
		if(count==0)
		{
			system("cls");
			cout<<"\n\n\t\tSorry Your Password does not matched!";
			exit(0);
		}
		else if(count==1)
		{
			 deleteCall(n,em);
			 system("cls");
        	cout<<"\n\n\t\tYour Account Has Been Deleted Successfully!\n";
        	cout<<"\n\nWe have sent an email on your given Gmail check it and please also check spam folder";
        	cout<<"\n\nPress any key to continue------";
        	getch();
        	exit(0);
		}
		


}


void User::loginUser()
{

//	logo();	
	char pss[50],cd[50];
		
    int counter=0;
    char p[50];
    char cu_id[50];
    cout<<"\n\t\tEnter your Password : ";
    cin.sync();
    cin.getline(p,49);
    cout<<"\n\t\tEnter your Customer ID : ";
    cin.sync();
    cin.getline(cu_id,49);
    system("cls");
    fstream filein;
    filein.open("UserData.dat",ios::in | ios::binary);
    if(!filein)
    {
        cout<<"\nSorry no record Found!\n";
    }
    else
    {
    	
    	
        filein.read((char *)this, sizeof(*this));
        while (!filein.eof())
        {
        	
            if(!strcmp(password,p) && !strcmp(customerID,cu_id))
            {
            	
            	strcpy(pss,password);
            	strcpy(cd,customerID);
            	/******************************/
    	int x=0;
		srand(time(NULL));
		x=1000+rand()%9000;
		char ch[10+sizeof(char)];
        sprintf(ch, "%d", x);
		char firststr[50];
        char secondstr[50];
        char thirdstr[50];
        char fourthstr[50];
        char fifthstr[50];
        char sixthstr[50];
        char *seventhstr[50];
        char *eigthstr[50];
        char *ninthstr[50];
        char *tenthstr[50];
        char *eleventhstr[50];
        strcpy(firststr,"Hello Mr ");
        strcpy(secondstr,name);
        *seventhstr=strcat(firststr,secondstr);
        strcpy(thirdstr,"\n\n\nYour Plagiarizm.io account OTP is ");
        strcpy(fourthstr,ch);
        *eigthstr=strcat(thirdstr,fourthstr);
        strcpy(fifthstr,".\n\n\nPlease don't share it with any one.");
        strcpy(sixthstr,"\n\n\nThanks & Regards\n\n\nPlagiarizm.io Team.");
        *ninthstr=strcat(fifthstr,sixthstr);
        *tenthstr=strcat(*seventhstr,*eigthstr);
        *eleventhstr=strcat(*tenthstr,*ninthstr);
        char em[256];
        char sub[256];
        strcpy(sub,"Plagiarizm.io Account OTP!\n\n");
        strcpy(em,email);
        fillDat(*eleventhstr,em,sub);
        SendMail(0);
   				 
					char coded[10];
		cout<<"\t\n\nPlease Enter OTP we sent on your email "<<email<<" : ";
		cin.getline(coded,9);
    if(strcmp(coded,ch))
    {
    	cout<<"\n\n\t\t\tOTP does not matched! RELAUNCH THE PROGRAM & LOGGIN AGAIN !!";
		exit(0);	
	}
	
	else
	{
	
		counter++;
       	char firststr1[50];
        char secondstr1[50];
        char thirdstr1[50];
        char fourthstr1[50];
        char fifthstr1[100];
        char sixthstr1[50];
        char *seventhstr1[50];
        char *eigthstr1[50];
        char *ninthstr1[50];
        char *tenthstr1[50];
        char *eleventhstr1[50];
        strcpy(firststr1,"Hello Mr,");
        strcpy(secondstr1,name);
        *seventhstr1=strcat(firststr1,secondstr1);
        strcpy(thirdstr1,"\n\n\nA new ");
        strcpy(fourthstr1,"Device ");
        *eigthstr1=strcat(thirdstr1,fourthstr1);
        strcpy(fifthstr1,"was logged in for your Plagiarizm.io account!\n\n\nIf you did not Logged in any device let us now.");
        strcpy(sixthstr1,"\n\n\nThanks & Regards\n\n\nPlagiarizm.io Team.");
        *ninthstr1=strcat(fifthstr1,sixthstr1);
        *tenthstr1=strcat(*seventhstr1,*eigthstr1);
        *eleventhstr1=strcat(*tenthstr1,*ninthstr1);
        char em1[256];
        char sub1[256];
        strcpy(sub1,"New Login to Plagiarizm.io Account\n\n");
        strcpy(em1,email);
        fillDat(*eleventhstr1,em1,sub1);
        SendMail(0);
        int c=0;
        while(c!=4)
        {
        cout<<"\n\t\t\tWhat do you want\n\t\t1- Check plagiarism \n\t\t2- Show Details\n\t\t3- Show All Previously Added Assignments.\n\t\t4- Exit\n\t\tEnter choice : ";
    	cin>>c;
		if(c==1)
    	{
    		checkPlagiarism(pss,cd);
    		cout<<"\n\nPress any key to continue....\n";
    		getch();
    		system("cls");
		}
		else if(c==2)
		{
			show();
			cout<<"\n\nPress any key to continue....\n";
    		getch();
    		system("cls");
		}
		else if(c==3)
		{
			string ch;
		fstream fp2;
		cout<<"\n\n*****************************************************************\n\n";
		cout << endl << "ALL STUDENTS ASSIGNMENT FILE: "<<endl;
		fp2.open("AllStudentsAssignment.txt", ios::in);
		if(!fp2){
		cout<<"\nNO Previous Assignments Added!!\n";	
		}else
		{
		while(!fp2.eof()){
		while(!fp2.eof())
		{
		getline(fp2,ch,'\n');
		cout<<ch;
		cout<<"\n\n";
		break;
		}
		}
		}
		fp2.close();			
		getch();system("cls");
		}
		else if(c==4)
		{
			filein.close();
			return;
		}
				
	}
    }
}
    else
	{
            filein.read((char *)this, sizeof(*this));   
        
		}
    }
    
    			int o;
        	filein.close();
        		if(counter==0)
       		 {
            cout<<"\nSorry You are not register!";
            cout<<"\nPress any key to continue-----\n";
            cout<<"\n1- For register \n2- For Exit\nEnter choice : ";
            cin>>o;
			  if(o==1)
			  {
			  	system("cls");
			  	cout<<"\n\n\t\t\t********** Welcome to Sign Up Screen **********\n\n";
			  	SaveUser();
			  }
            	else
            	{
            		exit(0);
				}
            
 	}
}            	
}
void User::accountInfo()
     {
     	int choice;
     	int c=1;
     	while(c==1)
     	{
  cout<<"\n"<<endl;
  cout<<"                                                       ********************************"<<endl;
  cout<<"                                                       **********LOGIN||PANEL**********"<<endl;
  cout<<"                                                       ********************************"<<endl;
  cout<<"                                                       *  Press 1 For Sign Up         *"<<endl;
  cout<<"                                                       *  Press 2 For Login           *"<<endl;
  cout<<"                                                       *  Press 3 For Delete Account  *"<<endl;
  cout<<"                                                       *  Press 4 For Admin Login     *"<<endl;
  cout<<"                                                       *  Press 5 To Exit             *"<<endl;    
  cout<<"                                                       ********************************"<<endl;
  cout<<"                                                       ********************************"<<endl;
  cout<<"\n"<<endl;
  cout<<"                                                       Enter Your Choice : ";
  cin>>choice;
        
        
        if(choice==1)
        {
            SaveUser();  
            cout<<"\n\nPress any key to exit-----";
            getch();
        }
        else if(choice==2)
        {
            loginUser();
            cout<<"\n\nPress any key to exit-----";
            getch();
        }
        else if(choice==3)
        {
        	char a[50];
        	char idd[50];
        	cout<<"Enter password : ";
        	cin.sync();
			cin.getline(a,49);
			cout<<"Enter your Customer ID : ";
			cin.sync();
			cin.getline(idd,49);
			deleteAccount(a,idd);
		}
        else if(choice==4)
        {
            int password;
            cout<<"Please enter a password to confirm that you are a admin : ";
            cin>>password;
            if(password==720728)
            {
                showAllUser();
                getch();
            }
            else
            {
                cout<<"\nSorry you are not a Admin!";
                sleep(10);
            }
        }
        else if(choice==5)
        {
        	cout<<"Thanks For Using Our Application If You Need Help Contact Us on \"plagiarizm.io@gmail.com\"";
        	exit(0);
		}

		system("cls");
		cout<<"Do you want to continue If yes press 1 else press 2 : ";
		cin>>c;

     }
     
}

int main()
{
	system("cls");
	User ob;
	logo();
	ob.accountInfo();
	return 0;
}
