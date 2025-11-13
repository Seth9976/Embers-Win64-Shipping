// 函数: sub_141897970
// 地址: 0x141897970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint32_t rsi = zx.d(arg3)
EnterCriticalSection(arg1 + 0x68)
int32_t var_44 = 0x80
void* var_78 = arg1 + 0x58
int64_t var_70
__builtin_memset(&var_70, 0, 0x2c)
int32_t var_40 = 0xffffffff
int32_t var_3c = 0
int64_t var_30 = 0
int32_t var_28 = 0
char var_88

if (rsi.b == 0)
    sub_14185d840(*arg2, arg2[1].d, &var_78, var_88)
else if (rsi == 1)
    sub_14185db50(*arg2, arg2[1].d, &var_78, var_88)
void* result = sub_140f23e90(&var_70)

if (arg1 != -0x68)
    result = LeaveCriticalSection(arg1 + 0x68)

__security_check_cookie(rax_1 ^ &var_a8)
return result
