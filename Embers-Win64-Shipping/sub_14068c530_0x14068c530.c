// 函数: sub_14068c530
// 地址: 0x14068c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = 0
int64_t* rcx = *(arg2 + 0x38)

if (rcx != 0)
    *(arg1 + 0x38) = (**rcx)(rcx, arg1)

*(arg1 + 0x40) = *(arg2 + 0x40)
return arg1
