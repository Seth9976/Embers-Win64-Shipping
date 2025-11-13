// 函数: sub_1400f2630
// 地址: 0x1400f2630
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
float var_e8[0x4] = arg5
uint64_t result = zx.q(arg14)

if (result.d s> 0)
    uint64_t rax = zx.q(result.d)
    int64_t rbp_1 = 0
    zmm14 = data_142d3f7c0
    zmm10 = data_142d3f7d0
    int64_t r13_1 = 0
    int64_t r12_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg12 + (r13_1 << 1)))
        int64_t r14_1 = sx.q(*(arg13 + r13_1))
        zmm13 = *(arg2 + (rbp_1 << 2))
        float var_1f8_1[0x4] = *(arg2 + (rbp_1 << 2) + 0x10)
        zmm12 = *(arg2 + (rbp_1 << 2) + 0x20)
        int128_t* rax_5 = sub_141df0be0(arg3, rdi_1.d, r12_1.d)
        zmm15 = *rax_5
        zmm11 = rax_5[1]
        zmm9 = rax_5[2]
        int32_t rax_10
        int32_t rsi_1
        int32_t r11_1
        float zmm0[0x4]
        float zmm1[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        uint32_t zmm4[0x4]
        float zmm5[0x4]
        
        if (r14_1 == -1)
            float temp0_47[0x4] = _mm_mul_ps(zmm13, zx.o(0))
            zmm2 = data_143205570
            float temp0_48[0x4] = _mm_mul_ps(temp0_47, zmm2)
            float temp0_50[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0x1b), zmm13)
            zmm3 = data_143442130
            zmm4 = _mm_mul_ps(temp0_47, zmm3)
            zmm4 = _mm_add_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_50)
            zmm1 = data_142fc92f0
            float temp0_54[0x4] = _mm_mul_ps(temp0_47, zmm1)
            zmm8 = _mm_add_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xb1), zmm4)
            float temp0_57[0x4] = _mm_mul_ps(zmm15, zx.o(0))
            zmm4 = _mm_mul_ps(temp0_57, zmm2)
            zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), zmm15)
            float temp0_61[0x4] = _mm_mul_ps(temp0_57, zmm3)
            float temp0_63[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_61, temp0_61, 1), zmm4)
            float temp0_64[0x4] = _mm_mul_ps(temp0_57, zmm1)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xb1)
            zmm0 = data_142e6da00
            uint32_t var_148[0x4]
            zmm4 = _mm_blend_ps(var_148, zmm0, 7)
            float var_158[0x4]
            float temp0_67[0x4] = _mm_blend_ps(var_158, zmm12, 7)
            var_148 = zmm4
            var_158 = temp0_67
            zmm4 = _mm_mul_ps(zmm4, temp0_67)
            r11_1 = _mm_extract_ps(zmm4, 0)
            rax_10 = _mm_extract_ps(zmm4, 1)
            zmm1 = _mm_add_ps(temp0_65, temp0_63)
            rsi_1 = _mm_extract_ps(zmm4, 2)
            uint32_t var_168[0x4]
            zmm4 = _mm_blend_ps(var_168, zmm0, 7)
            float var_178[0x4]
            zmm0 = _mm_blend_ps(var_178, zmm9, 7)
            var_168 = zmm4
            var_178 = zmm0
        else
            zmm0 = *(&arg4[r14_1] + 0xc)
            float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm13)
            zmm1 = arg4[r14_1].d
            zmm5 = *(&arg4[r14_1] + 4)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_7[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1b), temp0_3), zmm14), temp0_2)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_12[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm13, zmm13, 1), temp0_8), zmm10), temp0_7)
            zmm5 = *(&arg4[r14_1] + 8)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xb1), temp0_13)
            zmm0 = data_142d3f7b0
            zmm8 = _mm_add_ps(_mm_mul_ps(temp0_15, zmm0), temp0_12)
            zmm1 = arg7[r14_1][3]
            float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm15)
            zmm5 = arg7[r14_1][0]
            zmm7 = arg7[r14_1][1]
            float temp0_20[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm4 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0x1b), temp0_20), zmm14), 
                temp0_19)
            float temp0_25[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_29[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm15, zmm15, 1), temp0_25), zmm10), zmm4)
            zmm4 = arg7[r14_1][2]
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm1 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xb1), zmm4), zmm0), temp0_29)
            uint32_t (* rax_9)[0x4] = arg6
            float var_118[0x4]
            float temp0_37[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(_mm_blend_ps(var_118, (*rax_9)[r14_1 * 3], 1), 
                    (*rax_9)[r14_1 * 3 + 1], 0x10), 
                (*rax_9)[r14_1 * 3 + 2], 0x20)
            uint32_t var_128[0x4]
            zmm4 = _mm_blend_ps(var_128, zmm12, 7)
            var_128 = zmm4
            var_118 = temp0_37
            zmm4 = _mm_mul_ps(zmm4, temp0_37)
            r11_1 = _mm_extract_ps(zmm4, 0)
            rax_10 = _mm_extract_ps(zmm4, 1)
            rsi_1 = _mm_extract_ps(zmm4, 2)
            uint32_t (* rdx_1)[0x4] = arg8
            float var_f8[0x4]
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(_mm_blend_ps(var_f8, (*rdx_1)[r14_1 * 3], 1), 
                    (*rdx_1)[r14_1 * 3 + 1], 0x10), 
                (*rdx_1)[r14_1 * 3 + 2], 0x20)
            uint32_t var_108[0x4]
            zmm4 = _mm_blend_ps(var_108, zmm9, 7)
            var_108 = zmm4
            var_f8 = zmm0
        
        zmm4 = _mm_mul_ps(zmm4, zmm0)
        int32_t temp0_76 = _mm_extract_ps(zmm4, 0)
        int32_t temp0_77 = _mm_extract_ps(zmm4, 1)
        int32_t temp0_78 = _mm_extract_ps(zmm4, 2)
        float temp0_80[0x4] = __minss_xmmss_memss(
            __maxss_xmmss_memss((*(arg12 + (r13_1 << 1) + 4))[0], 0)[0], 0x3f800000)
        *(arg11 + (rdi_1 << 2)) = _mm_max_ss((*(arg11 + (rdi_1 << 2)))[0], temp0_80[0])[0]
        int32_t rcx_6
        int32_t rdx_2
        int32_t rdi_2
        
        if (temp0_80[0] <= 9.99999975e-06f)
            zmm2 = zmm8
            rdx_2 = rsi_1
            rcx_6 = rax_10
            rdi_2 = r11_1
            zmm11 = var_1f8_1
        else if (temp0_80[0] >= 0.999989986f)
            zmm12 = zmm9
            zmm13 = zmm15
            zmm2 = zmm1
            rdx_2 = temp0_78
            rcx_6 = temp0_77
            rdi_2 = temp0_76
        else
            zmm7 = 0x3f800000
            zmm7[0] = 1f - temp0_80[0]
            float var_1e8_1[0x4] = arg5
            float temp0_82[0x4] = _mm_mul_ps(zmm13, zmm15)
            zmm4 = _mm_add_ps(_mm_shuffle_pd(temp0_82, temp0_82, 1), temp0_82)
            float temp0_86[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x39), zmm4)
            zmm4 = _mm_cmpeq_ps(zx.o(0), temp0_86, 2)
            float temp0_88[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_86, 6)
            arg5 = _mm_and_ps(_mm_sub_ps(zx.o(0), zmm13), temp0_88)
            uint32_t temp0_92[0x4] = _mm_or_ps(_mm_and_ps(zmm4, zmm13), arg5)
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0)
            float temp0_94[0x4] = _mm_mul_ps(zmm15, temp0_93)
            float temp0_97[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_92), temp0_94)
            float temp0_98[0x4] = _mm_mul_ps(temp0_97, temp0_97)
            zmm4 = _mm_add_ps(_mm_unpackhi_pd(temp0_98, temp0_98[0].q), temp0_98)
            float temp0_101[0x4] = _mm_movehdup_ps(zmm4)
            temp0_101[0] = temp0_101[0] f+ zmm4[0]
            float temp0_102[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_101[0], 6)
            zmm4 = temp0_101
            zmm2 = 0x3f000000
            zmm4[0] = zmm4[0] f* 0.5f
            float temp0_103[0x4] = _mm_rsqrt_ss(temp0_101[0], temp0_101[0])
            temp0_103[0] = temp0_103[0] * temp0_103[0]
            temp0_103[0] = temp0_103[0] f* zmm4[0]
            zmm2[0] = 0.5f - temp0_103[0]
            zmm2[0] = zmm2[0] * temp0_103[0]
            zmm2[0] = zmm2[0] + temp0_103[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] f* zmm4[0]
            zmm4 = 0x3f000000
            zmm4[0] = 0.5f - zmm2[0]
            zmm4[0] = zmm4[0] f* zmm2[0]
            zmm4[0] = zmm4[0] f+ zmm2[0]
            zmm13 = _mm_andnot_ps(temp0_102, 0xffffffff)
            zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_97)
            float temp0_107[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            uint32_t temp0_108[0x4] = _mm_and_ps(zmm4, temp0_107)
            zmm0 = data_142d3f660
            zmm14 = zmm0
            zmm13 = _mm_or_ps(_mm_andnot_ps(temp0_107, zmm0), temp0_108)
            zmm11 = _mm_add_ps(var_1f8_1, _mm_mul_ps(_mm_sub_ps(zmm11, var_1f8_1), temp0_93))
            zmm12 = _mm_add_ps(zmm12, _mm_mul_ps(_mm_sub_ps(zmm9, zmm12), temp0_93))
            zmm8[0] = zmm8[0] * zmm1[0]
            float temp0_117[0x4] = _mm_movehdup_ps(zmm8)
            zmm4 = _mm_movehdup_ps(zmm1)
            zmm4[0] = zmm4[0] f* temp0_117[0]
            zmm4[0] = zmm4[0] f+ zmm8[0]
            zmm2 = _mm_unpackhi_pd(zmm8, zmm8[0].q)
            zmm3 = _mm_unpackhi_pd(zmm1, zmm1[0].q)
            zmm3[0] = zmm3[0] * zmm2[0]
            zmm3[0] = zmm3[0] f+ zmm4[0]
            float temp0_121[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe7)
            zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0xe7)
            zmm4[0] = zmm4[0] f* temp0_121[0]
            zmm4[0] = zmm4[0] f+ zmm3[0]
            int64_t rcx_5
            rcx_5.b = zmm4[0] f>= 0f
            float temp0_123[0x4] = _mm_mul_ps(temp0_93, zmm1)
            zmm7[0] = zmm7[0] f* *(&data_143442128 + (rcx_5 << 2))
            float temp0_126[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm8), temp0_123)
            zmm10 = data_142d3f7d0
            float temp0_127[0x4] = _mm_mul_ps(temp0_126, temp0_126)
            float temp0_129[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_127, temp0_127[0].q), temp0_127)
            zmm4 = _mm_movehdup_ps(temp0_129)
            zmm4[0] = zmm4[0] f+ temp0_129[0]
            float temp0_131[0x4] = _mm_cmpeq_ss(0x322bcc77, zmm4[0], 6)
            zmm3 = zmm4
            zmm3[0] = zmm3[0] * 0.5f
            zmm4 = _mm_rsqrt_ss(zmm4[0], zmm4[0])
            arg5 = zmm4
            arg5[0] = arg5[0] f* zmm4[0]
            arg5[0] = arg5[0] * zmm3[0]
            zmm0 = 0x3f000000
            zmm0[0] = 0.5f - arg5[0]
            zmm2 = _mm_andnot_ps(temp0_131, 0xffffffff)
            zmm0[0] = zmm0[0] f* zmm4[0]
            zmm0[0] = zmm0[0] f+ zmm4[0]
            zmm4 = zmm0
            zmm4[0] = zmm4[0] f* zmm0[0]
            zmm4[0] = zmm4[0] f* zmm3[0]
            zmm3 = 0x3f000000
            zmm3[0] = 0.5f f- zmm4[0]
            zmm3[0] = zmm3[0] * zmm0[0]
            zmm3[0] = zmm3[0] + zmm0[0]
            float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_126)
            float temp0_136[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm3 = _mm_and_ps(temp0_135, temp0_136)
            zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_136, zmm14), zmm3)
            float var_1c8[0x4]
            float temp0_142[0x4] = _mm_insert_ps(
                _mm_insert_ps(_mm_blend_epi16(var_1c8, zx.o(temp0_76), 3), zx.o(temp0_77), 0x10), 
                zx.o(temp0_78), 0x20)
            zmm0 = zx.o(r11_1)
            zmm3 = zx.o(rax_10)
            zmm4 = zx.o(rsi_1)
            float var_1d8[0x4]
            float temp0_145[0x4] = _mm_insert_ps(
                _mm_insert_ps(_mm_blend_epi16(var_1d8, zmm0, 3), zmm3, 0x10), zmm4, 0x20)
            var_1c8 = temp0_142
            var_1d8 = temp0_145
            float var_188[0x4]
            float temp0_147[0x4] = _mm_blend_ps(var_188, _mm_sub_ps(temp0_142, temp0_145), 7)
            zmm14 = data_142d3f7c0
            float var_198[0x4]
            float temp0_148[0x4] = _mm_blend_ps(var_198, temp0_80, 3)
            float var_1a8[0x4]
            float temp0_150[0x4] = _mm_insert_ps(_mm_blend_epi16(var_1a8, zmm0, 3), zmm3, 0x10)
            float temp0_151[0x4] = _mm_shuffle_ps(temp0_148, temp0_148, 0xc0)
            float temp0_152[0x4] = _mm_insert_ps(temp0_150, zmm4, 0x20)
            var_188 = temp0_147
            var_198 = temp0_151
            arg5 = var_1e8_1
            float var_1b8[0x4]
            float temp0_154[0x4] = _mm_blend_ps(var_1b8, _mm_mul_ps(temp0_147, temp0_151), 7)
            var_1a8 = temp0_152
            var_1b8 = temp0_154
            float temp0_155[0x4] = _mm_add_ps(temp0_152, temp0_154)
            rdi_2 = _mm_extract_ps(temp0_155, 0)
            rcx_6 = _mm_extract_ps(temp0_155, 1)
            rdx_2 = _mm_extract_ps(temp0_155, 2)
        
        *(arg4 + (r13_1 << 2)) = zmm8
        *(arg7 + (r13_1 << 2)) = zmm1
        *(arg6 + rbp_1) = r11_1
        *(arg6 + rbp_1 + 4) = rax_10
        *(arg6 + rbp_1 + 8) = rsi_1
        *(arg8 + rbp_1) = temp0_76
        *(arg8 + rbp_1 + 4) = temp0_77
        *(arg8 + rbp_1 + 8) = temp0_78
        float (* rbx_3)[0x4]
        int32_t* rsi_2
        
        if (r14_1.d == 0xffffffff)
            rsi_2 = arg10
            rbx_3 = arg9
        else
            rbx_3 = arg9
            float temp0_159[0x4] = __mulps_xmmps_memps(rbx_3[r14_1], data_142d3f690)
            float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_159, temp0_159, 0xff), zmm2)
            float temp0_162[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0)
            zmm4 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0x1b), temp0_162), zmm14), temp0_161)
            float temp0_167[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0x55)
            float temp0_171[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0x4e), temp0_167), zmm10), zmm4)
            float temp0_172[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xaa)
            float temp0_176[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0xb1), temp0_172), 
                    data_142d3f7b0), 
                temp0_171)
            float temp0_177[0x4] = _mm_mul_ps(temp0_176, temp0_176)
            float temp0_179[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_177, temp0_177[0].q), temp0_177)
            float temp0_180[0x4] = _mm_movehdup_ps(temp0_179)
            temp0_180[0] = temp0_180[0] + temp0_179[0]
            float temp0_181[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_180[0], 6)
            temp0_180[0] = temp0_180[0] * 0.5f
            float temp0_182[0x4] = _mm_rsqrt_ss(temp0_180[0], temp0_180[0])
            zmm4 = temp0_182
            zmm4[0] = zmm4[0] f* temp0_182[0]
            zmm4[0] = zmm4[0] f* temp0_180[0]
            zmm5 = 0x3f000000
            zmm5[0] = 0.5f f- zmm4[0]
            zmm13 = _mm_andnot_ps(temp0_181, 0xffffffff)
            zmm5[0] = zmm5[0] * temp0_182[0]
            zmm5[0] = zmm5[0] + temp0_182[0]
            zmm5[0] = zmm5[0] * zmm5[0]
            zmm5[0] = zmm5[0] * temp0_180[0]
            zmm3 = 0x3f000000
            zmm3[0] = 0.5f - zmm5[0]
            zmm3[0] = zmm3[0] * zmm5[0]
            zmm3[0] = zmm3[0] + zmm5[0]
            float temp0_185[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_176)
            float temp0_186[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
            zmm3 = _mm_and_ps(temp0_185, temp0_186)
            zmm13 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_186, data_142d3f660), zmm3)
            int64_t rax_14 = r14_1 * 3
            rsi_2 = arg10
            float temp0_190[0x4] =
                __insertps_xmmps_memd_immb(zx.o(*(rsi_2 + (rax_14 << 2))), rsi_2[rax_14 + 2], 0x28)
            float temp0_191[0x4] = _mm_rcp_ps(temp0_190)
            float temp0_192[0x4] = _mm_mul_ps(temp0_190, temp0_191)
            arg5 = _mm_blend_ps(arg5, 
                _mm_and_ps(_mm_mul_ps(_mm_sub_ps(data_142fc9600, temp0_192), temp0_191), 
                    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(temp0_190, data_142d3f770), 
                        data_142d3f5c0, 6)), 
                7)
            float var_138[0x4]
            float temp0_201[0x4] = _mm_insert_ps(
                _mm_insert_ps(_mm_blend_epi16(var_138, zx.o(rdi_2), 3), zx.o(rcx_6), 0x10), 
                zx.o(rdx_2), 0x20)
            var_138 = temp0_201
            zmm12 = __blendps_xmmdq_memdq_immb(_mm_mul_ps(temp0_201, arg5), data_142d8f750, 8)
        
        *(rbx_3 + (r13_1 << 2)) = zmm2
        *(rsi_2 + rbp_1) = rdi_2
        *(rsi_2 + rbp_1 + 4) = rcx_6
        *(rsi_2 + rbp_1 + 8) = rdx_2
        result = arg1
        *(result + (rbp_1 << 2)) = zmm13
        *(result + (rbp_1 << 2) + 0x10) = zmm11
        *(result + (rbp_1 << 2) + 0x20) = zmm12
        r12_1 += 1
        r13_1 += 4
        rbp_1 += 0xc
    while (rax != r12_1)

return result
