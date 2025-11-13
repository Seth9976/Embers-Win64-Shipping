// 函数: sub_142c6fbe0
// 地址: 0x142c6fbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    __builtin_strncpy(arg1, "--:--:--", 9)
    return 0

int64_t r9_2 = arg2 s/ 0xe10

if (r9_2 s<= 0x63)
    int64_t rdx_4 = arg2 s% 0xe10 s/ 0x3c
    int64_t var_10 = arg2 - (r9_2 * 0x3c + rdx_4) * 0x3c
    int64_t var_18 = rdx_4
    return sub_142c564b0(arg1, 9, "%2I64d:%02I64d:%02I64d", r9_2, arg3)

int64_t r9_5 = arg2 s/ 0x15180

if (r9_5 s> 0x3e7)
    return sub_142c564b0(arg1, 9, "%7I64dd", r9_5, arg3) __tailcall

int64_t var_18_1 = arg2 s% 0x15180 s/ 0xe10
return sub_142c564b0(arg1, 9, "%3I64dd %02I64dh", r9_5, arg3)
