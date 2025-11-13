// 函数: sub_1405c22d0
// 地址: 0x1405c22d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x48]
int64_t r12

if (result == 0)
    r12 = 0
else
    r12 = *(result + 0xb8)

if ((arg1[0x5c].b & 4) == 0)
    int64_t rax_1
    
    if (*data_143cd5f28 != 0)
        rax_1 = 0x440
    
    if (*data_143cd5f28 == 0 || (arg1[1].b & 0x30) != 0)
        rax_1 = 0x270
    
    int64_t** rsi_1 = *(arg1 + rax_1)
    int64_t rbp_1 = 0
    result = &rsi_1[sx.q(*(arg1 + rax_1 + 8))]
    uint64_t r14_2 = sx.q(*(arg1 + rax_1 + 8)) << 3 u>> 3
    
    if (rsi_1 u> result)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t* rdi_1 = *rsi_1
            
            if (rdi_1 != 0 && rdi_1[5].b != 0)
                arg1[0x49]
                sub_1405c5fa0(rdi_1, arg2)
                sub_1405c9740(rdi_1, r12)
                int32_t var_64_1 = 0
                void var_50
                
                if (&var_50 != &rdi_1[7])
                    uint128_t zmm0_1 = *(rdi_1 + 0x38)
                    *(rdi_1 + 0x38) = zx.o(0)
                    int64_t* rcx_2 = _mm_bsrli_si128(zmm0_1, 8).q
                    
                    if (rcx_2 != 0)
                        int32_t temp0_2 = *(rcx_2 + 0xc)
                        *(rcx_2 + 0xc) -= 1
                        
                        if (temp0_2 == 1)
                            (*(*rcx_2 + 8))(rcx_2, 1)
                
                result = 0xffffffff.q
                rdi_1[9] = result
                rdi_1[0xa].d = 0
                *(rdi_1 + 0x54) = 0x780
                rdi_1[0xb].d = 0x438
                *(rdi_1 + 0x5c) = 6
            
            rsi_1 = &rsi_1[1]
            rbp_1 += 1
        while (rbp_1 != r14_2)

return result
