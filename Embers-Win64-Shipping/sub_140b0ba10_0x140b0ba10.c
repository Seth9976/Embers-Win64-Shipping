// 函数: sub_140b0ba10
// 地址: 0x140b0ba10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e75590

if (arg1[0x12] != 0)
    void*** rax_1 = j_sub_140a82f30(0x48)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        int16_t* rbp_1
        
        if (arg1[0x17].d == 0)
            rbp_1 = &data_142d40450
        else
            rbp_1 = arg1[0x16]
        
        *rdi_1 = &data_142e75798
        int64_t rcx = arg1[0x14]
        char r15_1 = arg1[0x18].b
        char r12_1 = arg1[0x15].b
        rdi_1[1] = arg1[0x12]
        rdi_1[2] = rcx
        rdi_1[6] = 0
        rdi_1[7] = 0
        
        if (rbp_1 != 0 && *rbp_1 != 0)
            int64_t rsi_1 = -1
            
            do
                rsi_1 += 1
            while (rbp_1[rsi_1] != 0)
            
            int32_t rdx_1 = 0
            
            if (rsi_1.d + 1 s> 0)
                sub_1405947f0(&rdi_1[6], rsi_1.d + 1)
                rdx_1 = rdi_1[7].d
            
            int32_t rax_3 = rdx_1 + rsi_1.d + 1
            rdi_1[7].d = rax_3
            
            if (rax_3 s> *(rdi_1 + 0x3c))
                sub_140594770(&rdi_1[6])
            
            UnDecorator::getReferenceType(rdi_1[6], rbp_1, (rsi_1.d + 1) * 2)
        
        rdi_1[8].b = r15_1
        *(rdi_1 + 0x41) = r12_1
    
    int64_t* rcx_4 = data_143db7ac8
    
    if (rcx_4 == 0)
        sub_140b36860(&rdi_1[1])
        
        if (rdi_1 != 0)
            (*rdi_1)[2](rdi_1, 1)
    else
        (*(*rcx_4 + 0x10))(rcx_4, rdi_1)
    
    arg1[0x12] = 0

int64_t rcx_7 = arg1[0x16]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*arg1 = &data_142d84578

if (arg1[0x15].b != 0)
    sub_140a74f90(arg1[0x12])
    arg1[0x12] = 0

return sub_140b4cb40(arg1) __tailcall
