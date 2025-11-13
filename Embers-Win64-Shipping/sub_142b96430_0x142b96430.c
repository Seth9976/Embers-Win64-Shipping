// 函数: sub_142b96430
// 地址: 0x142b96430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48

if (arg2 == 0)
    arg2 = arg3
else if (arg3 == 0)
    arg3 = arg2

if (arg2 u< 1)
    arg2 = 1

if (arg3 u< 1)
    arg3 = 1

if (arg2 u>= 0xffff)
    arg2 = 0xffff

if (arg3 u>= 0xffff)
    arg3 = 0xffff

int32_t var_24 = arg2 << 6
int32_t var_28 = 0
int32_t var_20 = arg3 << 6
int64_t var_1c = 0
uint64_t result = sub_142b96080(arg1, &var_28)
__security_check_cookie(rax_1 ^ &var_48)
return result
