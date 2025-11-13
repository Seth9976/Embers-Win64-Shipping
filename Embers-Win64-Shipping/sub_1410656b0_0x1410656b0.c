// 函数: sub_1410656b0
// 地址: 0x1410656b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg3, 0, 0x20)
arg3[0x1c] = *(arg2 + 0x20) != 0
int64_t result = *(arg2 + 0x28)
int64_t r14 = *(arg2 + 0x30)
int64_t r15 = *(arg2 + 0x38)
int64_t rbp = *(arg2 + 0x40)
int64_t rsi = *(arg2 + 0x48)

if (result != 0)
    result = sub_141063f50(arg1, result + 0xdc, arg3, 0)

if (r14 != 0)
    result = sub_141063f50(arg1, r14 + 0xd8, &arg3[4], 1)

if (r15 != 0)
    result = sub_141063f50(arg1, r15 + 0xd8, &arg3[8], 0)

if (rbp != 0)
    result = sub_141063f50(arg1, rbp + 0xd8, &arg3[0xc], 0)

if (rsi == 0)
    return result

return sub_141063f50(arg1, rsi + 0xd8, &arg3[0x10], 0)
