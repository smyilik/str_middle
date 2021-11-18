#include "middle_str.h"

long long itc_len(string str)
{
    long long i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int itc_find_str(string str1, string str2)
{
	long long ind = 0, st1 = itc_len(str1), st2 = itc_len(str2), otv = -1;
	for (int i = 0; i < st1; i++) {
		if (str1[i] == str2[0]) {
			otv = i;
			for (int j = 0; j < st2; j++) {
				if (str1[j + i] == str2[ind]) {
					ind++;
				}
				else {
					ind = 0;
					break;
				}
			}
		}
		if (ind == st2) {
			break;
		}
	}
	return(otv);
}

string itc_covert_num(int number, int ss)
{
	string otv1 = "", otv2 = "";
	if ((ss > 16) || (ss < 2) || (number < 0)) {
		return "-1";
	}
	else if (ss < 10) {
		while (number > 0) {
			otv1 += ('0' + (number % ss));
			number /= ss;
		}
	}
	else {
		while (number > 0) {
			if (number % ss >= 10) otv1 += ('A' + (number % ss) - 10);
			else otv1 += ('0' + (number % ss));
			number /= ss;
		}
	}
	int i = itc_len(otv1);
	while (i > 0) {
		i--;
		otv2 += otv1[i];
	}
	return otv2;
}

int itc_len_num(long long a)
{
	a = itc_abs(a);
	int nol = 0;
	if (a == 0) return 1;
	while (a > 0) {
		a = a / 10;
		nol++;
	}
	return (nol);
	return -1;
}

long long itc_abs(int a)
{
	if (a < 0) return (a * -1);
	return a;
}

int itc_pow(int num, int step)
{
	int result = 1;
	long long chislo = num;
	int iterationsCount = step;
	if (step == 0) {
		return 1;
	}
	else if (step < 0) {
		return -1;
	}
	while (result < iterationsCount)
	{
		num = num * chislo;
		result++;
	}
	if (step > 0) {
		return num;
	}
	return -1;
}

int itc_stoi(string str)
{
	int number = 0, len = itc_len(str);
	for (int i = 0; i < len; i++) {
		if ((number == 0) && (str[i] > '0') && (str[i] <= '9')) number = str[i] - 48;
		else number = number * 10 + (str[i] - 48);
	}
	return number;
}





void str_middle_checker()
{
	string isDigit = "NO", toUpper = "NO", changeCase = "NO", compare = "NO", countWords = "NO", maxCharWord = "!!!!NO!!!!",
		sameChar = "NO", isFirstInSecond = "NO", Cezar = "NO", rmFreeSpace = "!!!!NO!!!!", isIp = "NO", DecToBin = "NO", decToBase = "NO";

	if (itc_isDigit('5') == 1 && itc_isDigit('U') == 0) isDigit = "OK";

	if (itc_toUpper('u') == 'U' && itc_toUpper('U') == 'U') toUpper = "OK";

	if (itc_changeCase('u') == 'U' && itc_changeCase('U') == 'u' && itc_changeCase('4') == '4') changeCase = "OK";

	if (itc_compare("hello", "he") == 0 && itc_compare("hello", "hello") == 1) compare = "OK";

	if (itc_countWords(("hello")) == 1 && itc_countWords("#") == 0 && itc_countWords("I like computer science.") == 4) countWords = "OK";

	if (itc_maxCharWord("one two four") == "four" && itc_maxCharWord("one four nine") == "four" && itc_maxCharWord("one,     four,    nine.") == "four" && itc_maxCharWord("onefournine") == "error") maxCharWord = "OK";

	if (itc_sameChar("one two fur") == 'o') sameChar = "OK";

	if (itc_isFirstInSecond("one", "secondone") == 1 && itc_isFirstInSecond("secondone", "one") == 0) isFirstInSecond = "OK";

	if (itc_Cezar("abc", 1) == "bcd" && itc_Cezar("abc", -1) == "zab" && itc_Cezar("abc", 0) == "abc") Cezar = "OK";

	if (itc_rmFreeSpace("abc     abc 123 33   3") == "abc abc 123 33 3" && itc_rmFreeSpace("1          3") == "1 3") rmFreeSpace = "OK";

	if (itc_isIp("1.1.1.1.") == 0 && itc_isIp("127.0.0.1") == 1) isIp = "OK";

	if (itc_DecToBin("192.168.001.255") == "11000000.10101000.1.11111111") DecToBin = "OK";

	if (itc_decToBase(162, 16) == "A2" && itc_decToBase(10, 2) == "1010") decToBase = "OK";

	cout << "1---------------------------------" << endl;
	cout << "itc_isDigit" << ":" << "        " << isDigit << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "2---------------------------------" << endl;
	cout << "itc_toUpper" << ":" << "        " << toUpper << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "3---------------------------------" << endl;
	cout << "itc_changeCase" << ":" << "        " << changeCase << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "4---------------------------------" << endl;
	cout << "itc_compare" << ":" << "        " << compare << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "5---------------------------------" << endl;
	cout << "itc_countWords" << ":" << "        " << countWords << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "6---------------------------------" << endl;
	cout << "itc_maxCharWord" << ":" << "        " << maxCharWord << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "7---------------------------------" << endl;
	cout << "itc_sameChar" << ":" << "        " << sameChar << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "8---------------------------------" << endl;
	cout << "itc_isFirstInSecond" << ":" << "        " << isFirstInSecond << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "9---------------------------------" << endl;
	cout << "itc_Cezar" << ":" << "        " << Cezar << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "10--------------------------------" << endl;
	cout << "itc_rmFreeSpace" << ":" << "        " << rmFreeSpace << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "11--------------------------------" << endl;
	cout << "itc_isIp" << ":" << "        " << isIp << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "12--------------------------------" << endl;
	cout << "itc_DecToBin" << ":" << "        " << DecToBin << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "13--------------------------------" << endl;
	cout << "itc_decToBase" << ":" << "        " << decToBase << endl;
	cout << "---------------------------------" << endl << endl;
}