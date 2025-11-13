// 函数: sub_142a4ab40
// 地址: 0x142a4ab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 4) != 0)
    void* rdx_1 = *(arg1 + 0x18)
    int32_t rax_1 = *(rdx_1 - 4)
    *(rdx_1 - 4) -= 1
    
    if (rax_1 == 1)
        sub_142a7dcd0(*(arg1 + 0x18) - 4)

*(arg1 + 8) = 1
*(arg1 + 0x18) = 0
*(arg1 + 0x10) = 0
return 0
