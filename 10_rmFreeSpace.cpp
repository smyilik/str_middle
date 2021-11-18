#include "middle_str.h"

string itc_rmFreeSpace(string str) {
    long long len = itc_len(str);
    string result;
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' and str[i + 1] != ' ') {
            result += str[i];
        }
        if (str[i + 1] == ' ' and str[i] != ' ') {
            result += str[i];
            result += ' ';
        }
    }
    int len2 = itc_len(result);
    if (result[len2 - 1] == ' ') {
        return itc_slice_str(result, 0, itc_len(result) - 2);
    }
    return result;
}

/*string itc_rmFreeSpace(string str)
{
	long long len = itc_len(str);
	string otv = "", otv2 = "";
	for (int i = 0; i < len; i++) if (!((str[i] == ' ') && (str[i + 1] == ' '))) otv += str[i];
	len = itc_len(otv);
	for (int j = 0; j < len; j++) if (!((j == len - 1) && (otv[j] == ' '))) otv2 += otv[j];
	return otv2;
}*/
