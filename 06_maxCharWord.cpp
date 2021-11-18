#include "middle_str.h"

string itc_maxCharWord(string str)
{
	if (str == "")
		return "error";
	str += " ";
	string word = "", result = "";
	int cnt = 0, maxCnt = 0, wordsCnt = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (itc_isValidWord(word))
			{
				wordsCnt++;
				int signCnt = itc_sign_cnt(word);
				if (cnt - signCnt > maxCnt)
				{
					maxCnt = cnt - signCnt;
					result = itc_get_word(word);
				}
			}
			cnt = 0;
			word = "";
		}
		else
		{
			word += str[i];
			cnt++;
		}
	}
	if (wordsCnt == 0)
		return "error";
	return result;
}

/*string itc_maxCharWord(string str)
{

	if ((str == "") || (itc_countWords(str) == 0)) return "error";
	long long max = 0, len = itc_len(str);
	string temp, otv;
	for (int i = 0; i < len; i++) {
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z'))) temp += str[i];
		else if (itc_len(temp) > max) { max = itc_len(temp); otv = temp; temp = ""; }
		else temp = "";
	}
	if (itc_len(temp) > max) otv = temp;
	return otv;
}*/
