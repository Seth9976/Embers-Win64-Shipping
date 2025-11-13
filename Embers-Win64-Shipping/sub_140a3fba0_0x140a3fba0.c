// 函数: sub_140a3fba0
// 地址: 0x140a3fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xb8)

if (rcx == 0)
    return arg1

*(arg1 + 0xb8) = 0
jump(**rcx)
