// 函数: sub_142c61bf0
// 地址: 0x142c61bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
void _Destination
memset(&_Destination, 0, 0x100)
void _Destination_1
memset(&_Destination_1, 0, 0x100)
char* _Source = *(arg1 + 0x780)

if (_Source != 0)
    strncpy(&_Destination, _Source, 0x100)
    char var_119_1 = 0

char* _Source_1 = *(arg1 + 0x788)

if (_Source_1 != 0)
    strncpy(&_Destination_1, _Source_1, 0x100)
    char var_19_1 = 0

int32_t result = sub_142c51e30(arg1, &_Destination, 0, arg2 + 0x168, nullptr, 0)

if (result == 0)
    result = sub_142c51e30(arg1, &_Destination_1, 0, arg2 + 0x170, nullptr, result.b)

__security_check_cookie(rax_1 ^ &var_248)
return result
