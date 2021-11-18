#include "middle_str.h"


bool itc_isFirstInSecond(string s1, string s2) {
    bool ans = false;
    if (itc_len(s1) > itc_len(s2)) return false;
    for (int i = 0; s2[i] != '\0'; i++)
        if (s1[0] == s2[i]) {
            ans = true;
            for (int j = 1; j < itc_len(s1); j++) if (s2[i + j] != s1[j]) ans = false;
            if (ans) return true;
        }
    return false;
}

/*bool itc_isFirstInSecond(string s1, string s2)
{
	if (s1 == "") return true;
	if (s2 == "") return false;
	return (itc_find_str(s1, s2) == -1);
}*/
