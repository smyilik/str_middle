#include "middle_str.h"

bool itc_isIp(string str)
{
	int check = 1;
	long long len = itc_len(str), wordcount = 1;
	for (int i = 0; i < len; i++) {
		if ((str[i] >= '0') && (str[i] <= '9')) {
			check = check * 10 + str[i] - 48;
		}
		else {
			if ((str[i] != '.') || (check == 1) || (check % 1000 > 255) || (check % 1000 < 0)) return 0;
			check = 1;
			wordcount++;
		}
	}
	if (wordcount != 4) return 0;
	return 1;
}