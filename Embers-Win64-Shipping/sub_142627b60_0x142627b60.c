// 函数: sub_142627b60
// 地址: 0x142627b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int64_t _ArgList = arg3
int64_t r9
int64_t arg_20 = r9
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
char _Buffer[0x200]
int32_t r8 = __stdio_common_vsprintf(data_143cd5b30 | 2, &_Buffer, 0x200, arg2, nullptr, &_ArgList)

if (r8 s< 0)
    r8 = -1

if (r8 == 0xffffffff || r8 s>= 0x200)
    r8 = -1

int64_t result = (**arg1)(arg1, &_Buffer, r8)
__security_check_cookie(rax_1 ^ &var_258)
return result
