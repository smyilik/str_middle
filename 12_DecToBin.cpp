#include "middle_str.h"

string itc_DecToBin(string str)
{
	long long len = itc_len(str);
	string otv = "", number = "";
	for (int i = 0; i < len; i++) {
		if (itc_isDigit(str[i])) number += str[i];
		else {
			if (number != "") {
				otv += itc_covert_num(itc_stoi(number), 2) + str[i];
				number = "";
			}
			else otv += str[i];
		}
	}
	if (number != "") {
		otv += itc_covert_num(itc_stoi(number), 2);
	}
	return otv;
}
