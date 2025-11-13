// 函数: sub_142082610
// 地址: 0x142082610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x280)

if ((rdx.b & 1) == 0 && *(arg1 + 0x298) s> 0)
    sub_1405a9f90(arg1 + 0x290, 0)
    rdx = *(arg1 + 0x280)

int32_t rdx_1
rdx_1.b = 1
*(arg1 + 0x280) = (not.d(rdx) & 2) | (rdx & 0xfffffff9) | 1
return sub_141dd7200(arg1, rdx_1.b) __tailcall
