#include "knxToken.hpp"

using namespace std;
using namespace KNX_TOKENIZER;

KLANG_TOKEN::KLANG_TOKEN(string term, KnxTokenType type){
    this->term = term;
    this->type = type;
};