// 函数: sub_142bceeb0
// 地址: 0x142bceeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) == 3)
    return 0

*(arg1 + 0x58) = 3
int32_t result = sub_142bcee20(arg1)

if (result != 0)
    return result

return sub_142bced70(arg1, arg2, arg3)
