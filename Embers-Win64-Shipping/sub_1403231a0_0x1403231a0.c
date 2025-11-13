// 函数: sub_1403231a0
// 地址: 0x1403231a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_18[0x4] = zmm15
float zmm14[0x4]
float var_28[0x4] = zmm14
float zmm13[0x4]
float var_38[0x4] = zmm13
float zmm12[0x4]
float var_48[0x4] = zmm12
uint32_t zmm11[0x4]
uint32_t var_58[0x4] = zmm11
float zmm10[0x4]
float var_68[0x4] = zmm10
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm8[0x4]
float var_88[0x4] = zmm8
uint32_t zmm7[0x4]
uint32_t var_98[0x4] = zmm7
float zmm6[0x4]
float var_a8[0x4] = zmm6
uint64_t result = zx.q(_mm_movemask_ps(*arg3))
int32_t i = arg2 & 0xfffffffc
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
uint32_t zmm5[0x4]

if (result.d != 0xf)
    if (i s> 0)
        result = 0
        
        do
            int64_t rax_4 = sx.q(result.d)
            zmm14 = arg1[rax_4 * 3]
            zmm2 = arg1[sx.q((rax_4 + 1).d) * 3]
            zmm7 = arg1[sx.q((rax_4 + 2).d) * 3]
            float temp0_82[0x4] = _mm_mul_ps(zmm14, zmm14)
            float temp0_84[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_82, temp0_82, 1), temp0_82)
            float temp0_86[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0x39), temp0_84)
            zmm15 = data_142d3f5c0
            float temp0_87[0x4] = _mm_cmpeq_ps(zmm15, temp0_86, 6)
            zmm0 = data_142ef1890
            zmm1 = zmm0
            zmm10 = zmm0
            float temp0_88[0x4] = _mm_cmpeq_ps(zmm15, temp0_86, 2)
            float temp0_89[0x4] = _mm_mul_ps(zmm2, zmm2)
            float temp0_91[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_89, temp0_89, 1), temp0_89)
            float temp0_92[0x4] = _mm_rsqrt_ps(temp0_86)
            float temp0_94[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0x39), temp0_91)
            float temp0_95[0x4] = _mm_cmpeq_ps(zmm15, temp0_94, 6)
            zmm0 = zmm15
            float temp0_96[0x4] = _mm_mul_ps(temp0_86, temp0_92)
            float temp0_97[0x4] = _mm_cmpeq_ps(zmm15, temp0_94, 2)
            float temp0_98[0x4] = _mm_rsqrt_ps(temp0_94)
            float temp0_99[0x4] = _mm_mul_ps(temp0_94, temp0_98)
            zmm15 = zmm7
            float temp0_100[0x4] = _mm_mul_ps(temp0_96, temp0_92)
            zmm11 = _mm_mul_ps(zmm7, zmm7)
            float temp0_103[0x4] = _mm_add_ps(_mm_shuffle_pd(zmm11, zmm11, 1), zmm11)
            float temp0_104[0x4] = _mm_mul_ps(temp0_99, temp0_98)
            zmm7 = _mm_add_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0x39), temp0_103)
            float temp0_107[0x4] = _mm_cmpeq_ps(zmm0, zmm7, 6)
            float temp0_108[0x4] = _mm_sub_ps(zmm1, temp0_100)
            zmm11 = _mm_cmpeq_ps(zmm0, zmm7, 2)
            float temp0_110[0x4] = _mm_rsqrt_ps(zmm7)
            zmm7 = _mm_mul_ps(zmm7, temp0_110)
            zmm5 = _mm_sub_ps(zmm10, temp0_104)
            float temp0_114[0x4] = _mm_sub_ps(zmm10, _mm_mul_ps(zmm7, temp0_110))
            float temp0_115[0x4] = _mm_mul_ps(temp0_108, temp0_92)
            zmm5 = _mm_mul_ps(zmm5, temp0_98)
            float temp0_117[0x4] = _mm_mul_ps(temp0_114, temp0_110)
            zmm8 = arg1[sx.q((rax_4 + 3).d) * 3]
            zmm12 = data_142d3f640
            float temp0_119[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_115, zmm12), zmm14)
            zmm14 = data_142d3f660
            zmm6 = _mm_and_ps(temp0_87, zmm14)
            zmm5 = _mm_mul_ps(zmm5, zmm12)
            float temp0_122[0x4] = _mm_mul_ps(temp0_117, zmm12)
            zmm5 = __mulps_xmmps_memps(zmm5, zmm2)
            float temp0_124[0x4] = _mm_mul_ps(temp0_122, zmm15)
            float temp0_125[0x4] = _mm_mul_ps(zmm8, zmm8)
            zmm7 = _mm_shuffle_pd(temp0_125, temp0_125, 1)
            zmm1 = __andps_xmmxud_memxud(temp0_119, temp0_88)
            zmm7 = _mm_add_ps(zmm7, temp0_125)
            float temp0_130[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0x39), zmm7)
            zmm9 = data_142d3f5c0
            zmm6 = _mm_or_ps(zmm6, zmm1)
            zmm7 = _mm_cmpeq_ps(zmm9, temp0_130, 6)
            float temp0_133[0x4] = _mm_cmpeq_ps(zmm9, temp0_130, 2)
            float temp0_134[0x4] = _mm_rsqrt_ps(temp0_130)
            uint32_t temp0_135[0x4] = _mm_and_ps(zmm5, temp0_97)
            float temp0_137[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_130, temp0_134), temp0_134)
            float temp0_138[0x4] = _mm_sub_ps(data_142ef1890, temp0_137)
            zmm3 = _mm_and_ps(temp0_124, zmm11)
            float temp0_140[0x4] = _mm_mul_ps(temp0_138, temp0_134)
            zmm2 = _mm_and_ps(temp0_95, zmm14)
            zmm10 = _mm_and_ps(temp0_107, zmm14)
            zmm2 = _mm_or_ps(zmm2, temp0_135)
            zmm1 = _mm_and_ps(_mm_mul_ps(_mm_mul_ps(temp0_140, zmm12), zmm8), temp0_133)
            zmm10 = _mm_or_ps(zmm10, zmm3)
            uint32_t temp0_149[0x4] = _mm_or_ps(_mm_and_ps(zmm7, zmm14), zmm1)
            arg1[rax_4 * 3] = zmm6
            arg1[sx.q((rax_4 + 1).d) * 3] = zmm2
            arg1[sx.q((rax_4 + 2).d) * 3] = zmm10
            arg1[sx.q((rax_4 + 3).d) * 3] = temp0_149
            result = zx.q(rax_4.d + 4)
        while (result.d s< i)
    
    if (i s< arg2)
        int64_t i_4 = sx.q(i)
        void* rcx_1 = &arg1[i_4 * 3]
        result = sx.q(arg2) - i_4
        zmm3 = data_142d3f660
        uint64_t i_1
        
        do
            zmm4 = *rcx_1
            zmm5 = _mm_mul_ps(zmm4, zmm4)
            float temp0_152[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm5, zmm5[0].q), zmm5)
            zmm7 = _mm_movehdup_ps(temp0_152)
            zmm7[0] = zmm7[0] f+ temp0_152[0]
            uint32_t temp0_155[0x4] =
                _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, zmm7[0], 6), 0xffffffff)
            zmm6 = zmm7
            zmm6[0] = zmm6[0] * 0.5f
            zmm7 = _mm_rsqrt_ss(zmm7[0], zmm7[0])
            zmm0 = zmm7
            zmm0[0] = zmm0[0] f* zmm7[0]
            zmm0[0] = zmm0[0] * zmm6[0]
            zmm2 = 0x3f000000
            zmm2[0] = 0.5f - zmm0[0]
            zmm2[0] = zmm2[0] f* zmm7[0]
            zmm2[0] = zmm2[0] f+ zmm7[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] * zmm6[0]
            zmm6 = 0x3f000000
            zmm6[0] = 0.5f - zmm2[0]
            zmm6[0] = zmm6[0] * zmm2[0]
            zmm6[0] = zmm6[0] + zmm2[0]
            float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm4)
            zmm5 = _mm_shuffle_ps(temp0_155, temp0_155, 0)
            zmm6 = _mm_and_ps(temp0_158, zmm5)
            *rcx_1 = _mm_or_ps(_mm_andnot_ps(zmm5, zmm3), zmm6)
            rcx_1 += 0x30
            i_1 = result
            result -= 1
        while (i_1 != 1)
else
    if (i s> 0)
        result = 0
        
        do
            int64_t rax = sx.q(result.d)
            zmm14 = arg1[rax * 3]
            zmm2 = arg1[sx.q((rax + 1).d) * 3]
            zmm7 = arg1[sx.q((rax + 2).d) * 3]
            float temp0_1[0x4] = _mm_mul_ps(zmm14, zmm14)
            float temp0_3[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_1, temp0_1, 1), temp0_1)
            float temp0_5[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x39), temp0_3)
            zmm15 = data_142d3f5c0
            float temp0_6[0x4] = _mm_cmpeq_ps(zmm15, temp0_5, 6)
            zmm0 = data_142ef1890
            zmm1 = zmm0
            zmm10 = zmm0
            float temp0_7[0x4] = _mm_cmpeq_ps(zmm15, temp0_5, 2)
            float temp0_8[0x4] = _mm_mul_ps(zmm2, zmm2)
            float temp0_10[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_8, temp0_8, 1), temp0_8)
            float temp0_11[0x4] = _mm_rsqrt_ps(temp0_5)
            float temp0_13[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x39), temp0_10)
            float temp0_14[0x4] = _mm_cmpeq_ps(zmm15, temp0_13, 6)
            zmm0 = zmm15
            float temp0_15[0x4] = _mm_mul_ps(temp0_5, temp0_11)
            float temp0_16[0x4] = _mm_cmpeq_ps(zmm15, temp0_13, 2)
            float temp0_17[0x4] = _mm_rsqrt_ps(temp0_13)
            float temp0_18[0x4] = _mm_mul_ps(temp0_13, temp0_17)
            zmm15 = zmm7
            float temp0_19[0x4] = _mm_mul_ps(temp0_15, temp0_11)
            zmm11 = _mm_mul_ps(zmm7, zmm7)
            float temp0_22[0x4] = _mm_add_ps(_mm_shuffle_pd(zmm11, zmm11, 1), zmm11)
            float temp0_23[0x4] = _mm_mul_ps(temp0_18, temp0_17)
            zmm7 = _mm_add_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0x39), temp0_22)
            float temp0_26[0x4] = _mm_cmpeq_ps(zmm0, zmm7, 6)
            float temp0_27[0x4] = _mm_sub_ps(zmm1, temp0_19)
            zmm11 = _mm_cmpeq_ps(zmm0, zmm7, 2)
            float temp0_29[0x4] = _mm_rsqrt_ps(zmm7)
            zmm7 = _mm_mul_ps(zmm7, temp0_29)
            zmm5 = _mm_sub_ps(zmm10, temp0_23)
            float temp0_33[0x4] = _mm_sub_ps(zmm10, _mm_mul_ps(zmm7, temp0_29))
            float temp0_34[0x4] = _mm_mul_ps(temp0_27, temp0_11)
            zmm5 = _mm_mul_ps(zmm5, temp0_17)
            float temp0_36[0x4] = _mm_mul_ps(temp0_33, temp0_29)
            zmm8 = arg1[sx.q((rax + 3).d) * 3]
            zmm12 = data_142d3f640
            float temp0_38[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_34, zmm12), zmm14)
            zmm14 = data_142d3f660
            zmm6 = _mm_and_ps(temp0_6, zmm14)
            zmm5 = _mm_mul_ps(zmm5, zmm12)
            float temp0_41[0x4] = _mm_mul_ps(temp0_36, zmm12)
            zmm5 = __mulps_xmmps_memps(zmm5, zmm2)
            float temp0_43[0x4] = _mm_mul_ps(temp0_41, zmm15)
            float temp0_44[0x4] = _mm_mul_ps(zmm8, zmm8)
            zmm7 = _mm_shuffle_pd(temp0_44, temp0_44, 1)
            zmm1 = __andps_xmmxud_memxud(temp0_38, temp0_7)
            zmm7 = _mm_add_ps(zmm7, temp0_44)
            float temp0_49[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0x39), zmm7)
            zmm9 = data_142d3f5c0
            zmm6 = _mm_or_ps(zmm6, zmm1)
            zmm7 = _mm_cmpeq_ps(zmm9, temp0_49, 6)
            float temp0_52[0x4] = _mm_cmpeq_ps(zmm9, temp0_49, 2)
            float temp0_53[0x4] = _mm_rsqrt_ps(temp0_49)
            uint32_t temp0_54[0x4] = _mm_and_ps(zmm5, temp0_16)
            float temp0_56[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_49, temp0_53), temp0_53)
            float temp0_57[0x4] = _mm_sub_ps(data_142ef1890, temp0_56)
            zmm3 = _mm_and_ps(temp0_43, zmm11)
            float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_53)
            zmm2 = _mm_and_ps(temp0_14, zmm14)
            zmm10 = _mm_and_ps(temp0_26, zmm14)
            zmm2 = _mm_or_ps(zmm2, temp0_54)
            zmm1 = _mm_and_ps(_mm_mul_ps(_mm_mul_ps(temp0_59, zmm12), zmm8), temp0_52)
            zmm10 = _mm_or_ps(zmm10, zmm3)
            uint32_t temp0_68[0x4] = _mm_or_ps(_mm_and_ps(zmm7, zmm14), zmm1)
            arg1[rax * 3] = zmm6
            arg1[sx.q((rax + 1).d) * 3] = zmm2
            arg1[sx.q((rax + 2).d) * 3] = zmm10
            arg1[sx.q((rax + 3).d) * 3] = temp0_68
            result = zx.q(rax.d + 4)
        while (result.d s< i)
    
    if (i s< arg2)
        int64_t i_3 = sx.q(i)
        uint32_t (* rcx)[0x4] = &arg1[i_3 * 3]
        result = sx.q(arg2) - i_3
        zmm3 = data_142d3f660
        uint64_t i_2
        
        do
            zmm4 = *rcx
            zmm5 = _mm_mul_ps(zmm4, zmm4)
            float temp0_71[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm5, zmm5[0].q), zmm5)
            zmm7 = _mm_movehdup_ps(temp0_71)
            zmm7[0] = zmm7[0] f+ temp0_71[0]
            uint32_t temp0_74[0x4] = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, zmm7[0], 6), 0xffffffff)
            zmm6 = zmm7
            zmm6[0] = zmm6[0] * 0.5f
            zmm7 = _mm_rsqrt_ss(zmm7[0], zmm7[0])
            zmm0 = zmm7
            zmm0[0] = zmm0[0] f* zmm7[0]
            zmm0[0] = zmm0[0] * zmm6[0]
            zmm2 = 0x3f000000
            zmm2[0] = 0.5f - zmm0[0]
            zmm2[0] = zmm2[0] f* zmm7[0]
            zmm2[0] = zmm2[0] f+ zmm7[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] * zmm6[0]
            zmm6 = 0x3f000000
            zmm6[0] = 0.5f - zmm2[0]
            zmm6[0] = zmm6[0] * zmm2[0]
            zmm6[0] = zmm6[0] + zmm2[0]
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm4)
            zmm5 = _mm_shuffle_ps(temp0_74, temp0_74, 0)
            zmm6 = _mm_and_ps(temp0_77, zmm5)
            *rcx = _mm_or_ps(_mm_andnot_ps(zmm5, zmm3), zmm6)
            rcx = &rcx[3]
            i_2 = result
            result -= 1
        while (i_2 != 1)
return result
