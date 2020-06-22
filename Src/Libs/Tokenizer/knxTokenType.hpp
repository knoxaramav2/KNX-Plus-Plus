#ifndef KNX_TOKEN_VALUE

//enumerate raw types
enum KnxTokenType{

//null
K_NULL,
//void
K_VOID,
//numeric 
K_SHORT,
K_USHORT,
K_INT,
K_UINT,
K_LONG,
K_ULONG,
K_LLONG,
K_ULLONG,
K_FLOAT,
K_UFLOAT,
K_DOUBLE,
K_UDOUBLE,
//character
K_CHAR,
//general
K_BYTE,
//Managed
K_STRING,
K_STREAM,
K_CLASS,
K_STRUCT,
K_ARRAY,
//Actions
K_FUNCTION,
//System
K_REGISTER,
K_DIRECTIVE,
//Modifier
K_OVERIED,
K_PUBLIC,
K_PRIVATE,
K_LOCAL,
//exeption
K_EXCEPTION,
K_INTERRUPT,
//Pointer
K_Pointer32,
K_Pointer64

};

#endif