// 函数: sub_1418973a0
// 地址: 0x1418973a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

char r9_1 = *(arg1 + 0x29)

if ((r9_1 & 1) != 0)
    return 

int64_t rcx = *(arg1 + 0x90)
void* r8 = *(arg1 + 0x98)

if (rcx + arg3 s<= sx.q(*(r8 + 8)))
    memcpy(arg2, sx.q(rcx.d) + *r8, arg3.d)
    *(arg1 + 0x90) += arg3
    return 

*(arg1 + 0x29) = r9_1 | 1
