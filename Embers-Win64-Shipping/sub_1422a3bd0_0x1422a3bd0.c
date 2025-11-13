// 函数: sub_1422a3bd0
// 地址: 0x1422a3bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = arg3
int32_t rdx = *(arg2 + 0x34)

if (rdx != 0)
    sub_1422a3c90(arg1, rdx, arg3)
    memcpy(*(arg1 + 0x28), *(arg2 + 0x28), *(arg1 + 0x34) * *(arg1 + 0x30))
