// 函数: sub_141c49140
// 地址: 0x141c49140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x1e0) == 0)
    int32_t i = 0
    
    if (*(arg1 + 0xb0) s> 0)
        void* rdi_1 = nullptr
        
        do
            int64_t rbp_1 = *(arg1 + 0xa8)
            void* rbx_1 = rdi_1 + rbp_1
            int32_t r14_2 = *(arg1 + 0x40) * *(arg1 + 0x84)
            *(rbx_1 + 0x18) = 0
            
            if (*(rbx_1 + 0x1c) s<= 0xffffffff)
                sub_140775b10(rbx_1 + 0x10, 0)
            
            int64_t r15_1 = sx.q(*(rbx_1 + 0x18))
            int32_t rax = r15_1.d + r14_2
            *(rbx_1 + 0x18) = rax
            
            if (rax s> *(rbx_1 + 0x1c))
                sub_140775270(rbx_1 + 0x10)
            
            memset(*(rbx_1 + 0x10) + (r15_1 << 2), 0, sx.q(r14_2) << 2)
            
            if (*(rdi_1 + rbp_1 + 0x30) == 2)
                int32_t rax_2 = *(rdi_1 + rbp_1 + 0x2c)
                void* rbx_2 = rdi_1 + rbp_1
                *(rbx_2 + 0x28) = 0
                
                if (rax_2 s< 0 && rax_2 != 0)
                    sub_14085a880(rbx_2 + 0x20, 0)
                
                int32_t r15_2 = r14_2 * 2
                int64_t r14_3 = sx.q(*(rbx_2 + 0x28))
                int32_t rax_3 = r14_3.d + r15_2
                *(rbx_2 + 0x28) = rax_3
                
                if (rax_3 s> *(rbx_2 + 0x2c))
                    sub_14085a250(rbx_2 + 0x20)
                
                memset(r14_3 + *(rbx_2 + 0x20), 0, sx.q(r15_2))
            
            i += 1
            *(rdi_1 + rbp_1 + 0x34)
            *(rdi_1 + rbp_1 + 0x34) = 0
            rdi_1 += 0x38
        while (i s< *(arg1 + 0xb0))
    
    int64_t* rcx_7 = *(arg1 + 0x100)
    (*(*rcx_7 + 0x10))(rcx_7)
    int128_t zmm6
    zmm6.d = float.s(zx.q(*(arg1 + 0x84)))
    zmm6.d = zmm6.d f/ float.s(zx.q(*(arg1 + 0x98)))
    result = j_sub_140a82f30(0x60)
    int64_t* result_1 = result
    
    if (result == 0)
        result_1 = nullptr
    else
        void** const var_58 = &data_142da2668
        void* var_50_1 = arg1
        *result_1 = &data_143205dc8
        result_1[2] = sub_141c483c0
        result_1[4] = 0
        
        if (result_1[2] != 0)
            void** const* rcx_8 = &var_58
            (**rcx_8)(rcx_8)
        
        *(result_1 + 0x54) &= 0xfe
        result_1[0xa].d = zmm6.d
        result_1[0xb] = 0
        result = sub_140a6e140(result_1, u"AudioMixerNullCallbackThread", 0, 6, -1, 0)
        int64_t* rcx_10 = result_1[0xb]
        
        if (rcx_10 != result)
            result_1[0xb] = result
            
            if (rcx_10 != 0)
                (*(*rcx_10 + 0x20))(rcx_10, 1)
        
        void** const* rcx_11 = &var_58
        result = (*rcx_11)[2](rcx_11)
    
    int64_t* rcx_12 = *(arg1 + 0x1e0)
    
    if (rcx_12 != result_1)
        *(arg1 + 0x1e0) = result_1
        
        if (rcx_12 != 0)
            result = (*(*rcx_12 + 0x28))(rcx_12, 1)
    
    *(arg1 + 0x1d8) = 1

return result
