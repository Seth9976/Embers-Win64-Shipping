// 函数: __sse4_sinf4@@16
// 地址: 0x142c94fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm2[0x4] = arg1
int32_t zmm15[0x4]
int32_t var_28[0x4] = zmm15
uint32_t zmm14[0x4]
uint32_t var_68[0x4] = zmm14
uint32_t r10 = 0
int32_t zmm13[0x4]
int32_t var_b8[0x4] = zmm13
uint32_t zmm12[0x4]
uint32_t var_58[0x4] = zmm12
uint128_t zmm11
uint128_t var_48 = zmm11
uint32_t zmm8[0x4] = data_144282f00
float zmm6[0x4] = data_144283380
uint32_t temp0[0x4] = _mm_and_ps(zmm2, zmm8)
float temp0_1[0x4] = _mm_mul_ps(zmm6, temp0)
float zmm1[0x4] = data_1442833c0
float zmm3[0x4] = data_1442830c0
uint32_t temp0_2[0x4] = _mm_andnot_ps(zmm8, zmm2)
float zmm4[0x4] = data_144283100
float temp0_3[0x4] = _mm_add_ps(temp0_1, zmm1)
arg1 = __cmpps_xmmps_memps_immb(temp0, data_144282f40, 6)
float temp0_5[0x4] = _mm_sub_ps(temp0_3, zmm1)
uint32_t temp0_6 = _mm_movemask_ps(arg1)
float zmm5[0x4] = data_144283140
float zmm7[0x4] = _mm_slli_epi32(temp0_3, 0x1f)
float temp0_8[0x4] = _mm_mul_ps(zmm3, temp0_5)
float temp0_9[0x4] = _mm_mul_ps(zmm4, temp0_5)
float temp0_10[0x4] = _mm_mul_ps(zmm5, temp0_5)
float temp0_11[0x4] = _mm_sub_ps(temp0, temp0_8)
zmm1 = data_144283180
float temp0_12[0x4] = _mm_sub_ps(temp0_11, temp0_9)
float temp0_13[0x4] = _mm_mul_ps(zmm1, temp0_5)
float temp0_14[0x4] = _mm_sub_ps(temp0_12, temp0_10)
zmm3 = data_144283340
float temp0_15[0x4] = _mm_sub_ps(temp0_14, temp0_13)
float temp0_16[0x4] = _mm_mul_ps(temp0_15, temp0_15)
float result[0x4] = temp0_15 ^ zmm7
uint32_t var_140[0x4]
uint32_t (* var_10)[0x4] = &var_140
result = _mm_add_ps(result, 
    _mm_mul_ps(
        _mm_mul_ps(temp0_16, 
            __addps_xmmps_memps(
                _mm_mul_ps(
                    __addps_xmmps_memps(
                        _mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(zmm3, temp0_16), data_144283300), 
                            temp0_16), 
                        data_1442832c0), 
                    temp0_16), 
                data_144283280)), 
        result)) ^ temp0_2
float result_1[0x4]

if (temp0_6 != 0)
    zmm1 = data_144282f80
    uint32_t zmm9[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0, zmm1), zmm1, 0)
    uint32_t temp0_30[0x4] = _mm_srli_epi32(_mm_shuffle_epi32(0x7f800000, 0) & zmm2, 0x17)
    r10 = _mm_movemask_ps(zmm9)
    uint32_t temp0_34[0x4] = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(temp0_30, 1), temp0_30), 2)
    uint64_t r8_1 = zx.q(temp0_34[0])
    result_1 = result
    uint32_t temp0_35[0x4] = _mm_shuffle_epi32(0x7fffff, 0)
    uint64_t rdx_2 = zx.q(_mm_extract_epi32(temp0_34, 2))
    uint64_t rcx_2 = zx.q(_mm_extract_epi32(temp0_34, 1))
    uint64_t rax_1 = zx.q(_mm_extract_epi32(temp0_34, 3))
    zmm6 = zx.o(*(rdx_2 + 0x144281308))
    zmm7 = zx.o(*(rdx_2 + 0x144281304))
    zmm11 = zx.o(*(r8_1 + 0x144281304))
    result = __pinsrd_xmmdq_memd_immb(zx.o(*(r8_1 + 0x144281308)), *(rcx_2 + 0x144281308), 1)
    zmm6 = __pinsrd_xmmdq_memd_immb(zmm6, *(rax_1 + 0x144281308), 1)
    zmm7 = __pinsrd_xmmdq_memd_immb(zmm7, *(rax_1 + 0x144281304), 1)
    zmm11 = __pinsrd_xmmdq_memd_immb(zmm11, *(rcx_2 + 0x144281304), 1)
    zmm8 = zx.o(*(&data_144281300 + rdx_2))
    int32_t temp0_43[0x4] =
        __pinsrd_xmmdq_memd_immb(zx.o(*(&data_144281300 + r8_1)), *(&data_144281300 + rcx_2), 1)
    zmm8 = __pinsrd_xmmdq_memd_immb(zmm8, *(&data_144281300 + rax_1), 1)
    result = _mm_unpacklo_epi64(result, zmm6[0].q)
    zmm11 = _mm_unpacklo_epi64(zmm11, zmm7[0].q)
    zmm15 = _mm_srli_epi32(result, 0x10)
    zmm7 = _mm_srli_epi32(zmm11, 0x10)
    int32_t temp0_49[0x4] = _mm_unpacklo_epi64(temp0_43, zmm8[0].q)
    zmm13 = _mm_srli_epi32(temp0_49, 0x10)
    zmm14 = _mm_add_epi32(temp0_35 & zmm2, _mm_shuffle_epi32(0x800000, 0))
    zmm4 = _mm_shuffle_epi32(0xffff, 0)
    zmm3 = _mm_srli_epi32(zmm14, 0x10)
    zmm14 &= zmm4
    zmm11 &= zmm4
    zmm8 = _mm_mullo_epi32(zmm14, zmm11)
    zmm1 = _mm_mullo_epi32(zmm3, zmm15)
    zmm15 = _mm_srli_epi32(_mm_mullo_epi32(zmm15, zmm14), 0x10)
    uint32_t temp0_59[0x4] = _mm_srli_epi32(zmm8, 0x10)
    result = _mm_mullo_epi32(result & zmm4, zmm3)
    zmm1 = _mm_add_epi32(zmm1, zmm15)
    zmm9 = _mm_mullo_epi32(zmm14, zmm7)
    result = _mm_srli_epi32(result, 0x10)
    zmm12 = _mm_add_epi32(zmm8 & zmm4, zmm1)
    zmm11 = _mm_mullo_epi32(zmm11, zmm3)
    result = _mm_add_epi32(result, zmm12)
    zmm5 = temp0_49 & zmm4
    zmm11 = _mm_add_epi32(zmm11, temp0_59)
    zmm1 = _mm_srli_epi32(result, 0x10)
    zmm6 = _mm_mullo_epi32(zmm14, zmm5)
    int32_t temp0_70[0x4] = _mm_add_epi32(zmm9 & zmm4, zmm11)
    zmm7 = _mm_mullo_epi32(zmm7, zmm3)
    zmm1 = _mm_add_epi32(zmm1, temp0_70)
    zmm7 = _mm_add_epi32(zmm7, _mm_srli_epi32(zmm9, 0x10))
    uint32_t temp0_75[0x4] = _mm_srli_epi32(zmm1, 0x10)
    zmm11 = _mm_add_epi32(zmm6 & zmm4, zmm7)
    zmm6 = _mm_srli_epi32(zmm6, 0x10)
    zmm14 = _mm_mullo_epi32(zmm14, zmm13)
    zmm8 = _mm_add_epi32(temp0_75, zmm11)
    zmm3 = _mm_add_epi32(_mm_mullo_epi32(zmm3, zmm5), zmm6)
    zmm15 = _mm_slli_epi32(
        _mm_add_epi32(_mm_srli_epi32(zmm8, 0x10), _mm_add_epi32(zmm14 & zmm4, zmm3)), 0x10)
    zmm1 = _mm_slli_epi32(zmm1, 0x10)
    uint32_t temp0_87[0x4] = _mm_shuffle_epi32(0x80000000, 0)
    int32_t temp0_88[0x4] = _mm_add_epi32(zmm15, zmm8 & zmm4)
    zmm1 = _mm_add_epi32(zmm1, result & zmm4)
    zmm12 = temp0_87 & zmm2
    zmm9 = _mm_shuffle_epi32(0x3f800000, 0) ^ zmm12
    zmm13 = _mm_srli_epi32(temp0_88, 9) | zmm9
    zmm7 = _mm_shuffle_epi32(0x47400000, 0)
    zmm11 = _mm_shuffle_epi32(0x3ffff, 0) & zmm1
    zmm9 = _mm_shuffle_epi32(0x28800000, 0) ^ zmm12
    zmm11 = _mm_slli_epi32(zmm11, 5) | zmm9
    zmm1 = _mm_srli_epi32(zmm1, 0x12)
    zmm14 = _mm_add_ps(zmm13, zmm7)
    zmm11 = _mm_sub_ps(zmm11, zmm9)
    zmm8 = _mm_shuffle_epi32(0x1ff, 0) & temp0_88
    zmm12 ^= _mm_shuffle_epi32(0x34000000, 0)
    zmm8 = _mm_slli_epi32(zmm8, 0xe) | zmm1 | zmm12
    result = _mm_shuffle_epi32(0x40c91000, 0)
    float temp0_103[0x4] = _mm_sub_ps(zmm14, zmm7)
    zmm8 = _mm_sub_ps(zmm8, zmm12)
    zmm13 = _mm_sub_ps(zmm13, temp0_103)
    zmm5 = _mm_shuffle_epi32(0xfffff000, 0)
    float temp0_107[0x4] = _mm_add_ps(zmm13, zmm8)
    zmm5 = _mm_and_ps(zmm5, temp0_107)
    zmm13 = _mm_sub_ps(zmm13, temp0_107)
    float temp0_110[0x4] = _mm_sub_ps(temp0_107, zmm5)
    zmm8 = _mm_add_ps(zmm8, zmm13)
    zmm4 = _mm_shuffle_epi32(0x40c90fdb, 0)
    zmm11 = _mm_add_ps(zmm11, zmm8)
    float temp0_114[0x4] = _mm_mul_ps(zmm5, result)
    float temp0_115[0x4] = _mm_mul_ps(result, temp0_110)
    float temp0_116[0x4] = _mm_mul_ps(zmm4, zmm11)
    zmm3 = _mm_shuffle_epi32(0xb795777a, 0)
    uint32_t temp0_119[0x4] = _mm_and_ps(_mm_shuffle_epi32(0x7fffffff, 0), zmm2)
    float temp0_120[0x4] = _mm_mul_ps(zmm5, zmm3)
    float temp0_121[0x4] = _mm_mul_ps(zmm3, temp0_110)
    float temp0_124[0x4] =
        _mm_add_ps(_mm_add_ps(temp0_115, temp0_120), _mm_add_ps(temp0_116, temp0_121))
    zmm13 = _mm_shuffle_epi32(0x35800000, 0)
    zmm15 = _mm_add_ps(temp0_124, temp0_114)
    float temp0_127[0x4] = _mm_sub_ps(temp0_114, zmm15)
    zmm8 = _mm_cmpeq_ps(zmm13, temp0_119, 1)
    zmm9 = _mm_cmpeq_ps(temp0_119, zmm13, 2)
    float temp0_130[0x4] = _mm_add_ps(temp0_124, temp0_127)
    zmm15 = _mm_and_ps(zmm15, zmm8)
    uint32_t temp0_132[0x4] = _mm_and_ps(zmm8, temp0_130)
    uint32_t temp0_133[0x4] = _mm_and_ps(zmm9, zmm2)
    zmm6 = _mm_shuffle_epi32(0xff, 0)
    uint32_t temp0_135[0x4] = _mm_or_ps(temp0_133, zmm15)
    uint32_t temp0_136[0x4] = _mm_slli_epi32(zmm14 & zmm6, 4)
    uint64_t rdx_3 = zx.q(temp0_136[0])
    zmm13 = data_144283080
    float temp0_137[0x4] = _mm_mul_ps(temp0_135, temp0_135)
    uint64_t rcx_3 = zx.q(_mm_extract_epi32(temp0_136, 2))
    uint64_t rax_2 = zx.q(_mm_extract_epi32(temp0_136, 1))
    uint64_t r8_2 = zx.q(_mm_extract_epi32(temp0_136, 3))
    zmm12 = zx.o(*(rdx_3 + 0x144281f0c))
    zmm3 = zx.o(*(rcx_3 + 0x144281f04))
    zmm4 = zx.o(*(rcx_3 + 0x144281f0c))
    zmm5 = __pinsrd_xmmdq_memd_immb(zx.o(*(rdx_3 + 0x144281f04)), *(rax_2 + 0x144281f04), 1)
    zmm12 = __pinsrd_xmmdq_memd_immb(zmm12, *(rax_2 + 0x144281f0c), 1)
    zmm3 = __pinsrd_xmmdq_memd_immb(zmm3, *(r8_2 + 0x144281f04), 1)
    zmm4 = __pinsrd_xmmdq_memd_immb(zmm4, *(r8_2 + 0x144281f0c), 1)
    zmm13 = _mm_mul_ps(zmm13, temp0_137)
    zmm6 = zx.o(*(&data_144281f00 + rdx_3))
    zmm5 = _mm_unpacklo_pd(zmm5, zmm3[0].q)
    zmm12 = _mm_unpacklo_epi64(zmm12, zmm4[0].q)
    float temp0_148[0x4] = _mm_mul_ps(temp0_135, zmm12)
    zmm6 = __pinsrd_xmmdq_memd_immb(zmm6, *(&data_144281f00 + rax_2), 1)
    zmm13 = __addps_xmmps_memps(zmm13, data_144283040)
    float temp0_151[0x4] = _mm_add_ps(zmm5, temp0_148)
    zmm14 = __pinsrd_xmmdq_memd_immb(zx.o(*(&data_144281f00 + rcx_3)), *(&data_144281f00 + r8_2), 1)
    float temp0_153[0x4] = _mm_sub_ps(zmm5, temp0_151)
    zmm15 = zx.o(*(rcx_3 + 0x144281f08))
    float temp0_154[0x4] = _mm_add_ps(temp0_148, temp0_153)
    int32_t temp0_155[0x4] = __pinsrd_xmmdq_memd_immb(zmm15, *(r8_2 + 0x144281f08), 1)
    zmm1 = data_144283000
    zmm6 = _mm_unpacklo_epi64(zmm6, zmm14[0].q)
    float temp0_157[0x4] = _mm_mul_ps(zmm1, temp0_137)
    zmm11 = _mm_mul_ps(temp0_135, zmm6)
    float temp0_159[0x4] = _mm_add_ps(zmm6, zmm12)
    float temp0_160[0x4] = __addps_xmmps_memps(temp0_157, data_144282fc0)
    float temp0_161[0x4] = _mm_add_ps(temp0_151, zmm11)
    float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_137)
    float temp0_163[0x4] = _mm_mul_ps(temp0_137, zmm13)
    float temp0_164[0x4] = _mm_sub_ps(temp0_151, temp0_161)
    float temp0_165[0x4] = _mm_mul_ps(temp0_162, temp0_135)
    zmm9 = _mm_mul_ps(temp0_135, zmm5)
    zmm11 = _mm_add_ps(zmm11, temp0_164)
    float temp0_168[0x4] = _mm_mul_ps(zmm5, temp0_163)
    float temp0_169[0x4] = _mm_sub_ps(temp0_159, zmm9)
    float temp0_170[0x4] = _mm_add_ps(temp0_154, zmm11)
    zmm8 = _mm_mul_ps(temp0_132, temp0_169)
    float temp0_172[0x4] = _mm_mul_ps(temp0_165, temp0_169)
    result = zx.o(*(rdx_3 + 0x144281f08))
    float temp0_173[0x4] = _mm_add_ps(temp0_170, temp0_172)
    result = _mm_blendv_ps(result_1, 
        _mm_add_ps(temp0_161, 
            _mm_add_ps(
                _mm_add_ps(
                    _mm_add_ps(
                        _mm_unpacklo_epi64(
                            __pinsrd_xmmdq_memd_immb(result, *(rax_2 + 0x144281f08), 1), 
                            temp0_155[0].q), 
                        zmm8), 
                    temp0_168), 
                temp0_173)), 
        arg1)

if (r10 != 0)
    var_140 = zmm2
    
    if (r10 != 0)
        result_1[2].q = arg2
        uint64_t rbx = 0
        result_1[0].q = arg3
        
        do
            if (test_bit(r10, rbx.d))
                __common_ssin_cout_rare(&var_140[rbx], &var_140[rbx + 0x10])
            
            rbx = zx.q(rbx.d + 1)
        while (rbx.d s< 4)
        
        result_1[2]
        result_1[0]

return result
