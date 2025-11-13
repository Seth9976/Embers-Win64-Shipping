// 函数: sub_140945db0
// 地址: 0x140945db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)

if (rcx == 0)
    return arg1

*(arg1 + 8) = 0
jump(**rcx)
