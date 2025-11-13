// 函数: sub_14121c840
// 地址: 0x14121c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint128_t zmm6
uint128_t var_18 = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
uint32_t zmm8[0x4]
uint32_t var_38[0x4] = zmm8

while (true)
    zmm6 = arg1[7]
    int32_t rdx_1 = _mm_bsrli_si128(zmm6, 8).d
    uint128_t var_98_1 = zmm6
    int32_t r8_1
    void* r10_1
    
    if (rdx_1 s>= 0)
        r10_1 = zmm6.q
        r8_1 = *(r10_1 + 0x4008)
    
    if (rdx_1 s>= 0 && rdx_1 s< r8_1)
        void* r9_1 = *(r10_1 + 0x4000)
        int64_t rcx_1 = sx.q(rdx_1) << 6
        float zmm5[0x4] = *arg1
        float zmm1[0x4] = zx.o(0)
        zmm7 = arg1[1]
        void* rax_4 = r10_1
        zmm8 = data_143e83840
        
        if (r9_1 != 0)
            rax_4 = r9_1
        
        float zmm2[0x4] = *(rax_4 + rcx_1 + 0x14)
        float zmm3[0x4] = *(rax_4 + rcx_1 + 0x1c)
        float temp0_2[0x4] = _mm_unpacklo_ps(*(rax_4 + rcx_1 + 0x10), (*(rax_4 + rcx_1 + 0x18)).q)
        uint128_t zmm0 = *(rax_4 + rcx_1 + 0x24)
        float temp0_4[0x4] = _mm_unpacklo_ps(temp0_2, _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q)
        zmm2 = *(rax_4 + rcx_1 + 0x20)
        float temp0_5[0x4] = _mm_sub_ps(temp0_4, zmm5)
        result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(
            _mm_add_ps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), 
                    _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q), 
                zmm7), 
            _mm_and_ps(temp0_5, zmm8), 1)))
        
        if (result.d == 0)
            arg1[7] = zmm6
            return result
        
        while (true)
            int32_t temp2_1 = rdx_1
            rdx_1 += 1
            var_98_1:8.d = rdx_1
            
            if (temp2_1 + 1 s< 0 || rdx_1 s>= r8_1)
                zmm6 = var_98_1
                goto label_14121c9bc
            
            int64_t rcx_3 = sx.q(rdx_1) << 6
            void* rax_7 = r10_1
            
            if (r9_1 != 0)
                rax_7 = r9_1
            
            zmm2 = *(rax_7 + rcx_3 + 0x14)
            zmm3 = *(rax_7 + rcx_3 + 0x1c)
            float temp0_13[0x4] =
                _mm_unpacklo_ps(*(rax_7 + rcx_3 + 0x10), (*(rax_7 + rcx_3 + 0x18)).q)
            zmm0 = *(rax_7 + rcx_3 + 0x24)
            float temp0_15[0x4] = _mm_unpacklo_ps(temp0_13, _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q)
            zmm2 = *(rax_7 + rcx_3 + 0x20)
            float temp0_16[0x4] = _mm_sub_ps(temp0_15, zmm5)
            result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(
                _mm_add_ps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), 
                        _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q), 
                    zmm7), 
                _mm_and_ps(temp0_16, zmm8), 1)))
            
            if (result.d != 0)
                continue
            
            arg1[7] = var_98_1
            break
        
        return result
    
label_14121c9bc:
    int64_t rcx_4 = sx.q(*(arg1 + 0x68))
    
    if (rcx_4.d == 0)
        data_142d3f660
        arg1[2] = 0.o
        __builtin_memcpy(&arg1[3], 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x20)
        uint128_t var_48
        arg1[5] = var_48
    else
        int64_t r9_2 = arg1[6].q
        int32_t r10_2 = (rcx_4 - 1).d
        int64_t rax_9 = sx.q(r10_2) << 6
        arg1[2] = *(rax_9 + r9_2)
        arg1[3] = *(rax_9 + r9_2 + 0x10)
        arg1[4] = *(rax_9 + r9_2 + 0x20)
        arg1[5] = *(rax_9 + r9_2 + 0x30)
        int32_t rdx_2 = *(arg1 + 0x68)
        int32_t rax_11 = rdx_2 - r10_2
        
        if (rax_11 != 1)
            memmove((sx.q(r10_2) << 6) + r9_2, (rcx_4 << 6) + r9_2, (rax_11 - 1) << 6)
            rdx_2 = *(arg1 + 0x68)
        
        *(arg1 + 0x68) = rdx_2 - 1
        result, zmm6 = sub_141238da0(&arg1[6])
    
    if (arg1[2].q == 0)
        arg1[7] = zmm6
        return result
    
    sub_14122de70(arg1)
    result = arg1[2].q
    int32_t var_80_1 = 0
    arg1[7] = result.o
