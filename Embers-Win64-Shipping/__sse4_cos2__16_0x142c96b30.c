// 函数: __sse4_cos2@@16
// 地址: 0x142c96b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = arg1
double zmm15[0x2]
double var_b8[0x2] = zmm15
uint32_t r9 = 0
double zmm14[0x2]
double var_a8[0x2] = zmm14
uint32_t zmm1[0x4] = data_1442a4680
arg1 = data_1442a4700
uint32_t temp0[0x4] = _mm_and_ps(zmm3, zmm1)
double temp0_1[0x2] = _mm_sub_pd(arg1, temp0)
double zmm11[0x2] = data_1442a4740
uint32_t temp0_2[0x4] = _mm_and_ps(zmm1, temp0_1)
double temp0_3[0x2] = _mm_mul_pd(zmm11, temp0_1)
double temp0_4[0x2] = _mm_cmpeq_pd(arg1, temp0_1, 0)
double zmm5[0x2] = data_1442a4780
double temp0_5[0x2] = _mm_add_pd(temp0_3, zmm5)
uint32_t zmm2[0x4] = __cmppd_xmmpd_mempd_immb(temp0_2, data_1442a46c0, 6)
zmm11 = _mm_slli_epi64(temp0_5, 0x3f)
double temp0_8[0x2] = _mm_sub_pd(temp0_5, zmm5)
uint32_t temp0_9 = _mm_movemask_pd(zmm2)
double temp0_10[0x2] = _mm_sub_pd(data_1442a47c0, temp0_8)
double temp0_11[0x2] = _mm_mul_pd(data_1442a4800, temp0_10)
double temp0_12[0x2] = _mm_mul_pd(data_1442a4840, temp0_10)
double temp0_13[0x2] = _mm_sub_pd(temp0_11, temp0)
double temp0_14[0x2] = _mm_mul_pd(data_1442a4880, temp0_10)
double temp0_15[0x2] = _mm_add_pd(temp0_13, temp0_12)
double temp0_16[0x2] = _mm_mul_pd(data_1442a48c0, temp0_10)
double temp0_18[0x2] = _mm_add_pd(_mm_add_pd(temp0_15, temp0_14), temp0_16)
double temp0_19[0x2] = _mm_mul_pd(temp0_18, temp0_18)
double result[0x2] = temp0_18 ^ zmm11
double temp0_30[0x2] = _mm_mul_pd(
    __addpd_xmmpd_mempd(
        _mm_mul_pd(
            __addpd_xmmpd_mempd(
                _mm_mul_pd(
                    __addpd_xmmpd_mempd(
                        _mm_mul_pd(
                            __addpd_xmmpd_mempd(
                                _mm_mul_pd(
                                    __addpd_xmmpd_mempd(_mm_mul_pd(data_1442a4b80, temp0_19), 
                                        data_1442a4b40), 
                                    temp0_19), 
                                data_1442a4b00), 
                            temp0_19), 
                        data_1442a4ac0), 
                    temp0_19), 
                data_1442a4a80), 
            temp0_19), 
        data_1442a4a40), 
    temp0_19)
double temp0_31[0x2] = _mm_mul_pd(temp0_19, result)
uint32_t var_140[0x4]
int128_t* var_10 = &var_140
result = __blendvpd_xmmdq_memdq(
    _mm_add_pd(result, _mm_mul_pd(__addpd_xmmpd_mempd(temp0_30, data_1442a49c0), temp0_31)), 
    data_1442a4bc0, temp0_4)
double result_1[0x2]

if (temp0_9 != 0)
    double zmm10[0x2] = data_1442a4380
    r9 = _mm_movemask_pd(_mm_cmpeq_pd(_mm_and_ps(temp0_2, zmm10), zmm10, 0))
    zmm1 = _mm_srli_epi64(data_144280800 & zmm3, 0x34)
    uint64_t r10_1 = zx.q(zmm1[0])
    double zmm9[0x2] = data_144280810 & zmm3
    uint64_t rax_1 = zx.q(_mm_extract_epi16(zmm1, 4))
    zmm9 = __paddq_xmmdq_memdq(zmm9, data_144280820)
    double zmm7[0x2] = _mm_srli_epi64(zmm9, 0x20)
    uint64_t r8_2 = zx.q((r10_1 * 3).d << 3)
    double zmm8[0x2] = zx.o(*(&data_144294100 + r8_2))
    double zmm13[0x2] = zx.o(*(r8_2 + 0x144294108))
    uint64_t rcx_3 = zx.q((rax_1 * 3).d << 3)
    uint32_t zmm6[0x4] = data_144280830
    zmm9 &= zmm6
    zmm15 = zx.o(*(r8_2 + 0x144294110))[0] | *(rcx_3 + 0x144294110) << 0x40
    zmm1 = _mm_srli_epi64(zmm15, 0x20)
    zmm13 = zmm13[0] | *(rcx_3 + 0x144294108) << 0x40
    zmm10 = _mm_mul_epu32(zmm7, zmm1)
    zmm14 = zmm13
    zmm1 = _mm_mul_epu32(zmm1, zmm9)
    zmm15 = _mm_mul_epu32(zmm15 & zmm6, zmm7)
    zmm13 &= zmm6
    zmm1 = _mm_srli_epi64(zmm1, 0x20)
    zmm11 = _mm_mul_epu32(zmm9, zmm13)
    zmm14 = _mm_srli_epi64(zmm14, 0x20)
    zmm13 = _mm_mul_epu32(zmm13, zmm7)
    double zmm12[0x2] = _mm_mul_epu32(zmm9, zmm14)
    zmm14 = _mm_mul_epu32(zmm14, zmm7)
    zmm10 = _mm_add_epi64(zmm10, zmm1)
    zmm15 = _mm_srli_epi64(zmm15, 0x20)
    arg1 = _mm_add_epi64(zmm6 & zmm11, zmm10)
    result_1 = result
    zmm8 = zmm8[0] | *(&data_144294100 + rcx_3) << 0x40
    zmm11 = _mm_srli_epi64(zmm11, 0x20)
    result = zmm6 & zmm8
    zmm15 = _mm_add_epi64(zmm15, arg1)
    zmm13 = _mm_add_epi64(zmm13, zmm11)
    zmm5 = _mm_mul_epu32(zmm9, result)
    zmm7 = _mm_mul_epu32(zmm7, result)
    zmm10 = _mm_add_epi64(zmm6 & zmm12, zmm13)
    zmm1 = _mm_srli_epi64(zmm15, 0x20)
    zmm12 = _mm_srli_epi64(zmm12, 0x20)
    zmm8 = _mm_srli_epi64(zmm8, 0x20)
    zmm1 = _mm_add_epi64(zmm1, zmm10)
    zmm14 = _mm_add_epi64(zmm14, zmm12)
    zmm9 = _mm_mul_epu32(zmm9, zmm8)
    zmm11 = _mm_add_epi64(zmm6 & zmm5, zmm14)
    zmm13 = _mm_srli_epi64(zmm1, 0x20)
    zmm5 = _mm_srli_epi64(zmm5, 0x20)
    zmm13 = _mm_add_epi64(zmm13, zmm11)
    zmm9 = _mm_add_epi64(zmm9 & zmm6, _mm_add_epi64(zmm7, zmm5))
    zmm10 = _mm_add_epi64(_mm_slli_epi64(_mm_add_epi64(_mm_srli_epi64(zmm13, 0x20), zmm9), 0x20), 
        zmm13 & zmm6)
    zmm5 = data_144280840 & zmm3
    zmm14 = data_144280860
    zmm7 = _mm_srli_epi64(zmm10, 0xc) | (data_144280850 ^ zmm5)
    zmm1 = _mm_slli_epi64(zmm1, 0x20)
    double temp0_81[0x2] = _mm_add_pd(zmm14, zmm7)
    zmm1 = _mm_add_epi64(zmm1, zmm15 & zmm6)
    zmm6 = _mm_sub_pd(temp0_81, zmm14)
    zmm8 = data_144280890 & zmm1
    result = data_144280880 ^ zmm5
    zmm11 = _mm_slli_epi64(data_1442808b0 & zmm10, 0x28) | _mm_srli_epi64(zmm1, 0x18)
    zmm5 ^= data_1442808a0
    zmm8 = _mm_slli_epi64(zmm8, 0x1c)
    double temp0_87[0x2] = _mm_sub_pd(zmm7, zmm6)
    double temp0_88[0x2] = _mm_sub_pd(zmm11 | zmm5, zmm5)
    zmm1 = _mm_add_pd(temp0_87, temp0_88)
    double temp0_90[0x2] = _mm_sub_pd(temp0_87, zmm1)
    double temp0_91[0x2] = _mm_sub_pd(zmm8 | result, result)
    double temp0_92[0x2] = _mm_add_pd(temp0_88, temp0_90)
    zmm10 = _mm_and_ps(data_1442808f0, zmm1)
    double temp0_94[0x2] = _mm_add_pd(temp0_91, temp0_92)
    zmm1 = _mm_sub_pd(zmm1, zmm10)
    double temp0_96[0x2] = __mulpd_xmmpd_mempd(temp0_94, data_1442808c0)
    zmm15 = data_1442808d0
    zmm6 = data_1442808e0
    double temp0_97[0x2] = _mm_mul_pd(zmm15, zmm10)
    double temp0_98[0x2] = _mm_mul_pd(zmm15, zmm1)
    double temp0_99[0x2] = _mm_mul_pd(zmm10, zmm6)
    zmm6 = _mm_mul_pd(zmm6, zmm1)
    double temp0_103[0x2] = _mm_add_pd(_mm_add_pd(temp0_98, temp0_99), _mm_add_pd(temp0_96, zmm6))
    zmm9 = __andps_xmmxud_memxud(temp0_81, data_144280870)
    result = data_144280910
    int32_t rdx_2 = zmm9[0].d
    zmm7 = _mm_and_ps(data_144280900, zmm3)
    double temp0_106[0x2] = _mm_add_pd(temp0_103, temp0_97)
    zmm6 = _mm_cmpeq_pd(result, zmm7, 1)
    double temp0_108[0x2] = _mm_cmpeq_pd(zmm7, result, 2)
    double temp0_109[0x2] = _mm_sub_pd(temp0_97, temp0_106)
    uint64_t rdx_3 = zx.q(rdx_2 << 5)
    zmm7 = _mm_and_ps(temp0_108, zmm3)
    result = zx.o(*(&data_1442a0300 + rdx_3))
    zmm8 = _mm_and_ps(temp0_106, zmm6)
    uint32_t temp0_112 = _mm_extract_epi16(zmm9, 4)
    double temp0_113[0x2] = _mm_add_pd(temp0_103, temp0_109)
    uint64_t rax_3 = zx.q(temp0_112 << 5)
    zmm7 = _mm_or_ps(zmm7, zmm8)
    zmm8 = zx.o(*(rdx_3 + 0x1442a0308))[0] | *(rax_3 + 0x1442a0308) << 0x40
    double temp0_115[0x2] = _mm_mul_pd(zmm7, zmm8)
    zmm10 = zx.o(*(rdx_3 + 0x1442a0310))
    uint32_t temp0_116[0x4] = _mm_and_ps(zmm6, temp0_113)
    result = result[0] | *(&data_1442a0300 + rax_3) << 0x40
    zmm10 = zmm10[0] | *(rax_3 + 0x1442a0310) << 0x40
    zmm1 = _mm_mul_pd(zmm7, result)
    double temp0_118[0x2] = _mm_add_pd(result, zmm8)
    double temp0_119[0x2] = _mm_add_pd(zmm10, temp0_115)
    double temp0_120[0x2] = _mm_add_pd(temp0_119, zmm1)
    double temp0_121[0x2] = _mm_sub_pd(zmm10, temp0_119)
    double temp0_122[0x2] = _mm_sub_pd(temp0_119, temp0_120)
    double temp0_123[0x2] = _mm_add_pd(temp0_115, temp0_121)
    zmm1 = _mm_add_pd(zmm1, temp0_122)
    double temp0_125[0x2] = _mm_mul_pd(zmm7, zmm7)
    double temp0_126[0x2] = _mm_add_pd(temp0_123, zmm1)
    zmm1 = _mm_mul_pd(
        _mm_mul_pd(__addpd_xmmpd_mempd(_mm_mul_pd(data_1442a4580, temp0_125), *"HDUUUU"), 
            temp0_125), 
        zmm7)
    double temp0_131[0x2] = _mm_mul_pd(zmm7, zmm10)
    zmm1 = _mm_mul_pd(zmm1, temp0_118)
    double temp0_133[0x2] = _mm_sub_pd(temp0_118, temp0_131)
    double temp0_134[0x2] = _mm_add_pd(temp0_126, zmm1)
    zmm6 = _mm_mul_pd(temp0_116, temp0_133)
    result = _mm_blendv_pd(result_1, 
        _mm_add_pd(temp0_120, 
            _mm_add_pd(
                _mm_add_pd(temp0_134, 
                    _mm_mul_pd(
                        _mm_mul_pd(temp0_125, 
                            __addpd_xmmpd_mempd(
                                _mm_mul_pd(
                                    __addpd_xmmpd_mempd(_mm_mul_pd(data_1442a4640, temp0_125), 
                                        data_1442a4600), 
                                    temp0_125), 
                                data_1442a45c0)), 
                        zmm10)), 
                _mm_add_pd(zx.o(*(rdx_3 + 0x1442a0318))[0].q | *(rax_3 + 0x1442a0318) << 0x40, 
                zmm6))), 
        zmm2)

if (r9 != 0)
    var_140 = zmm3
    
    if (r9 != 0)
        result_1[1] = arg2
        uint64_t rbx = 0
        result_1[0] = arg3
        
        do
            if (test_bit(r9, rbx.d))
                __common_datanh_cout_rare(&var_140[rbx * 2], &var_140[rbx * 2 + 0x10])
            
            rbx = zx.q(rbx.d + 1)
        while (rbx.d s< 2)
        
        result_1[1]
        result_1[0]

return result
