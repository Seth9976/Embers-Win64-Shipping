// 函数: __sse4_cosf4@@16
// 地址: 0x142c97b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = arg1
uint32_t zmm15[0x4]
uint32_t var_78[0x4] = zmm15
uint128_t zmm14
uint128_t var_b8 = zmm14
uint32_t r10 = 0
float result_2[0x4]
float result_3[0x4] = result_2
uint32_t temp0[0x4] = _mm_and_ps(data_1442a6b00, zmm3)
arg1 = data_1442a70c0
float zmm8[0x4] = data_1442a7040
float result[0x4] = data_1442a7080
uint32_t zmm4[0x4] = _mm_add_ps(temp0, arg1)
uint32_t zmm2[0x4] = __cmpps_xmmps_memps_immb(temp0, data_1442a6b40, 6)
float temp0_3[0x4] = _mm_mul_ps(zmm8, zmm4)
arg1 = _mm_cmpeq_ps(arg1, zmm4, 0)
uint32_t temp0_5 = _mm_movemask_ps(zmm2)
float temp0_6[0x4] = _mm_add_ps(temp0_3, result)
zmm4 = data_1442a6cc0
float zmm10[0x4] = _mm_slli_epi32(temp0_6, 0x1f)
float zmm6[0x4] = data_1442a6d00
float temp0_9[0x4] = __subps_xmmps_memps(_mm_sub_ps(temp0_6, result), data_1442a7100)
zmm4 = _mm_mul_ps(zmm4, temp0_9)
float temp0_11[0x4] = _mm_mul_ps(zmm6, temp0_9)
float temp0_12[0x4] = _mm_sub_ps(temp0, zmm4)
float zmm7[0x4] = data_1442a6d40
float temp0_13[0x4] = _mm_sub_ps(temp0_12, temp0_11)
float temp0_14[0x4] = _mm_mul_ps(zmm7, temp0_9)
float zmm9[0x4] = data_1442a6d80
float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_14)
float temp0_16[0x4] = _mm_mul_ps(zmm9, temp0_9)
float zmm12[0x4] = data_1442a6f40
float temp0_17[0x4] = _mm_sub_ps(temp0_15, temp0_16)
float temp0_18[0x4] = _mm_mul_ps(temp0_17, temp0_17)
result = temp0_17 ^ zmm10
uint32_t var_140[0x4]
uint32_t (* var_10)[0x4] = &var_140
float temp0_23[0x4] = _mm_mul_ps(
    __addps_xmmps_memps(
        _mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(zmm12, temp0_18), data_1442a6f00), temp0_18), 
        data_1442a6ec0), 
    temp0_18)
float temp0_24[0x4] = _mm_mul_ps(temp0_18, result)
result = __blendvps_xmmdq_memdq(
    _mm_add_ps(result, _mm_mul_ps(__addps_xmmps_memps(temp0_23, data_1442a6e80), temp0_24)), 
    data_1442a7140, arg1)
float result_1[0x4]

if (temp0_5 != 0)
    zmm10 = data_1442a6b80
    r10 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(temp0, zmm10), zmm10, 0))
    zmm10 = _mm_srli_epi32(_mm_shuffle_epi32(0x7f800000, 0) & zmm3, 0x17)
    zmm9 = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(zmm10, 1), zmm10), 2)
    uint64_t r8_1 = zx.q(zmm9[0])
    result_1 = result
    uint64_t rdx_2 = zx.q(_mm_extract_epi32(zmm9, 2))
    uint64_t rcx_2 = zx.q(_mm_extract_epi32(zmm9, 1))
    uint64_t rax_1 = zx.q(_mm_extract_epi32(zmm9, 3))
    zmm10 = zx.o(*(&data_1442a4f00 + rdx_2))
    result_2 =
        __pinsrd_xmmdq_memd_immb(zx.o(*(&data_1442a4f00 + r8_1)), *(&data_1442a4f00 + rcx_2), 1)
    zmm10 = __pinsrd_xmmdq_memd_immb(zmm10, *(&data_1442a4f00 + rax_1), 1)
    zmm14 = __pinsrd_xmmdq_memd_immb(zx.o(*(r8_1 + 0x1442a4f04)), *(rcx_2 + 0x1442a4f04), 1)
    zmm12 = __pinsrd_xmmdq_memd_immb(zx.o(*(r8_1 + 0x1442a4f08)), *(rcx_2 + 0x1442a4f08), 1)
    result_2 = _mm_unpacklo_epi64(result_2, zmm10[0].q)
    zmm10 = zx.o(*(rdx_2 + 0x1442a4f04))
    result = result_2
    result_2 = _mm_srli_epi32(result_2, 0x10)
    zmm14 =
        _mm_unpacklo_epi64(zmm14, __pinsrd_xmmdq_memd_immb(zmm10, *(rax_1 + 0x1442a4f04), 1)[0].q)
    zmm10 = __pinsrd_xmmdq_memd_immb(zx.o(*(rdx_2 + 0x1442a4f08)), *(rax_1 + 0x1442a4f08), 1)
    zmm7 = _mm_srli_epi32(zmm14, 0x10)
    zmm12 = _mm_unpacklo_epi64(zmm12, zmm10[0].q)
    float zmm11[0x4] =
        _mm_add_epi32(_mm_shuffle_epi32(0x7fffff, 0) & zmm3, _mm_shuffle_epi32(0x800000, 0))
    uint32_t temp0_55[0x4] = _mm_shuffle_epi32(0xffff, 0)
    uint32_t temp0_56[0x4] = _mm_srli_epi32(zmm11, 0x10)
    zmm11 &= temp0_55
    zmm14 &= temp0_55
    zmm10 = _mm_srli_epi32(zmm12, 0x10)
    zmm8 = _mm_mullo_epi32(zmm11, zmm14)
    uint32_t zmm1[0x4] = _mm_mullo_epi32(temp0_56, zmm10)
    arg1 = zmm8 & temp0_55
    zmm10 = _mm_srli_epi32(_mm_mullo_epi32(zmm10, zmm11), 0x10)
    zmm8 = _mm_srli_epi32(zmm8, 0x10)
    zmm12 = _mm_mullo_epi32(zmm12 & temp0_55, temp0_56)
    zmm1 = _mm_add_epi32(zmm1, zmm10)
    zmm9 = _mm_mullo_epi32(zmm11, zmm7)
    zmm12 = _mm_srli_epi32(zmm12, 0x10)
    arg1 = _mm_add_epi32(arg1, zmm1)
    zmm14 = _mm_mullo_epi32(zmm14, temp0_56)
    zmm12 = _mm_add_epi32(zmm12, arg1)
    result &= temp0_55
    zmm14 = _mm_add_epi32(zmm14, zmm8)
    uint32_t temp0_71[0x4] = _mm_srli_epi32(zmm12, 0x10)
    zmm6 = _mm_mullo_epi32(zmm11, result)
    zmm10 = _mm_add_epi32(zmm9 & temp0_55, zmm14)
    zmm7 = _mm_mullo_epi32(zmm7, temp0_56)
    zmm1 = _mm_add_epi32(temp0_71, zmm10)
    zmm7 = _mm_add_epi32(zmm7, _mm_srli_epi32(zmm9, 0x10))
    zmm14 = _mm_srli_epi32(zmm1, 0x10)
    zmm8 = _mm_add_epi32(zmm6 & temp0_55, zmm7)
    zmm6 = _mm_srli_epi32(zmm6, 0x10)
    zmm11 = _mm_mullo_epi32(zmm11, result_2)
    zmm14 = _mm_add_epi32(zmm14, zmm8)
    zmm4 = _mm_add_epi32(_mm_mullo_epi32(temp0_56, result), zmm6)
    zmm10 = _mm_slli_epi32(
        _mm_add_epi32(_mm_srli_epi32(zmm14, 0x10), _mm_add_epi32(zmm11 & temp0_55, zmm4)), 0x10)
    float temp0_89[0x4] = _mm_shuffle_epi32(0x80000000, 0)
    zmm10 = _mm_add_epi32(zmm10, zmm14 & temp0_55)
    result_2 = temp0_89 & zmm3
    zmm6 = _mm_shuffle_epi32(0x3f800000, 0)
    zmm14 = _mm_srli_epi32(zmm10, 9) | (zmm6 ^ result_2)
    uint32_t temp0_93[0x4] = _mm_shuffle_epi32(0x47400000, 0)
    zmm1 = _mm_add_epi32(_mm_slli_epi32(zmm1, 0x10), zmm12 & temp0_55)
    zmm8 = _mm_shuffle_epi32(0x28800000, 0)
    zmm12 = _mm_shuffle_epi32(0x3ffff, 0)
    zmm8 ^= result_2
    result_2 ^= _mm_shuffle_epi32(0x34000000, 0)
    zmm7 = _mm_shuffle_epi32(0x1ff, 0) & zmm10
    uint32_t temp0_100[0x4] = _mm_srli_epi32(zmm1, 0x12)
    zmm7 = _mm_slli_epi32(zmm7, 0xe)
    zmm12 = _mm_slli_epi32(zmm12 & zmm1, 5) | zmm8
    zmm6 = _mm_shuffle_epi32(0x40c90fdb, 0)
    zmm15 = _mm_add_ps(zmm14, temp0_93)
    float temp0_105[0x4] = _mm_sub_ps(zmm7 | temp0_100 | result_2, result_2)
    float temp0_106[0x4] = _mm_sub_ps(zmm12, zmm8)
    zmm14 = _mm_sub_ps(zmm14, _mm_sub_ps(zmm15, temp0_93))
    zmm11 = _mm_shuffle_epi32(0x40c91000, 0)
    float temp0_110[0x4] = _mm_add_ps(zmm14, temp0_105)
    float temp0_113[0x4] =
        _mm_add_ps(temp0_106, _mm_add_ps(temp0_105, _mm_sub_ps(zmm14, temp0_110)))
    zmm7 = _mm_shuffle_epi32(0xb795777a, 0)
    zmm8 = _mm_and_ps(_mm_shuffle_epi32(0xfffff000, 0), temp0_110)
    float temp0_117[0x4] = _mm_sub_ps(temp0_110, zmm8)
    float temp0_118[0x4] = _mm_mul_ps(zmm8, zmm11)
    float temp0_119[0x4] = _mm_mul_ps(zmm8, zmm7)
    float temp0_120[0x4] = _mm_mul_ps(zmm11, temp0_117)
    float temp0_121[0x4] = _mm_mul_ps(zmm6, temp0_113)
    float temp0_122[0x4] = _mm_mul_ps(zmm7, temp0_117)
    float temp0_123[0x4] = _mm_add_ps(temp0_120, temp0_119)
    float temp0_124[0x4] = _mm_add_ps(temp0_121, temp0_122)
    zmm7 = _mm_shuffle_epi32(0xff, 0)
    float temp0_126[0x4] = _mm_add_ps(temp0_123, temp0_124)
    uint32_t temp0_127[0x4] = _mm_slli_epi32(zmm15 & zmm7, 4)
    zmm4 = _mm_add_ps(temp0_126, temp0_118)
    uint64_t rdx_3 = zx.q(temp0_127[0])
    zmm10 = _mm_shuffle_epi32(0x7fffffff, 0)
    float temp0_130[0x4] = _mm_sub_ps(temp0_118, zmm4)
    zmm8 = _mm_shuffle_epi32(0x35800000, 0)
    zmm10 = _mm_and_ps(zmm10, zmm3)
    uint64_t rcx_3 = zx.q(_mm_extract_epi32(temp0_127, 2))
    uint64_t rax_2 = zx.q(_mm_extract_epi32(temp0_127, 1))
    float temp0_135[0x4] = _mm_add_ps(temp0_126, temp0_130)
    float temp0_136[0x4] = _mm_cmpeq_ps(zmm8, zmm10, 1)
    float temp0_137[0x4] = _mm_cmpeq_ps(zmm10, zmm8, 2)
    uint64_t r8_2 = zx.q(_mm_extract_epi32(temp0_127, 3))
    zmm10 = _mm_and_ps(temp0_137, zmm3)
    zmm14 = zx.o(*(rdx_3 + 0x1442a5b0c))
    uint32_t temp0_140[0x4] = _mm_and_ps(zmm4, temp0_136)
    zmm1 = zx.o(*(rcx_3 + 0x1442a5b0c))
    zmm10 = _mm_or_ps(zmm10, temp0_140)
    zmm14 = __pinsrd_xmmdq_memd_immb(zmm14, *(rax_2 + 0x1442a5b0c), 1)
    zmm9 = _mm_and_ps(temp0_136, temp0_135)
    zmm1 = __pinsrd_xmmdq_memd_immb(zmm1, *(r8_2 + 0x1442a5b0c), 1)
    float temp0_145[0x4] = _mm_mul_ps(zmm10, zmm10)
    result = zx.o(*(rcx_3 + 0x1442a5b04))
    zmm6 = __pinsrd_xmmdq_memd_immb(zx.o(*(rdx_3 + 0x1442a5b04)), *(rax_2 + 0x1442a5b04), 1)
    result = __pinsrd_xmmdq_memd_immb(result, *(r8_2 + 0x1442a5b04), 1)
    zmm14 = _mm_unpacklo_epi64(zmm14, zmm1[0].q)
    zmm1 = _mm_mul_ps(zmm10, zmm14)
    zmm7 = zx.o(*(&data_1442a5b00 + rdx_3))
    zmm6 = _mm_unpacklo_pd(zmm6, result[0].q)
    zmm15 = zx.o(*(&data_1442a5b00 + rcx_3))
    float temp0_151[0x4] = _mm_add_ps(zmm6, zmm1)
    zmm7 = __pinsrd_xmmdq_memd_immb(zmm7, *(&data_1442a5b00 + rax_2), 1)
    zmm15 = __pinsrd_xmmdq_memd_immb(zmm15, *(&data_1442a5b00 + r8_2), 1)
    result = zx.o(*(rdx_3 + 0x1442a5b08))
    float temp0_154[0x4] = _mm_sub_ps(zmm6, temp0_151)
    result = __pinsrd_xmmdq_memd_immb(result, *(rax_2 + 0x1442a5b08), 1)
    zmm4 = zx.o(*(rcx_3 + 0x1442a5b08))
    zmm1 = _mm_add_ps(zmm1, temp0_154)
    zmm4 = __pinsrd_xmmdq_memd_immb(zmm4, *(r8_2 + 0x1442a5b08), 1)
    zmm11 = data_1442a6c00
    zmm7 = _mm_unpacklo_epi64(zmm7, zmm15[0].q)
    float temp0_159[0x4] = _mm_mul_ps(zmm11, temp0_145)
    float temp0_160[0x4] = _mm_mul_ps(zmm10, zmm7)
    float temp0_161[0x4] = _mm_add_ps(zmm7, zmm14)
    float temp0_163[0x4] = _mm_mul_ps(__addps_xmmps_memps(temp0_159, data_1442a6bc0), temp0_145)
    result = _mm_unpacklo_epi64(result, zmm4[0].q)
    zmm14 = data_1442a6c80
    zmm4 = _mm_add_ps(temp0_151, temp0_160)
    float temp0_166[0x4] = _mm_mul_ps(temp0_163, zmm10)
    zmm14 = _mm_mul_ps(zmm14, temp0_145)
    float temp0_168[0x4] = _mm_mul_ps(zmm10, zmm6)
    float temp0_169[0x4] = _mm_sub_ps(temp0_151, zmm4)
    zmm14 = __addps_xmmps_memps(zmm14, data_1442a6c40)
    float temp0_171[0x4] = _mm_sub_ps(temp0_161, temp0_168)
    float temp0_172[0x4] = _mm_add_ps(temp0_160, temp0_169)
    float temp0_173[0x4] = _mm_mul_ps(temp0_145, zmm14)
    float temp0_174[0x4] = _mm_mul_ps(zmm9, temp0_171)
    zmm1 = _mm_add_ps(zmm1, temp0_172)
    float temp0_176[0x4] = _mm_mul_ps(temp0_166, temp0_171)
    float temp0_177[0x4] = _mm_mul_ps(zmm6, temp0_173)
    float temp0_178[0x4] = _mm_add_ps(result, temp0_174)
    zmm1 = _mm_add_ps(zmm1, temp0_176)
    result = _mm_blendv_ps(result_1, 
        _mm_add_ps(zmm4, _mm_add_ps(_mm_add_ps(temp0_178, temp0_177), zmm1)), zmm2)

if (r10 != 0)
    var_140 = zmm3
    
    if (r10 != 0)
        result_1[2].q = arg2
        uint64_t rbx = 0
        result_1[0].q = arg3
        
        do
            if (test_bit(r10, rbx.d))
                __common_scos_cout_rare(&var_140[rbx], &var_140[rbx + 0x10])
            
            rbx = zx.q(rbx.d + 1)
        while (rbx.d s< 4)
        
        result_1[2]
        result_1[0]

return result
