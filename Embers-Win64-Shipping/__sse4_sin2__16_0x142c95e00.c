// 函数: __sse4_sin2@@16
// 地址: 0x142c95e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm15[0x2]
double var_b8[0x2] = zmm15
uint32_t r9 = 0
int32_t zmm14[0x4]
int32_t var_28[0x4] = zmm14
int32_t zmm13[0x4]
int32_t var_a8[0x4] = zmm13
uint128_t zmm12
uint128_t var_98 = zmm12
uint32_t result_2[0x4]
uint32_t result_3[0x4] = result_2
uint32_t zmm2[0x4] = data_144293a80
double zmm7[0x2] = data_144293b00
uint32_t temp0[0x4] = _mm_and_ps(arg1, zmm2)
double temp0_1[0x2] = _mm_mul_pd(zmm7, temp0)
double zmm3[0x2] = data_144293b40
double temp0_2[0x2] = _mm_add_pd(temp0_1, zmm3)
zmm7 = _mm_slli_epi64(temp0_2, 0x3f)
double temp0_4[0x2] = _mm_sub_pd(temp0_2, zmm3)
double zmm4[0x2] = data_144293c00
uint32_t temp0_5[0x4] = _mm_andnot_ps(zmm2, arg1)
double temp0_6[0x2] = _mm_mul_pd(zmm4, temp0_4)
double temp0_7[0x2] = _mm_mul_pd(data_144293c40, temp0_4)
uint32_t result[0x4] = _mm_sub_pd(temp0, temp0_6)
double temp0_9[0x2] = _mm_mul_pd(data_144293c80, temp0_4)
result = _mm_sub_pd(result, temp0_7)
double temp0_11[0x2] = _mm_mul_pd(data_144293cc0, temp0_4)
result = _mm_sub_pd(_mm_sub_pd(result, temp0_9), temp0_11)
uint32_t zmm9[0x4] = _mm_mul_pd(result, result)
double temp0_15[0x2] = __cmppd_xmmpd_mempd_immb(temp0, data_144293ac0, 6)
result ^= zmm7
double temp0_16[0x2] = _mm_mul_pd(data_144293f40, zmm9)
uint32_t temp0_17 = _mm_movemask_pd(temp0_15)
double temp0_30[0x2] = _mm_mul_pd(
    _mm_mul_pd(zmm9, 
        __addpd_xmmpd_mempd(
            _mm_mul_pd(
                __addpd_xmmpd_mempd(
                    _mm_mul_pd(
                        __addpd_xmmpd_mempd(
                            _mm_mul_pd(
                                __addpd_xmmpd_mempd(
                                    _mm_mul_pd(
                                        __addpd_xmmpd_mempd(
                                            _mm_mul_pd(
                                                __addpd_xmmpd_mempd(temp0_16, data_144293f00), 
                                                zmm9), 
                                            data_144293ec0), 
                                        zmm9), 
                                    data_144293e80), 
                                zmm9), 
                            data_144293e40), 
                        zmm9), 
                    data_144293e00), 
                zmm9), 
            data_144293dc0)), 
    result)
uint32_t var_140[0x4]
int128_t* var_10 = &var_140
result = _mm_add_pd(result, temp0_30) ^ temp0_5
double var_178[0x2]

if (temp0_17 != 0)
    zmm7 = _mm_srli_epi64(data_144280400 & temp0, 0x34)
    uint64_t r10_1 = zx.q(zmm7[0].d)
    uint32_t var_158_1[0x4] = arg1
    double zmm5[0x2] = data_144293780
    uint64_t rax_1 = zx.q(_mm_extract_epi16(zmm7, 4))
    var_178 = temp0_15
    uint32_t temp0_35[0x4] = _mm_and_ps(temp0, zmm5)
    uint64_t r8_2 = zx.q((r10_1 * 3).d << 3)
    uint32_t result_1[0x4] = result
    double zmm6[0x2] = zx.o(*(&data_144283500 + r8_2))
    result = zx.o(*(r8_2 + 0x144283508))
    zmm12 = zx.o(*(r8_2 + 0x144283510))
    zmm3 = __paddq_xmmdq_memdq(data_144280410 & temp0, data_144280420)
    arg1 = _mm_cmpeq_pd(temp0_35, zmm5, 0)
    uint64_t rcx_3 = zx.q((rax_1 * 3).d << 3)
    zmm12 = zmm12.q | *(rcx_3 + 0x144283510) << 0x40
    zmm4 = _mm_srli_epi64(zmm3, 0x20)
    zmm13 = data_144280430
    r9 = _mm_movemask_pd(arg1)
    zmm5 = _mm_srli_epi64(zmm12, 0x20)
    zmm3 &= zmm13
    result = result[0].q | *(rcx_3 + 0x144283508) << 0x40
    arg1 = _mm_mul_epu32(zmm4, zmm5)
    result_2 = result
    zmm5 = _mm_mul_epu32(zmm5, zmm3)
    result &= zmm13
    double zmm8[0x2] = _mm_mul_epu32(zmm3, result)
    zmm5 = _mm_srli_epi64(zmm5, 0x20)
    zmm12 = _mm_mul_epu32(zmm12 & zmm13, zmm4)
    result = _mm_mul_epu32(result, zmm4)
    arg1 = _mm_add_epi64(arg1, zmm5)
    result_2 = _mm_srli_epi64(result_2, 0x20)
    zmm9 = _mm_mul_epu32(zmm3, result_2)
    result_2 = _mm_mul_epu32(result_2, zmm4)
    zmm7 = _mm_add_epi64(zmm13 & zmm8, arg1)
    zmm6 = zmm6[0] | *(&data_144283500 + rcx_3) << 0x40
    zmm12 = _mm_srli_epi64(zmm12, 0x20)
    zmm8 = _mm_srli_epi64(zmm8, 0x20)
    zmm14 = zmm13 & zmm6
    zmm12 = _mm_add_epi64(zmm12, zmm7)
    result = _mm_add_epi64(result, zmm8)
    zmm15 = _mm_mul_epu32(zmm3, zmm14)
    zmm4 = _mm_mul_epu32(zmm4, zmm14)
    zmm5 = _mm_add_epi64(zmm13 & zmm9, result)
    arg1 = _mm_srli_epi64(zmm12, 0x20)
    zmm9 = _mm_srli_epi64(zmm9, 0x20)
    zmm6 = _mm_srli_epi64(zmm6, 0x20)
    arg1 = _mm_add_epi64(arg1, zmm5)
    result_2 = _mm_add_epi64(result_2, zmm9)
    zmm3 = _mm_mul_epu32(zmm3, zmm6)
    zmm8 = _mm_add_epi64(zmm13 & zmm15, result_2)
    result = _mm_srli_epi64(arg1, 0x20)
    zmm15 = _mm_srli_epi64(zmm15, 0x20)
    result = _mm_add_epi64(result, zmm8)
    zmm3 = _mm_add_epi64(zmm3 & zmm13, _mm_add_epi64(zmm4, zmm15))
    zmm7 = _mm_slli_epi64(_mm_add_epi64(_mm_srli_epi64(result, 0x20), zmm3), 0x20)
    arg1 = _mm_slli_epi64(arg1, 0x20)
    zmm7 = _mm_add_epi64(zmm7, result & zmm13)
    zmm14 = data_144280440 & temp0
    result_2 = data_144280460
    zmm4 = _mm_srli_epi64(zmm7, 0xc) | (data_144280450 ^ zmm14)
    double temp0_77[0x2] = _mm_add_pd(result_2, zmm4)
    arg1 = _mm_add_epi64(arg1, zmm12 & zmm13)
    zmm3 = data_1442804b0 & zmm7
    zmm13 = data_144280480
    zmm5 = data_144280490 & arg1
    zmm12 = _mm_sub_pd(temp0_77, result_2)
    zmm13 ^= zmm14
    zmm3 = _mm_slli_epi64(zmm3, 0x28) | _mm_srli_epi64(arg1, 0x18)
    zmm14 ^= data_1442804a0
    zmm5 = _mm_slli_epi64(zmm5, 0x1c)
    double temp0_83[0x2] = _mm_sub_pd(zmm4, zmm12)
    double temp0_84[0x2] = _mm_sub_pd(zmm3 | zmm14, zmm14)
    arg1 = _mm_add_pd(temp0_83, temp0_84)
    double temp0_86[0x2] = _mm_sub_pd(temp0_83, arg1)
    double temp0_87[0x2] = _mm_sub_pd(zmm5 | zmm13, zmm13)
    double temp0_88[0x2] = _mm_add_pd(temp0_84, temp0_86)
    zmm7 = _mm_and_ps(data_1442804f0, arg1)
    double temp0_90[0x2] = _mm_add_pd(temp0_87, temp0_88)
    arg1 = _mm_sub_pd(arg1, zmm7)
    double temp0_92[0x2] = __mulpd_xmmpd_mempd(temp0_90, data_1442804c0)
    zmm15 = data_1442804d0
    zmm4 = data_1442804e0
    double temp0_93[0x2] = _mm_mul_pd(zmm15, zmm7)
    double temp0_94[0x2] = _mm_mul_pd(zmm15, arg1)
    double temp0_95[0x2] = _mm_mul_pd(zmm7, zmm4)
    double temp0_96[0x2] = _mm_mul_pd(zmm4, arg1)
    double temp0_99[0x2] =
        _mm_add_pd(_mm_add_pd(temp0_94, temp0_95), _mm_add_pd(temp0_92, temp0_96))
    zmm6 = __andps_xmmxud_memxud(temp0_77, data_144280470)
    zmm5 = data_144280510
    int32_t rdx_2 = zmm6[0].d
    zmm3 = _mm_and_ps(data_144280500, temp0)
    zmm13 = data_144293980
    zmm9 = _mm_add_pd(temp0_99, temp0_93)
    double temp0_103[0x2] = _mm_cmpeq_pd(zmm5, zmm3, 1)
    double temp0_104[0x2] = _mm_cmpeq_pd(zmm3, zmm5, 2)
    double temp0_105[0x2] = _mm_sub_pd(temp0_93, zmm9)
    uint64_t rdx_3 = zx.q(rdx_2 << 5)
    zmm3 = _mm_and_ps(temp0_104, temp0)
    zmm5 = zx.o(*(&data_14428f700 + rdx_3))
    uint32_t temp0_107[0x4] = _mm_and_ps(zmm9, temp0_103)
    uint32_t temp0_108 = _mm_extract_epi16(zmm6, 4)
    double temp0_109[0x2] = _mm_add_pd(temp0_99, temp0_105)
    uint64_t rax_3 = zx.q(temp0_108 << 5)
    zmm3 = _mm_or_ps(zmm3, temp0_107)
    zmm12 = *(rdx_3 + 0x14428f708) | *(rax_3 + 0x14428f708) << 0x40
    double temp0_111[0x2] = _mm_mul_pd(zmm3, zmm12)
    arg1 = zx.o(*(rdx_3 + 0x14428f710))
    zmm4 = _mm_and_ps(temp0_103, temp0_109)
    arg1 = arg1[0].q | *(rax_3 + 0x14428f710) << 0x40
    result = _mm_add_pd(arg1, temp0_111)
    double temp0_115[0x2] = _mm_add_pd(temp0_111, _mm_sub_pd(arg1, result))
    double temp0_116[0x2] = _mm_mul_pd(zmm3, zmm3)
    zmm5 = zmm5[0] | *(&data_14428f700 + rax_3) << 0x40
    result_2 = _mm_mul_pd(zmm3, zmm5)
    double temp0_118[0x2] = _mm_add_pd(zmm5, zmm12)
    uint32_t zmm1[0x4] = _mm_add_pd(result, result_2)
    zmm13 = _mm_mul_pd(zmm13, temp0_116)
    result = _mm_sub_pd(result, zmm1)
    zmm13 = __addpd_xmmpd_mempd(zmm13, *"HDUUUU")
    result_2 = _mm_add_pd(result_2, result)
    zmm13 = _mm_mul_pd(zmm13, temp0_116)
    double temp0_125[0x2] = _mm_add_pd(temp0_115, result_2)
    zmm13 = _mm_mul_pd(zmm13, zmm3)
    double temp0_127[0x2] = _mm_mul_pd(zmm3, arg1)
    zmm13 = _mm_mul_pd(zmm13, temp0_118)
    double temp0_129[0x2] = _mm_sub_pd(temp0_118, temp0_127)
    double temp0_130[0x2] = _mm_add_pd(temp0_125, zmm13)
    double temp0_131[0x2] = _mm_mul_pd(zmm4, temp0_129)
    result = _mm_blendv_pd(result_1, 
        _mm_add_pd(zmm1, 
            _mm_add_pd(
                _mm_add_pd(temp0_130, 
                    _mm_mul_pd(
                        _mm_mul_pd(temp0_116, 
                            __addpd_xmmpd_mempd(
                                _mm_mul_pd(
                                    __addpd_xmmpd_mempd(_mm_mul_pd(data_144293a40, temp0_116), 
                                        data_144293a00), 
                                    temp0_116), 
                                data_1442939c0)), 
                        arg1)), 
                _mm_add_pd(zx.o(*(rdx_3 + 0x14428f718))[0] | *(rax_3 + 0x14428f718) << 0x40, 
                temp0_131))) ^ temp0_5, 
        var_178)
    arg1 = var_158_1

if (r9 != 0)
    var_140 = arg1
    
    if (r9 != 0)
        var_178[1] = arg2
        uint64_t rbx = 0
        var_178[0] = arg3
        
        do
            if (test_bit(r9, rbx.d))
                __common_dcos_cout_rare(&var_140[rbx * 2], &var_140[rbx * 2 + 0x10])
            
            rbx = zx.q(rbx.d + 1)
        while (rbx.d s< 2)
        
        var_178[1]
        var_178[0]

return result
