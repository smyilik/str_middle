#include "middle_str.h"

bool itc_isFirstInSecond(string s1, string s2)
{
	if (s1 == "") return true;
	if (s2 == "") return false;
	return itc_find_str(s1, s2) == -1;
}