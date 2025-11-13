// 函数: sub_1426ecbc0
// 地址: 0x1426ecbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t i_2 = sx.q(*(arg1 + 0xd0))

if (i_2.d s> 0)
    int64_t i_1 = i_2
    int64_t r15_1 = 0
    int64_t i
    
    do
        result = *(arg1 + 0xc8)
        int32_t j = 0
        int128_t var_48 = *(result + r15_1)
        int32_t zmm1 = (*(result + r15_1 + 0x10)).d
        
        if (*(arg1 + 0xe0) s> 0)
            int32_t rcx = zmm1
            int64_t* rsi_1 = nullptr
            
            do
                void* rbx_2 = *(rsi_1 + *(arg1 + 0xd8))
                result = *(rbx_2 + 0x10)
                
                if (var_48.q == result)
                    if (*(rbx_2 + 0x1c) == 0)
                    label_1426ecc79:
                        result = sub_140d3c6e0(rbx_2 + 0x30)
                        void* const* result_1 = result
                        
                        if (*(rbx_2 + 0x28) != 0)
                            int64_t* rcx_2 = *(rbx_2 + 0x20)
                            
                            if (rcx_2 != 0)
                                int64_t rdx_1 = *rcx_2
                                result = (*(rdx_1 + 0x28))(rcx_2, rdx_1)
                                
                                if (result.b != 0)
                                    int64_t* rcx_3
                                    
                                    if (*(rbx_2 + 0x28) == 0)
                                        rcx_3 = nullptr
                                    else
                                        rcx_3 = *(rbx_2 + 0x20)
                                    
                                    result = (*(*rcx_3 + 0x50))(rcx_3, result_1, &var_48)
                        
                        rcx = zmm1
                    else
                        result = zx.q(*(rbx_2 + 0x18))
                        
                        if (result.d != 0xffffffff && rcx != 0xffffffff
                                && (rcx == result.d || rcx == 0 || result.d == 0))
                            goto label_1426ecc79
                
                j += 1
                rsi_1 = &rsi_1[1]
            while (j s< *(arg1 + 0xe0))
        
        r15_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (i_2.d != 0)
        int32_t rax_1 = *(arg1 + 0xd0)
        
        if (rax_1 != i_2.d)
            int64_t rcx_4 = *(arg1 + 0xc8)
            memmove(rcx_4, rcx_4 + i_2 * 0x18, (rax_1 - i_2.d) * 0x18)
            rax_1 = *(arg1 + 0xd0)
        
        result = zx.q(rax_1 - i_2.d)
        *(arg1 + 0xd0) = result.d

return result
