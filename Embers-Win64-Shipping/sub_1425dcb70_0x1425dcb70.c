// 函数: sub_1425dcb70
// 地址: 0x1425dcb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t result = __security_cookie ^ &var_348
int64_t result_1 = result
void* rsi = arg2
void* r14 = arg1

if (*(arg2 + 0x10) != 0)
    int64_t* r12_1 = arg2 + 8
    void* r13_1 = arg2 + 0x18
    int64_t* var_1c8_1 = r12_1
    int128_t zmm6_1
    int128_t zmm7_1
    int128_t zmm8_1
    int128_t zmm9_1
    int128_t zmm10_1
    int128_t zmm11_1
    int128_t zmm12_1
    float zmm13_1[0x4]
    int128_t zmm14_1
    int128_t zmm15_1
    zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
        sub_1425de700(arg1, *(arg2 + 0x88), arg2 + 0x30, r12_1, r13_1, 0, 0)
    int64_t* r15_1 = *(r14 + 0x20)
    int32_t rdi_1 = 0
    int64_t* var_288_1 = r15_1
    void* rax_3 = sx.q(*(r14 + 0x28)) * 0x1f0 + r15_1
    void* var_1b8_1 = rax_3
    
    if (r15_1 != rax_3)
        int128_t var_48_1 = zmm6_1
        int32_t* r14_1 = &r15_1[0x12]
        int128_t var_58_1 = zmm7_1
        int128_t var_68_1 = zmm8_1
        int128_t var_78_1 = zmm9_1
        int128_t var_88_1 = zmm10_1
        int128_t var_98_1 = zmm11_1
        int128_t var_c8_1 = zmm14_1
        int128_t var_d8_1 = zmm15_1
        int128_t var_a8_1 = zmm12_1
        float var_b8_1[0x4] = zmm13_1
        
        do
            if (r14_1[-0xc] != 0xffffffff)
                int32_t rax_4 = r14_1[0x45]
                r14_1[0x44] = 0
                
                if (rax_4 s< 0 && r14_1[0x45] != 0)
                    sub_1405a5410(&r14_1[0x42], 0)
                
                int32_t rax_5 = r14_1[0x49]
                r14_1[0x48] = 0
                
                if (rax_5 s< 0 && r14_1[0x49] != 0)
                    sub_1405dadb0(&r14_1[0x46], 0)
                
                int32_t rax_6 = r14_1[0x4d]
                r14_1[0x4c] = 0
                
                if (rax_6 s< 0 && r14_1[0x4d] != 0)
                    sub_1405a5410(&r14_1[0x4a], 0)
                
                int32_t rax_7 = r14_1[0x51]
                r14_1[0x50] = 0
                
                if (rax_7 s< 0 && r14_1[0x51] != 0)
                    sub_1405dadb0(&r14_1[0x4e], 0)
                
                int32_t rax_8 = r14_1[0x55]
                r14_1[0x54] = 0
                
                if (rax_8 s< 0 && r14_1[0x55] != 0)
                    sub_140638cc0(&r14_1[0x52], 0)
                
                if (r14_1[0x26].b != 0 && r14_1[-0xc] != 0xffffffff)
                    sub_141d43680(&r14_1[-0xa])
                    sub_141d430d0(&r14_1[-0xa], *(*r15_1 + 0xc8) + sx.q(r14_1[-0xc]) * 0x158 + 0xf8)
                    sub_141d430d0(&r14_1[-0xa], &r14_1[0x16])
                    sub_141d430d0(&r14_1[-0xa], &r14_1[6])
                    r14_1[0x26].b = 0
                
                void* r10_1 = *r15_1
                int32_t var_310_1 = 0
                char var_318_1
                var_318_1.q = &r14_1[0x38]
                char var_320_1
                var_320_1.q = &r15_1[(sx.q(r14_1[0x2e]) + 0x15) * 2]
                int64_t r9_6 = *r13_1
                int64_t rax_12 = *r12_1
                int64_t rcx_10 = sx.q(*(r10_1 + 0x108)) * 6
                float var_118[0x4] = *(rax_12 + (rcx_10 << 3))
                float zmm1_1[0x4] = *(rax_12 + (rcx_10 << 3) + 0x10)
                float zmm0_1[0x4] = *(rax_12 + (rcx_10 << 3) + 0x20)
                void* var_328_1
                var_328_1.d = *(rsi + 0x20)
                int64_t zmm15_2 = sub_1425cf960(r10_1 + 0xf8, 
                    sx.q(r14_1[-0xc]) * 0x158 + *(r10_1 + 0xc8), &var_118, r9_6, var_328_1, 
                    var_320_1)
                char rbx_2 = *(rsi + 0x7c)
                int64_t* r13_2 = *((sx.q(r14_1[-0xc]) << 6) + *(r14_1 + 0xa0) + 8)
                float var_2f8[0x4]
                float var_2e8[0x4]
                int64_t var_2d8
                int64_t var_2c0
                int32_t var_2b8
                uint32_t var_158[0x4]
                float zmm1_2[0x4]
                float zmm2_1[0x4]
                float zmm3_1[0x4]
                
                if (rbx_2 == 2)
                    int64_t r12_4 = (sx.q(r14_1[0x2e]) + 0x15) * 2
                    void* var_278_1 = (*(*(*r13_2 + 0x40))(r13_2, &var_158))[0].q
                    int64_t var_148
                    int64_t var_130
                    int32_t var_128
                    var_130(sx.q(var_128) + var_148)
                    var_2f8 = *(*(*r13_2 + 0x50))(r13_2, &var_2e8)
                    var_2c0(sx.q(var_2b8) + var_2d8)
                    int64_t rbx_3 = 0
                    int32_t rax_21 = (*(*r13_2 + 0x20))(r13_2)
                    int64_t r10_2 = var_2f8[0].q
                    int64_t r11_1 = sx.q(rax_21)
                    float zmm0_2[0x4]
                    
                    if (r11_1 s>= 4)
                        void* rax_22 = r15_1[r12_4]
                        void* rdx_10 = r10_2 - var_278_1
                        void* rcx_21 = var_278_1 + 0x14
                        int128_t* r8_6 = rax_22 + 8
                        int64_t i_3 = ((r11_1 - 4) u>> 2) + 1
                        void* r9_7 = rax_22 + 0x14
                        int64_t rax_23 = i_3 << 2
                        int64_t i
                        
                        do
                            zmm0_2 = *(r8_6 - 4)
                            r9_7 += 0x30
                            zmm2_1 = *r8_6
                            zmm1_2 = *(rcx_21 - 8)
                            rcx_21 += 0x40
                            int32_t rax_24 = *(r8_6 - 8)
                            r8_6 = &r8_6[3]
                            *(rcx_21 - 0x54) = rax_24
                            *(rcx_21 - 0x50) = zmm0_2[0]
                            *(rcx_21 - 0x4c) = zmm2_1[0]
                            *(rcx_21 - 0x48) = zmm1_2[0]
                            *(rdx_10 + rcx_21 - 0x54) = *(rcx_21 - 0x54)
                            *(rdx_10 + rcx_21 - 0x50) = *(rcx_21 - 0x50)
                            *(rdx_10 + rcx_21 - 0x4c) = *(rcx_21 - 0x4c)
                            *(rdx_10 + rcx_21 - 0x48) = *(rcx_21 - 0x48)
                            zmm0_2 = *(r9_7 - 0x34)
                            zmm2_1 = *(r9_7 - 0x30)
                            zmm1_2 = *(rcx_21 - 0x38)
                            *(rcx_21 - 0x44) = *(r8_6 - 0x2c)
                            *(rcx_21 - 0x40) = zmm0_2[0]
                            *(rcx_21 - 0x3c) = zmm2_1[0]
                            *(rcx_21 - 0x38) = zmm1_2[0]
                            *(rdx_10 + rcx_21 - 0x44) = *(rcx_21 - 0x44)
                            *(rdx_10 + rcx_21 - 0x40) = *(rcx_21 - 0x40)
                            *(rdx_10 + rcx_21 - 0x3c) = *(rcx_21 - 0x3c)
                            *(rdx_10 + rcx_21 - 0x38) = *(rcx_21 - 0x38)
                            zmm0_2 = *(r9_7 - 0x28)
                            zmm2_1 = *(r9_7 - 0x24)
                            zmm1_2 = *(rcx_21 - 0x28)
                            *(rcx_21 - 0x34) = r8_6[-2].d
                            *(rcx_21 - 0x30) = zmm0_2[0]
                            *(rcx_21 - 0x2c) = zmm2_1[0]
                            *(rcx_21 - 0x28) = zmm1_2[0]
                            *(rdx_10 + rcx_21 - 0x34) = *(rcx_21 - 0x34)
                            *(rdx_10 + rcx_21 - 0x30) = *(rcx_21 - 0x30)
                            *(rdx_10 + rcx_21 - 0x2c) = *(rcx_21 - 0x2c)
                            *(rdx_10 + rcx_21 - 0x28) = *(rcx_21 - 0x28)
                            zmm0_2 = *(r9_7 - 0x1c)
                            zmm2_1 = *(r9_7 - 0x18)
                            zmm1_2 = *(rcx_21 - 0x18)
                            *(rcx_21 - 0x24) = *(r8_6 - 0x14)
                            *(rcx_21 - 0x20) = zmm0_2[0]
                            *(rcx_21 - 0x1c) = zmm2_1[0]
                            *(rcx_21 - 0x18) = zmm1_2[0]
                            *(rdx_10 + rcx_21 - 0x24) = *(rcx_21 - 0x24)
                            *(rdx_10 + rcx_21 - 0x20) = *(rcx_21 - 0x20)
                            *(rdx_10 + rcx_21 - 0x1c) = *(rcx_21 - 0x1c)
                            *(rdx_10 + rcx_21 - 0x18) = *(rcx_21 - 0x18)
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                        rbx_3 = rax_23
                    
                    if (rbx_3 s< r11_1)
                        int32_t* r10_3 = r10_2 - var_278_1
                        int128_t* rdx_11 = r15_1[r12_4] + rbx_3 * 0xc
                        void* rcx_24 = var_278_1 + 4 + (rbx_3 << 4)
                        int64_t i_4 = r11_1 - rbx_3
                        int64_t i_1
                        
                        do
                            zmm3_1 = *rdx_11
                            zmm0_2 = *(rdx_11 + 4)
                            zmm2_1 = *(rdx_11 + 8)
                            rdx_11 += 0xc
                            zmm1_2 = *(rcx_24 + 8)
                            *(rcx_24 - 4) = zmm3_1[0]
                            *rcx_24 = zmm0_2[0]
                            *(rcx_24 + 4) = zmm2_1[0]
                            *(rcx_24 + 8) = zmm1_2[0]
                            *(r10_3 + rcx_24 - 4) = zmm3_1[0]
                            *(r10_3 + rcx_24) = *rcx_24
                            *(r10_3 + rcx_24 + 4) = *(rcx_24 + 4)
                            *(r10_3 + rcx_24 + 8) = *(rcx_24 + 8)
                            rcx_24 += 0x10
                            i_1 = i_4
                            i_4 -= 1
                        while (i_1 != 1)
                    
                    (*(*r13_2 + 0x278))(r13_2)
                
                zmm1_2 = data_143f709e0
                float zmm6_2[0x4] = *(rsi + 0x50)
                float zmm5_1[0x4] = *(rsi + 0x30)
                float temp0_1[0x4] = _mm_min_ps(zmm0_1, zmm6_2)
                var_2f8 = zmm1_2
                float var_2d0
                int32_t var_2a0
                float var_278_2[0x4]
                float zmm12_2[0x4]
                float zmm13_2[0x4]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_1, zmm1_2, 1)) == 0)
                    zmm2_1 = var_118
                    float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), 
                        _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b))
                    float temp0_136[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                    zmm3_1 = __mulps_xmmps_memps(zmm6_2, zmm1_1)
                    float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143f70980)
                    float temp0_139[0x4] = __mulps_xmmps_memps(zmm6_2, zmm0_1)
                    float temp0_140[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    var_278_2 = temp0_139
                    float temp0_142[0x4] = _mm_add_ps(temp0_138, _mm_mul_ps(temp0_140, zmm2_1))
                    float temp0_144[0x4] =
                        _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
                    float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), 
                        _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
                    float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143f70970)
                    zmm2_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f70960)
                    float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_148)
                    float temp0_152[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    float temp0_154[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2), temp0_152)
                    zmm12_2 = _mm_add_ps(temp0_151, temp0_150)
                    float temp0_158[0x4] = _mm_sub_ps(temp0_154, 
                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9), zmm2_1))
                    float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
                    float temp0_160[0x4] = _mm_mul_ps(temp0_140, temp0_159)
                    float temp0_162[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_159, temp0_159, 0xd2), temp0_152)
                    float temp0_163[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
                    float temp0_164[0x4] = _mm_add_ps(temp0_160, zmm3_1)
                    zmm13_2 = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(temp0_162, _mm_mul_ps(temp0_163, zmm2_1)), 
                            temp0_164), 
                        *(rsi + 0x40))
                else
                    float zmm11_2[0x4] = data_143f70990
                    float zmm9_2[0x4] = *(rsi + 0x40)
                    float temp0_4[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
                    float temp0_5[0x4] = _mm_mul_ps(zmm6_2, zmm0_1)
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
                    var_278_2 = temp0_5
                    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), 
                        _mm_shuffle_ps(zmm5_1, zmm5_1, 4))
                    float temp0_10[0x4] = _mm_mul_ps(temp0_4, zmm5_1)
                    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x12), 
                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff))
                    float temp0_14[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                    float temp0_17[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x1a), 
                        _mm_shuffle_ps(temp0_10, temp0_10, 1))
                    zmm3_1 = var_118
                    float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_9)
                    float temp0_19[0x4] = _mm_sub_ps(temp0_9, temp0_13)
                    float temp0_20[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                    float temp0_21[0x4] = _mm_mul_ps(temp0_18, zmm6_2)
                    float temp0_22[0x4] = _mm_mul_ps(temp0_6, temp0_19)
                    zmm1_2 = __andps_xmmxud_memxud(
                        _mm_mul_ps(_mm_sub_ps(zmm11_2, temp0_17), zmm6_2), data_143f709a0)
                    float temp0_26[0x4] = _mm_shuffle_ps(temp0_22, zmm1_2, 0x32)
                    float temp0_28[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_2, 0), temp0_26, 0x82)
                    float temp0_29[0x4] = _mm_shuffle_ps(temp0_21, zmm1_2, 0x31)
                    float temp0_31[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1_2, 0x10), temp0_29, 0x88)
                    float temp0_33[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_22, 0x12), zmm1_2, 0xe8)
                    float temp0_34[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
                    zmm11_2[0].q = zmm9_2 u>> 0x40
                    float temp0_35[0x4] = _mm_shuffle_ps(zmm9_2, zmm11_2, 0xc4)
                    float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x29)
                    float temp0_37[0x4] = _mm_mul_ps(temp0_34, zmm3_1)
                    float temp0_38[0x4] = _mm_mul_ps(temp0_20, temp0_36)
                    float temp0_39[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x12)
                    float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_39)
                    float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                        _mm_shuffle_ps(temp0_37, temp0_37, 1))
                    float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_38)
                    float temp0_46[0x4] = _mm_sub_ps(temp0_38, temp0_41)
                    float temp0_47[0x4] = _mm_sub_ps(zmm11_2, temp0_44)
                    float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm0_1)
                    float temp0_49[0x4] = _mm_mul_ps(temp0_14, temp0_46)
                    zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm0_1), data_143f709a0)
                    float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1_2, 0), 
                        _mm_shuffle_ps(temp0_49, zmm1_2, 0x32), 0x82)
                    float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, zmm1_2, 0x10)
                    float temp0_56[0x4] = _mm_shuffle_ps(temp0_48, zmm1_2, 0x31)
                    float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
                    float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_56, 0x88)
                    float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_31)
                    float temp0_61[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, temp0_49, 0x12), zmm1_2, 0xe8)
                    float temp0_63[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_33)
                    zmm11_2[0].q = zmm1_1 u>> 0x40
                    float temp0_64[0x4] = _mm_shuffle_ps(zmm1_1, zmm11_2, 0xc4)
                    float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
                    float temp0_67[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_35)
                    float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_28))
                    float temp0_71[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_28)
                    float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
                    float temp0_74[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_33)
                    float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
                    float temp0_77[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_31)
                    float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
                    var_2e8 = temp0_75
                    float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
                    float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
                    float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_31)
                    float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_35)
                    float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
                    float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
                    float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_28)
                    float temp0_87[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_33)
                    float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
                    float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
                    float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
                    float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_35)
                    float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
                    var_2d8.o = temp0_88
                    float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                    float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
                    float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_31)
                    float temp0_97[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_33)
                    float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_28)
                    float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
                    float temp0_101[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_35)
                    float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
                    int64_t var_2c8_1 = temp0_99[0].q
                    var_2b8.o = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)
                    int128_t zmm11_3
                    zmm11_3, zmm15_2 = sub_1407740e0(&var_2e8, 0x322bcc77)
                    float temp0_105[0x4] = __cmpps_xmmps_memps_immb(var_2f8, var_278_2, 2)
                    float zmm2_2[0x4] = var_2e8[0]
                    float zmm4_2[0x4] =
                        _mm_and_ps(temp0_105, data_143f709d0 ^ zmm11_3) ^ data_143f709d0
                    zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                    uint32_t zmm0_3[0x4] = var_2e8[2]
                    float zmm1_3 = var_2e8[1] * zmm4_2[0]
                    zmm0_3[0] = zmm0_3[0] f* zmm4_2[0]
                    var_2e8[0] = zmm2_2[0]
                    float temp0_107[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                    var_2e8[1] = zmm1_3
                    zmm1_3 = var_2d8:4.d * temp0_107[0]
                    var_2e8[2] = zmm0_3[0]
                    zmm0_3 = var_2d0
                    zmm0_3[0] = zmm0_3[0] f* temp0_107[0]
                    float zmm3_2 = var_2d8.d * temp0_107[0]
                    zmm2_2 = var_2c8_1.d
                    float temp0_108[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                    var_2d8:4.d = zmm1_3
                    var_2d0 = zmm0_3[0]
                    zmm0_3 = var_2c0.d
                    zmm1_3 = var_2c8_1:4.d * temp0_108[0]
                    zmm0_3[0] = zmm0_3[0] f* temp0_108[0]
                    zmm2_2[0] = zmm2_2[0] * temp0_108[0]
                    var_2c8_1:4.d = zmm1_3
                    var_2c0.d = zmm0_3[0]
                    var_2d8.d = zmm3_2
                    var_2c8_1.d = zmm2_2[0]
                    uint32_t var_1a8[0x4]
                    sub_14077e4a0(&var_1a8, &var_2e8)
                    uint32_t zmm5_2[0x4] = var_1a8
                    zmm12_2 = data_143f709c0
                    float temp0_109[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                    var_2a0 = 0x322bcc77
                    float temp0_111[0x4] =
                        _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
                    float temp0_113[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
                    float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
                    zmm3_1 = _mm_mul_ps(temp0_113, zmm12_2)
                    float temp0_120[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm12_2, 
                                _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), zmm3_1)), 
                            temp0_114), 
                        temp0_114)
                    float temp0_123[0x4] =
                        _mm_sub_ps(zmm12_2, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), zmm3_1))
                    float temp0_125[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
                    float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
                    int32_t var_2b4
                    zmm2_1 = _mm_unpacklo_ps(var_2b4, zmm15_2)
                    zmm12_2 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_2) ^ data_143f709b0, temp0_125)
                        ^ data_143f709b0
                    int32_t var_2b0
                    zmm13_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_2b8, var_2b0[0].q), zmm2_1[0].q)
                    var_1a8 = zmm12_2
                
                if (rbx_2 != 0)
                    int64_t rax_52 = *r13_2
                    float var_204 = zmm12_2[0]
                    float var_200_1 = _mm_shuffle_ps(zmm12_2, zmm12_2, 0x55)[0]
                    float temp0_170[0x4] = _mm_shuffle_ps(zmm12_2, zmm12_2, 0xaa)
                    float var_1f8_1 = _mm_shuffle_ps(zmm12_2, zmm12_2, 0xff)[0]
                    float var_1fc_1 = temp0_170[0]
                    float temp0_172[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0x55)
                    float temp0_173[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0xaa)
                    float var_254_1 = temp0_172[0]
                    float var_258 = zmm13_2[0]
                    float var_250_1 = temp0_173[0]
                    (*(rax_52 + 0x90))(r13_2, &var_258, &var_204, zmm3_1)
                    (*(*r13_2 + 0x98))(r13_2)
                
                int64_t rax_54 = *r13_2
                float var_24c = zmm13_2[0]
                float temp0_174[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0x55)
                float temp0_175[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0xaa)
                float var_248_1 = temp0_174[0]
                float var_244_1 = temp0_175[0]
                (*(rax_54 + 0x60))(r13_2, &var_24c, zmm2_1, zmm3_1)
                int64_t rax_55 = *r13_2
                float var_1f4 = zmm12_2[0]
                float var_1f0_1 = _mm_shuffle_ps(zmm12_2, zmm12_2, 0x55)[0]
                float temp0_177[0x4] = _mm_shuffle_ps(zmm12_2, zmm12_2, 0xaa)
                float var_1e8_1 = _mm_shuffle_ps(zmm12_2, zmm12_2, 0xff)[0]
                float var_1ec_1 = temp0_177[0]
                (*(rax_55 + 0x68))(r13_2, &var_1f4)
                void* rbx_7 = *r15_1
                int32_t var_290
                sub_1409bd4b0(rbx_7 + 0x50, &var_290, *(sub_1425e1410() + 0x18))
                int64_t rax_57 = sx.q(var_290)
                void* const rcx_33
                
                if (rax_57.d == 0xffffffff)
                    rcx_33 = nullptr
                else
                    rcx_33 = *(rbx_7 + 0x50) + rax_57 * 0x18
                
                int64_t* rax_59 = rcx_33 + 8
                
                if (rcx_33 == 0)
                    rax_59 = nullptr
                
                if (rax_59 != 0)
                    void* rdi_2 = *rax_59
                    
                    if (rdi_2 != 0 && *(rdi_2 + 0x10) == sub_1425e1410())
                        float* rdx_18
                        
                        if (*(rdi_2 + 0xe4) == 0)
                            zmm2_1 = *(rdi_2 + 0xd4)
                            float zmm0_4 = zmm2_1[0]
                            
                            if (r14_1[-0x20].b == 0)
                                zmm2_1[0] = zmm2_1[0] f* *(rsi + 0x60)
                                float var_228
                                rdx_18 = &var_228
                                zmm0_4 = zmm0_4 f* *(rsi + 0x64)
                                zmm2_1[0] = zmm2_1[0] f* *(rsi + 0x68)
                                var_228 = zmm2_1[0]
                                float var_224_1 = zmm0_4
                                float var_220_1 = zmm2_1[0]
                            else
                                zmm2_1[0] = zmm2_1[0] f* r14_1[-0x1f]
                                float var_234
                                rdx_18 = &var_234
                                zmm0_4 = zmm0_4 f* r14_1[-0x1e]
                                zmm2_1[0] = zmm2_1[0] f* r14_1[-0x1d]
                                var_234 = zmm2_1[0]
                                float var_230_1 = zmm0_4
                                float var_22c_1 = zmm2_1[0]
                        else
                            float var_240
                            rdx_18 = &var_240
                            zmm1_2 = *(rdi_2 + 0xdc)
                            var_240 = *(rdi_2 + 0xd8)
                            float var_238_1 = *(rdi_2 + 0xe0)
                            float var_23c_1 = zmm1_2[0]
                        
                        (*(*r13_2 + 0xa8))(r13_2, rdx_18, zmm2_1)
                
                sub_1425e0190(r15_1, rsi)
                int32_t* rdi_3 = *(r14_1 - 0x28)
                void* r12_5 = &rdi_3[sx.q(r14_1[-8]) * 5]
                float zmm0_5[0x4]
                float zmm1_4[0x4]
                
                if (rdi_3 != r12_5)
                    void* rbx_9 = &rdi_3[2]
                    
                    do
                        int64_t rax_64 = sx.q(*rdi_3)
                        int64_t var_268_1 = *rbx_9
                        int64_t rax_66
                        
                        if (rax_64.d != 0xffffffff)
                            rax_66 = sx.q(*(*(*r15_1 + 0xf8) + (rax_64 << 2)))
                        
                        float zmm2_3[0x4]
                        float zmm7_2[0x4]
                        
                        if (rax_64.d == 0xffffffff || rax_66.d == 0xffffffff)
                            zmm0_5 = *(rbx_9 + 8)
                            zmm2_3 = var_268_1:4.d
                            zmm7_2 = var_268_1.d
                        else
                            float temp0_181[0x4] = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(*rbx_9, (*(rbx_9 + 8))[0].q), 
                                _mm_unpacklo_ps(*(rbx_9 + 4), zmm15_2)[0].q)
                            float (* rcx_40)[0x4] = rax_66 * 0x30 + *var_1c8_1
                            float temp0_182[0x4] = __mulps_xmmps_memps(temp0_181, rcx_40[2])
                            float zmm4_4[0x4] = *rcx_40
                            float temp0_183[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xc9)
                            float temp0_184[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xd2)
                            float temp0_186[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xc9), temp0_184)
                            float temp0_188[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xd2), temp0_183)
                            float temp0_189[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xff)
                            float temp0_190[0x4] = _mm_sub_ps(temp0_188, temp0_186)
                            float temp0_191[0x4] = _mm_add_ps(temp0_190, temp0_190)
                            float temp0_192[0x4] = _mm_mul_ps(temp0_189, temp0_191)
                            float temp0_193[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0xc9)
                            float temp0_194[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0xd2)
                            float temp0_195[0x4] = _mm_mul_ps(temp0_193, temp0_184)
                            float temp0_196[0x4] = _mm_mul_ps(temp0_194, temp0_183)
                            float temp0_197[0x4] = _mm_add_ps(temp0_192, temp0_182)
                            zmm7_2 = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(temp0_196, temp0_195), temp0_197), rcx_40[1])
                            zmm2_3 = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x55)
                            zmm0_5 = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xaa)
                        
                        float temp0_203[0x4] = __mulps_xmmps_memps(var_118, data_143f70a10)
                        int64_t rsi_1 = sx.q(r14_1[0x44])
                        float temp0_204[0x4] = _mm_unpacklo_ps(zmm7_2, zmm0_5[0].q)
                        float temp0_205[0x4] = _mm_rcp_ps(zmm0_1)
                        int32_t rax_67 = (rsi_1 + 1).d
                        float temp0_208[0x4] = __subps_xmmps_memps(
                            _mm_unpacklo_ps(temp0_204, _mm_unpacklo_ps(zmm2_3, zmm15_2)[0].q), 
                            zmm1_1)
                        float temp0_209[0x4] = _mm_shuffle_ps(temp0_203, temp0_203, 0xd2)
                        float temp0_210[0x4] = _mm_shuffle_ps(temp0_203, temp0_203, 0xc9)
                        float temp0_211[0x4] = _mm_shuffle_ps(temp0_203, temp0_203, 0xff)
                        zmm7_2 = __andps_xmmxud_memxud(temp0_208, data_143f709a0)
                        float temp0_214[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm7_2, zmm7_2, 0xc9), temp0_209)
                        float temp0_217[0x4] = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(zmm7_2, zmm7_2, 0xd2), temp0_210), temp0_214)
                        float temp0_218[0x4] = _mm_mul_ps(temp0_205, temp0_205)
                        float temp0_219[0x4] = _mm_add_ps(temp0_205, temp0_205)
                        float temp0_220[0x4] = _mm_add_ps(temp0_217, temp0_217)
                        float temp0_221[0x4] = _mm_mul_ps(temp0_218, zmm0_1)
                        float temp0_222[0x4] = _mm_mul_ps(temp0_211, temp0_220)
                        float temp0_223[0x4] = _mm_sub_ps(temp0_219, temp0_221)
                        float temp0_224[0x4] = _mm_add_ps(temp0_222, zmm7_2)
                        float temp0_225[0x4] = _mm_mul_ps(temp0_223, temp0_223)
                        float temp0_226[0x4] = _mm_add_ps(temp0_223, temp0_223)
                        float temp0_227[0x4] = _mm_mul_ps(temp0_225, zmm0_1)
                        float temp0_229[0x4] = __cmpps_xmmps_memps_immb(
                            __andps_xmmxud_memxud(zmm0_1, data_143f70a00), data_143f709f0, 2)
                        float temp0_230[0x4] = _mm_sub_ps(temp0_226, temp0_227)
                        float temp0_232[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_220, temp0_220, 0xc9), temp0_209)
                        float temp0_235[0x4] = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_220, temp0_220, 0xd2), temp0_210), 
                            temp0_232)
                        float zmm5_3[0x4] = _mm_and_ps(temp0_229, temp0_230 ^ zx.o(0)) ^ temp0_230
                        float temp0_237[0x4] = _mm_add_ps(temp0_235, temp0_224)
                        zmm6_2 = *(rbx_9 - 4)
                        zmm6_2[0] = zmm6_2[0] f+ r14_1[0x2d]
                        r14_1[0x44] = rax_67
                        var_2f8 = _mm_mul_ps(temp0_237, zmm5_3)
                        
                        if (rax_67 s> r14_1[0x45])
                            sub_1405a4f90(&r14_1[0x42])
                        
                        zmm1_4 = var_2f8[1]
                        rdi_3 = &rdi_3[5]
                        rbx_9 += 0x14
                        float* rax_70 = (rsi_1 << 4) + *(r14_1 + 0x108)
                        *rax_70 = var_2f8[0][0]
                        rax_70[2] = var_2f8[2][0]
                        rax_70[1] = zmm1_4[0]
                        rax_70[3] = zmm6_2[0]
                    while (rdi_3 != r12_5)
                
                int64_t rax_71 = *(r14_1 + 0x108)
                int64_t rbx_10 = *r13_2
                int64_t var_190_1 = (sx.q(r14_1[0x44]) << 4) + rax_71
                var_2f8 = rax_71.o
                (*(rbx_10 + 0x150))(r13_2, &var_2f8, 0, zx.q((*(rbx_10 + 0x158))(r13_2)))
                int32_t* rbx_11 = *(r14_1 - 0x18)
                void* rax_74 = &rbx_11[sx.q(r14_1[-4]) * 2]
                
                if (rbx_11 != rax_74)
                    do
                        int64_t rdi_4 = sx.q(r14_1[0x48])
                        int32_t r12_6 = *rbx_11
                        int32_t rax_75 = (rdi_4 + 1).d
                        r14_1[0x48] = rax_75
                        
                        if (rax_75 s> r14_1[0x49])
                            sub_1405a4cf0(&r14_1[0x46])
                        
                        *(*(r14_1 + 0x118) + (rdi_4 << 2)) = r12_6
                        int64_t rdi_5 = sx.q(r14_1[0x48])
                        int32_t r12_7 = rbx_11[1]
                        int32_t rax_77 = (rdi_5 + 1).d
                        r14_1[0x48] = rax_77
                        
                        if (rax_77 s> r14_1[0x49])
                            sub_1405a4cf0(&r14_1[0x46])
                        
                        rbx_11 = &rbx_11[2]
                        *(*(r14_1 + 0x118) + (rdi_5 << 2)) = r12_7
                    while (rbx_11 != rax_74)
                    
                    r15_1 = var_288_1
                
                int64_t rdx_25 = *(r14_1 + 0x118)
                int64_t rbx_12 = *r13_2
                int64_t var_180_1 = rdx_25 + (sx.q(r14_1[0x48]) << 2)
                var_2f8 = rdx_25.o
                (*(rbx_12 + 0x160))(r13_2, &var_2f8, 0, zx.q((*(rbx_12 + 0x168))(r13_2)))
                int64_t* rbx_13 = *(r14_1 - 8)
                int64_t* var_298_2 = rbx_13
                void* rdx_27 = &rbx_13[sx.q(*r14_1) * 5]
                var_2a0.q = rdx_27
                
                if (rbx_13 != rdx_27)
                    do
                        if (r14_1[0x4c] s< 0x20)
                            int64_t rdi_6 = sx.q(r14_1[0x50])
                            int32_t rax_82 = (rdi_6 + 1).d
                            r14_1[0x50] = rax_82
                            
                            if (rax_82 s> r14_1[0x51])
                                sub_1405a4cf0(&r14_1[0x4e])
                                rdx_27 = var_2a0.q
                            
                            *(*(r14_1 + 0x138) + (rdi_6 << 2)) = 0
                            int128_t* r15_3 = *rbx_13
                            int64_t rax_84 = sx.q(r14_1[0x50])
                            void* r12_10 = &r15_3[sx.q(rbx_13[1].d)]
                            var_2f8[0].q = *(r14_1 + 0x138)
                            
                            if (r15_3 != r12_10)
                                int32_t rdx_29 = r14_1[0x4c]
                                
                                do
                                    int32_t rax_85 = rdx_29 + 1
                                    r14_1[0x4c] = rax_85
                                    
                                    if (rax_85 s> r14_1[0x4d])
                                        sub_1405a4f90(&r14_1[0x4a])
                                        rax_85 = r14_1[0x4c]
                                    
                                    zmm1_4 = var_118
                                    int64_t rdi_7 = *(r14_1 + 0x128)
                                    float temp0_239[0x4] = _mm_add_ps(zmm1_4, zmm1_4)
                                    float temp0_240[0x4] = _mm_shuffle_ps(zmm1_4, zmm1_4, 4)
                                    int64_t rsi_3 = sx.q(rax_85) * 2
                                    float temp0_242[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_239, temp0_239, 0x29), temp0_240)
                                    float temp0_243[0x4] = _mm_mul_ps(temp0_239, zmm1_4)
                                    float temp0_246[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_239, temp0_239, 0x12), 
                                        _mm_shuffle_ps(zmm1_4, zmm1_4, 0xff))
                                    float temp0_247[0x4] =
                                        _mm_shuffle_ps(temp0_243, temp0_243, 0x1a)
                                    float temp0_248[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                                    float temp0_250[0x4] = _mm_add_ps(temp0_247, 
                                        _mm_shuffle_ps(temp0_243, temp0_243, 1))
                                    float zmm4_5[0x4] = data_143f70990
                                    float temp0_251[0x4] = _mm_add_ps(temp0_246, temp0_242)
                                    float temp0_252[0x4] = _mm_sub_ps(temp0_242, temp0_246)
                                    float temp0_253[0x4] = _mm_sub_ps(zmm4_5, temp0_250)
                                    float temp0_254[0x4] = _mm_mul_ps(temp0_251, zmm0_1)
                                    float temp0_255[0x4] = _mm_mul_ps(temp0_248, temp0_252)
                                    float zmm3_3[0x4] = __andps_xmmxud_memxud(
                                        _mm_mul_ps(temp0_253, zmm0_1), data_143f709a0)
                                    float temp0_258[0x4] = _mm_shuffle_ps(temp0_255, zmm3_3, 0x32)
                                    float temp0_260[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_254, zmm3_3, 0), temp0_258, 0x82)
                                    float temp0_261[0x4] = _mm_shuffle_ps(temp0_254, zmm3_3, 0x31)
                                    float temp0_263[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_255, zmm3_3, 0x10), temp0_261, 0x88)
                                    zmm4_5[0].q = zmm1_1 u>> 0x40
                                    float temp0_264[0x4] =
                                        _mm_shuffle_ps(temp0_254, temp0_255, 0x12)
                                    float temp0_265[0x4] = _mm_shuffle_ps(zmm1_1, zmm4_5, 0xc4)
                                    float temp0_266[0x4] = _mm_shuffle_ps(temp0_264, zmm3_3, 0xe8)
                                    var_2b8.o = temp0_265
                                    var_2e8 = temp0_260
                                    var_2d8.o = temp0_263
                                    uint32_t (* rax_86)[0x4] = sub_140631b10(&var_2e8, &var_158)
                                    var_2e8[3] = 0
                                    uint32_t zmm11_4 = (*rax_86)[5]
                                    int128_t zmm10_3 = (*rax_86)[6]
                                    uint32_t zmm6_3 = (*rax_86)[0xa]
                                    uint32_t zmm8_3 = (*rax_86)[9]
                                    int128_t zmm3_4 = rax_86[2][0]
                                    int128_t zmm9_3 = rax_86[1][0]
                                    int128_t zmm0_6
                                    zmm0_6.d = zmm10_3.d f* zmm8_3
                                    float zmm1_5 = zmm11_4 f* zmm6_3 f- zmm0_6.d
                                    zmm0_6.d = zmm9_3.d f* zmm6_3
                                    var_2e8[0] = zmm1_5
                                    zmm1_5 = zmm3_4.d f* zmm10_3.d f- zmm0_6.d
                                    zmm0_6.d = zmm3_4.d f* zmm11_4
                                    var_2e8[1] = zmm1_5
                                    var_2e8[2] = zmm9_3.d f* zmm8_3 f- zmm0_6.d
                                    int128_t zmm5_5 = (*rax_86)[2]
                                    int128_t zmm7_3 = (*rax_86)[1]
                                    int128_t zmm4_6 = *rax_86
                                    zmm0_6.d = zmm7_3.d f* zmm6_3
                                    int32_t var_2cc_1 = 0
                                    var_2c0:4.d = 0
                                    zmm1_5 = zmm5_5.d f* zmm8_3 f- zmm0_6.d
                                    zmm0_6.d = zmm5_5.d f* zmm3_4.d
                                    float zmm2_4 = zmm4_6.d f* zmm6_3 f- zmm0_6.d
                                    var_2d8.d = zmm1_5
                                    zmm0_6.d = zmm4_6.d f* zmm8_3
                                    var_2d8:4.d = zmm2_4
                                    zmm2_4 = zmm7_3.d f* zmm10_3.d
                                    zmm1_5 = zmm7_3.d f* zmm3_4.d f- zmm0_6.d
                                    zmm7_3.d = zmm7_3.d f* zmm9_3.d
                                    zmm0_6 = zmm5_5
                                    zmm5_5.d = zmm5_5.d f* zmm9_3.d
                                    zmm0_6.d = zmm0_6.d f* zmm11_4
                                    var_2d0 = zmm1_5
                                    zmm2_4 = zmm2_4 f- zmm0_6.d
                                    zmm0_6.d = zmm4_6.d f* zmm10_3.d
                                    zmm4_6.d = zmm4_6.d f* zmm11_4
                                    zmm5_5.d = zmm5_5.d f- zmm0_6.d
                                    temp0_266[0] = zmm2_4
                                    zmm4_6.d = zmm4_6.d f- zmm7_3.d
                                    var_2b8.o = data_142d3f660
                                    temp0_266[1] = zmm5_5.d
                                    var_2c0.d = zmm4_6.d
                                    float zmm0_7[0x4]
                                    int128_t zmm14_2
                                    zmm0_7, zmm14_2 = sub_14062b8d0(rax_86)
                                    var_328_1 = &var_2e8
                                    int32_t var_1d8
                                    sub_142070f60(r15_3, &var_1d8, rax_86, zmm0_7, var_328_1)
                                    zmm0_5 = var_1d8
                                    int64_t r8_11 = var_2f8[0].q
                                    int32_t var_1d4
                                    *(rdi_7 + (rsi_3 << 3) - 0xc) = var_1d4[0]
                                    *(rdi_7 + (rsi_3 << 3) - 0x10) = zmm0_5[0]
                                    int32_t var_1cc
                                    *(rdi_7 + (rsi_3 << 3) - 4) = (var_1cc ^ zmm14_2)[0]
                                    int32_t var_1d0
                                    *(rdi_7 + (rsi_3 << 3) - 8) = var_1d0[0]
                                    *(r8_11 + (rax_84 << 2) - 4) |= 1 << ((r14_1[0x4c]).b - 1)
                                    rdx_29 = r14_1[0x4c]
                                    
                                    if (rdx_29 s>= 0x20)
                                        break
                                    
                                    r15_3 = &r15_3[1]
                                while (r15_3 != r12_10)
                                
                                rbx_13 = var_298_2
                                rdx_27 = var_2a0.q
                        
                        rbx_13 = &rbx_13[5]
                        var_298_2 = rbx_13
                    while (rbx_13 != rdx_27)
                    
                    r15_1 = var_288_1
                
                int64_t rax_87 = *(r14_1 + 0x128)
                int64_t rbx_15 = *r13_2
                int64_t var_170_1 = (sx.q(r14_1[0x4c]) << 4) + rax_87
                var_2f8 = rax_87.o
                (*(rbx_15 + 0x170))(r13_2, &var_2f8, 0, zx.q((*(rbx_15 + 0x178))(r13_2)), var_328_1)
                int64_t r8_12 = *(r14_1 + 0x138)
                int64_t rbx_16 = *r13_2
                int64_t var_160_1 = r8_12 + (sx.q(r14_1[0x50]) << 2)
                var_2f8 = r8_12.o
                (*(rbx_16 + 0x180))(r13_2, &var_2f8, 0, zx.q((*(rbx_16 + 0x188))(r13_2)))
                rsi = arg2
                sub_1425e0750(r15_1, rsi, rsi + 0x6c)
                zmm12_1, zmm13_1, zmm15_1 = sub_1425de300(r15_1)
                zmm0_1 = *(rsi + 0x78)
                int32_t* rax_91
                
                if (zmm0_1[0] f<= zmm15_1.d)
                    int64_t var_210 = 0
                    rax_91 = &var_210
                    int32_t var_208_1 = 0
                else
                    float zmm2_5[0x4] = *(r14_1 - 0x50)
                    float var_21c
                    rax_91 = &var_21c
                    float zmm3_6 = 1f / zmm0_1[0]
                    float temp0_267[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x55)
                    zmm13_1[0] = zmm13_1[0] - zmm2_5[0]
                    zmm13_1[0] = zmm13_1[0] * zmm3_6
                    var_21c = zmm13_1[0]
                    float temp0_268[0x4] = _mm_shuffle_ps(zmm2_5, zmm2_5, 0x55)
                    temp0_267[0] = temp0_267[0] - temp0_268[0]
                    float temp0_269[0x4] = _mm_shuffle_ps(zmm2_5, zmm2_5, 0xaa)
                    float temp0_270[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xaa)
                    temp0_270[0] = temp0_270[0] - temp0_269[0]
                    temp0_267[0] = temp0_267[0] * zmm3_6
                    temp0_270[0] = temp0_270[0] * zmm3_6
                    float var_218_1 = temp0_267[0]
                    float var_214_1 = temp0_270[0]
                
                r12_1 = rsi + 8
                int32_t rax_92 = rax_91[2]
                r13_1 = rsi + 0x18
                *(r14_1 - 0x70) = *rax_91
                rdi_1 = 0
                r14_1[-0x1a] = rax_92
                rax_3 = var_1b8_1
                *(r14_1 - 0x40) = var_278_2
                *(r14_1 - 0x60) = zmm12_1
                *(r14_1 - 0x50) = zmm13_1
            
            r15_1 = &r15_1[0x3e]
            r14_1 = &r14_1[0x7c]
            var_288_1 = r15_1
        while (r15_1 != rax_3)
        
        r14 = arg1
    
    int64_t* rcx_71 = *(r14 + 0x18)
    
    if ((*(*rcx_71 + 0x28))(rcx_71, *(rsi + 0x78)) != 0)
        int64_t* rcx_72 = *(r14 + 0x18)
        int32_t rax_96 = (*(*rcx_72 + 0x40))(rcx_72)
        
        if (rax_96 s> 0)
            do
                int64_t* rcx_73 = *(r14 + 0x18)
                int64_t r8_14 = *rcx_73
                (*(r8_14 + 0x30))(rcx_73, zx.q(rdi_1), r8_14)
                rdi_1 += 1
            while (rdi_1 s< rax_96)
        
        int64_t* rcx_74 = *(r14 + 0x18)
        (*(*rcx_74 + 0x38))(rcx_74)
    
    void* i_2 = *(r14 + 0x20)
    result = sx.q(*(r14 + 0x28))
    
    for (void* rdi_9 = result * 0x1f0 + i_2; i_2 != rdi_9; i_2 += 0x1f0)
        if (*(i_2 + 0x60) != 0xffffffff)
            sub_1425d8070()
            *(i_2 + 0x190) = *(rsi + 0x78)
            result = zx.q(*(i_2 + 0x148) + 1) & 0x80000001
            
            if (result.d s< 0)
                result = zx.q(((result.d - 1) | 0xfffffffe) + 1)
            
            *(i_2 + 0x148) = result.d

__security_check_cookie(result_1 ^ &var_348)
return result
