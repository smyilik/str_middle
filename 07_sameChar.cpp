#include "middle_str.h"

char itc_sameChar(string str)
{
	long long len = itc_len(str);
	for (int i = 0; i < len; i++) {
		for (int j = 1; j < len; j++) {
			if ((j != i) && (str[i] == str[j])) return str[i];
		}
	}
}