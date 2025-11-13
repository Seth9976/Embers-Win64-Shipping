// 函数: sub_141a06610
// 地址: 0x141a06610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2 - 1)

if (result.d u<= 0xfffe)
    int32_t r15_1 = int.d(_mm_sqrt_ss(0, _mm_cvtepi32_ps(zx.o(arg2)).d))
    uint64_t r12_1 = zx.q(r15_1.w - 1)
    uint32_t rsi_2 = r12_1.d * r12_1.d * 6
    void*** rax_3 = j_sub_140a82f30(0x20)
    int32_t rdi_1 = 0
    
    if (rax_3 == 0)
        rax_3 = nullptr
    else
        rax_3[1].d = 1
        *rax_3 = &data_142df7bd8
        *(rax_3 + 0xc) = 1
        rax_3[2] = 0
        rax_3[3] = 0
    
    uint128_t zmm0_1 = (&rax_3[2]).o
    uint128_t var_58 = zmm0_1
    void*** rbx_1 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1 = rax_3
    
    if (arg1 + 0x58 != &var_58)
        *(arg1 + 0x58) = var_58.q
        var_58.q = 0
        sub_1405aeff0(arg1 + 0x60, &var_58:8)
        rbx_1 = rax_3
    
    void* rcx_1 = var_58:8.q
    
    if (rcx_1 != 0)
        int32_t rax_5 = *(rcx_1 + 8)
        *(rcx_1 + 8) -= 1
        
        if (rax_5 == 1)
            int64_t* rbx_2 = var_58:8.q
            (**rbx_2)(rbx_2)
            int32_t rax_7 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_7 == 1)
                int64_t* rcx_3 = var_58:8.q
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        rbx_1 = rax_3
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rbp_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*rbx_1)[1](rbx_1, zx.q(rbp_1))
    
    int64_t* rcx_6 = *(arg1 + 0x58)
    int32_t rax_12 = rcx_6[1].d
    
    if (rsi_2 s> rax_12)
        rcx_6[1].d = rsi_2
        
        if (rsi_2 s> *(rcx_6 + 0xc))
            sub_140594770(rcx_6)
    else if (rsi_2 s< rax_12 && rsi_2 != rax_12)
        rcx_6[1].d = rsi_2
    
    result = *(arg1 + 0x58)
    int32_t r8_1 = 0
    int64_t rdx_4 = *result
    
    if (r12_1.d != 0)
        uint64_t i_1 = r12_1
        uint64_t i
        
        do
            int64_t rcx_7 = sx.q(r8_1)
            uint64_t j_1 = r12_1
            uint64_t j
            
            do
                *(rdx_4 + (rcx_7 << 1)) = rdi_1.w
                *(rdx_4 + (rcx_7 << 1) + 2) = r15_1.w + rdi_1.w
                rcx_7 += 6
                result = zx.q(r15_1 + 1 + rdi_1)
                r8_1 += 6
                *(rdx_4 + (rcx_7 << 1) - 8) = result.w
                *(rdx_4 + (rcx_7 << 1) - 6) = rdi_1.w
                rdi_1.w += 1
                *(rdx_4 + (rcx_7 << 1) - 4) = result.w
                *(rdx_4 + (rcx_7 << 1) - 2) = rdi_1.w
                j = j_1
                j_1 -= 1
            while (j != 1)
            rdi_1.w += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
