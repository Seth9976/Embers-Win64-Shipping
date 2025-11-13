// 函数: sub_142bcf1d0
// 地址: 0x142bcf1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) != 0)
    return 0

*(arg1 + 0x58) = 1
int32_t result = sub_142bcf230(arg1)

if (result != 0)
    return result

return sub_142bcf140(arg1, arg2, arg3) __tailcall
