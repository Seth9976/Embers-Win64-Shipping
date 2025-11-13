// 函数: sub_142afd8c0
// 地址: 0x142afd8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8 = *(arg1 + 0x10)

if (r8 u>= *(arg1 + 0x18))
    *arg2 = 8
    return 0xffff

*(arg1 + 0x10) = &r8[1]
return zx.q(*r8)
