// 函数: sub_141774ea0
// 地址: 0x141774ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0
int32_t arg_8 = 0

if (*(arg1 + 0x28) s> 0)
    int32_t zmm4 = 0x3f000000
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    int128_t zmm15
    int128_t var_d8_1 = zmm15
    
    do
        int32_t j = 0
        
        if (*(arg1 + 0x2c) s> 0)
            do
                int32_t k = 0
                
                if (*(arg1 + 0x30) s> 0)
                    uint128_t zmm1
                    zmm1.d = _mm_cvtepi32_ps(zx.o(i)).d f+ zmm4
                    uint128_t zmm2
                    zmm2.d = _mm_cvtepi32_ps(zx.o(j)).d f+ zmm4
                    arg_8 = zmm1.d
                    int32_t arg_10 = zmm2.d
                    
                    do
                        int32_t rax = *(arg1 + 0x3c)
                        int64_t var_160_1 = *(arg1 + 0x34)
                        zmm9.d = zmm1.d f* *(arg1 + 0x34)
                        zmm14.d = zmm2.d f* *(arg1 + 0x38)
                        zmm9.d = zmm9.d f+ *(arg1 + 0x10)
                        zmm13 = _mm_cvtepi32_ps(zx.o(k))
                        zmm14.d = zmm14.d f+ *(arg1 + 0x14)
                        zmm13.d = zmm13.d f+ zmm4
                        float var_1a8 = zmm9.d
                        float var_1a4_1 = zmm14.d
                        zmm13.d = zmm13.d f* *(arg1 + 0x3c)
                        zmm13.d = zmm13.d f+ *(arg1 + 0x18)
                        float zmm0[0x4] = zmm13
                        zmm0[0] = zmm0[0] f+ rax.d
                        float var_1a0_1 = zmm0[0]
                        float var_150
                        sub_1417a9150(arg1 + 0x10, &var_150, &var_1a8)
                        float zmm0_2
                        int32_t zmm6_2
                        float zmm7_1
                        float zmm9_1
                        int32_t zmm12_1
                        float zmm13_1
                        float zmm14_1
                        zmm0_2, zmm6_2, zmm7_1, zmm9_1, zmm12_1, zmm13_1, zmm14_1 =
                            sub_1417920a0(arg1 + 0x10, arg1 + 0x40, &var_150)
                        
                        if (not(zmm6_2 f== zmm12_1))
                            _mm_sqrt_ss(0, zmm6_2)
                        
                        float var_19c = zmm9_1
                        float var_140
                        sub_1417a9150(arg1 + 0x10, &var_140, &var_19c)
                        float zmm0_4
                        int32_t zmm6_4
                        float zmm9_2
                        int32_t zmm12_2
                        float zmm13_2
                        float zmm14_2
                        zmm0_4, zmm6_4, zmm9_2, zmm12_2, zmm13_2, zmm14_2 =
                            sub_1417920a0(arg1 + 0x10, arg1 + 0x40, &var_140)
                        
                        if (not(zmm6_4 f== zmm12_2))
                            _mm_sqrt_ss(0, zmm6_4)
                        
                        float var_190 = zmm9_2
                        float var_130
                        sub_1417a9150(arg1 + 0x10, &var_130, &var_190)
                        float zmm0_6
                        int32_t zmm6_6
                        float zmm7_3
                        float zmm9_3
                        int32_t zmm12_3
                        float zmm13_3
                        float zmm14_3
                        zmm0_6, zmm6_6, zmm7_3, zmm9_3, zmm12_3, zmm13_3, zmm14_3 =
                            sub_1417920a0(arg1 + 0x10, arg1 + 0x40, &var_130)
                        
                        if (not(zmm6_6 f== zmm12_3))
                            _mm_sqrt_ss(0, zmm6_6)
                        
                        float var_184 = zmm9_3
                        float var_120
                        sub_1417a9150(arg1 + 0x10, &var_120, &var_184)
                        float zmm0_8
                        int32_t zmm6_8
                        float zmm9_4
                        int32_t zmm12_4
                        float zmm13_4
                        float zmm14_4
                        zmm0_8, zmm6_8, zmm9_4, zmm12_4, zmm13_4, zmm14_4 =
                            sub_1417920a0(arg1 + 0x10, arg1 + 0x40, &var_120)
                        
                        if (not(zmm6_8 f== zmm12_4))
                            _mm_sqrt_ss(0, zmm6_8)
                        
                        float var_178 = var_160_1.d + zmm9_4
                        float var_110
                        sub_1417a9150(arg1 + 0x10, &var_110, &var_178)
                        float zmm0_10
                        float zmm6_10
                        float zmm9_5
                        int32_t zmm12_5
                        float zmm13_5
                        float zmm14_5
                        float zmm15_2
                        zmm0_10, zmm6_10, zmm9_5, zmm12_5, zmm13_5, zmm14_5, zmm15_2 =
                            sub_1417920a0(arg1 + 0x10, arg1 + 0x40, &var_110)
                        
                        if (not(zmm6_10 f== zmm12_5))
                            _mm_sqrt_ss(zmm6_10, zmm6_10)
                        
                        float var_16c = zmm9_5 - zmm15_2
                        float var_100
                        sub_1417a9150(arg1 + 0x10, &var_100, &var_16c)
                        float zmm12_6[0x4]
                        zmm0, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12_6, zmm15 =
                            sub_1417920a0(arg1 + 0x10, arg1 + 0x40, &var_100)
                        
                        if (zmm9.d f== zmm12_6[0])
                            zmm1 = zmm0
                        else
                            zmm1.d = _mm_sqrt_ss(0, zmm9.d).d f+ zmm0[0]
                        
                        zmm4 = 0x3f000000
                        zmm6[0] = zmm6[0] f- zmm1.d
                        zmm8.d = zmm8.d f- zmm7.d
                        int64_t rcx_12 = *(arg1 + 0x70)
                        zmm11.d = zmm11.d f- zmm10.d
                        int32_t rax_2 = *(arg1 + 0x64) * i
                        zmm0 = 0x3f000000
                        zmm0[0] = 0.5f f/ zmm15.d
                        int32_t rax_4 = (rax_2 + j) * *(arg1 + 0x68)
                        zmm6[0] = zmm6[0] * zmm0[0]
                        zmm0 = 0x3f000000
                        zmm0[0] = 0.5f f/ var_160_1:4.d
                        int64_t rdx_13 = sx.q(rax_4 + k) * 3
                        zmm8.d = zmm8.d f* zmm0[0]
                        zmm0 = 0x3f000000
                        zmm0[0] = 0.5f f/ rax
                        zmm11.d = zmm11.d f* zmm0[0]
                        *(rcx_12 + (rdx_13 << 2)) = (_mm_unpacklo_ps(zmm6, zmm8.q)).q
                        *(rcx_12 + (rdx_13 << 2) + 8) = zmm11.d
                        int64_t rdx_14 = *(arg1 + 0x70)
                        result = sx.q((*(arg1 + 0x64) * i + j) * *(arg1 + 0x68) + k)
                        void* rcx_13 = result * 3
                        uint128_t zmm3_1 = *(rdx_14 + (rcx_13 << 2))
                        zmm0 = *(rdx_14 + (rcx_13 << 2) + 4)
                        zmm1 = *(rdx_14 + (rcx_13 << 2) + 8)
                        zmm0[0] = zmm0[0] * zmm0[0]
                        zmm2.d = zmm3_1.d f* zmm3_1.d
                        zmm1.d = zmm1.d f* zmm1.d
                        zmm2.d = zmm2.d f+ zmm0[0]
                        zmm2.d = zmm2.d f+ zmm1.d
                        float temp0_11[0x4] = _mm_sqrt_ss(0, zmm2.d)
                        
                        if (temp0_11[0] <= 9.99999994e-09f)
                            int32_t var_dc_1 = 0
                            *(rdx_14 + (rcx_13 << 2)) = (_mm_unpacklo_ps(zmm12_6, zmm12_6[0].q)).q
                            *(rdx_14 + (rcx_13 << 2) + 8) = 0
                            result = *(arg1 + 0x70)
                            *(result + sx.q((*(arg1 + 0x64) * i + j) * *(arg1 + 0x68) + k) * 0xc) =
                                0x3f800000
                        else
                            zmm1.d = 1f / temp0_11[0]
                            zmm0 = zmm1
                            zmm3_1.d = zmm3_1.d f* zmm1.d
                            zmm0[0] = zmm0[0] f* *(rdx_14 + (rcx_13 << 2) + 4)
                            zmm1.d = zmm1.d f* *(rdx_14 + (rcx_13 << 2) + 8)
                            *(rdx_14 + (rcx_13 << 2) + 4) = zmm0[0]
                            *(rdx_14 + (rcx_13 << 2)) = zmm3_1.d
                            *(rdx_14 + (rcx_13 << 2) + 8) = zmm1.d
                        
                        zmm1 = arg_8
                        k += 1
                        zmm2 = arg_10
                    while (k s< *(arg1 + 0x30))
                
                j += 1
            while (j s< *(arg1 + 0x2c))
        
        i += 1
    while (i s< *(arg1 + 0x28))

return result
