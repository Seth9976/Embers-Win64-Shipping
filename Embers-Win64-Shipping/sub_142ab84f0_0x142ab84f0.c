// 函数: sub_142ab84f0
// 地址: 0x142ab84f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *arg1

if (rcx == 1 || rcx == 2)
    int64_t* rcx_2 = *(arg1 + 8)
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

*arg1 = 2
*(arg1 + 8) = arg2
