// 函数: sub_14228fab0
// 地址: 0x14228fab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint128_t zmm6
uint128_t var_18 = zmm6
uint32_t zmm7[0x4]
uint32_t var_28[0x4] = zmm7
uint32_t zmm8[0x4]
uint32_t var_38[0x4] = zmm8

while (true)
    zmm6 = arg1[0x194]
    int32_t rdx_1 = _mm_bsrli_si128(zmm6, 8).d
    uint128_t var_98_1 = zmm6
    int64_t* r8_1
    int32_t r9_1
    
    if (rdx_1 s>= 0)
        r8_1 = zmm6.q
        r9_1 = r8_1[1].d
    
    if (rdx_1 s>= 0 && rdx_1 s< r9_1)
        int64_t r8_2 = *r8_1
        int128_t* rcx = sx.q(rdx_1) * 0xb0
        float zmm1[0x4] = zx.o(0)
        float zmm2[0x4] = *(rcx + r8_2 + 4)
        float zmm4[0x4] = *arg1
        zmm8 = data_143f52920
        float zmm5[0x4] = arg1[1]
        zmm7 = data_143f52900
        float temp0_2[0x4] = _mm_unpacklo_ps(*(rcx + r8_2), (*(rcx + r8_2 + 8)).q)
        uint128_t zmm0 = *(rcx + r8_2 + 0xc)
        zmm0 = _mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm8)
        float temp0_6[0x4] = _mm_unpacklo_ps(temp0_2, _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q)
        result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(_mm_add_ps(zmm0, zmm5), 
            _mm_and_ps(_mm_sub_ps(temp0_6, zmm4), zmm7), 1)))
        
        if (result.d == 0)
            arg1[0x194] = zmm6
            return result
        
        while (true)
            int32_t temp1_1 = rdx_1
            rdx_1 += 1
            var_98_1:8.d = rdx_1
            
            if (temp1_1 + 1 s< 0 || rdx_1 s>= r9_1)
                zmm6 = var_98_1
                goto label_14228fc0a
            
            float (* rcx_1)[0x4] = sx.q(rdx_1) * 0xb0
            zmm2 = *(rcx_1 + r8_2 + 4)
            float temp0_12[0x4] = _mm_unpacklo_ps(*(rcx_1 + r8_2), (*(rcx_1 + r8_2 + 8)).q)
            zmm0 = *(rcx_1 + r8_2 + 0xc)
            zmm0 = _mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm8)
            float temp0_16[0x4] = _mm_unpacklo_ps(temp0_12, _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q)
            result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(_mm_add_ps(zmm0, zmm5), 
                _mm_and_ps(_mm_sub_ps(temp0_16, zmm4), zmm7), 1)))
            
            if (result.d != 0)
                continue
            
            arg1[0x194] = var_98_1
            break
        
        return result
    
label_14228fc0a:
    int64_t rdx_2 = sx.q(arg1[0x193].d)
    
    if (rdx_2.d == 0)
        data_142d3f660
        arg1[2] = 0.o
        __builtin_memcpy(&arg1[3], 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x20)
        uint128_t var_48
        arg1[5] = var_48
    else
        void* rax_2 = arg1[0x192].q
        int32_t r10_1 = (rdx_2 - 1).d
        void* rcx_2 = &arg1[6]
        
        if (rax_2 != 0)
            rcx_2 = rax_2
        
        int64_t rax_4 = sx.q(r10_1) << 6
        arg1[2] = *(rcx_2 + rax_4)
        arg1[3] = *(rcx_2 + rax_4 + 0x10)
        arg1[4] = *(rcx_2 + rax_4 + 0x20)
        arg1[5] = *(rcx_2 + rax_4 + 0x30)
        int32_t rax_5 = arg1[0x193].d
        int32_t rcx_4 = rax_5 - r10_1
        
        if (rcx_4 != 1)
            void* rax_6 = arg1[0x192].q
            void* r9_2 = &arg1[6]
            
            if (rax_6 != 0)
                r9_2 = rax_6
            
            memmove((sx.q(r10_1) << 6) + r9_2, (rdx_2 << 6) + r9_2, (rcx_4 - 1) << 6)
            rax_5 = arg1[0x193].d
        
        arg1[0x193].d = rax_5 - 1
        result = sub_1409da9e0(&arg1[6])
    
    if (arg1[2].q == 0)
        arg1[0x194] = zmm6
        return result
    
    sub_1422a7cd0(arg1)
    result = arg1[2].q
    int32_t var_80_1 = 0
    arg1[0x194] = result.o
