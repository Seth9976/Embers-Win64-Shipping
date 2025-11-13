// 函数: sub_141b91c60
// 地址: 0x141b91c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140f499c0(arg1 + 0x70, arg2) == 0)
    int64_t r12
    
    if (*(arg1 + 0x88) == 0)
        r12.b = 0
    else
        int64_t* rcx_1 = *(arg1 + 0x80)
        
        if (rcx_1 == 0)
            r12.b = 0
        else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
            r12.b = 0
        else
            r12.b = 1
    
    int64_t rbx
    
    if (arg2[6] == 0)
        rbx.b = 0
    else
        int64_t* rcx_2 = *(arg2 + 0x10)
        
        if (rcx_2 == 0)
            rbx.b = 0
        else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
            rbx.b = 0
        else
            rbx.b = 1
    
    *(arg1 + 0x70) = *arg2
    *(arg1 + 0x78) = arg2[2].b
    sub_140692f90(arg1 + 0x80, &arg2[4])
    rbx.b ^= r12.b
    rbx.b <<= 2
    sub_140e19e70(arg1, zx.q((rbx + 1).d))

return arg1
