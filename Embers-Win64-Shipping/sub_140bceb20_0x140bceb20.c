// 函数: sub_140bceb20
// 地址: 0x140bceb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140bc78f0(arg1 + 0x10, arg1)

if ((*(arg1 + 0x1a) & 1) == 0)
    result = sub_140bd1d60(*(arg1 + 8))
    *(arg1 + 8) = 0xffffffff

*(arg1 + 0x18) = 0
return result
