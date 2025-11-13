// 函数: sub_142648f90
// 地址: 0x142648f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint128_t zmm6
uint128_t var_18 = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
uint32_t zmm8[0x4]
uint32_t var_38[0x4] = zmm8

while (true)
    zmm6 = arg1[0x194]
    int32_t rdx_1 = _mm_bsrli_si128(zmm6, 8).d
    uint128_t var_98_1 = zmm6
    int32_t r8_1
    void* r10_1
    
    if (rdx_1 s>= 0)
        r10_1 = zmm6.q
        r8_1 = *(r10_1 + 0x388)
    
    if (rdx_1 s>= 0 && rdx_1 s< r8_1)
        void* r9_1 = *(r10_1 + 0x380)
        float zmm5[0x4] = *arg1
        float zmm1[0x4] = zx.o(0)
        zmm7 = arg1[1]
        void* rax_5 = r10_1
        zmm8 = data_143f71490
        
        if (r9_1 != 0)
            rax_5 = r9_1
        
        void* rax_6 = rax_5 + sx.q(rdx_1) * 0x38
        float zmm2[0x4] = *(rax_6 + 4)
        float zmm3[0x4] = *(rax_6 + 0xc)
        float temp0_3[0x4] = _mm_unpacklo_ps(*rax_6, (*(rax_6 + 8)).q)
        uint128_t zmm0 = *(rax_6 + 0x14)
        float temp0_5[0x4] = _mm_unpacklo_ps(temp0_3, _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q)
        zmm2 = *(rax_6 + 0x10)
        float temp0_6[0x4] = _mm_sub_ps(temp0_5, zmm5)
        result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(
            _mm_add_ps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), 
                    _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q), 
                zmm7), 
            _mm_and_ps(temp0_6, zmm8), 1)))
        
        if (result.d == 0)
            arg1[0x194] = zmm6
            return result
        
        while (true)
            int32_t temp2_1 = rdx_1
            rdx_1 += 1
            var_98_1:8.d = rdx_1
            
            if (temp2_1 + 1 s< 0 || rdx_1 s>= r8_1)
                zmm6 = var_98_1
                goto label_14264910a
            
            void* rax_10 = r10_1
            
            if (r9_1 != 0)
                rax_10 = r9_1
            
            void* rax_11 = rax_10 + sx.q(rdx_1) * 0x38
            zmm2 = *(rax_11 + 4)
            zmm3 = *(rax_11 + 0xc)
            float temp0_14[0x4] = _mm_unpacklo_ps(*rax_11, (*(rax_11 + 8)).q)
            zmm0 = *(rax_11 + 0x14)
            float temp0_16[0x4] = _mm_unpacklo_ps(temp0_14, _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q)
            zmm2 = *(rax_11 + 0x10)
            float temp0_17[0x4] = _mm_sub_ps(temp0_16, zmm5)
            result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(
                _mm_add_ps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), 
                        _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q), 
                    zmm7), 
                _mm_and_ps(temp0_17, zmm8), 1)))
            
            if (result.d != 0)
                continue
            
            arg1[0x194] = var_98_1
            break
        
        return result
    
label_14264910a:
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
        void* rax_12 = arg1[0x192].q
        int32_t r10_2 = (rdx_2 - 1).d
        void* rcx_2 = &arg1[6]
        
        if (rax_12 != 0)
            rcx_2 = rax_12
        
        int64_t rax_14 = sx.q(r10_2) << 6
        arg1[2] = *(rcx_2 + rax_14)
        arg1[3] = *(rcx_2 + rax_14 + 0x10)
        arg1[4] = *(rcx_2 + rax_14 + 0x20)
        arg1[5] = *(rcx_2 + rax_14 + 0x30)
        int32_t rax_15 = arg1[0x193].d
        int32_t rcx_4 = rax_15 - r10_2
        
        if (rcx_4 != 1)
            void* rax_16 = arg1[0x192].q
            void* r9_2 = &arg1[6]
            
            if (rax_16 != 0)
                r9_2 = rax_16
            
            memmove((sx.q(r10_2) << 6) + r9_2, (rdx_2 << 6) + r9_2, (rcx_4 - 1) << 6)
            rax_15 = arg1[0x193].d
        
        arg1[0x193].d = rax_15 - 1
        result = sub_1409da9e0(&arg1[6])
    
    if (arg1[2].q == 0)
        arg1[0x194] = zmm6
        return result
    
    sub_1426625e0(arg1)
    result = arg1[2].q
    int32_t var_80_1 = 0
    arg1[0x194] = result.o
