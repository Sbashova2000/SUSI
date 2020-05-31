#include "SUSI.h"


void SUSI::enroll(string name, Program s, unsigned int group, size_t fn)
{
	for (int i = 0; i < this->students.size(); i++)
	{
		if (students[i].getName() == name && students[i].getSp() == s && students[i].getGroup() == group && students[i].getFn() == fn)
		{

		}
	}
}