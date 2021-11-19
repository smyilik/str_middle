#include "middle_str.h"

string itc_Cezar(string str, int k)
{
	k %= 26;
	if (k == 0) return str;
	if (k < 0) k += 26;
	long long len = itc_len(str);
	for (int i = 0; i < len; i++) {
		if ((str[i] >= 'A') && (str[i] <= 'Z')) {
			if ((k > 0) && (str[i] + k > 'Z')) str[i] = str[i] + 'A' + k - 'Z';
			//else if ((k < 0) && (str[i] + k < 'A')) str[i] = 'Z' + ('A' - str[i] + k) + 1;
			else str[i] += k;
		}
		else if ((str[i] >= 'a') && (str[i] <= 'z')) {
			if ((k > 0) && (str[i] + k > 'z')) str[i] = str[i] + 'a' + k - 'z';
			//else if ((k < 0) && (str[i] + k < 'a')) str[i] = 'z' + ('a' - str[i] + k) + 1;
			else str[i] += k;
		}
	}
	return str;
}
