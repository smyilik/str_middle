#include "middle_str.h"

string itc_maxCharWord(string str)
{
	str = itc_rmFreeSpace(str);
	if (itc_countWords(str) == 0) return "error";
	long long max = 0, len = itc_len(str);
	string temp, otv;
	for (int i = 0; i < len; i++) {
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z'))) temp += str[i];
		else if (itc_len(temp) > max) { max = itc_len(temp); otv = temp; temp = ""; }
		else temp = "";
	}
	if (itc_len(temp) > max) otv = temp;
	return otv;
}