// 函数: __sse2_sinf4@@16
// 地址: 0x142c94660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_88[0x4] = zmm15
uint32_t r10 = 0
float zmm14[0x4]
float var_38[0x4] = zmm14
uint32_t zmm13[0x4]
uint32_t var_b8[0x4] = zmm13
float zmm12[0x4]
float var_48[0x4] = zmm12
int32_t zmm11[0x4]
int32_t var_28[0x4] = zmm11
float zmm9[0x4]
float var_a8[0x4] = zmm9
uint32_t zmm7[0x4] = data_144282f00
float zmm5[0x4] = data_144283380
uint32_t temp0[0x4] = _mm_and_ps(arg1, zmm7)
float temp0_1[0x4] = _mm_mul_ps(zmm5, temp0)
float zmm1[0x4] = data_1442833c0
uint32_t temp0_2[0x4] = _mm_andnot_ps(zmm7, arg1)
float zmm2[0x4] = data_1442830c0
float temp0_3[0x4] = _mm_add_ps(temp0_1, zmm1)
float temp0_4[0x4] = _mm_sub_ps(temp0_3, zmm1)
float temp0_5[0x4] = _mm_mul_ps(zmm2, temp0_4)
int32_t zmm6[0x4] = _mm_slli_epi32(temp0_3, 0x1f)
float zmm3[0x4] = data_144283100
uint32_t result[0x4] = _mm_sub_ps(temp0, temp0_5)
float temp0_8[0x4] = _mm_mul_ps(zmm3, temp0_4)
float zmm4[0x4] = data_144283140
result = _mm_sub_ps(result, temp0_8)
float temp0_10[0x4] = _mm_mul_ps(zmm4, temp0_4)
zmm1 = data_144283180
result = _mm_sub_ps(result, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(zmm1, temp0_4)
zmm2 = data_144283340
result = _mm_sub_ps(result, temp0_12)
float temp0_14[0x4] = _mm_mul_ps(result, result)
result ^= zmm6
float temp0_15[0x4] = __cmpps_xmmps_memps_immb(temp0, data_144282f40, 6)
float temp0_16[0x4] = _mm_mul_ps(zmm2, temp0_14)
uint32_t temp0_17 = _mm_movemask_ps(temp0_15)
uint32_t var_140[0x4]
int128_t* var_10 = &var_140
result = _mm_add_ps(result, 
    _mm_mul_ps(
        _mm_mul_ps(temp0_14, 
            __addps_xmmps_memps(
                _mm_mul_ps(
                    __addps_xmmps_memps(
                        _mm_mul_ps(__addps_xmmps_memps(temp0_16, data_144283300), temp0_14), 
                        data_1442832c0), 
                    temp0_14), 
                data_144283280)), 
        result)) ^ temp0_2
uint32_t var_1d8[0x4]

if (temp0_17 != 0)
    zmm4 = data_144282f80
    uint32_t result_1[0x4] = result
    uint32_t zmm8[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0, zmm4), zmm4, 0)
    zmm12 = _mm_srli_epi32(_mm_shuffle_epi32(0x7f800000, 0) & arg1, 0x17)
    uint32_t temp0_33[0x4] = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(zmm12, 1), zmm12), 2)
    uint64_t rdx_2 = zx.q(_mm_shuffle_epi32(temp0_33, 2)[0])
    zmm14 = _mm_shuffle_epi32(temp0_33, 3)
    zmm11 = _mm_shuffle_epi32(temp0_33, 1)
    uint64_t rax_1 = zx.q(zmm14[0])
    uint64_t r8_1 = zx.q(temp0_33[0])
    uint64_t rcx_2 = zx.q(zmm11[0])
    zmm6 = zx.o(*(&data_144281300 + rdx_2))
    zmm1 = zx.o(*(rdx_2 + 0x144281304))
    zmm11 = zx.o(*(rdx_2 + 0x144281308))
    zmm2 = zx.o(*(&data_144281300 + rax_1))
    zmm3 = zx.o(*(rax_1 + 0x144281304))
    zmm12 = zx.o(*(rax_1 + 0x144281308))
    r10 = _mm_movemask_ps(zmm8)
    zmm8 = zx.o(*(&data_144281300 + r8_1))
    zmm15 = zx.o(*(&data_144281300 + rcx_2))
    zmm14 = _mm_shuffle_epi32(0x7fffff, 0)
    zmm8 = _mm_unpacklo_epi32(zmm8, zmm15[0].q)
    int32_t temp0_40[0x4] = _mm_unpacklo_epi32(zmm6, zmm2[0].q)
    zmm13 = zx.o(*(rcx_2 + 0x144281308))
    var_1d8 = arg1
    zmm4 = zx.o(*(r8_1 + 0x144281308))
    zmm8 = _mm_unpacklo_epi64(zmm8, temp0_40[0].q)
    zmm4 = _mm_unpacklo_epi32(zmm4, zmm13[0].q)
    uint32_t temp0_43[0x4] = _mm_shuffle_epi32(0x800000, 0)
    int32_t temp0_44[0x4] = _mm_unpacklo_epi32(zmm11, zmm12[0].q)
    uint32_t temp0_45[0x4] = _mm_shuffle_epi32(0xffff, 0)
    zmm14 = _mm_add_epi32(zmm14 & arg1, temp0_43)
    zmm12 = _mm_srli_epi32(zmm8, 0x10)
    zmm8 &= temp0_45
    float var_1a8_1[0x4] = zmm12
    zmm12 = zmm14
    zmm14 &= temp0_45
    zmm13 = _mm_srli_epi64(zmm8, 0x20)
    result = _mm_srli_epi64(zmm14, 0x20)
    zmm12 = _mm_srli_epi32(zmm12, 0x10)
    zmm9 = zx.o(*(r8_1 + 0x144281304))
    zmm5 = zx.o(*(rcx_2 + 0x144281304))
    zmm15 = _mm_mul_epu32(zmm14, zmm8)
    int32_t temp0_52[0x4] = _mm_mul_epu32(result, zmm13)
    zmm9 = _mm_unpacklo_epi32(zmm9, zmm5[0].q)
    zmm6 = _mm_slli_epi64(temp0_52, 0x20)
    zmm9 = _mm_unpacklo_epi64(zmm9, _mm_unpacklo_epi32(zmm1, zmm3[0].q)[0].q)
    arg1 = zmm9
    zmm9 &= temp0_45
    uint32_t var_198_1[0x4] = zmm8
    uint32_t temp0_57[0x4] = _mm_srli_epi32(arg1, 0x10)
    zmm8 = data_144280000
    zmm1 = _mm_srli_epi64(temp0_57, 0x20)
    float var_158_1[0x4] = (zmm15 & zmm8) | zmm6
    zmm5 = _mm_srli_epi64(zmm9, 0x20)
    float var_168_1[0x4] = zmm1
    int32_t temp0_60[0x4] = _mm_mul_epu32(zmm14, temp0_57)
    zmm15 = _mm_mul_epu32(result, zmm1)
    arg1 = _mm_slli_epi64(_mm_mul_epu32(result, zmm5), 0x20)
    zmm1 = _mm_mul_epu32(zmm14, zmm9)
    zmm9 = _mm_mul_epu32(zmm9, zmm12)
    zmm4 = _mm_unpacklo_epi64(zmm4, temp0_44[0].q)
    zmm2 = zmm4
    zmm4 &= temp0_45
    zmm1 = (zmm1 & zmm8) | arg1
    zmm11 = _mm_srli_epi64(zmm12, 0x20)
    arg1 = _mm_mul_epu32(zmm12, zmm4)
    zmm4 = _mm_mul_epu32(_mm_srli_epi64(zmm4, 0x20), zmm11)
    zmm5 = _mm_mul_epu32(zmm5, zmm11)
    zmm2 = _mm_srli_epi32(zmm2, 0x10)
    zmm4 = _mm_slli_epi64(zmm4, 0x20)
    uint32_t var_178_1[0x4] = zmm13
    zmm3 = _mm_srli_epi64(zmm2, 0x20)
    arg1 = (arg1 & zmm8) | zmm4
    zmm15 = _mm_slli_epi64(zmm15, 0x20)
    zmm13 = _mm_mul_epu32(zmm12, zmm2)
    zmm6 = (temp0_60 & zmm8) | zmm15
    zmm4 = _mm_mul_epu32(zmm11, zmm3)
    zmm2 = _mm_mul_epu32(zmm2, zmm14)
    zmm3 = _mm_slli_epi64(_mm_mul_epu32(zmm3, result), 0x20)
    zmm13 = (zmm13 & zmm8) | _mm_slli_epi64(zmm4, 0x20)
    zmm2 = _mm_srli_epi32((zmm2 & zmm8) | zmm3, 0x10)
    zmm5 = _mm_slli_epi64(zmm5, 0x20)
    zmm15 = zmm1 & temp0_45
    zmm13 = _mm_add_epi32(zmm13, zmm2)
    zmm1 = _mm_srli_epi32(zmm1, 0x10)
    uint32_t temp0_86[0x4] = _mm_srli_epi32(arg1, 0x10)
    zmm15 = _mm_add_epi32(zmm15, zmm13)
    zmm9 = _mm_add_epi32((zmm9 & zmm8) | zmm5, zmm1)
    arg1 = _mm_add_epi32(temp0_86, zmm15)
    zmm2 = _mm_add_epi32(zmm6 & temp0_45, zmm9)
    zmm6 = _mm_srli_epi32(zmm6, 0x10)
    zmm15 = _mm_mul_epu32(temp0_57, zmm12)
    zmm9 = _mm_mul_epu32(var_168_1, zmm11)
    zmm12 = __pmuludq_xmmdq_memdq(zmm12, var_198_1)
    int32_t temp0_95[0x4] = __pmuludq_xmmdq_memdq(zmm11, var_178_1)
    zmm15 = (zmm15 & zmm8) | _mm_slli_epi64(zmm9, 0x20)
    uint32_t temp0_97[0x4] = _mm_srli_epi32(arg1, 0x10)
    zmm15 = _mm_add_epi32(zmm15, zmm6)
    zmm13 = _mm_add_epi32(temp0_97, zmm2)
    zmm6 = var_1a8_1
    zmm14 = _mm_mul_epu32(zmm14, zmm6)
    result = _mm_mul_epu32(result, _mm_srli_epi64(zmm6, 0x20))
    zmm1 = _mm_srli_epi32(zmm13, 0x10)
    result = _mm_slli_epi64(result, 0x20)
    zmm2 = _mm_add_epi32(var_158_1 & temp0_45, zmm15)
    zmm11 = _mm_slli_epi64(temp0_95, 0x20)
    zmm1 = _mm_add_epi32(zmm1, zmm2)
    zmm12 = _mm_add_epi32((zmm12 & zmm8) | zmm11, _mm_srli_epi32(var_158_1, 0x10))
    zmm3 = _mm_slli_epi32(
        _mm_add_epi32(_mm_srli_epi32(zmm1, 0x10), 
            _mm_add_epi32(((zmm14 & zmm8) | result) & temp0_45, zmm12)), 
        0x10)
    uint32_t temp0_114[0x4] = _mm_slli_epi32(zmm13, 0x10)
    zmm9 = _mm_shuffle_epi32(0x80000000, 0)
    zmm3 = _mm_add_epi32(zmm3, zmm1 & temp0_45)
    zmm13 = _mm_add_epi32(temp0_114, arg1 & temp0_45)
    arg1 = var_1d8
    zmm11 = _mm_shuffle_epi32(0x3f800000, 0)
    zmm9 &= arg1
    zmm5 = _mm_srli_epi32(zmm3, 9) | (zmm11 ^ zmm9)
    uint32_t temp0_120[0x4] = _mm_shuffle_epi32(0x47400000, 0)
    zmm6 = _mm_shuffle_epi32(0x3ffff, 0)
    zmm1 = _mm_shuffle_epi32(0x28800000, 0)
    uint32_t temp0_123[0x4] = _mm_shuffle_epi32(0x1ff, 0)
    uint32_t temp0_124[0x4] = _mm_srli_epi32(zmm13, 0x12)
    zmm1 ^= zmm9
    zmm9 ^= _mm_shuffle_epi32(0x34000000, 0)
    result = _mm_slli_epi32(temp0_123 & zmm3, 0xe) | temp0_124 | zmm9
    zmm6 = _mm_slli_epi32(zmm6 & zmm13, 5) | zmm1
    float temp0_128[0x4] = _mm_add_ps(zmm5, temp0_120)
    result = _mm_sub_ps(result, zmm9)
    zmm6 = _mm_sub_ps(zmm6, zmm1)
    zmm11 = _mm_shuffle_epi32(0xb795777a, 0)
    float temp0_132[0x4] = _mm_sub_ps(temp0_128, temp0_120)
    zmm1 = _mm_shuffle_epi32(0x35800000, 0)
    float temp0_134[0x4] = _mm_sub_ps(zmm5, temp0_132)
    float temp0_135[0x4] = _mm_add_ps(temp0_134, result)
    result = _mm_add_ps(result, _mm_sub_ps(temp0_134, temp0_135))
    uint32_t temp0_138[0x4] = _mm_shuffle_epi32(0x40c91000, 0)
    zmm6 = _mm_add_ps(zmm6, result)
    uint32_t temp0_140[0x4] = _mm_shuffle_epi32(0x40c90fdb, 0)
    uint32_t temp0_142[0x4] = _mm_and_ps(_mm_shuffle_epi32(0xfffff000, 0), temp0_135)
    zmm7 = _mm_mul_ps(temp0_138, temp0_142)
    float temp0_144[0x4] = _mm_sub_ps(temp0_135, temp0_142)
    zmm13 = _mm_mul_ps(temp0_142, zmm11)
    result = _mm_mul_ps(temp0_140, zmm6)
    zmm8 = _mm_mul_ps(temp0_138, temp0_144)
    zmm11 = _mm_mul_ps(zmm11, temp0_144)
    zmm8 = _mm_add_ps(zmm8, zmm13)
    result = _mm_add_ps(result, zmm11)
    uint32_t temp0_151[0x4] = _mm_shuffle_epi32(0xff, 0)
    zmm8 = _mm_add_ps(zmm8, result)
    zmm12 = _mm_shuffle_epi32(0x7fffffff, 0)
    zmm2 = _mm_slli_epi32(temp0_128 & temp0_151, 4)
    zmm12 = _mm_and_ps(zmm12, arg1)
    float temp0_156[0x4] = _mm_add_ps(zmm8, zmm7)
    zmm11 = _mm_cmpeq_ps(zmm1, zmm12, 1)
    float temp0_158[0x4] = _mm_cmpeq_ps(zmm12, zmm1, 2)
    zmm7 = _mm_sub_ps(zmm7, temp0_156)
    uint64_t rdx_3 = zx.q(zmm2[0])
    float temp0_160[0x4] = _mm_shuffle_epi32(zmm2, 2)
    zmm12 = _mm_and_ps(temp0_158, arg1)
    uint64_t rcx_3 = zx.q(temp0_160[0])
    zmm12 = _mm_or_ps(zmm12, _mm_and_ps(temp0_156, zmm11))
    zmm8 = _mm_add_ps(zmm8, zmm7)
    uint32_t temp0_165[0x4] = _mm_shuffle_epi32(zmm2, 1)
    zmm11 = _mm_and_ps(zmm11, zmm8)
    uint64_t r8_2 = zx.q(_mm_shuffle_epi32(zmm2, 3)[0])
    uint64_t rax_2 = zx.q(temp0_165[0])
    zmm15 =
        _mm_unpacklo_epi32(zx.o(*(&data_144281f00 + rcx_3)), zx.o(*(&data_144281f00 + r8_2))[0].q)
    zmm13 = zx.o(*(&data_144281f00 + rax_2))
    zmm4 = zx.o(*(rax_2 + 0x144281f0c))
    zmm7 = zx.o(*(&data_144281f00 + rdx_3))
    zmm14 = _mm_unpacklo_epi32(zx.o(*(rdx_3 + 0x144281f04)), zx.o(*(rax_2 + 0x144281f04))[0].q)
    zmm1 = zx.o(*(rdx_3 + 0x144281f0c))
    zmm6 = zx.o(*(rcx_3 + 0x144281f0c))
    zmm5 = zx.o(*(r8_2 + 0x144281f0c))
    zmm7 = _mm_unpacklo_epi32(zmm7, zmm13[0].q)
    zmm1 = _mm_unpacklo_epi32(zmm1, zmm4[0].q)
    int32_t temp0_172[0x4] = _mm_unpacklo_epi32(zmm6, zmm5[0].q)
    zmm7 = _mm_unpacklo_epi64(zmm7, zmm15[0].q)
    zmm1 = _mm_unpacklo_epi64(zmm1, temp0_172[0].q)
    float temp0_175[0x4] = _mm_mul_ps(zmm12, zmm1)
    result = _mm_mul_ps(zmm12, zmm12)
    float temp0_177[0x4] = _mm_mul_ps(zmm12, zmm7)
    zmm7 = _mm_add_ps(zmm7, zmm1)
    zmm14 = _mm_unpacklo_pd(zmm14, 
        _mm_unpacklo_epi32(zx.o(*(rcx_3 + 0x144281f04)), zx.o(*(r8_2 + 0x144281f04))[0].q)[0].q)
    zmm2 = data_144283080
    float temp0_181[0x4] = _mm_add_ps(zmm14, temp0_175)
    float temp0_182[0x4] = _mm_mul_ps(zmm2, result)
    zmm8 = _mm_sub_ps(zmm14, temp0_181)
    float temp0_184[0x4] = __addps_xmmps_memps(temp0_182, data_144283040)
    float temp0_185[0x4] = _mm_add_ps(temp0_175, zmm8)
    zmm8 = _mm_mul_ps(data_144283000, result)
    zmm13 = _mm_add_ps(temp0_181, temp0_177)
    zmm1 = zx.o(*(rdx_3 + 0x144281f08))
    float temp0_188[0x4] = _mm_sub_ps(temp0_181, zmm13)
    zmm8 = __addps_xmmps_memps(zmm8, data_144282fc0)
    float temp0_190[0x4] = _mm_add_ps(temp0_177, temp0_188)
    zmm8 = _mm_mul_ps(zmm8, result)
    result = _mm_mul_ps(result, temp0_184)
    float temp0_193[0x4] = _mm_add_ps(temp0_185, temp0_190)
    zmm8 = _mm_mul_ps(zmm8, zmm12)
    float temp0_195[0x4] = _mm_mul_ps(zmm12, zmm14)
    float temp0_196[0x4] = _mm_mul_ps(zmm14, result)
    zmm7 = _mm_sub_ps(zmm7, temp0_195)
    zmm11 = _mm_mul_ps(zmm11, zmm7)
    zmm8 = _mm_mul_ps(zmm8, zmm7)
    zmm3 = zx.o(*(rax_2 + 0x144281f08))
    float temp0_200[0x4] = _mm_add_ps(temp0_193, zmm8)
    zmm7 = temp0_15
    float temp0_205[0x4] = _mm_add_ps(
        _mm_add_ps(
            _mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm1, zmm3[0].q), 
                _mm_unpacklo_epi32(zx.o(*(rcx_3 + 0x144281f08)), zx.o(*(r8_2 + 0x144281f08))[0].q)[
                    0].q), 
            zmm11), 
        temp0_196)
    result = _mm_or_ps(__andnps_xmmxud_memxud(zmm7, result_1), 
        _mm_and_ps(_mm_add_ps(zmm13, _mm_add_ps(temp0_205, temp0_200)), zmm7))

if (r10 != 0)
    var_140 = arg1
    
    if (r10 != 0)
        var_1d8[2].q = arg2
        uint64_t rbx = 0
        var_1d8[0].q = arg3
        
        do
            if (test_bit(r10, rbx.d))
                __common_ssin_cout_rare(&var_140[rbx], &var_140[rbx + 0x10])
            
            rbx = zx.q(rbx.d + 1)
        while (rbx.d s< 4)
        
        var_1d8[2]
        var_1d8[0]

return result
