// 函数: sub_142392550
// 地址: 0x142392550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x90) s> 0)
    int64_t rbx_1 = *(arg1 + 0x88)
    int32_t i_2 = *(arg1 + 0x90)
    uint64_t r14_1 = 0
    uint64_t var_18 = 0
    int32_t i_3 = i_2
    
    if (i_2 != 0)
        sub_1405a4be0(&var_18, i_2, 0)
        r14_1 = var_18
        uint64_t rcx_1 = r14_1
        int64_t rbx_2 = rbx_1 - r14_1
        int32_t i
        
        do
            *rcx_1 = *(rbx_2 + rcx_1)
            result = *(rbx_2 + rcx_1 + 8)
            *(rcx_1 + 8) = result
            
            if (result != 0)
                *(result + 0xc) += 1
            
            rcx_1 += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_2 = i_3
    
    uint64_t rsi_1 = r14_1
    int64_t rbp_3 = (sx.q(i_2) << 4) + r14_1
    
    if (r14_1 != rbp_3)
        do
            int64_t* rbx_3 = *(rsi_1 + 8)
            
            if (rbx_3 != 0)
                result = zx.q(rbx_3[1].d)
                
                if (result.d != 0)
                    int32_t rax_1 = result.d + 1
                    rbx_3[1].d = rax_1
                    void* rcx_2 = *rsi_1
                    
                    if (rcx_2 != 0)
                        *(rcx_2 + 0x60) += 1
                        rax_1 = rbx_3[1].d
                    
                    result = zx.q(rax_1 - 1)
                    rbx_3[1].d = result.d
                    
                    if (rax_1 == 1)
                        result = (**rbx_3)(rbx_3)
                        int32_t temp4_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            result = (*(*rbx_3 + 8))(rbx_3, 1)
            
            rsi_1 += 0x10
        while (rsi_1 != rbp_3)
    
    if (i_2 != 0)
        int64_t* rbx_4 = r14_1 + 8
        int32_t i_1
        
        do
            int64_t* rcx_5 = *rbx_4
            
            if (rcx_5 != 0)
                int32_t temp2_1 = *(rcx_5 + 0xc)
                *(rcx_5 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rcx_5 + 8))(rcx_5, 1)
            
            rbx_4 = &rbx_4[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
