#include "middle_str.h"

string itc_rmFreeSpace(string str)
{
    long long len = itc_len(str), i;
    if (str == "") return str;
    else if (str[0] == ' ') i = 1;
    else i = 0;
    string otv = "";
    for (i; i < len; i++) {
        if ((i != len - 1) && ((str[i] != ' ') || (str[i + 1] != ' '))) otv += str[i];
    }
    return otv;
}
