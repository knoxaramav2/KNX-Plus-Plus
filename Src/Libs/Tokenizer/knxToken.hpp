#ifndef KNXPP_TOKEN

#include <string>

#include "../debug/debugInfo.hpp"
#include "knxTokenType.hpp"

namespace KNX_TOKENIZER{
    struct KLANG_TOKEN : KLANG_DEBUG_LINE{
        KLANG_TOKEN(string term, KnxTokenType type);
        
        std::string term;
        KnxTokenType type;

        private:
    };

}



#endif