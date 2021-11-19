#include "middle_str.h"

string itc_Cezar(string str, int k)
{
	k %= 26;
	if (k == 0) return str;
	if (k < 0) k += 26;
	long long len = itc_len(str);
	for (int i = 0; i < len; i++) {
		if ((str[i] >= 'A') && (str[i] <= 'Z')) {
			if ((k > 0) && (str[i] + k > 'Z')) str[i] = str[i] + 'A' + k - 'Z' - 1;
			else str[i] += k;
		}
		else if ((str[i] >= 'a') && (str[i] <= 'z')) {
			if ((k > 0) && (str[i] + k > 'z')) str[i] = str[i] + 'a' + k - 'z' - 1;
			else str[i] += k;
		}
	}
	return str;
}
