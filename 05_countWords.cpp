#include "middle_str.h"

int itc_countWords(string str)
{
	long long len = itc_len(str), kol;
	if (str == "") return 0;
	else if (((str[0] >= 'A') && (str[0] <= 'Z')) || ((str[0] >= 'a') && (str[0] <= 'z'))) kol = 1;
	else kol = 0;
	for (int i = 1; i < len; i++) {
		if (!(((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z'))) && (str[i] != ' ')){
			kol -= 2;
		}
		if (!(((str[i - 1] >= 'A') && (str[i - 1] <= 'Z')) || ((str[i - 1] >= 'a') && (str[i - 1] <= 'z'))) && (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')))) {
			kol++;
		}
	}
	return kol;
}