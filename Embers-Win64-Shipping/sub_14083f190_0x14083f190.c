// 函数: sub_14083f190
// 地址: 0x14083f190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x98) - *(arg1 + 0xc4)

if (result s> 0 && (*(arg1 + 0xf0) & 7) != 0)
    result = sub_14083f210(arg1 + 0x40)

*(arg1 + 0xf0) &= 0xfffffff8
return result
