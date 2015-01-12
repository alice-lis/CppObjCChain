#include <iterator>
#include <algorithm>
#include <sstream>
#include "matcher.h"

using namespace std;

int Matcher::bf_index(string haystack, string needle) { // return index of first occurrence or -1
    int i = 0;
    int j = 0;
    while (i < haystack.size() && j < needle.size()) {
        if (haystack[i] == needle[j]) {
            i++;
            j++;
        }
        else {
            i = i - j + 1;
            j = 0;
        }
    }
    return j < needle.size() ? -1 : i - j;
}

int Matcher::bm_index(string haystack, string needle) { // return index of first occurrence or -1
    map <char, int> shs = shifts(needle);
    int i = needle.size() - 1;
    int j = i;
    while (i < haystack.size() && j >= 0) {
        if (haystack[i] != needle[j]) {
            if (j == needle.size() - 1) // if it is first mismatch then take shift from dictionary shs or shift will be equal to needle size if not exists
                i += shs.count(haystack[i]) > 0 ? shs[haystack[i]] : needle.size();
            else // otherwise shift must be 1 (considering previouce steps with j we get needle.size() - j - 1 + 1)
                i += needle.size() - j;
        }
        else {
            i--;
            j--;
        }
    }
    return j > 0 ? -1 : i + 1;
}

map <char, int> Matcher::shifts(string str) {
    map <char, int> hash;
    string reverse_str = str;
    std::reverse(std::begin(reverse_str), std::end(reverse_str));
    for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
        if (hash.count(*it) == 0) {
            hash[*it] = reverse_str.find_first_of(*it);
        }
    }
    return hash;
}
