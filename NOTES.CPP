#include <stdio.h>
#include <stdlib.h>
#include <dir.h>
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
char *current_directory(char *path)
{
   strcpy(path, "X:\\");      /* fill string with form of response: X:\ */
   path[0] = 'A' + getdisk();    /* replace X with current drive letter */
   getcurdir(0, path+3);  /* fill rest of string with current directory */
   return(path);
}
char cdir[40],a,f[40],note[500];
void wc()
{
  clrscr();
  current_directory(cdir);
  char d[90];
  strcpy(d,cdir);
  strcat(cdir,"\\NOTES\\CATEGORY\\C\\Availabl.txt");
  fstream fin2,fin3;
  fin3.open(cdir,ios::in);
  while(fin3)
  {
   fin3.get(a);
   cout<<a;
  }
  fin3.close();
  cout<<"\nENTER FILE NAME THAT YOU WANT TO CREATE WITH .txt\n";
  gets(f);
  strcat(d,"\\NOTES\\CATEGORY\\C\\");
  strcat(d,f);
  fin2.open(d,ios::out);
  clrscr();
  if(fin2)
  {
   cout<<"\nFILE CREATED WRITE YOUR NOTE\n";
   gets(note);
   fin2<<note;
   fin2.close();
  }
  fin3.open(cdir,ios::app);
  if(fin3)
  {
   fin3<<f<<"\n";
   fin3.close();
  }
}
void wcpp()
{
  clrscr();
  current_directory(cdir);
  char d[90];
  strcpy(d,cdir);
  strcat(cdir,"\\NOTES\\CATEGORY\\CPP\\Availabl.txt");
  fstream fin2,fin3;
  fin3.open(cdir,ios::in);
  while(fin3)
  {
   fin3.get(a);
   cout<<a;
  }
  fin3.close();
  cout<<"\nENTER FILE NAME THAT YOU WANT TO CREATE WITH .txt\n";
  gets(f);
  strcat(d,"\\NOTES\\CATEGORY\\CPP\\");
  strcat(d,f);
  fin2.open(d,ios::out);
  clrscr();
  if(fin2)
  {
   cout<<"\nFILE CREATED WRITE YOUR NOTE\n";
   gets(note);
   fin2<<note;
   fin2.close();
  }
  fin3.open(cdir,ios::app);
  if(fin3)
  {
   fin3<<f<<"\n";
   fin3.close();
  }
}


void wpython()
{
  clrscr();
  current_directory(cdir);
  char d[90];
  strcpy(d,cdir);
  strcat(cdir,"\\NOTES\\CATEGORY\\PYTHON\\Availabl.txt");
  fstream fin2,fin3;
  fin3.open(cdir,ios::in);
  while(fin3)
  {
   fin3.get(a);
   cout<<a;
  }
  fin3.close();
  cout<<"\nENTER FILE NAME THAT YOU WANT TO CREATE WITH .txt\n";
  gets(f);
  strcat(d,"\\NOTES\\CATEGORY\\PYTHON\\");
  strcat(d,f);
  fin2.open(d,ios::out);
  clrscr();
  if(fin2)
  {
   cout<<"\nFILE CREATED WRITE YOUR NOTE\n";
   gets(note);
   fin2<<note;
   fin2.close();
  }
  fin3.open(cdir,ios::app);
  if(fin3)
  {
   fin3<<f<<"\n";
   fin3.close();
  }
}
void wjava()
{
  clrscr();
  current_directory(cdir);
  char d[90];
  strcpy(d,cdir);
  strcat(cdir,"\\NOTES\\CATEGORY\\JAVA\\Availabl.txt");
  fstream fin2,fin3;
  fin3.open(cdir,ios::in);
  while(fin3)
  {
   fin3.get(a);
   cout<<a;
  }
  fin3.close();
  cout<<"\nENTER FILE NAME THAT YOU WANT TO CREATE WITH .txt\n";
  gets(f);
  strcat(d,"\\NOTES\\CATEGORY\\JAVA\\");
  strcat(d,f);
  fin2.open(d,ios::out);
  clrscr();
  if(fin2)
  {
   cout<<"\nFILE CREATED WRITE YOUR NOTE\n";
   gets(note);
   fin2<<note;
   fin2.close();
  }
  fin3.open(cdir,ios::app);
  if(fin3)
  {
   fin3<<f<<"\n";
   fin3.close();
  }
}


void writting()
{
 clrscr();
 char s[80];
 current_directory(cdir);
 cout<<"SELECT CATEGORY OF YOUR NOTES\n";
 strcat(cdir,"\\NOTES\\CATEGORY\\Availabl.txt");
 char *ch;
 ch=cdir;
 fstream fin1;
 fin1.open(ch,ios::in);
 if(!fin1)
 {
  cout<<"\nERROR";
 }
 while(fin1)
 {
  fin1.get(a);
  cout<<a;
 }
 int i;
 cin>>i;
 switch(i)
 {
  case 1: wc();
	 break;
  case 2: wcpp();
	 break;
  case 3: wpython();
	 break;
  case 4: wjava();
	 break;
  default: cout<<"\n WRONG CHOICE";
	  break;
 }
 fin1.close();
}
void c()
{

  clrscr();
  current_directory(cdir);
  char d[90];
  strcpy(d,cdir);
  strcat(cdir,"\\NOTES\\CATEGORY\\C\\Availabl.txt");
  fstream fin2;
  fin2.open(cdir,ios::in);
  while(fin2)
  {
   fin2.get(a);
   cout<<a;
  }
  fin2.close();
  gets(f);
  strcat(d,"\\NOTES\\CATEGORY\\C\\");
  strcat(d,f);
  fin2.open(d,ios::in);
  clrscr();
  while(fin2)
  {
   fin2.get(a);
   cout<<a;
  }
  fin2.close();

}
void cpp()
{
  clrscr();
  current_directory(cdir);
  char d[90];
  strcpy(d,cdir);
  strcat(cdir,"\\NOTES\\CATEGORY\\CPP\\Availabl.txt");
  fstream fin2;
  fin2.open(cdir,ios::in);
  while(fin2)
  {
   fin2.get(a);
   cout<<a;
  }
  fin2.close();
  gets(f);
  strcat(d,"\\NOTES\\CATEGORY\\CPP\\");
  strcat(d,f);
  fin2.open(d,ios::in);
  clrscr();
  while(fin2)
  {
   fin2.get(a);
   cout<<a;
  }
  fin2.close();
}

void python()
{
  clrscr();
  current_directory(cdir);
  char d[90];
  strcpy(d,cdir);
  strcat(cdir,"\\NOTES\\CATEGORY\\PYTHON\\Availabl.txt");
  fstream fin2;
  fin2.open(cdir,ios::in);
  while(fin2)
  {
   fin2.get(a);
   cout<<a;
  }
  fin2.close();
  gets(f);
  strcat(d,"\\NOTES\\CATEGORY\\PYTHON\\");
  strcat(d,f);
  fin2.open(d,ios::in);
  while(fin2)
  {
   fin2.get(a);
   cout<<a;
  }
  fin2.close();
}
void java()
{
  current_directory(cdir);
  char d[90];
  strcpy(d,cdir);
  strcat(cdir,"\\NOTES\\CATEGORY\\JAVA\\Availabl.txt");
  fstream fin2;
  fin2.open(cdir,ios::in);
  while(fin2)
  {
   fin2.get(a);
   cout<<a;
  }
  fin2.close();
  gets(f);
  strcat(d,"\\NOTES\\CATEGORY\\JAVA\\");
  strcat(d,f);
  fin2.open(d,ios::in);
  clrscr();
  while(fin2)
  {
   fin2.get(a);
   cout<<a;
  }
  fin2.close();
}

void reading()
{
 clrscr();
 char x;
 do
 {
 char s[80];
 current_directory(cdir);
 strcat(cdir,"\\NOTES\\CATEGORY\\Availabl.txt");
 char *ch;
 ch=cdir;
 fstream fin1;
 fin1.open(ch,ios::in);
 if(!fin1)
 {
  cout<<"\nERROR";
 }
 while(fin1)
 {
  fin1.get(a);
  cout<<a;
 }
 int i;
 cin>>i;
 switch(i)
 {
  case 1: c();
	 break;
  case 2: cpp();
	 break;
  case 3: python();
	 break;
  case 4: java();
	 break;
  default: cout<<"\n WRONG CHOICE";
	  break;
 }
 fin1.close();
 cout<<"\nTO READ ENTER AGAIN Y/y AND ANY KEY TO EXIT";
 cin>>x;
 }while(x=='y'||x=='Y');
}

void main()
{
 clrscr();
 int i;
 cout<<"\tWELCOME TO NOTES SHARING FREE AND OPEN PLATFORM\n";
 cout<<"1.READING \n2.WRITTING\nENTER YOUR CHOICE(1 or 2)\n";
 cin>>i;
 if(i==1)
 {
  reading();
 }
 else
 {
  if(i==2)
  {
   writting();
  }
  else
  {
   cout<<"PLEASE ENTER RIGHT CHOICE";
  }
 }
}