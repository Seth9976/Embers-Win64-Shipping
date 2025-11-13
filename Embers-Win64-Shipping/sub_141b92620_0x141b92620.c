// 函数: sub_141b92620
// 地址: 0x141b92620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_14069a820(arg1 + 0x90, arg2) == 0)
    int64_t r12
    
    if (*(arg1 + 0xa0) == 0)
        r12.b = 0
    else
        int64_t* rcx_1 = *(arg1 + 0x98)
        
        if (rcx_1 == 0)
            r12.b = 0
        else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
            r12.b = 0
        else
            r12.b = 1
    
    int64_t rbx
    
    if (*(arg2 + 0x10) == 0)
        rbx.b = 0
    else
        int64_t* rcx_2 = *(arg2 + 8)
        
        if (rcx_2 == 0)
            rbx.b = 0
        else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
            rbx.b = 0
        else
            rbx.b = 1
    
    *(arg1 + 0x90) = *arg2
    *(arg1 + 0x91) = arg2[1]
    sub_140692f90(arg1 + 0x98, &arg2[8])
    rbx.b ^= r12.b
    rbx.b <<= 2
    sub_140e19e70(arg1, zx.q((rbx + 1).d))

return arg1
