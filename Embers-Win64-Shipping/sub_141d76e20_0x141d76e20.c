// 函数: sub_141d76e20
// 地址: 0x141d76e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0xc]
*(arg1 + 0x6c) = *arg2

if (rax != 0 && *(rax + 0x7c) == 1)
    arg1[0xd].d
    arg1[0xd].d += 1
    void*** rax_2 = j_sub_140a82f30(0x28)
    
    if (rax_2 != 0)
        rax_2[1].d = 1
        *rax_2 = &data_143234150
        *(rax_2 + 0xc) = 1
        rax_2[2] = &data_143233d78
        *(rax_2 + 0x18) = *(arg1 + 0x6c)
    
    uint128_t zmm0_1 = (&rax_2[2]).o
    uint128_t var_18 = zmm0_1
    void* rax_3 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    sub_141d76f30(arg1[0xc], &var_18)
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t rsi_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*rax_2)[1](rax_2, zx.q(rsi_1))

return sub_141d83b20(arg1) __tailcall
