#pragma once
#include "Student.h"
#include <vector>;


class SUSI
{
public:
	void enroll(string name, Program s, unsigned int group, size_t fn);
private:
	vector<Student> students;
};