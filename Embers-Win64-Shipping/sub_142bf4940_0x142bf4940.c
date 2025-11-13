// 函数: sub_142bf4940
// 地址: 0x142bf4940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 4) != 0)
    int64_t rax = *(arg1 + 0xb8)
    
    if (rax != 0)
        rax(*(arg1 + 0x30))
    
    if (arg2 == 0)
        *(arg1 + 0x140) = sub_142bf2fc0
        *(arg1 + 0x30) = 0
        *(arg1 + 0xb8) = 0
    else
        *(arg1 + 0x140) = arg2
        *(arg1 + 0x30) = arg3
        *(arg1 + 0xb8) = arg4
else if (arg4 != 0)
    arg4(arg3)
