// 函数: sub_1420d6720
// 地址: 0x1420d6720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
zmm0.d = (*(arg2 + 0x64)).d f+ *(arg1 + 0xc)
*(arg1 + 0xc) = zmm0.d
int64_t r15
r15.b = zmm0.d f>= *(arg1 + 8)

if (sub_140d3e110(arg1 + 0x28) != 0 && *(arg1 + 0x10) != 0)
    zmm0.d = (*(arg1 + 0xc)).d f/ *(arg1 + 8)
    char rax_1 = *(arg1 + 0x69)
    uint32_t zmm12[0x4]
    
    if (*(arg1 + 0x68) != 0)
        zmm12 = zmm0
        
        if (rax_1 == 0)
            zmm12[0] = zmm12[0] f* zmm0.d
        else
            zmm12[0] = zmm12[0] f+ zmm0.d
            
            if (zmm0.d f>= 0.5f)
                zmm12[0] = zmm12[0] f- 1f
                zmm0.d = 1f f- zmm12[0]
                zmm12 = 0x3f800000
                zmm0.d = zmm0.d f* zmm0.d
                zmm12[0] = 1f f- zmm0.d
                zmm12[0] = zmm12[0] f+ 1f
                zmm12[0] = zmm12[0] f* 0.5f
            else
                zmm12[0] = zmm12[0] f* zmm12[0]
                zmm12[0] = zmm12[0] f* 0.5f
    else if (rax_1 == 0)
        zmm12 = zmm0
    else
        zmm12 = _mm_sqrt_ss(0, zmm0.d)
    
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    int32_t var_a8
    uint64_t var_98
    float var_78[0x4]
    uint128_t zmm1
    float zmm2[0x4]
    uint128_t zmm3
    uint128_t zmm4
    
    if (*(arg1 + 0x4c) != 0)
        int32_t var_a4
        int32_t var_a0_1
        
        if (r15.b == 0)
            zmm0.d = (*(arg1 + 0x5c)).d f- *(arg1 + 0x50)
            zmm2 = *(arg1 + 0x54)
            zmm1.d = (*(arg1 + 0x60)).d f- zmm2[0]
            zmm0.d = zmm0.d f* zmm12[0]
            zmm1.d = zmm1.d f* zmm12[0]
            zmm0.d = zmm0.d f+ *(arg1 + 0x50)
            zmm1.d = zmm1.d f+ zmm2[0]
            var_a8 = zmm0.d
            zmm0.d = (*(arg1 + 0x64)).d f- *(arg1 + 0x58)
            var_a4 = zmm1.d
            zmm0.d = zmm0.d f* zmm12[0]
            zmm0.d = zmm0.d f+ *(arg1 + 0x58)
            var_a0_1 = zmm0.d
        else
            var_a8.q = *(arg1 + 0x5c)
            var_a0_1 = *(arg1 + 0x64)
        
        int64_t* rax_3 = sub_140d3c6e0(arg1 + 0x28)
        int32_t var_90_1 = var_a0_1
        int32_t rcx_3 = rax_3[0x26].d
        var_98 = var_a8.q
        zmm0 = zx.o(rax_3[0x25])
        var_a8.q = zmm0.q
        
        if (zmm0.d f!= rax_3[0x36].d || var_a4.d f!= *(rax_3 + 0x1b4)
                || not(rcx_3.d f== rax_3[0x37].d))
            zmm4 = zx.o(rax_3[0x25])
            zmm7 = data_143f47e30
            int32_t rax_4 = rax_3[0x26].d
            uint32_t zmm5[0x4] = data_143f47e10
            zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            uint32_t temp0_3[0x4] = _mm_and_ps(zmm5, zmm7)
            float temp0_4[0x4] = _mm_unpacklo_ps(zmm0, 0)
            zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_4.q), temp0_4[0].q)
            zmm2 = data_143f47e40
            zmm3 = _mm_div_ps(zmm6, zmm7)
            var_a8.q = zmm4.q
            zmm4 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3))
            zmm6 = _mm_sub_ps(zmm6, 
                _mm_mul_ps(
                    _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3, data_143f47e10), 2), 
                        zmm4 ^ zmm3) ^ zmm4, 
                    zmm7))
            float temp0_17[0x4] =
                _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_3), _mm_min_ps(zmm6, temp0_3))
            float temp0_18[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_17, 2)
            zmm1 = _mm_add_ps(temp0_17, zmm7)
            zmm8 = _mm_and_ps(temp0_18, zmm1 ^ temp0_17) ^ zmm1
            zmm0 = _mm_cmpeq_ps(data_143f47e20, zmm8, 1)
            zmm2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
            int32_t var_a0_4 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
            rax_3[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
            rax_3[0x37].d = var_a0_4
            float (* rax_6)[0x4]
            rax_6, zmm7, zmm8 = sub_140ade170(&rax_3[0x36], &var_78)
            *(rax_3 + 0x1a0) = *rax_6
        
        var_a8.o = *(rax_3 + 0x1a0)
        float zmm9[0x4]
        float zmm10[0x4]
        zmm12 = sub_141f48240(rax_3, &var_98, &var_a8, 0, zmm7, zmm8, zmm9, zmm10, 0, 0)
    
    if (*(arg1 + 0x30) != 0 && sub_140d3e110(arg1 + 0x28) != 0)
        float rax_8
        
        if (r15.b != 0)
            zmm0 = zx.o(*(arg1 + 0x40))
            rax_8 = *(arg1 + 0x48)
        else if (*(arg1 + 0x6a) == 0)
            zmm7 = data_143f47e30
            zmm4.d = (*(arg1 + 0x40)).d f- *(arg1 + 0x34)
            zmm0.d = (*(arg1 + 0x48)).d f- *(arg1 + 0x3c)
            zmm3.d = (*(arg1 + 0x44)).d f- *(arg1 + 0x38)
            uint32_t temp0_69[0x4] = _mm_and_ps(data_143f47e10, zmm7)
            zmm6 = _mm_unpacklo_ps(zmm4, zmm0.q)
            zmm3 = _mm_unpacklo_ps(zmm3, 0)
            zmm2 = data_143f47e40
            zmm6 = _mm_unpacklo_ps(zmm6, zmm3.q)
            zmm4 = _mm_div_ps(zmm6, zmm7)
            uint128_t temp0_75 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm4))
            zmm6 = _mm_sub_ps(zmm6, 
                _mm_mul_ps(
                    _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm4, data_143f47e10), 2), 
                        zmm4 ^ temp0_75) ^ temp0_75, 
                    zmm7))
            float temp0_83[0x4] =
                _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_69), _mm_min_ps(zmm6, temp0_69))
            float temp0_84[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_83, 2)
            zmm1 = _mm_add_ps(temp0_83, zmm7)
            zmm8 = _mm_and_ps(temp0_84, zmm1 ^ temp0_83) ^ zmm1
            zmm0 = _mm_cmpeq_ps(data_143f47e20, zmm8, 1)
            zmm2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_91[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0.d = zmm2.d f* zmm12[0]
            temp0_91[0] = temp0_91[0] f* zmm12[0]
            zmm0.d = zmm0.d f+ *(arg1 + 0x34)
            zmm1.d = zmm1.d f* zmm12[0]
            temp0_91[0] = temp0_91[0] f+ *(arg1 + 0x3c)
            zmm1.d = zmm1.d f+ *(arg1 + 0x38)
            rax_8 = temp0_91[0]
            zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
        else
            float var_88[0x4] = *sub_140ade170(arg1 + 0x34, &var_98)
            var_a8.o = *sub_140ade170(arg1 + 0x40, &var_98)
            float (* rax_11)[0x4] = sub_140ae0e60(&var_98, &var_88, &var_a8, zmm12)
            float zmm7_1[0x4] = data_143f47ed0
            float zmm5_1[0x4] = *rax_11
            float temp0_27[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
            float temp0_29[0x4] = _mm_add_ps(temp0_27, _mm_shuffle_ps(temp0_27, temp0_27, 0x4e))
            float temp0_31[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0x39), temp0_29)
            float temp0_32[0x4] = _mm_rsqrt_ps(temp0_31)
            uint32_t zmm3_1[0x4] = _mm_mul_ps(temp0_31, zmm7_1)
            float temp0_38[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm7_1, _mm_mul_ps(_mm_mul_ps(temp0_32, temp0_32), zmm3_1)), 
                    temp0_32), 
                temp0_32)
            float temp0_41[0x4] =
                _mm_sub_ps(zmm7_1, _mm_mul_ps(_mm_mul_ps(temp0_38, temp0_38), zmm3_1))
            float temp0_43[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_31, 2)
            float temp0_46[0x4] =
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_41, temp0_38), temp0_38), zmm5_1)
            zmm5_1 = data_143f47ec0
            float zmm6_1[0x4] = _mm_and_ps(temp0_46 ^ zmm5_1, temp0_43) ^ zmm5_1
            float temp0_48[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
            float temp0_50[0x4] = _mm_add_ps(temp0_48, _mm_shuffle_ps(temp0_48, temp0_48, 0x4e))
            float temp0_52[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0x39), temp0_50)
            float temp0_53[0x4] = _mm_rsqrt_ps(temp0_52)
            zmm3_1 = _mm_mul_ps(temp0_52, zmm7_1)
            float temp0_59[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm7_1, _mm_mul_ps(_mm_mul_ps(temp0_53, temp0_53), zmm3_1)), 
                    temp0_53), 
                temp0_53)
            float temp0_62[0x4] =
                _mm_sub_ps(zmm7_1, _mm_mul_ps(_mm_mul_ps(temp0_59, temp0_59), zmm3_1))
            float temp0_64[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_52, 2)
            var_78 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_62, temp0_59), temp0_59), zmm6_1) ^ zmm5_1, 
                temp0_64) ^ zmm5_1
            int32_t* rax_12 = sub_140adf5d0(&var_78, &var_98)
            zmm0 = zx.o(*rax_12)
            rax_8 = rax_12[2]
        
        var_98 = zmm0.q
        float var_90_3 = rax_8
        sub_141f48c80(sub_140d3c6e0(arg1 + 0x28), &var_98, 0, 0, 0)

char rdx

if (r15.b != 0 || *(arg1 + 0x10) == 0)
    rdx = 1
else
    rdx = 0

int64_t var_b8 = *(arg1 + 0x20)
return sub_141d57900(arg2, rdx, *(arg1 + 0x14), zx.q(*(arg1 + 0x1c)))
