// 函数: sub_141df5a00
// 地址: 0x141df5a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = 0

if (*(arg1 + 0x3c) != 0)
    sub_141e0bdd0(arg1 + 0x20, 0)

int64_t* rcx_1 = *(arg1 + 0x50)

if (rcx_1 != 0)
    *(arg1 + 0x50) = 0
    (**rcx_1)(rcx_1, 1)

*(arg1 + 0x58) = 0
