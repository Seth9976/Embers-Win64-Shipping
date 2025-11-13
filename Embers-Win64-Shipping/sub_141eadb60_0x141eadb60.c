// 函数: sub_141eadb60
// 地址: 0x141eadb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_4 = *(arg1 + 0x25c)
int32_t result = r8_4 & 1
uint32_t r9 = zx.d(arg2)

if (r9 == result)
    return result

int32_t r8_1 = (r8_4 & 0xfffffffe) | r9
*(arg1 + 0x25c) = r8_1

if ((r8_1.b & 1) != 0)
    return sub_141e93350(arg1, arg2) __tailcall

return sub_141eaabd0(arg1, arg2) __tailcall
