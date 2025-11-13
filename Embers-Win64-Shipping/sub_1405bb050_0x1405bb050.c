// 函数: sub_1405bb050
// 地址: 0x1405bb050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x68)

if (rcx == 0)
    return 0

int64_t result = 0
(*(*rcx + 0x10))(rcx, arg2, &result)
return result
