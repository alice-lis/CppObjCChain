#ifndef _PERF_CPLUSPLUS_
#define _PERF_CPLUSPLUS_

#import <string>
#import <map>

class Matcher {
public:
    static int bf_index(std::string, std::string); // Brute-Force
    static int bm_index(std::string, std::string); // Boyer-Moore (simplest realization)
private:
    static std::map <char, int> shifts(std::string);
};


#endif //_PERF_CPLUSPLUS_