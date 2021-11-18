#include "middle_str.h"

bool itc_compare(string S1, string S2)
{
	if ((S1 == "") || (S2 == "")) return false;
	long long len = itc_len(S1);
	bool ret = (len == itc_len(S2));
	if (ret == false) {
		return ret;
	}
	for (int i = 0; i < len; i++) {
		ret = (S1[i] == S2[i]);
		if (ret == false) {
			return ret;
		}
	}
	return ret;
}