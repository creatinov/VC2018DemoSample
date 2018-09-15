#include <Windows.h>

bool CheckDomain(LPCSTR);
HRESULT ReadUserAccount();

const int USER_ACCOUNT_LEN = 256;
const int ACCOUNT_DOMAIN_LEN = 128;
