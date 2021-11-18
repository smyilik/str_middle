#include "middle_str.h"

string itc_DecToBin(string str)
{
	string otv = "", chislo = "";
	long long len = itc_len(str) + 1;
	for (int i = 0; i < len; i++) {
		if (itc_isDigit(str[i])) {
			chislo += str[i];
		}
		else if (!itc_isDigit(str[i])) {
			if (chislo != "") { otv += itc_covert_num(itc_stoi(chislo), 2); chislo = ""; }
			otv += str[i];
		}
		if ((i + 1 == len) && (chislo != "")) otv += itc_covert_num(itc_stoi(chislo), 2);
	}
	return otv;
}