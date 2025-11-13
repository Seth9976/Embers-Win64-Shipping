// 函数: sub_142bf4790
// 地址: 0x142bf4790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 4) != 0)
    int64_t rax = *(arg1 + 0xe8)
    
    if (rax != 0)
        rax(*(arg1 + 0x60))
    
    if (arg2 == 0)
        *(arg1 + 0x170) = sub_142bf3480
        *(arg1 + 0x60) = 0
        *(arg1 + 0xe8) = 0
    else
        *(arg1 + 0x170) = arg2
        *(arg1 + 0x60) = arg3
        *(arg1 + 0xe8) = arg4
else if (arg4 != 0)
    arg4(arg3)
