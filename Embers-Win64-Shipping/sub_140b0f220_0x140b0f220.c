// 函数: sub_140b0f220
// 地址: 0x140b0f220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x90) != 0)
    void*** rax_1 = j_sub_140a82f30(0x48)
    void*** rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        int16_t* rbp_1
        
        if (*(arg1 + 0xb8) == 0)
            rbp_1 = &data_142d40450
        else
            rbp_1 = *(arg1 + 0xb0)
        
        *rbx_1 = &data_142e75798
        int64_t rcx = *(arg1 + 0xa0)
        char r12_1 = *(arg1 + 0xc0)
        char r13_1 = *(arg1 + 0xa8)
        rbx_1[1] = *(arg1 + 0x90)
        rbx_1[2] = rcx
        rbx_1[6] = 0
        rbx_1[7] = 0
        
        if (rbp_1 != 0 && *rbp_1 != 0)
            int64_t rsi_1 = -1
            
            do
                rsi_1 += 1
            while (rbp_1[rsi_1] != 0)
            
            int32_t rdx_1 = 0
            
            if (rsi_1.d + 1 s> 0)
                sub_1405947f0(&rbx_1[6], rsi_1.d + 1)
                rdx_1 = rbx_1[7].d
            
            int32_t rax_3 = rdx_1 + rsi_1.d + 1
            rbx_1[7].d = rax_3
            
            if (rax_3 s> *(rbx_1 + 0x3c))
                sub_140594770(&rbx_1[6])
            
            UnDecorator::getReferenceType(rbx_1[6], rbp_1, (rsi_1.d + 1) * 2)
        
        rbx_1[8].b = r12_1
        *(rbx_1 + 0x41) = r13_1
    
    int64_t* rcx_4 = data_143db7ac8
    
    if (rcx_4 == 0)
        sub_140b36860(&rbx_1[1])
        
        if (rbx_1 != 0)
            (*rbx_1)[2](rbx_1, 1)
    else
        (*(*rcx_4 + 0x10))(rcx_4, rbx_1)
    
    *(arg1 + 0x90) = 0

return not.b(*(arg1 + 0x29)) & 1
