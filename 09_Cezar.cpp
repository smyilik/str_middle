#include "middle_str.h"

string itc_Cezar(string str, int k) {
	k %= 26;
	string ans = "";
	if (k < 0) k += 26;
	for (int i = 0; i < itc_len(str); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			if (str[i] + k <= 'z') ans += char(int(str[i]) + k);
			else ans += char(int(str[i]) + k - int('z') + int('a') - 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			if (str[i] + k <= 'Z') ans += char(int(str[i]) + k);
			else ans += char(int(str[i]) + k - int('Z') + int('A') - 1);
		}
		else ans += str[i];
	}
	return ans;
}

/*string itc_Cezar(string str, int k)
{
	if (k == 0) return str;
	long long len = itc_len(str);
	if ((k == 0) || (str == "")) return str;
	for (int i = 0; i < len; i++) {
		if ((str[i] >= 'A') && (str[i] <= 'Z')) {
			str[i] += k;
			if (str[i] > 90) str[i] = 65 + (str[i] % 90);
			else if (str[i] < 65) str[i] = 90 - (str[i] % 65);
		}
		else if ((str[i] >= 'a') && (str[i] <= 'z')) {
			str[i] += k;
			if (str[i] > 122) str[i] = 97 + (str[i] % 122);
			else if (str[i] < 97) str[i] = 122 - (str[i] % 97); }
	}
	return str;
}*/
