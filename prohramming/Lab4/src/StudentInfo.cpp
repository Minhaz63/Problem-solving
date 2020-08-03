#include <iostream>
//#include "UnsortedType.h"
#include "StudentInfo.h"
#include <conio.h>

using namespace std;


void StudentInfo::input(int id,char name[100],double cgpa)
{	StudentInfo.id=id;
    StudentInfo.name=name;
    StudentInfo.cgpa=cgpa;


}
void StudentInfo::display()
{   cout<<"\nid.:"<<id;
	cout<<"\nName:"<<name;

	cout<<"\nCgpa:"<<cgpa;

}
