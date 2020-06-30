#ifndef KNX_COMMON_CONFIG
#define KNX_COMMON_CONFIG

typedef struct Config{
    //MEMORY LIMITS
    unsigned ThreadStackLimit;
    unsigned ThreadHeapLimit;

    //THREADING POLICY
    

    //DEBUG POLICY
    bool DebugEnabled;

    //VERBOSITY
    int Verbosity;
} Config;

extern Config _config;

#endif