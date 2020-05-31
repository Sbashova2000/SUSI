#include "Student.h"

Student::Student()
{
	this->name = " ";
	this->fn = 8970;
	this->course = 1;
	this->group = 1;
	this->sp = sp;
}

Student::Student(string name, size_t fn, unsigned int course, unsigned int group)
{
	this->name = name;
	this->fn = fn;
	this->course = course;
	this->group = group;
	this->sp = sp;
}

Student::Student(string name, size_t fn, unsigned int course, unsigned int group, Program sp)
{
	this->name = name;
	this->fn = fn;
	this->course = course;
	this->group = group;
	this->sp = sp;
}

//Geters

string Student::getName() const
{
	return this->name;
}

size_t Student::getFn() const
{
	return this->fn;
}

unsigned int Student::getCourse() const
{
	return this->course;
}

unsigned int Student::getGroup() const
{
	return this->group;
}
Program Student::getSp() const
{
	return this->sp;
}

status Student::getS() const
{
	return this->s;
}


//Seters

void Student::setName(string name)
{
	this->name = name;
}

void Student::setFn(size_t fn)
{
	this->fn = fn;
}

void Student::setCourse(unsigned int course)
{
	this->course = course;
}

void Student::setGroup(unsigned int group)
{
	this->group = group;
}

void Student::setSp(Program sp)
{
	this->sp = sp;
}

void Student::setStatus(status s)
{
	this->s = s;
}

int Student::validate_grade(float grade)
{
	return grade >= 2.0 && grade <= 6.0;
}