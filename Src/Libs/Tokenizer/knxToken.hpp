#ifndef KNXPP_TOKEN

#include <string>
#include "../debug/debugInfo.hpp"

namespace KNX_TOKENIZER{
struct KLANG_TOKEN : KLANG_DEBUG_LINE{
    KLANG_TOKEN(string term);
    std::string term;

    private:
};

}



#endif