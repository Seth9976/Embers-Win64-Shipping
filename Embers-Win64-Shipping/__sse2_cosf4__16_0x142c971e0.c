// 函数: __sse2_cosf4@@16
// 地址: 0x142c971e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm15[0x4]
uint32_t var_98[0x4] = zmm15
uint32_t r10 = 0
uint32_t temp0[0x4] = _mm_and_ps(data_1442a6b00, arg1)
float zmm1[0x4] = data_1442a70c0
float zmm8[0x4] = data_1442a7040
float zmm5[0x4] = data_1442a7080
float zmm6[0x4] = data_1442a6d00
uint32_t zmm4[0x4] = _mm_add_ps(temp0, zmm1)
uint32_t zmm2[0x4] = __cmpps_xmmps_memps_immb(temp0, data_1442a6b40, 6)
float temp0_3[0x4] = _mm_mul_ps(zmm8, zmm4)
float temp0_4[0x4] = _mm_cmpeq_ps(zmm1, zmm4, 0)
uint32_t temp0_5 = _mm_movemask_ps(zmm2)
float temp0_6[0x4] = _mm_add_ps(temp0_3, zmm5)
float temp0_7[0x4] = _mm_sub_ps(temp0_6, zmm5)
zmm4 = data_1442a6cc0
float result[0x4] = _mm_slli_epi32(temp0_6, 0x1f)
float zmm7[0x4] = data_1442a6d40
float zmm9[0x4] = data_1442a6d80
float zmm12[0x4] = data_1442a6f40
uint32_t temp0_9[0x4] = _mm_and_ps(data_1442a7140, temp0_4)
float temp0_10[0x4] = __subps_xmmps_memps(temp0_7, data_1442a7100)
zmm4 = _mm_mul_ps(zmm4, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(zmm6, temp0_10)
float temp0_13[0x4] = _mm_mul_ps(zmm7, temp0_10)
uint32_t zmm13[0x4] = _mm_sub_ps(temp0, zmm4)
float temp0_15[0x4] = _mm_mul_ps(zmm9, temp0_10)
uint32_t var_140[0x4]
int128_t* var_10 = &var_140
zmm13 = _mm_sub_ps(_mm_sub_ps(_mm_sub_ps(zmm13, temp0_12), temp0_13), temp0_15)
float temp0_19[0x4] = _mm_mul_ps(zmm13, zmm13)
zmm13 ^= result
float temp0_24[0x4] = _mm_mul_ps(
    __addps_xmmps_memps(
        _mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(zmm12, temp0_19), data_1442a6f00), temp0_19), 
        data_1442a6ec0), 
    temp0_19)
float temp0_25[0x4] = _mm_mul_ps(temp0_19, zmm13)
result = _mm_or_ps(
    _mm_andnot_ps(temp0_4, 
        _mm_add_ps(zmm13, _mm_mul_ps(__addps_xmmps_memps(temp0_24, data_1442a6e80), temp0_25))), 
    temp0_9)
uint32_t var_1d8[0x4]

if (temp0_5 != 0)
    zmm15 = data_1442a6b80
    uint32_t zmm3[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0, zmm15), zmm15, 0)
    float zmm11[0x4] = _mm_srli_epi32(_mm_shuffle_epi32(0x7f800000, 0) & arg1, 0x17)
    uint32_t temp0_38[0x4] = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(zmm11, 1), zmm11), 2)
    r10 = _mm_movemask_ps(zmm3)
    zmm7 = _mm_shuffle_epi32(temp0_38, 2)
    uint32_t temp0_41[0x4] = _mm_shuffle_epi32(temp0_38, 3)
    float result_1[0x4] = result
    result = _mm_shuffle_epi32(temp0_38, 1)
    uint64_t rdx_2 = zx.q(zmm7[0])
    uint64_t rax_1 = zx.q(temp0_41[0])
    uint64_t r8_1 = zx.q(temp0_38[0])
    uint64_t rcx_2 = zx.q(result[0])
    uint32_t var_1c8_1[0x4] = zmm2
    zmm5 = zx.o(*(rax_1 + 0x1442a4f04))
    zmm2 =
        _mm_unpacklo_epi32(zx.o(*(&data_1442a4f00 + rdx_2)), zx.o(*(&data_1442a4f00 + rax_1))[0].q)
    zmm12 = zx.o(*(rdx_2 + 0x1442a4f08))
    zmm9 = _mm_unpacklo_epi64(
        _mm_unpacklo_epi32(zx.o(*(r8_1 + 0x1442a4f04)), zx.o(*(rcx_2 + 0x1442a4f04))[0].q), 
        _mm_unpacklo_epi32(zx.o(*(rdx_2 + 0x1442a4f04)), zmm5[0].q)[0].q)
    zmm15 = zx.o(*(rax_1 + 0x1442a4f08))
    zmm8 = zx.o(*(&data_1442a4f00 + r8_1))
    zmm6 = zx.o(*(&data_1442a4f00 + rcx_2))
    uint32_t temp0_47[0x4] = _mm_shuffle_epi32(0x7fffff, 0)
    zmm1 = zx.o(*(rcx_2 + 0x1442a4f08))
    zmm8 = _mm_unpacklo_epi32(zmm8, zmm6[0].q)
    zmm4 = zx.o(*(r8_1 + 0x1442a4f08))
    var_1d8 = arg1
    zmm8 = _mm_unpacklo_epi64(zmm8, zmm2[0].q)
    zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
    zmm12 = _mm_unpacklo_epi32(zmm12, zmm15[0].q)
    uint32_t temp0_52[0x4] = _mm_shuffle_epi32(0x800000, 0)
    zmm4 = _mm_unpacklo_epi64(zmm4, zmm12[0].q)
    zmm7 = _mm_shuffle_epi32(0xffff, 0)
    uint32_t zmm14[0x4] = _mm_add_epi32(temp0_47 & arg1, temp0_52)
    zmm12 = _mm_srli_epi32(zmm8, 0x10)
    zmm8 &= zmm7
    float var_1a8_1[0x4] = zmm12
    zmm12 = zmm14
    zmm14 &= zmm7
    zmm15 = _mm_srli_epi64(zmm8, 0x20)
    result = _mm_srli_epi64(zmm14, 0x20)
    zmm13 = _mm_mul_epu32(zmm14, zmm8)
    uint32_t temp0_60[0x4] = _mm_srli_epi32(zmm9, 0x10)
    int32_t var_198_1[0x4] = zmm8
    zmm6 = _mm_slli_epi64(_mm_mul_epu32(result, zmm15), 0x20)
    zmm8 = data_144280a00
    zmm9 &= zmm7
    zmm1 = _mm_srli_epi64(temp0_60, 0x20)
    uint32_t var_158_1[0x4] = (zmm13 & zmm8) | zmm6
    zmm5 = _mm_srli_epi64(zmm9, 0x20)
    float var_168_1[0x4] = zmm1
    zmm12 = _mm_srli_epi32(zmm12, 0x10)
    zmm6 = _mm_mul_epu32(zmm14, temp0_60)
    zmm13 = _mm_mul_epu32(result, zmm1)
    arg1 = _mm_slli_epi64(_mm_mul_epu32(result, zmm5), 0x20)
    zmm1 = _mm_mul_epu32(zmm14, zmm9)
    zmm2 = zmm4
    zmm9 = _mm_mul_epu32(zmm9, zmm12)
    zmm4 &= zmm7
    zmm1 = (zmm1 & zmm8) | arg1
    zmm11 = _mm_srli_epi64(zmm12, 0x20)
    arg1 = _mm_mul_epu32(zmm12, zmm4)
    zmm4 = _mm_mul_epu32(_mm_srli_epi64(zmm4, 0x20), zmm11)
    zmm5 = _mm_mul_epu32(zmm5, zmm11)
    uint32_t temp0_77[0x4] = _mm_srli_epi32(zmm2, 0x10)
    zmm4 = _mm_slli_epi64(zmm4, 0x20)
    uint32_t var_178_1[0x4] = zmm15
    zmm3 = _mm_srli_epi64(temp0_77, 0x20)
    arg1 = (arg1 & zmm8) | zmm4
    zmm4 = _mm_mul_epu32(zmm12, temp0_77)
    zmm13 = _mm_slli_epi64(zmm13, 0x20)
    zmm15 = _mm_mul_epu32(zmm11, zmm3)
    zmm2 = _mm_mul_epu32(temp0_77, zmm14)
    zmm3 = _mm_slli_epi64(_mm_mul_epu32(zmm3, result), 0x20)
    zmm6 = (zmm6 & zmm8) | zmm13
    zmm4 = _mm_add_epi32((zmm4 & zmm8) | _mm_slli_epi64(zmm15, 0x20), 
        _mm_srli_epi32((zmm2 & zmm8) | zmm3, 0x10))
    zmm5 = _mm_slli_epi64(zmm5, 0x20)
    uint32_t temp0_90[0x4] = _mm_srli_epi32(arg1, 0x10)
    zmm13 = _mm_add_epi32(zmm1 & zmm7, zmm4)
    zmm1 = _mm_srli_epi32(zmm1, 0x10)
    arg1 = _mm_add_epi32(temp0_90, zmm13)
    zmm3 = _mm_add_epi32(zmm6 & zmm7, _mm_add_epi32((zmm9 & zmm8) | zmm5, zmm1))
    uint32_t temp0_96[0x4] = _mm_srli_epi32(arg1, 0x10)
    zmm2 = _mm_mul_epu32(temp0_60, zmm12)
    zmm13 = _mm_add_epi32(temp0_96, zmm3)
    zmm9 = _mm_mul_epu32(var_168_1, zmm11)
    zmm12 = __pmuludq_xmmdq_memdq(zmm12, var_198_1)
    zmm11 = __pmuludq_xmmdq_memdq(zmm11, var_178_1)
    zmm3 = var_1a8_1
    zmm14 = _mm_mul_epu32(zmm14, zmm3)
    result = _mm_mul_epu32(result, _mm_srli_epi64(zmm3, 0x20))
    zmm5 = var_158_1
    zmm2 = _mm_add_epi32((zmm2 & zmm8) | _mm_slli_epi64(zmm9, 0x20), _mm_srli_epi32(zmm6, 0x10))
    zmm1 = _mm_srli_epi32(zmm13, 0x10)
    zmm15 = _mm_add_epi32(zmm5 & zmm7, zmm2)
    result = _mm_slli_epi64(result, 0x20)
    zmm11 = _mm_slli_epi64(zmm11, 0x20)
    zmm1 = _mm_add_epi32(zmm1, zmm15)
    zmm12 = _mm_add_epi32((zmm12 & zmm8) | zmm11, _mm_srli_epi32(zmm5, 0x10))
    zmm4 = _mm_add_epi32(_mm_srli_epi32(zmm1, 0x10), 
        _mm_add_epi32(((zmm14 & zmm8) | result) & zmm7, zmm12))
    uint32_t temp0_118[0x4] = _mm_slli_epi32(zmm13, 0x10)
    zmm4 = _mm_add_epi32(_mm_slli_epi32(zmm4, 0x10), zmm1 & zmm7)
    zmm5 = _mm_shuffle_epi32(0x80000000, 0)
    zmm13 = _mm_add_epi32(temp0_118, arg1 & zmm7)
    arg1 = var_1d8
    zmm5 &= arg1
    zmm7 = _mm_shuffle_epi32(0x3f800000, 0) ^ zmm5
    zmm2 = _mm_srli_epi32(zmm4, 9) | zmm7
    uint32_t temp0_125[0x4] = _mm_shuffle_epi32(0x47400000, 0)
    zmm9 = _mm_shuffle_epi32(0x3ffff, 0) & zmm13
    zmm1 = _mm_shuffle_epi32(0x1ff, 0)
    uint32_t temp0_128[0x4] = _mm_srli_epi32(zmm13, 0x12)
    result = _mm_shuffle_epi32(0x28800000, 0)
    zmm1 = _mm_slli_epi32(zmm1 & zmm4, 0xe)
    result ^= zmm5
    zmm5 ^= _mm_shuffle_epi32(0x34000000, 0)
    zmm9 = _mm_slli_epi32(zmm9, 5) | result
    zmm3 = _mm_add_ps(zmm2, temp0_125)
    float temp0_134[0x4] = _mm_sub_ps(zmm1 | temp0_128 | zmm5, zmm5)
    float temp0_135[0x4] = _mm_sub_ps(zmm9, result)
    zmm11 = _mm_shuffle_epi32(0x40c90fdb, 0)
    float temp0_137[0x4] = _mm_sub_ps(zmm3, temp0_125)
    float temp0_138[0x4] = _mm_shuffle_epi32(0xb795777a, 0)
    zmm2 = _mm_sub_ps(zmm2, temp0_137)
    zmm8 = _mm_shuffle_epi32(0xfffff000, 0)
    zmm15 = _mm_add_ps(zmm2, temp0_134)
    zmm8 = _mm_and_ps(zmm8, zmm15)
    zmm2 = _mm_sub_ps(zmm2, zmm15)
    zmm15 = _mm_sub_ps(zmm15, zmm8)
    float temp0_145[0x4] = _mm_add_ps(temp0_134, zmm2)
    zmm6 = _mm_shuffle_epi32(0x40c91000, 0)
    float temp0_147[0x4] = _mm_add_ps(temp0_135, temp0_145)
    float temp0_148[0x4] = _mm_mul_ps(zmm6, zmm8)
    float temp0_149[0x4] = _mm_mul_ps(zmm6, zmm15)
    float temp0_150[0x4] = _mm_mul_ps(zmm8, temp0_138)
    float temp0_151[0x4] = _mm_mul_ps(zmm11, temp0_147)
    float temp0_152[0x4] = _mm_mul_ps(temp0_138, zmm15)
    float temp0_153[0x4] = _mm_add_ps(temp0_149, temp0_150)
    float temp0_154[0x4] = _mm_add_ps(temp0_151, temp0_152)
    zmm8 = _mm_shuffle_epi32(0x7fffffff, 0)
    float temp0_156[0x4] = _mm_add_ps(temp0_153, temp0_154)
    zmm8 = _mm_and_ps(zmm8, arg1)
    zmm11 = _mm_shuffle_epi32(0x35800000, 0)
    float temp0_159[0x4] = _mm_add_ps(temp0_156, temp0_148)
    float temp0_160[0x4] = _mm_sub_ps(temp0_148, temp0_159)
    float temp0_161[0x4] = _mm_cmpeq_ps(zmm11, zmm8, 1)
    float temp0_162[0x4] = _mm_cmpeq_ps(zmm8, zmm11, 2)
    float temp0_163[0x4] = _mm_add_ps(temp0_156, temp0_160)
    zmm8 = _mm_and_ps(temp0_162, arg1)
    uint32_t temp0_165[0x4] = _mm_shuffle_epi32(0xff, 0)
    zmm8 = _mm_or_ps(zmm8, _mm_and_ps(temp0_159, temp0_161))
    uint32_t temp0_168[0x4] = _mm_slli_epi32(zmm3 & temp0_165, 4)
    uint64_t rdx_3 = zx.q(temp0_168[0])
    zmm12 = _mm_and_ps(temp0_161, temp0_163)
    uint32_t temp0_170[0x4] = _mm_shuffle_epi32(temp0_168, 1)
    zmm1 = _mm_shuffle_epi32(temp0_168, 2)
    uint32_t temp0_172[0x4] = _mm_shuffle_epi32(temp0_168, 3)
    uint64_t rcx_3 = zx.q(zmm1[0])
    uint64_t r8_2 = zx.q(temp0_172[0])
    uint64_t rax_2 = zx.q(temp0_170[0])
    zmm5 = zx.o(*(rcx_3 + 0x1442a5b08))
    zmm4 = zx.o(*(r8_2 + 0x1442a5b08))
    float temp0_173[0x4] = _mm_mul_ps(zmm8, zmm8)
    zmm7 = zx.o(*(&data_1442a5b00 + r8_2))
    result = zx.o(*(&data_1442a5b00 + rdx_3))
    zmm15 = zx.o(*(&data_1442a5b00 + rax_2))
    zmm14 = zx.o(*(&data_1442a5b00 + rcx_3))
    zmm5 = _mm_unpacklo_epi32(zmm5, zmm4[0].q)
    zmm4 = data_1442a6c00
    result = _mm_unpacklo_epi32(result, zmm15[0].q)
    zmm14 = _mm_unpacklo_epi32(zmm14, zmm7[0].q)
    zmm7 = zx.o(*(rdx_3 + 0x1442a5b04))
    zmm13 = zx.o(*(rax_2 + 0x1442a5b04))
    zmm4 = _mm_mul_ps(zmm4, temp0_173)
    zmm3 = zx.o(*(rax_2 + 0x1442a5b08))
    zmm6 = zx.o(*(rax_2 + 0x1442a5b0c))
    result = _mm_unpacklo_epi64(result, zmm14[0].q)
    zmm4 = __addps_xmmps_memps(zmm4, data_1442a6bc0)
    zmm7 = _mm_unpacklo_epi32(zmm7, zmm13[0].q)
    zmm13 = zx.o(*(rdx_3 + 0x1442a5b0c))
    zmm15 = zx.o(*(rcx_3 + 0x1442a5b0c))
    zmm9 = zx.o(*(r8_2 + 0x1442a5b0c))
    zmm14 = _mm_unpacklo_epi32(zx.o(*(rdx_3 + 0x1442a5b08)), zmm3[0].q)
    zmm13 = _mm_unpacklo_epi32(zmm13, zmm6[0].q)
    zmm15 = _mm_unpacklo_epi32(zmm15, zmm9[0].q)
    zmm14 = _mm_unpacklo_epi64(zmm14, zmm5[0].q)
    zmm13 = _mm_unpacklo_epi64(zmm13, zmm15[0].q)
    float temp0_186[0x4] = _mm_mul_ps(zmm8, zmm13)
    zmm3 = _mm_mul_ps(zmm8, result)
    float temp0_188[0x4] = _mm_add_ps(result, zmm13)
    zmm4 = _mm_mul_ps(zmm4, temp0_173)
    zmm7 = _mm_unpacklo_pd(zmm7, 
        _mm_unpacklo_epi32(zx.o(*(rcx_3 + 0x1442a5b04)), zx.o(*(r8_2 + 0x1442a5b04))[0].q)[0].q)
    zmm13 = data_1442a6c80
    zmm2 = _mm_add_ps(zmm7, temp0_186)
    zmm4 = _mm_mul_ps(zmm4, zmm8)
    zmm13 = _mm_mul_ps(zmm13, temp0_173)
    float temp0_195[0x4] = _mm_mul_ps(zmm8, zmm7)
    float temp0_196[0x4] = _mm_sub_ps(zmm7, zmm2)
    zmm13 = __addps_xmmps_memps(zmm13, data_1442a6c40)
    float temp0_198[0x4] = _mm_sub_ps(temp0_188, temp0_195)
    float temp0_199[0x4] = _mm_add_ps(temp0_186, temp0_196)
    float temp0_200[0x4] = _mm_mul_ps(temp0_173, zmm13)
    float temp0_201[0x4] = _mm_mul_ps(zmm12, temp0_198)
    zmm4 = _mm_mul_ps(zmm4, temp0_198)
    float temp0_203[0x4] = _mm_mul_ps(zmm7, temp0_200)
    zmm14 = _mm_add_ps(_mm_add_ps(zmm14, temp0_201), temp0_203)
    zmm15 = _mm_add_ps(zmm2, zmm3)
    zmm8 = var_1c8_1
    zmm3 = _mm_add_ps(zmm3, _mm_sub_ps(zmm2, zmm15))
    result = _mm_or_ps(__andnps_xmmxud_memxud(zmm8, result_1), 
        _mm_and_ps(
            _mm_add_ps(zmm15, _mm_add_ps(zmm14, _mm_add_ps(_mm_add_ps(temp0_199, zmm3), zmm4))), 
            zmm8))

if (r10 != 0)
    var_140 = arg1
    
    if (r10 != 0)
        var_1d8[2].q = arg2
        uint64_t rbx = 0
        var_1d8[0].q = arg3
        
        do
            if (test_bit(r10, rbx.d))
                __common_scos_cout_rare(&var_140[rbx], &var_140[rbx + 0x10])
            
            rbx = zx.q(rbx.d + 1)
        while (rbx.d s< 4)
        
        var_1d8[2]
        var_1d8[0]

return result
