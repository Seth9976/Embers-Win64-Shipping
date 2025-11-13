// 函数: sub_140f8a1f0
// 地址: 0x140f8a1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_14069a820(&arg1[0xb2], arg2) == 0)
    int64_t r12
    
    if (arg1[0xb4].d == 0)
        r12.b = 0
    else
        int64_t* rcx_1 = arg1[0xb3]
        
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
    
    arg1[0xb2].b = *arg2
    *(arg1 + 0x591) = arg2[1]
    sub_140692f90(&arg1[0xb3], &arg2[8])
    rbx.b ^= r12.b
    rbx.b <<= 2
    sub_140e19ef0(arg1, (rbx + 1).b)

return sub_140e1a0f0(arg1) __tailcall
