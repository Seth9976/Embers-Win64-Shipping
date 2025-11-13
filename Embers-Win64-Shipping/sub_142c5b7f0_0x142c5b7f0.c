// 函数: sub_142c5b7f0
// 地址: 0x142c5b7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4ab0) == 0)
    int64_t rax_1 = data_143ccb8b8(arg2, 0x80)
    
    if (rax_1 == 0)
        return 0x1b
    
    *(arg1 + 0x588) = arg2
    *(arg1 + 0x4ab0) = rax_1
    *(arg1 + 0x4ab8) = 1

return 0
