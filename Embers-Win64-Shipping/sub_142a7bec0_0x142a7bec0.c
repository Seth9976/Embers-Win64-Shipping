// 函数: sub_142a7bec0
// 地址: 0x142a7bec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg5 s<= 0)
    if (arg2 s> arg3 || arg2 s< 0 || arg3 s< 0)
        *arg5 = 1
    
    int64_t rax_1 = *(arg1 + 0x30)
    
    if (arg2 s> rax_1 || arg3 s> rax_1)
        *arg5 = 1
    
    *(arg1 + 0x98) = -1
    *(arg1 + 0x110) = 0x2710
    *(arg1 + 0x88) = 0
    *(arg1 + 0x90) = 0
    *(arg1 + 0xa0) = 0
    *(arg1 + 0x82) = 0
    *(arg1 + 0xa8) = 0
    *(arg1 + 0x10c) = 0
    
    if (arg4 == -1)
        int64_t rax_2 = *(arg1 + 0x30)
        *(arg1 + 0x48) = rax_2
        *(arg1 + 0x78) = rax_2
        *(arg1 + 0x58) = rax_2
        *(arg1 + 0x68) = rax_2
        *(arg1 + 0x40) = 0
        *(arg1 + 0x70) = 0
        *(arg1 + 0x50) = 0
        *(arg1 + 0x60) = 0
    
    *(arg1 + 0x40) = arg2
    *(arg1 + 0x48) = arg3
    *(arg1 + 0x70) = arg2
    *(arg1 + 0x78) = arg3
    
    if (arg4 != -1)
        if (arg4 s< arg2 || arg4 s> arg3)
            *arg5 = 8
        
        *(arg1 + 0x90) = arg4
    
    if (*(arg1 + 0x80) == 0)
        *(arg1 + 0x60) = arg2
        *(arg1 + 0x68) = arg3
    
    if (*(arg1 + 0x81) != 0)
        *(arg1 + 0x50) = arg2
        *(arg1 + 0x58) = arg3

return arg1
