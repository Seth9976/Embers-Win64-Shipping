// 函数: sub_141290230
// 地址: 0x141290230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void* rax_2 = *(arg1 + 8)
void* r14 = arg1
uint64_t result = zx.q(*(rax_2 + 0xfd0))

if (result.d != *(rax_2 + 0xffc))
    result = sub_1422eb710()
    
    if (result.b != 0)
        int64_t var_fc
        __builtin_memset(&var_fc, 0, 0x43)
        int16_t var_b8_1 = 0
        int128_t var_158
        __builtin_memset(&var_158, 0, 0x30)
        int128_t var_110_1 = zx.o(0)
        result = sub_140fdc870(arg2, &var_158)
        int32_t i = 0
        int32_t i_1 = 0
        
        if (*(r14 + 0xa8) s> 0)
            int64_t rcx_1 = 0
            int32_t var_b0
            int32_t r12_1 = var_b0
            int64_t var_1f8_1 = 0
            char var_228
            char var_224_1 = var_228
            
            do
                int64_t* r13_2 = *(r14 + 0xa0) + rcx_1
                void* const var_218 = nullptr
                int32_t result_1 = 0
                result = sub_1410edd90(*(r14 + 8), r13_2, 3, &var_218)
                
                if (result_1 != 0)
                    uint128_t zmm7_1 = zx.o(r13_2[0x2b4].d)
                    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    uint128_t zmm8_1 = zx.o(*(r13_2 + 0x159c))
                    uint128_t zmm9_1 = zx.o(r13_2[0x2b3].d)
                    uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(*(r13_2 + 0x15a4)))
                    void* rax_4 = &rcx_5[5]
                    zmm7_1 = _mm_cvtepi32_ps(zmm7_1)
                    zmm8_1 = _mm_cvtepi32_ps(zmm8_1)
                    zmm9_1 = _mm_cvtepi32_ps(zmm9_1)
                    
                    if (rax_4 u> *(arg2 + 0x38))
                        zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_4 = &rcx_5[5]
                    
                    *(arg2 + 0x30) = rax_4
                    void** rax_5 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_5 = rcx_5
                    *(arg2 + 8) = &rcx_5[1]
                    rcx_5[2].d = zmm9_1.d
                    *(rcx_5 + 0x14) = zmm8_1.d
                    *(rcx_5 + 0x1c) = zmm7_1.d
                    rcx_5[4].d = zmm6_1.d
                    rcx_5[1] = 0
                    *rcx_5 = &data_142d54998
                    rcx_5[3].d = 0
                    *(rcx_5 + 0x24) = 0x3f800000
                    void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    int64_t rbx_1 = data_1439c9458
                    void* rax_7 = &rcx_11[5]
                    
                    if (rax_7 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_7 = &rcx_11[5]
                    
                    *(arg2 + 0x30) = rax_7
                    int64_t* rax_8 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    int32_t var_220_1 = 0
                    char var_228_1 = 0
                    *rax_8 = rcx_11
                    *(arg2 + 8) = &rcx_11[1]
                    rcx_11[1] = 0
                    *rcx_11 = &data_142d56618
                    rcx_11[2].d = 0
                    rcx_11[3] = rbx_1
                    rcx_11[4].d = 0
                    result = sx.q(result_1)
                    char var_223_1 = 0
                    uint64_t var_200_1 = result
                    
                    if (result s> 0)
                        int64_t rcx_15 = 0
                        int64_t var_208_1 = 0
                        uint64_t j
                        
                        do
                            int64_t* r14_2 = var_218 + rcx_15
                            void* rbx_2 = r14_2[2]
                            float zmm1_1[0x4] = *(rbx_2 + 0x10)
                            float temp0_5[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
                            float temp0_6[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                            float temp0_7[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                            float temp0_8[0x4] = _mm_mul_ps(zmm1_1, temp0_5)
                            float temp0_10[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x29), temp0_6)
                            float temp0_12[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x12), temp0_7)
                            zmm1_1 = *(rbx_2 + 0x30)
                            float temp0_13[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
                            float temp0_14[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                            float temp0_16[0x4] =
                                _mm_add_ps(temp0_13, _mm_shuffle_ps(temp0_8, temp0_8, 1))
                            float zmm4_1[0x4] = data_143e8ec40
                            zmm6_1 = _mm_add_ps(temp0_12, temp0_10)
                            float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_12)
                            float temp0_19[0x4] = _mm_sub_ps(zmm4_1, temp0_16)
                            zmm6_1 = _mm_mul_ps(zmm6_1, zmm1_1)
                            float temp0_21[0x4] = _mm_mul_ps(temp0_14, temp0_18)
                            float zmm3_1[0x4] =
                                __andps_xmmxud_memxud(_mm_mul_ps(temp0_19, zmm1_1), data_143e8ec50)
                            float temp0_24[0x4] = _mm_shuffle_ps(temp0_21, zmm3_1, 0x32)
                            float temp0_26[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm3_1, 0), temp0_24, 0x82)
                            float temp0_27[0x4] = _mm_shuffle_ps(zmm6_1, zmm3_1, 0x31)
                            float temp0_29[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_21, zmm3_1, 0x10), temp0_27, 0x88)
                            zmm6_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, temp0_21, 0x12), zmm3_1, 0xe8)
                            float var_1c8_1[0x4] = temp0_29
                            float var_1d8[0x4] = temp0_26
                            uint128_t var_1b8_1 = zmm6_1
                            float zmm0_1[0x4] = *(rbx_2 + 0x20)
                            zmm4_1[0].q = zmm0_1 u>> 0x40
                            int96_t var_1a8_1 = _mm_shuffle_ps(zmm0_1, zmm4_1, 0xc4)[0].12
                            float var_198[0x4][0x4]
                            int32_t zmm10_1
                            int32_t zmm11_1
                            zmm10_1, zmm11_1 = sub_1410eee30(&var_198, r13_2, &var_1d8)
                            uint128_t zmm0_2 = zx.o(*(r13_2 + 0x60c))
                            float zmm1_2[0x4] = *(r14_2 + 0x1c)
                            uint128_t zmm4_2 = zmm0_2
                            float rax_10 = *(r13_2 + 0x614)
                            float zmm3_2 = zmm0_2.d f- var_1a8_1.d
                            zmm0_2 = r13_2[0x1a6].d
                            zmm0_2.d = zmm0_2.d f+ zmm0_2.d
                            zmm4_2.d = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55).d f- var_1a8_1:4.d
                            zmm1_2[0] = zmm1_2[0] f* zmm10_1
                            float zmm2_2 = rax_10 f- var_1a8_1:8.d
                            zmm4_2.d = zmm4_2.d f* zmm4_2.d
                            zmm1_2[0] = zmm1_2[0] f+ zmm0_2.d
                            zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
                            zmm4_2.d = zmm4_2.d f+ zmm3_2 * zmm3_2
                            zmm4_2.d = zmm4_2.d f+ zmm2_2 * zmm2_2
                            bool cond:2_1 = zmm1_2[0] f> zmm4_2.d
                            zmm1_2 = *(rbx_2 + 0x30)
                            i.b = cond:2_1
                            char rdx_3 = i.b
                            zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                            char rcx_17 = rdx_3 ^ 1
                            
                            if (*(r13_2 + 0xd34) == 0)
                                rcx_17 = rdx_3
                            
                            zmm0_2.d = zmm0_2.d f* zmm1_2[0]
                            char rdx_4 = rcx_17
                            zmm0_2.d = zmm0_2.d f* _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)[0]
                            
                            if (zmm0_2.d f< zmm11_1)
                                rdx_4 ^= 1
                            
                            if (var_220_1 != zx.d(rdx_4) + 1)
                                var_220_1 = zx.d(rdx_4) + 1
                                int64_t var_120_1 = sub_1410f8210(zx.d(rdx_4) + 1)
                            
                            if (var_223_1 == 0 || var_224_1 != i.b)
                                int64_t rax_14 = data_1439b6698
                                var_224_1 = i.b
                                
                                if (i.b != 0)
                                    rax_14 = data_1439b6680
                                
                                int64_t var_118_1 = rax_14
                                var_223_1 = 1
                            
                            if (var_228_1 == 0 || r12_1 != r14_2[4].d)
                                int32_t rcx_21
                                
                                if (&r14_2[4] == &var_b0)
                                    rcx_21 = r14_2[4].d
                                else
                                    r12_1 = r14_2[4].d
                                    rcx_21 = r12_1
                                    var_228_1 = 1
                                
                                if (rcx_21 == 0)
                                    int64_t var_128_1 = data_1439b5788
                                else if (rcx_21 == 1)
                                    var_128_1 = data_1439b66b0
                                else if (rcx_21 == 3)
                                    var_128_1 = data_1439b57a0
                                else if (rcx_21 == 0xf)
                                    var_128_1 = data_1439b66c8
                            
                            int64_t r9_3 = sub_141107ff0(arg2, &var_158, r13_2, r14_2, 3, &var_198)
                            int64_t rbx_3 = data_1439c9470
                            
                            if (rbx_3 == 0)
                                sub_140af98a0("Unknown", 0xbc8, 
                                    Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9_3)
                                sub_140afbb40()
                            
                            void*** rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_17 = &rcx_27[6]
                            
                            if (rax_17 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x38)
                                rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_17 = &rcx_27[6]
                            
                            *(arg2 + 0x30) = rax_17
                            int64_t* rax_18 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_18 = rcx_27
                            *(arg2 + 8) = &rcx_27[1]
                            rcx_27[2] = rbx_3
                            rcx_27[3] = 0
                            rcx_27[4] = 8
                            rcx_27[5].d = 0xc
                            *(rcx_27 + 0x2c) = 1
                            rcx_27[1] = 0
                            result = &data_142f11598
                            *rcx_27 = &data_142f11598
                            rcx_15 = var_208_1 + 0x28
                            j = var_200_1
                            var_200_1 -= 1
                            var_208_1 = rcx_15
                        while (j != 1)
                        r14 = arg1
                        i = i_1
                
                i += 1
                rcx_1 = var_1f8_1 + 0x5240
                i_1 = i
                var_1f8_1 = rcx_1
            while (i s< *(r14 + 0xa8))

__security_check_cookie(rax_1 ^ &var_258)
return result
