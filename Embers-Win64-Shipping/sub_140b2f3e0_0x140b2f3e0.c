// 函数: sub_140b2f3e0
// 地址: 0x140b2f3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 3
*(arg1 + 0x10) = 0
*(arg1 + 0x10) = *arg2
*arg2 = 0
arg1[6] = arg2[1].d
arg1[7] = *(arg2 + 0xc)
arg2[1] = 0
int64_t rcx = *arg2

if (rcx != 0)
    sub_140a74f90(rcx)

return arg1
