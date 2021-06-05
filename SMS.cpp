
//Headers inclusion

#include <iostream>     // for cout, cin
#include <fstream>     //for file handling
#include <conio.h>    //for getch()
#include <cstdlib>  // for system("pause") & system ("cls)
#include <ctime>    // for delay();

using namespace std;

//Structure defining

//For students
struct student
{
 string fname;//for student first name
 string lname;//for student last name
 string Registration;//for Registration No number
 string fthname;// for father's name
 string dob;//date of birth
 string classes;//for class info
}studentData;//Variable of student type

//For teachers
struct teacher
{
 string fst_name;//first name of teacher
 string lst_name;//last name of teacher
 string qualification;//Qualification of teacher
 string exp;//Experience of the person
 string pay;//Pay of the Teacher
 string subj;//subject teacher (he/she)
 string lec;//Lecture per Week
 string area;//Adderss of teacher home
 string city;//city
 string cel_no;//Phone number
 string blod_grp;//Blood Group
 string serves;//Number of serves in School

}tech;//Variable of teacher type

 void delay(unsigned int mseconds)   // decl delay ()
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


///////////////////////////////////////////////////
//Main function

int main()
{


char pw1, pw2, pw3 ,pw4;

main:           //label

system("cls");
system("Color 17");
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t ENTER PIN : " ;           // security checkup
 pw1=getch() ;
    cout<<"*" ;
 pw2=getch() ;
    cout<<"*" ;
 pw3=getch() ;
    cout<<"*" ;
 pw4=getch() ;
    cout<<"*" ;

    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t   LOADING";
    for (int i=0;i<=3;i++)
 {

 delay(350);
    cout<<" .";
 }


if (pw1 == '6' && pw2 == '7' && pw3 == '8' && pw4 == '9')
{
 system("Color 0F");
 system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\n\t%%      %% %%%%%%% %%      %%%%%%  %%%%%% %%%%  %%%% %%%%%%%";    //welcome
    cout<<"\n\t%%      %% %%      %%      %%      %%  %% %%  %%% %% %%       ";
    cout<<"\n\t%%  %%  %% %%%%%   %%      %%      %%  %% %%  %%% %% %%%%%      ";
    cout<<"\n\t%%  %%  %% %%      %%      %%      %%  %% %%      %% %%           ";
    cout<<"\n\t%%%%%%%%%% %%%%%%% %%%%%%% %%%%%%% %%%%%% %%      %% %%%%%%%     ";

 delay(1500);
 system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\n\n\n\n\n\n\n\n\t\t ______________________________________\n";          //introduction
    cout<<"\t\t\t SCHOOL MANAGEMENT SYSTEM";
    cout<<"\n\t\t ______________________________________";
    cout<<"\n\n\n\n\n STUDENTS NAME: ROHIT KUMAR";
    cout<<"\t\t\tTEACHER'S NAME: MR.NARESH KUMAR\t\t\t";
    cout<<"\n CLASS: XII";
    cout<<"\t\t\t\t\tSESSION: 2017-18\n\n\n\n\n\n\n\n\n\t\t\t";
   system("pause");

    cout<<"\n\n\n\t\t\t\tPLEASE WAIT";
    for (int i=0;i<=3;i++)
    {
      delay(700);
        cout<<" .";

     }

int i=0,j;//for processing usage
char choice;//for getting choice
string find;//for sorting
string srch;

while(1)//outer loop
{
 system("cls");//Clear screen

//Level 1-Display process
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\n\t\t\t NAVYUG SCHOOL  LODHI ROAD\n\n";
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\n\t\t\t     MANAGEMENT SYSTEM";
    cout<<"\n\t\t\t     _________________";
    cout<<"\n\t\n\n\t======================  MAIN   MENU  =======================\n";
    cout<<"\n\n\t[1].STUDENTS INFORMATION"<<endl;
    cout<<"\n\n\t[2].TEACHERS INFORMATION"<<endl;
    cout<<"\n\n\t[3].EXIT"<<endl;
    cout<<"\n\t=============================================================\n";
    cout<<"\n\n\tEnter your  choice : ";
    cin>>choice;

 system("cls");//Clear screen


switch(choice)//First switch
{

case '1': //Student
 {
while(1)//inner loop-1
{
system("cls");//Clear screen
//Level-2 display
    cout<<"\t\t    STUDENTS INFORMATION AND BIO DATA SECTION";
    cout<<"\t\t\t\t\t    -----------------------------------------\n\n\n\n\n";
    cout<<"\n\n\t[1].CREATE NEW ENTRY\n";
    cout<<"\n\n\t[2].FIND AND DISPLAY ENTRY\n";
    cout<<"\n\n\t[3].JUMP TO MAIN MENU\n";
    cout<<"\n\n\n\n\t Enter your choice: ";
    cin>>choice;


switch (choice)//Second switch

{
case '1'://Insert data
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n'&& choice!='N';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{

 system("cls");
    cout<<"\t\t\t  STUDENTS NEW ENTRY SECTION";
    cout<<"\n\t\t\t  --------------------------";
    cout<<"\n\n\n\n\n\tEnter First name: ";
    cin>>studentData.fname;
    cout<<"\n\tEnter Last name: ";
    cin>>studentData.lname;
    cout<<"\n\tEnter Registration number: ";
    cin>>studentData.Registration;
    cout<<"\n\tEnter father's name: ";
    cin>>studentData.fthname;
    cout<<"\n\tEnter date of birth: ";
    cin>>studentData.dob;
    cout<<"\n\tEnter class: ";
    cin>>studentData.classes;


 f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl
    <<studentData.fthname<<endl<<studentData.dob<<endl<<studentData.classes<<endl<<endl<<endl;
    cout<<"\n\n\n\n\n\t\t  Do you want to enter data(Press Y/N): ";
    cin>>choice;
}
}
f1.close();
}
continue;//control back to inner loop -1

case '2'://Display data
{  ifstream f2("student.txt");
system("cls");
    cout<<"\n\t\t\t\tSTUDENTS DATABASE";
    cout<<"\n\t\t\t\t-----------------";
    cout<<"\n\n\n\n\tEnter First name to be displayed: ";
    cin>>find;
    cout<<endl;

int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{

   getline(f2,studentData.fname);

if(studentData.fname==find)
{
   notFound = 1;
    cout<<"\n\n\tFirst Name: "<<studentData.fname<<endl;

   getline(f2,studentData.lname);
    cout<<"\n\tLast Name: "<<studentData.lname<<endl;

   getline(f2,studentData.Registration);
    cout<<"\n\tRegistration No: "<<studentData.Registration<<endl;

   getline(f2,studentData.fthname);
    cout<<"\n\tFather's name: "<<studentData.fthname<<endl;

   getline(f2,studentData.dob);
    cout<<"\n\tDate of birth: "<<studentData.dob<<endl;

   getline(f2,studentData.classes);
    cout<<"\n\tClass: "<<studentData.classes<<endl<<endl<<endl;
}

}

if(notFound == 0)
{

    cout<<"\n\n\t\t\t\tNo Record Found!\n"<<endl;
}
f2.close();
    cout<<"\n\n\n\t\t\tPress any key two times to proceed...";
  getch();//To hold data on screen
  getch();//To hold data on screen

}
continue;//control back to inner loop -1

case '3'://Jump to main
{
break;//inner switch breaking
}
}

break;//inner loop-1 breaking
}
continue;//Control pass to 1st loop
}

case '2'://Teachers biodata
{
while(1)//inner loop-2
{
system("cls");//Clear screen
//Level-2 Display process
   cout<<"\t\t\tTEACHERS INFORMATION AND BIO DATA SECTION";
   cout<<"\t\t\t\t\t-----------------------------------------\n\n\n\n\n";
   cout<<"\n\n\t[1].CREATE NEW ENTRY\n";
   cout<<"\n\n\t[2].FIND AND DISPLAY ENTRY\n";
   cout<<"\n\n\t[3].JUMP TO MAIN MENU\n";
   cout<<"\n\n\n\n\tEnter your choice: ";
   cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{

 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
   system("cls");
    cout<<"\t\t\t   TEACHERS NEW ENTRY SECTION";
    cout<<"\n\t\t\t   ---------------------------";
    cout<<"\n\n\n\n\tEnter First name: ";
    cin>>tech.fst_name;
    cout<<"\n\tEnter Last name:: ";
    cin>>tech.lst_name;
    cout<<"\n\tEnter qualification: ";
    cin>>tech.qualification;
    cout<<"\n\tEnter experiance(year): ";
    cin>>tech.exp;
    cout<<"\n\tEnter number of year in this School: ";
    cin>>tech.serves;
    cout<<"\n\tEnter Subject teachs: ";
    cin>>tech.subj;
    cout<<"\n\tEnter Lecture(per Week): ";
    cin>>tech.lec;
    cout<<"\n\tEnter pay: ";
    cin>>tech.pay;
    cout<<"\n\tEnter address ";
    cout<<"\tArea: ";
    cin>>tech.area;
    cout<<"\t\t\tCity: ";
    cin>>tech.city;
    cout<<"\n\tEnter Phone Number: ";
    cin>>tech.cel_no;
    cout<<"\n\tEnter Blood Group: ";
    cin>>tech.blod_grp;


  t1<<tech.fst_name<<endl<<tech.lst_name<<endl
    <<tech.qualification<<endl<<tech.exp<<endl
    <<tech.serves<<endl<<tech.subj<<endl<<tech.lec<<endl
    <<tech.pay<<endl<<tech.area<<endl<<tech.city<<endl
    <<tech.cel_no<<endl<<tech.blod_grp<<endl<<endl<<endl;
    cout<<"\n\n\n\n\t\t\tDO YOU WANT TO ENTER DATA (Y/N): ";
    cin>>choice;
 }//if
}//for loop
//for finding through name
 system("cls");

t1.close();
}//case 1

continue;//Control pass to inner loop-2

case '2'://Display data
{
ifstream t2("teacher.txt");
 system("cls");
    cout<<"\n\t\t\t\tTEACHERS DATABASE";
    cout<<"\n\t\t\t\t-----------------";
    cout<<"\n\n\n\tEnter name to be displayed: ";
    cin>>find;
    cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{

 getline(t2,tech.fst_name);

 if(tech.fst_name==find)
 {
    notFound = 1;
    cout<<"\n\n\tFirst name: "<<tech.fst_name<<endl;

    getline(t2,tech.lst_name);
    cout<<"\n\tLast name: "<<tech.lst_name<<endl;

    getline(t2,tech.qualification);
    cout<<"\n\tQualification: "<<tech.qualification<<endl;

    getline(t2,tech.exp);
    cout<<"\n\tExperience: "<<tech.exp<<endl;

    getline(t2,tech.serves);
    cout<<"\n\tNumber of year in this School: "<<tech.serves<<endl;

    getline(t2,tech.subj);
    cout<<"\n\tSubject teaches: "<<tech.subj<<endl;

    getline(t2,tech.lec);
    cout<<"\n\tLecture(per Week): "<<tech.lec<<endl;

    getline(t2,tech.pay);
    cout<<"\n\tpay: "<<tech.pay<<endl;

    getline(t2,tech.area);
    cout<<"\n\tAddress ";
    cout<<"\tArea: "<<tech.area<<endl;

    getline(t2,tech.city);
    cout<<"\t\t\tCity: "<<tech.city<<endl;

    getline(t2,tech.cel_no);
    cout<<"\n\tPhone Number: "<<tech.cel_no<<endl;

    getline(t2,tech.blod_grp);
    cout<<"\n\tBlood Group: "<<tech.blod_grp<<endl<<endl<<endl;
 }//if

}//for loop
t2.close();
if(notFound == 0)
  {

    cout<<"\n\n\t\t\t\tNo Record Found!\n"<<endl;
  }

    cout<<"\n\n\n\t\t\tPress any key two times to proceed...";

 getch();//To hold data on screen
 getch();//To hold data on screen

}//case 2

continue;//Control pass to inner loop-2

case '3'://Jump to main
{
break;//inner switch
}//case 3

}//inner switch

break;//inner while
}//inner loop

continue;//control pass to 1st loop
}//outer case 2

case '3':
{
break;//outer case 3
}//outer case 3
}
 system("Color 17");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANK YOU ";
    cout<<"\n\n\t\t\t\t FOR WORKING\n\n\n";

  getch();
break;//outer loop
}

}
else

{

 int choice2;
  system("cls");

    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t####################";
    cout<<"\n\t\t\t\t#   ACCESS DENIED  #";
    cout<<"\n\t\t\t\t####################";
    cout<<"\n\n\n\n\n\t\t\t   YOU DON'T HAVE AUTHORITY TO EDIT";
  delay(1000);
    cout<<"\n\n\n\n\n\t\t\t\t  1.TRY AGAIN"<<"\n\t\t\t\t  2.EXIT SYSTEM\n\t\t\t\t  ";
    cin>>choice2;

switch(choice2 )
{
  case 1: goto  main;
  case 2: exit(0);
}


}
}


