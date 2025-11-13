// 函数: sub_1400f4f30
// 地址: 0x1400f4f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
float zmm9[0x4]
float var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
uint64_t result = zx.q(arg13)

if (result.d s> 0)
    uint64_t rax = zx.q(result.d)
    int64_t rbp_1 = 0
    zmm8 = data_142d3f7c0
    zmm11 = data_142d3f7b0
    zmm6 = zx.o(0)
    int64_t r13_1 = 0
    int64_t r12_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg11 + (r13_1 << 1)))
        int64_t r14_1 = sx.q(*(arg12 + r13_1))
        zmm14 = *(arg2 + (rbp_1 << 2))
        uint128_t var_208_1 = *(arg2 + (rbp_1 << 2) + 0x10)
        zmm9 = *(arg2 + (rbp_1 << 2) + 0x20)
        int128_t* rax_5 = sub_141df0be0(arg3, rdi_1.d, r12_1.d)
        zmm12 = *rax_5
        zmm7 = rax_5[1]
        zmm15 = rax_5[2]
        float rcx_3
        float rsi_1
        float r8_1
        float r9
        float r10_1
        float r11_1
        float zmm0[0x4]
        uint128_t zmm1
        uint32_t zmm2[0x4]
        float zmm4[0x4]
        float zmm5[0x4]
        
        if (r14_1 == -1)
            float temp0_51[0x4] = _mm_mul_ps(zmm14, zmm6)
            zmm0 = data_143205570
            zmm1 = _mm_mul_ps(temp0_51, zmm0)
            zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x1b), zmm14)
            zmm2 = data_143442130
            float temp0_55[0x4] = _mm_mul_ps(temp0_51, zmm2)
            float temp0_57[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_55, temp0_55, 1), zmm1)
            zmm1 = data_142fc92f0
            float temp0_58[0x4] = _mm_mul_ps(temp0_51, zmm1)
            zmm10 = _mm_add_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xb1), temp0_57)
            float temp0_61[0x4] = _mm_mul_ps(zmm12, zmm6)
            float temp0_62[0x4] = _mm_mul_ps(temp0_61, zmm0)
            float temp0_64[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x1b), zmm12)
            float temp0_65[0x4] = _mm_mul_ps(temp0_61, zmm2)
            float temp0_67[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_65, temp0_65, 1), temp0_64)
            float temp0_68[0x4] = _mm_mul_ps(temp0_61, zmm1)
            zmm13 = _mm_add_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xb1), temp0_67)
            zmm2 = data_142e6da00
            float var_188[0x4]
            float temp0_72[0x4] = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_188, zmm2, 0x23), 0x24)
            float var_178[0x4]
            float temp0_74[0x4] = _mm_shuffle_ps(zmm9, _mm_shuffle_ps(var_178, zmm9, 0x23), 0x24)
            float temp0_75[0x4] = _mm_mul_ps(temp0_72, temp0_74)
            r11_1 = temp0_75[0]
            zmm4 = _mm_shuffle_epi32(temp0_75, 0x4e)
            rcx_3 = _mm_shuffle_ps(temp0_75, temp0_75, 0xe5)[0]
            rsi_1 = zmm4[0]
            float var_168[0x4]
            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_168, zmm2, 0x23), 0x24)
            float var_158[0x4]
            float temp0_81[0x4] = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(var_158, zmm15, 0x23), 0x24)
            float temp0_82[0x4] = _mm_mul_ps(zmm2, temp0_81)
            r8_1 = temp0_82[0]
            zmm0 = zmm7
            zmm7 = _mm_shuffle_epi32(temp0_82, 0x4e)
            r9 = _mm_shuffle_ps(temp0_82, temp0_82, 0xe5)[0]
            r10_1 = zmm7[0]
            zmm11 = data_142d3f7b0
            zmm7 = zmm0
            var_168 = zmm2
            var_188 = temp0_72
            var_158 = temp0_81
            var_178 = temp0_74
            zmm6 = zx.o(0)
        else
            zmm0 = *(&arg4[r14_1] + 0xc)
            float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm14)
            zmm1 = arg4[r14_1].d
            zmm5 = *(&arg4[r14_1] + 4)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_7[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0x1b), zmm1), zmm8), temp0_2)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm1 = _mm_mul_ps(_mm_shuffle_pd(zmm14, zmm14, 1), temp0_8)
            zmm0 = data_142d3f7d0
            zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, zmm0), temp0_7)
            zmm5 = *(&arg4[r14_1] + 8)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm10 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xb1), temp0_13), zmm11), zmm1)
            zmm1 = arg6[r14_1][3]
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm12)
            zmm5 = arg6[r14_1][0]
            zmm6 = arg6[r14_1][1]
            float temp0_20[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_24[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), temp0_20), zmm8), zmm1)
            float temp0_25[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_29[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm12, zmm12, 1), temp0_25), zmm0), temp0_24)
            zmm4 = arg6[r14_1][2]
            float temp0_30[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm13 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xb1), temp0_30), zmm11), 
                temp0_29)
            float (* rcx_2)[0x4] = arg5
            zmm4 = (*rcx_2)[r14_1 * 3]
            float var_148[0x4]
            float temp0_35[0x4] = __shufps_xmmps_memps_immb((*rcx_2)[r14_1 * 3 + 2], var_148, 0x30)
            float temp0_37[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps((*rcx_2)[r14_1 * 3 + 1], zmm4, 0), temp0_35, 0x82)
            float var_138[0x4]
            float temp0_39[0x4] = _mm_shuffle_ps(zmm9, _mm_shuffle_ps(var_138, zmm9, 0x23), 0x24)
            var_138 = temp0_39
            float temp0_40[0x4] = _mm_mul_ps(temp0_39, temp0_37)
            r11_1 = temp0_40[0]
            zmm4 = _mm_shuffle_epi32(temp0_40, 0x4e)
            rcx_3 = _mm_shuffle_ps(temp0_40, temp0_40, 0xe5)[0]
            rsi_1 = zmm4[0]
            float (* rdx_1)[0x4] = arg7
            zmm4 = (*rdx_1)[r14_1 * 3]
            float var_108[0x4]
            float temp0_43[0x4] = __shufps_xmmps_memps_immb((*rdx_1)[r14_1 * 3 + 2], var_108, 0x30)
            float temp0_45[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps((*rdx_1)[r14_1 * 3 + 1], zmm4, 0), temp0_43, 0x82)
            float var_f8[0x4]
            float temp0_47[0x4] = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(var_f8, zmm15, 0x23), 0x24)
            var_f8 = temp0_47
            float temp0_48[0x4] = _mm_mul_ps(temp0_47, temp0_45)
            r8_1 = temp0_48[0]
            zmm6 = _mm_shuffle_epi32(temp0_48, 0x4e)
            r9 = _mm_shuffle_ps(temp0_48, temp0_48, 0xe5)[0]
            r10_1 = zmm6[0]
            zmm6 = zx.o(0)
            var_148 = temp0_37
            var_108 = temp0_45
        
        float temp0_86[0x4] = __minss_xmmss_memss(
            _mm_max_ss((*(arg11 + (r13_1 << 1) + 4))[0], zmm6[0])[0], 0x3f800000)
        *(arg10 + (rdi_1 << 2)) = _mm_max_ss((*(arg10 + (rdi_1 << 2)))[0], temp0_86[0])[0]
        float rax_13
        float rdx_2
        float rdi_2
        float zmm3[0x4]
        
        if (temp0_86[0] <= 9.99999975e-06f)
            zmm2 = zmm10
            rdx_2 = rsi_1
            rdi_2 = rcx_3
            rax_13 = r11_1
            zmm15 = var_208_1
        else if (temp0_86[0] >= 0.999989986f)
            zmm9 = zmm15
            zmm15 = zmm7
            zmm14 = zmm12
            zmm2 = zmm13
            rdx_2 = r10_1
            rdi_2 = r9
            rax_13 = r8_1
        else
            zmm11 = 0x3f800000
            zmm11[0] = 1f - temp0_86[0]
            zmm2 = _mm_mul_ps(zmm14, zmm12)
            float temp0_90[0x4] = _mm_add_ps(_mm_shuffle_pd(zmm2, zmm2, 1), zmm2)
            zmm2 = _mm_add_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0x39), temp0_90)
            float temp0_93[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2, 2)
            float temp0_94[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2, 6)
            uint32_t temp0_96[0x4] = _mm_and_ps(_mm_sub_ps(zx.o(0), zmm14), temp0_94)
            zmm3 = _mm_or_ps(_mm_and_ps(temp0_93, zmm14), temp0_96)
            float temp0_99[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0)
            float temp0_100[0x4] = _mm_mul_ps(zmm12, temp0_99)
            float temp0_103[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm3), temp0_100)
            zmm2 = _mm_mul_ps(temp0_103, temp0_103)
            float temp0_106[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm2, zmm2[0].q), zmm2)
            zmm2 = _mm_shuffle_ps(temp0_106, temp0_106, 0xe5)
            zmm2[0] = zmm2[0] f+ temp0_106[0]
            float temp0_108[0x4] = _mm_cmpeq_ss(0x322bcc77, zmm2[0], 6)
            zmm3 = zmm2
            zmm12 = 0x3f000000
            zmm3[0] = zmm3[0] * 0.5f
            zmm2 = _mm_rsqrt_ss(zmm2[0], zmm2[0])
            zmm4 = zmm2
            zmm4[0] = zmm4[0] f* zmm2[0]
            zmm4[0] = zmm4[0] * zmm3[0]
            zmm6 = zmm9
            zmm9 = zmm15
            zmm15 = zmm7
            zmm7 = 0x3f000000
            zmm7[0] = 0.5f - zmm4[0]
            zmm7[0] = zmm7[0] f* zmm2[0]
            zmm7[0] = zmm7[0] f+ zmm2[0]
            zmm2 = zmm7
            zmm2[0] = zmm2[0] f* zmm7[0]
            zmm2[0] = zmm2[0] f* zmm3[0]
            zmm3 = 0x3f000000
            zmm3[0] = 0.5f f- zmm2[0]
            zmm3[0] = zmm3[0] * zmm7[0]
            zmm3[0] = zmm3[0] + zmm7[0]
            zmm14 = _mm_andnot_ps(temp0_108, 0xffffffff)
            float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_103)
            float temp0_113[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            zmm3 = _mm_and_ps(temp0_112, temp0_113)
            zmm8 = data_142d3f660
            zmm14 = _mm_or_ps(_mm_andnot_ps(temp0_113, zmm8), zmm3)
            zmm1 = _mm_add_ps(var_208_1, _mm_mul_ps(_mm_sub_ps(zmm15, var_208_1), temp0_99))
            zmm9 = _mm_add_ps(zmm6, _mm_mul_ps(_mm_sub_ps(zmm9, zmm6), temp0_99))
            zmm15 = zmm1
            zmm2 = zmm10
            zmm2[0] = zmm2[0] f* zmm13[0]
            float temp0_123[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe5)
            float temp0_124[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xe5)
            temp0_124[0] = temp0_124[0] * temp0_123[0]
            temp0_124[0] = temp0_124[0] f+ zmm2[0]
            zmm2 = _mm_unpackhi_pd(zmm10, zmm10[0].q)
            zmm3 = _mm_unpackhi_pd(zmm13, zmm13[0].q)
            zmm3[0] = zmm3[0] f* zmm2[0]
            zmm3[0] = zmm3[0] + temp0_124[0]
            zmm2 = _mm_shuffle_ps(zmm10, zmm10, 0xe7)
            float temp0_128[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xe7)
            temp0_128[0] = temp0_128[0] f* zmm2[0]
            temp0_128[0] = temp0_128[0] + zmm3[0]
            int64_t rax_12
            rax_12.b = temp0_128[0] >= 0f
            float temp0_129[0x4] = _mm_mul_ps(temp0_99, zmm13)
            zmm11[0] = zmm11[0] f* *(&data_143442128 + (rax_12 << 2))
            float temp0_132[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm10), temp0_129)
            zmm2 = _mm_mul_ps(temp0_132, temp0_132)
            float temp0_135[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm2, zmm2[0].q), zmm2)
            float temp0_136[0x4] = _mm_shuffle_ps(temp0_135, temp0_135, 0xe5)
            temp0_136[0] = temp0_136[0] + temp0_135[0]
            zmm2 = _mm_cmpeq_ss(0x322bcc77, temp0_136[0], 6)
            temp0_136[0] = temp0_136[0] * 0.5f
            float temp0_138[0x4] = _mm_rsqrt_ss(temp0_136[0], temp0_136[0])
            temp0_138[0] = temp0_138[0] * temp0_138[0]
            temp0_138[0] = temp0_138[0] * temp0_136[0]
            zmm7 = 0x3f000000
            zmm7[0] = 0.5f - temp0_138[0]
            zmm7[0] = zmm7[0] * temp0_138[0]
            zmm7[0] = zmm7[0] + temp0_138[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm7[0] = zmm7[0] * temp0_136[0]
            zmm12[0] = 0.5f - zmm7[0]
            uint32_t temp0_139[0x4] = _mm_andnot_ps(zmm2, 0xffffffff)
            zmm12[0] = zmm12[0] * zmm7[0]
            zmm12[0] = zmm12[0] + zmm7[0]
            float temp0_141[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), temp0_132)
            zmm2 = _mm_shuffle_ps(temp0_139, temp0_139, 0)
            zmm12 = _mm_and_ps(temp0_141, zmm2)
            zmm2 = _mm_or_ps(_mm_andnot_ps(zmm2, zmm8), zmm12)
            float var_1e8[0x4]
            float temp0_148[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(r9), zx.o(r8_1), 0), 
                __shufps_xmmps_memps_immb(zx.o(r10_1), var_1e8, 0x30), 0x82)
            zmm1 = _mm_shuffle_ps(zx.o(rcx_3), zx.o(r11_1), 0)
            zmm7 = zx.o(rsi_1)
            float var_198[0x4]
            float temp0_151[0x4] =
                _mm_shuffle_ps(zmm1, __shufps_xmmps_memps_immb(zmm7, var_198, 0x30), 0x82)
            var_198 = temp0_151
            float temp0_152[0x4] = _mm_sub_ps(temp0_148, temp0_151)
            float var_1d8[0x4]
            float temp0_154[0x4] =
                _mm_shuffle_ps(temp0_152, _mm_shuffle_ps(var_1d8, temp0_152, 0x23), 0x24)
            float var_1c8[0x4]
            float temp0_156[0x4] =
                _mm_shuffle_ps(temp0_86, _mm_shuffle_ps(var_1c8, temp0_86, 3), 0x20)
            float var_1b8[0x4]
            float temp0_157[0x4] = __shufps_xmmps_memps_immb(zmm7, var_1b8, 0x30)
            float temp0_158[0x4] = _mm_mul_ps(temp0_154, temp0_156)
            zmm1 = _mm_shuffle_ps(zmm1, temp0_157, 0x82)
            float var_1a8[0x4]
            float temp0_161[0x4] =
                _mm_shuffle_ps(temp0_158, _mm_shuffle_ps(var_1a8, temp0_158, 0x23), 0x24)
            float temp0_162[0x4] = _mm_add_ps(zmm1, temp0_161)
            rax_13 = temp0_162[0]
            zmm8 = _mm_shuffle_epi32(temp0_162, 0x4e)
            rdi_2 = _mm_shuffle_ps(temp0_162, temp0_162, 0xe5)[0]
            zmm11 = data_142d3f7b0
            rdx_2 = zmm8[0]
            zmm8 = data_142d3f7c0
            var_1e8 = temp0_148
            var_1b8 = zmm1
            var_1d8 = temp0_154
            var_1a8 = temp0_161
            zmm6 = zx.o(0)
            var_1c8 = temp0_156
        
        *(arg4 + (r13_1 << 2)) = zmm10
        *(arg6 + (r13_1 << 2)) = zmm13
        *(arg5 + rbp_1) = r11_1
        *(arg5 + rbp_1 + 4) = rcx_3
        *(arg5 + rbp_1 + 8) = rsi_1
        *(arg7 + rbp_1) = r8_1
        *(arg7 + rbp_1 + 4) = r9
        *(arg7 + rbp_1 + 8) = r10_1
        uint128_t* rbx_3
        float* rsi_2
        
        if (r14_1.d == 0xffffffff)
            rsi_2 = arg9
            rbx_3 = arg8
        else
            rbx_3 = arg8
            zmm1 = __mulps_xmmps_memps(rbx_3[r14_1], data_142d3f690)
            float temp0_167[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xff), zmm2)
            float temp0_168[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_172[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0x1b), temp0_168), zmm8), temp0_167)
            float temp0_173[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            float temp0_177[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0x4e), temp0_173), 
                    data_142d3f7d0), 
                temp0_172)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            float temp0_182[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0xb1), zmm1), zmm11), temp0_177)
            zmm1 = _mm_mul_ps(temp0_182, temp0_182)
            float temp0_185[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm1, zmm1.q), zmm1)
            zmm1.d = _mm_shuffle_ps(temp0_185, temp0_185, 0xe5).d f+ temp0_185[0]
            float temp0_187[0x4] = _mm_cmpeq_ss(0x322bcc77, zmm1.d, 6)
            zmm3 = zmm1
            zmm3[0] = zmm3[0] * 0.5f
            zmm1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
            zmm4 = zmm1
            zmm4[0] = zmm4[0] f* zmm1.d
            zmm4[0] = zmm4[0] * zmm3[0]
            zmm5 = 0x3f000000
            zmm5[0] = 0.5f - zmm4[0]
            zmm14 = _mm_andnot_ps(temp0_187, 0xffffffff)
            zmm5[0] = zmm5[0] f* zmm1.d
            zmm5[0] = zmm5[0] f+ zmm1.d
            zmm1.d = zmm5.d f* zmm5[0]
            zmm1.d = zmm1.d f* zmm3[0]
            zmm3 = 0x3f000000
            zmm3[0] = 0.5f f- zmm1.d
            zmm3[0] = zmm3[0] * zmm5[0]
            zmm3[0] = zmm3[0] + zmm5[0]
            float temp0_191[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_182)
            float temp0_192[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            zmm3 = _mm_and_ps(temp0_191, temp0_192)
            zmm14 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_192, data_142d3f660), zmm3)
            int64_t rcx_7 = r14_1 * 3
            rsi_2 = arg9
            zmm1 = *(rsi_2 + (rcx_7 << 2)) | rsi_2[rcx_7 + 2][0].q << 0x40
            zmm0 = zmm1
            float temp0_196[0x4] = _mm_rcp_ps(zmm1)
            zmm1 = _mm_mul_ps(zmm1, temp0_196)
            zmm4 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(data_142fc9600, zmm1), temp0_196), 
                __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm0, data_142d3f770), 
                    data_142d3f5c0, 6))
            float var_128[0x4]
            float temp0_204[0x4] = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(var_128, zmm4, 0x23), 0x24)
            float var_118[0x4]
            float temp0_207[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(rdi_2), zx.o(rax_13), 0), 
                __shufps_xmmps_memps_immb(zx.o(rdx_2), var_118, 0x30), 0x82)
            var_118 = temp0_207
            zmm9 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_207, temp0_204), data_142d3f5a0)
            var_128 = temp0_204
        
        *(rbx_3 + (r13_1 << 2)) = zmm2
        *(rsi_2 + rbp_1) = rax_13
        *(rsi_2 + rbp_1 + 4) = rdi_2
        *(rsi_2 + rbp_1 + 8) = rdx_2
        result = arg1
        *(result + (rbp_1 << 2)) = zmm14
        *(result + (rbp_1 << 2) + 0x10) = zmm15
        *(result + (rbp_1 << 2) + 0x20) = zmm9
        r12_1 += 1
        r13_1 += 4
        rbp_1 += 0xc
    while (rax != r12_1)

return result
