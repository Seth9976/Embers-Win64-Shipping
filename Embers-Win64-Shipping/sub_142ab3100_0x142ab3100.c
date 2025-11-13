// 函数: sub_142ab3100
// 地址: 0x142ab3100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3

if (arg2 != 0)
    int32_t rax_1 = *(arg1 + 0xc)
    
    if (rax_1 s> 0)
        rdi += rax_1
        
        if (arg4 != 0)
            *(arg1 + 0xc) = 0
    
    sub_142ab4c80(arg1, rdi + 1)
    
    if (*(arg1 + 0x40) == 0)
        *(arg1 + 0x30) = (*(arg1 + 0x30) & 0xfffffffffffffff0) | sx.q(arg2)
    else
        sub_142ab3600(arg1, 1)
        **(arg1 + 0x30) = arg2
    
    if (arg4 != 0)
        *(arg1 + 0xc) += rdi + 1
else if (arg4 != 0 && *(arg1 + 0x10) != 0)
    *(arg1 + 0xc) += arg3 + 1
