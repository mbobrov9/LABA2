#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <malloc.h>
#include <fstream>
#include "doublenumber.h"
using namespace std;
bool doublenumber(string s)
{
	string::iterator i;
	int flag1=0, flag2=0,flagstart=1;
	for (i = s.begin(); i != s.end(); ++i)
	{
		if (flagstart == 1)
		{
			if (flag1 == 0)
			{
				if ((48 <= *i)& (*i <= 57))
					flag1 = 1;
				else
				{
					flagstart = 0;
				}
			}
			else
			{
				if (flag2 == 1)
					flag1 = 0;
				else if ((48 <= *i)& (*i <= 57))
					flag2 = 1;
				else flag1 = 0;
			}
			if ((flag1 == 0) &(flag2 == 1)&(*i == ' '))
			{
				return true;
				break;
			}
			if ((flag1 == 0) &(flag2 == 1)&(*i != ' '))
			{
				flagstart = 0;
				flag2 = 0;
			}
			
		}
		if (*i == ' ')
			flagstart = 1;
	}
	return false;
}