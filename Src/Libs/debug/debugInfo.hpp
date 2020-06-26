#ifndef KNX_DEBUG_INFO

#include <string>

struct KLANG_DEBUG_LINE{

    public:
    unsigned int lineNumber;//starting line number from unoptimized statement
    std::string clause;//Full deliminated statement

};

#endif