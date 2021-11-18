#include "middle_str.h"

string itc_DecToBin(string str)
{
	string result = "";
	int _size = itc_len(str), num = 0;
	for (int i = 0; i < _size; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num *= 10;
			num += str[i] - '0';
		}
		else
		{
			if (i > 0 && str[i - 1] >= '0' && str[i - 1] <= '9')
			{
				result += itc_decToBase(num, 2);
				num = 0;
			}
			result += str[i];
		}
	}
	if (_size > 0 && str[_size - 1] >= '0' && str[_size - 1] <= '9')
		result += itc_decToBase(num, 2);
	return result;
}

/*string itc_DecToBin(string str)
{
	string otv = "", chislo = "";
	long long len = itc_len(str) + 1;
	for (int i = 0; i < len; i++) {
		if (itc_isDigit(str[i])) {
			chislo += str[i];
			if (i + 1 == len) otv += itc_decToBase(itc_stoi(chislo), 2);
		}
		else if (!itc_isDigit(str[i])) {
			if (chislo != "") { otv += itc_decToBase(itc_stoi(chislo), 2); chislo = ""; }
			otv += str[i];
		}
	}
	return otv;
}*/
