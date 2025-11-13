// 函数: sub_140b53b10
// 地址: 0x140b53b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

char rcx = *(arg1 + 0x29)

if ((rcx & 1) != 0)
    return 

int64_t r8 = *(arg1 + 0x90)

if (r8 + arg3 s<= *(arg1 + 0xa8))
    memcpy(arg2, *(arg1 + 0xa0) + r8, arg3.d)
    *(arg1 + 0x90) += arg3
    return 

*(arg1 + 0x29) = rcx | 1
