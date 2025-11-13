// 函数: sub_141950550
// 地址: 0x141950550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int64_t* r14 = arg1[1]
int32_t rsi = *(rdi + 0x1c0)
*(arg2 + 0x1c0) = rsi

if (rsi != 0)
    sub_14195adf0(arg2, rsi, 0)
    memcpy(arg2, rdi, rsi * 0x1c)
else
    *(arg2 + 0x1c4) = 0x10

*(arg2 + 0x1c8) = *(rdi + 0x1c8)
*(arg2 + 0x1cc) = *(rdi + 0x1cc)
*(arg2 + 0x1dc) = *(rdi + 0x1dc)
*(arg2 + 0x1f0) = *r14
*r14 = 0
return arg2
