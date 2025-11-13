// 函数: sub_14283f7a0
// 地址: 0x14283f7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s< 0)
    return 0

if (arg1 u> 0x41ff73ff)
    return 0x3ff

uint32_t rdx_3

if (arg1 u>= 0x3e800000)
    rdx_3 = arg1 - 0x3e000000
else
    int32_t rcx_1 = 0x7d - (arg1 u>> 0x17)
    
    if (rcx_1 u> 0x18)
        rcx_1 = 0x18
    
    rdx_3 = ((arg1 & 0x7fffff) | 0x800000) u>> rcx_1.b

return zx.q(((rdx_3 u>> 0x10 & 1) + 0x7fff + rdx_3) u>> 0x10) & 0x3ff
