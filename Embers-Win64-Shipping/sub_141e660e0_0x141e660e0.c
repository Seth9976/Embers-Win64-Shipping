// 函数: sub_141e660e0
// 地址: 0x141e660e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint8_t result = (arg1[1].d u>> 4).b

if ((result & 1) == 0)
    void* rdi_1 = arg1[0x86]
    
    if (rdi_1 == 0)
        int64_t* rax_1 = sub_14246dc80()
        rdi_1 = rax_1[0x23]
        
        if (rdi_1 == 0)
            int64_t rdx_1 = *rax_1
            (*(rdx_1 + 0x390))(rax_1, rdx_1)
            rdi_1 = rax_1[0x23]
        
        arg1[0x86] = rdi_1
    
    *(arg1 + 0x2d1) = 0
    int64_t* rax_2
    rax_2.b = sub_140a744f0(&data_143db7b00, u"PakFile") != 0
    *(arg1 + 0x2d3) = rax_2.b
    *(arg1 + 0x2d4) = *(rdi_1 + 0x7b)
    *(arg1 + 0x2d2) = data_143de5426
    
    if (*(rdi_1 + 0x79) != 0)
        void*** rax_5 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_5 != 0)
            *rax_5 = &data_14324d000
            sub_140d3a3a0(&rax_5[1], arg1)
            rax_5[2] = sub_141e52c34
            rax_5[4] = sub_140a387b0()
            void** r8_1 = *rax_5
            r8_1[8](rax_5, &data_143e1d798, r8_1)
        else if (data_143e1d7a0 != 0)
            int64_t* rcx_3 = data_143e1d798
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x38))(rcx_3, 0)
                int64_t rcx_4 = data_143e1d798
                
                if (rcx_4 != 0)
                    data_143e1d798 = sub_140a84c80(rcx_4, 0, 0)
                
                data_143e1d7a0 = 0
        
        if (rax_5 != 0)
            (*rax_5)[7](rax_5, 0)
            int64_t rax_10 = sub_140a84c80(rax_5, 0, 0)
            
            if (rax_10 != 0)
                sub_140a74f90(rax_10)
    
    (*(*arg1 + 0x420))(arg1)
    int64_t var_18
    int64_t* rax_12 = sub_140d21e10(arg1, &var_18, 0)
    int16_t* const r8_2
    
    if (rax_12[1].d == 0)
        r8_2 = &data_142d40450
    else
        r8_2 = *rax_12
    
    void var_28
    sub_140a2e390(&var_28, u"%s.StreamableManager", r8_2)
    result = sub_142397c60(&arg1[0x2f], &var_28)
    int64_t rcx_12 = var_18
    
    if (rcx_12 != 0)
        return sub_140a74f90(rcx_12)

return result
