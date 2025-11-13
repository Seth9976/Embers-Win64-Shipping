// 函数: sub_141f3b330
// 地址: 0x141f3b330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140cdba30(arg1)
int64_t* rcx = *(arg1 + 0x2d8)

if (rcx != 0)
    result = (**rcx)(rcx, 1)

*(arg1 + 0x2d8) = 0
return result
