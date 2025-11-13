// 函数: sub_141ff71c0
// 地址: 0x141ff71c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    sub_14095cd40(arg1 + 8, *(arg2 + 0x10))
    int32_t i = 0
    
    if (*(arg2 + 0x10) s> 0)
        int64_t* r14_1 = nullptr
        
        do
            int64_t* rcx_1 = *(r14_1 + *(arg2 + 8))
            
            if (rcx_1 != 0)
                int64_t rax_3 = (*(*rcx_1 + 0x10))(rcx_1)
                void*** rax_4 = j_sub_140a82f30(0x18)
                
                if (rax_4 == 0)
                    rax_4 = nullptr
                else
                    rax_4[1].d = 1
                    *(rax_4 + 0xc) = 1
                    *rax_4 = &data_142d42ea8
                    rax_4[2] = rax_3
                
                int64_t rdi_2 = sx.q(*(arg1 + 0x10))
                int32_t rax_5 = (rdi_2 + 1).d
                *(arg1 + 0x10) = rax_5
                
                if (rax_5 s> *(arg1 + 0x14))
                    sub_1405a4f90(arg1 + 8)
                
                int64_t* rcx_5 = (rdi_2 << 4) + *(arg1 + 8)
                *rcx_5 = rax_3
                rcx_5[1] = rax_4
                int64_t var_30_2 = 0
                int64_t var_38_2 = 0
            
            i += 1
            r14_1 = &r14_1[2]
        while (i s< *(arg2 + 0x10))
    
    sub_14095cd40(arg1 + 0x18, *(arg2 + 0x20))
    int32_t i_1 = 0
    
    if (*(arg2 + 0x20) s> 0)
        int64_t* r14_2 = nullptr
        
        do
            int64_t* rcx_7 = *(r14_2 + *(arg2 + 0x18))
            
            if (rcx_7 != 0)
                int64_t rax_10 = (*(*rcx_7 + 0x10))(rcx_7)
                void*** rax_11 = j_sub_140a82f30(0x18)
                
                if (rax_11 == 0)
                    rax_11 = nullptr
                else
                    rax_11[1].d = 1
                    *(rax_11 + 0xc) = 1
                    *rax_11 = &data_142d42ea8
                    rax_11[2] = rax_10
                
                int64_t rdi_4 = sx.q(*(arg1 + 0x20))
                int32_t rax_12 = (rdi_4 + 1).d
                *(arg1 + 0x20) = rax_12
                
                if (rax_12 s> *(arg1 + 0x24))
                    sub_1405a4f90(arg1 + 0x18)
                
                int64_t* rcx_11 = (rdi_4 << 4) + *(arg1 + 0x18)
                *rcx_11 = rax_10
                rcx_11[1] = rax_11
                int64_t var_30_4 = 0
                int64_t var_38_4 = 0
            
            i_1 += 1
            r14_2 = &r14_2[2]
        while (i_1 s< *(arg2 + 0x20))
    
    *(arg1 + 0x28) ^= (*(arg1 + 0x28) ^ *(arg2 + 0x28)) & 1
    char rcx_12 = ((*(arg2 + 0x28) ^ *(arg1 + 0x28)) & 2) ^ *(arg1 + 0x28)
    *(arg1 + 0x28) = rcx_12
    char rdx_4 = ((rcx_12 ^ *(arg2 + 0x28)) & 4) ^ rcx_12
    *(arg1 + 0x28) = rdx_4
    *(arg1 + 0x2c) = *(arg2 + 0x2c)
    *(arg1 + 0x34) = *(arg2 + 0x34)
    *(arg1 + 0x28) = ((rdx_4 ^ *(arg2 + 0x28)) & 8) ^ rdx_4
    *(arg1 + 0x29) = *(arg2 + 0x29)

return arg1
