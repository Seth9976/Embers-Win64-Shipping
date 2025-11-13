// 函数: sub_142ad1140
// 地址: 0x142ad1140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t result = (*(*arg2 + 0x10))(arg2)
*(arg1 + 0x10) = result
return result
