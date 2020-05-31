#pragma once
#include <string>
#include "Program.h"

using namespace std;

enum status{enrolled,terminated,finished};




class Student
{
public:

	Student();
	Student(string,size_t,unsigned int, unsigned int);
	Student(string, size_t, unsigned int, unsigned int,Program);

	//Geters

	string getName() const;
	size_t getFn() const;
	unsigned int getCourse() const;
	unsigned int getGroup() const;
	Program getSp() const;
	status getS() const;

	//Seters

	void setName(string name);
	void setFn(size_t fn);
	void setCourse(unsigned int course);
	void setGroup(unsigned int group);
	void setSp(Program sp);
	void setStatus(status s);
	int validate_grade(float grade);     //proverka na uspeh


private:
	string name;
	size_t fn;
	unsigned int course, group;
	Program sp; 
	status s;
	float grade;      //sreden uspeh
};

