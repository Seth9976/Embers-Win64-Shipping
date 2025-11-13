// 函数: __sse2_cos2@@16
// 地址: 0x142c96480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm2[0x4] = arg1
uint32_t r9 = 0
uint32_t zmm4[0x4] = data_1442a4680
double zmm3[0x2] = data_1442a4700
uint32_t temp0[0x4] = _mm_and_ps(zmm4, zmm2)
double temp0_1[0x2] = _mm_sub_pd(zmm3, temp0)
double zmm12[0x2] = data_1442a4740
uint32_t temp0_2[0x4] = _mm_and_ps(zmm4, temp0_1)
double temp0_3[0x2] = _mm_mul_pd(zmm12, temp0_1)
double temp0_4[0x2] = _mm_cmpeq_pd(zmm3, temp0_1, 0)
arg1 = data_1442a4780
double temp0_5[0x2] = _mm_add_pd(temp0_3, arg1)
uint32_t zmm1[0x4] = __cmppd_xmmpd_mempd_immb(temp0_2, data_1442a46c0, 6)
zmm12 = _mm_slli_epi64(temp0_5, 0x3f)
double temp0_8[0x2] = _mm_sub_pd(temp0_5, arg1)
uint64_t result = zx.q(_mm_movemask_pd(zmm1))
double temp0_10[0x2] = _mm_sub_pd(data_1442a47c0, temp0_8)
double temp0_11[0x2] = _mm_mul_pd(data_1442a4800, temp0_10)
double temp0_12[0x2] = _mm_mul_pd(data_1442a4840, temp0_10)
double temp0_13[0x2] = _mm_sub_pd(temp0_11, temp0)
double temp0_14[0x2] = _mm_mul_pd(data_1442a4880, temp0_10)
double temp0_15[0x2] = _mm_add_pd(temp0_13, temp0_12)
double temp0_16[0x2] = _mm_mul_pd(data_1442a48c0, temp0_10)
double temp0_18[0x2] = _mm_add_pd(_mm_add_pd(temp0_15, temp0_14), temp0_16)
double temp0_19[0x2] = _mm_mul_pd(temp0_18, temp0_18)
double zmm15[0x2] = temp0_18 ^ zmm12
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
double temp0_31[0x2] = _mm_mul_pd(temp0_19, zmm15)
uint32_t var_140[0x4]
uint32_t (* var_10)[0x4] = &var_140
arg1 = _mm_or_ps(
    _mm_andnot_ps(temp0_4, 
        _mm_add_pd(zmm15, _mm_mul_pd(__addpd_xmmpd_mempd(temp0_30, data_1442a49c0), temp0_31))), 
    _mm_and_ps(data_1442a4bc0, temp0_4))
uint32_t var_158[0x4]

if (result.d != 0)
    var_158 = arg1
    arg1 = _mm_srli_epi64(data_144280600 & zmm2, 0x34)
    uint64_t r10_1 = zx.q(arg1[0])
    uint32_t zmm7[0x4] = data_1442a4380
    uint32_t temp0_40[0x4] = _mm_and_ps(temp0_2, zmm7)
    uint64_t rax = zx.q(_mm_extract_epi16(arg1, 4))
    zmm4 = _mm_cmpeq_pd(temp0_40, zmm7, 0)
    uint64_t r8_2 = zx.q((r10_1 * 3).d << 3)
    double zmm8[0x2] = zx.o(*(&data_144294100 + r8_2))
    zmm12 = zx.o(*(r8_2 + 0x144294108))
    double zmm14[0x2] = zx.o(*(r8_2 + 0x144294110))
    double zmm6[0x2] = __paddq_xmmdq_memdq(data_144280610 & zmm2, data_144280620)
    r9 = _mm_movemask_pd(zmm4)
    zmm15 = data_144280630
    zmm4 = _mm_srli_epi64(zmm6, 0x20)
    uint64_t rcx_3 = zx.q((rax * 3).d << 3)
    zmm6 &= zmm15
    zmm14 = zmm14[0] | *(rcx_3 + 0x144294110) << 0x40
    double zmm9[0x2] = _mm_srli_epi64(zmm14, 0x20)
    zmm12 = zmm12[0] | *(rcx_3 + 0x144294108) << 0x40
    zmm7 = _mm_mul_epu32(zmm4, zmm9)
    double zmm13[0x2] = zmm12
    zmm9 = _mm_mul_epu32(zmm9, zmm6)
    zmm14 = _mm_mul_epu32(zmm14 & zmm15, zmm4)
    zmm12 &= zmm15
    zmm9 = _mm_srli_epi64(zmm9, 0x20)
    double zmm10[0x2] = _mm_mul_epu32(zmm6, zmm12)
    zmm13 = _mm_srli_epi64(zmm13, 0x20)
    zmm12 = _mm_mul_epu32(zmm12, zmm4)
    double zmm11[0x2] = _mm_mul_epu32(zmm6, zmm13)
    zmm13 = _mm_mul_epu32(zmm13, zmm4)
    zmm7 = _mm_add_epi64(zmm7, zmm9)
    zmm14 = _mm_srli_epi64(zmm14, 0x20)
    arg1 = _mm_add_epi64(zmm15 & zmm10, zmm7)
    zmm8 = zmm8[0] | *(&data_144294100 + rcx_3) << 0x40
    zmm10 = _mm_srli_epi64(zmm10, 0x20)
    zmm3 = zmm15 & zmm8
    zmm14 = _mm_add_epi64(zmm14, arg1)
    zmm12 = _mm_add_epi64(zmm12, zmm10)
    double zmm5[0x2] = _mm_mul_epu32(zmm6, zmm3)
    zmm4 = _mm_mul_epu32(zmm4, zmm3)
    arg1 = _mm_srli_epi64(zmm14, 0x20)
    zmm9 = _mm_add_epi64(zmm15 & zmm11, zmm12)
    zmm11 = _mm_srli_epi64(zmm11, 0x20)
    zmm8 = _mm_srli_epi64(zmm8, 0x20)
    arg1 = _mm_add_epi64(arg1, zmm9)
    zmm13 = _mm_add_epi64(zmm13, zmm11)
    zmm6 = _mm_mul_epu32(zmm6, zmm8)
    zmm12 = _mm_srli_epi64(arg1, 0x20)
    zmm10 = _mm_add_epi64(zmm15 & zmm5, zmm13)
    zmm5 = _mm_srli_epi64(zmm5, 0x20)
    zmm12 = _mm_add_epi64(zmm12, zmm10)
    zmm6 = _mm_add_epi64(zmm6 & zmm15, _mm_add_epi64(zmm4, zmm5))
    zmm9 = _mm_srli_epi64(zmm12, 0x20)
    arg1 = _mm_slli_epi64(arg1, 0x20)
    zmm9 = _mm_add_epi64(_mm_slli_epi64(_mm_add_epi64(zmm9, zmm6), 0x20), zmm12 & zmm15)
    arg1 = _mm_add_epi64(arg1, zmm14 & zmm15)
    zmm5 = data_144280640 & zmm2
    zmm13 = data_144280660
    zmm4 = _mm_srli_epi64(zmm9, 0xc) | (data_144280650 ^ zmm5)
    zmm6 = data_1442806b0 & zmm9
    zmm3 = data_144280680
    zmm7 = data_144280690 & arg1
    double temp0_84[0x2] = _mm_add_pd(zmm13, zmm4)
    zmm6 = _mm_slli_epi64(zmm6, 0x28)
    double temp0_86[0x2] = _mm_sub_pd(temp0_84, zmm13)
    arg1 = _mm_srli_epi64(arg1, 0x18)
    zmm3 ^= zmm5
    zmm5 ^= data_1442806a0
    zmm4 = _mm_sub_pd(zmm4, temp0_86)
    double temp0_89[0x2] = _mm_sub_pd(zmm6 | arg1 | zmm5, zmm5)
    arg1 = _mm_add_pd(zmm4, temp0_89)
    zmm4 = _mm_sub_pd(zmm4, arg1)
    zmm7 = _mm_sub_pd(_mm_slli_epi64(zmm7, 0x1c) | zmm3, zmm3)
    double temp0_94[0x2] = _mm_add_pd(temp0_89, zmm4)
    zmm9 = _mm_and_ps(data_1442806f0, arg1)
    zmm7 = _mm_add_pd(zmm7, temp0_94)
    arg1 = _mm_sub_pd(arg1, zmm9)
    zmm7 = __mulpd_xmmpd_mempd(zmm7, data_1442806c0)
    zmm15 = data_1442806d0
    zmm3 = data_1442806e0
    double temp0_99[0x2] = _mm_mul_pd(zmm15, zmm9)
    double temp0_100[0x2] = _mm_mul_pd(zmm15, arg1)
    double temp0_101[0x2] = _mm_mul_pd(zmm9, zmm3)
    double temp0_102[0x2] = _mm_mul_pd(zmm3, arg1)
    double temp0_105[0x2] =
        _mm_add_pd(_mm_add_pd(temp0_100, temp0_101), _mm_add_pd(zmm7, temp0_102))
    zmm8 = __andps_xmmxud_memxud(temp0_84, data_144280670)
    zmm4 = data_144280710
    int32_t rdx_2 = zmm8[0].d
    zmm6 = _mm_and_ps(data_144280700, zmm2)
    zmm7 = _mm_add_pd(temp0_105, temp0_99)
    double temp0_109[0x2] = _mm_cmpeq_pd(zmm4, zmm6, 1)
    double temp0_110[0x2] = _mm_cmpeq_pd(zmm6, zmm4, 2)
    double temp0_111[0x2] = _mm_sub_pd(temp0_99, zmm7)
    uint64_t rdx_3 = zx.q(rdx_2 << 5)
    zmm6 = _mm_and_ps(temp0_110, zmm2)
    zmm4 = zx.o(*(&data_1442a0300 + rdx_3))
    uint32_t temp0_113[0x4] = _mm_and_ps(zmm7, temp0_109)
    uint32_t temp0_114 = _mm_extract_epi16(zmm8, 4)
    double temp0_115[0x2] = _mm_add_pd(temp0_105, temp0_111)
    result = zx.q(temp0_114 << 5)
    zmm6 = _mm_or_ps(zmm6, temp0_113)
    zmm13 = zx.o(*(rdx_3 + 0x1442a0308))[0] | *(result + 0x1442a0308) << 0x40
    zmm7 = _mm_mul_pd(zmm6, zmm13)
    arg1 = zx.o(*(rdx_3 + 0x1442a0310))
    zmm5 = _mm_and_ps(temp0_109, temp0_115)
    zmm4 = zmm4[0].q | *(&data_1442a0300 + result) << 0x40
    arg1 = arg1[0].q | *(result + 0x1442a0310) << 0x40
    double temp0_119[0x2] = _mm_mul_pd(zmm6, zmm4)
    zmm4 = _mm_add_pd(zmm4, zmm13)
    double temp0_121[0x2] = _mm_add_pd(arg1, zmm7)
    double temp0_122[0x2] = _mm_add_pd(temp0_121, temp0_119)
    double temp0_123[0x2] = _mm_sub_pd(arg1, temp0_121)
    double temp0_124[0x2] = _mm_sub_pd(temp0_121, temp0_122)
    zmm7 = _mm_add_pd(_mm_add_pd(zmm7, temp0_123), _mm_add_pd(temp0_119, temp0_124))
    double temp0_128[0x2] = _mm_mul_pd(zmm6, zmm6)
    zmm11 = data_1442a4640
    double temp0_129[0x2] = _mm_mul_pd(data_1442a4580, temp0_128)
    double temp0_130[0x2] = _mm_mul_pd(zmm11, temp0_128)
    double temp0_131[0x2] = __addpd_xmmpd_mempd(temp0_129, *"HDUUUU")
    double temp0_132[0x2] = __addpd_xmmpd_mempd(temp0_130, data_1442a4600)
    double temp0_133[0x2] = _mm_mul_pd(temp0_131, temp0_128)
    double temp0_134[0x2] = _mm_mul_pd(temp0_132, temp0_128)
    double temp0_135[0x2] = _mm_mul_pd(temp0_133, zmm6)
    double temp0_136[0x2] = __addpd_xmmpd_mempd(temp0_134, data_1442a45c0)
    double temp0_137[0x2] = _mm_mul_pd(zmm6, arg1)
    double temp0_138[0x2] = _mm_mul_pd(temp0_128, temp0_136)
    double temp0_139[0x2] = _mm_mul_pd(temp0_135, zmm4)
    zmm4 = _mm_sub_pd(zmm4, temp0_137)
    zmm7 = _mm_add_pd(zmm7, temp0_139)
    double temp0_142[0x2] = _mm_mul_pd(temp0_138, arg1)
    double temp0_143[0x2] = _mm_mul_pd(zmm5, zmm4)
    zmm7 = _mm_add_pd(zmm7, temp0_142)
    arg1 = _mm_or_ps(__andnps_xmmxud_memxud(zmm1, var_158), 
        _mm_and_ps(
            _mm_add_pd(temp0_122, 
                _mm_add_pd(zmm7, 
                    _mm_add_pd(zx.o(*(rdx_3 + 0x1442a0318))[0] | *(result + 0x1442a0318) << 0x40, 
                        temp0_143))), 
            zmm1))

if (r9 != 0)
    var_140 = zmm2
    uint32_t var_100_1[0x4] = arg1
    
    if (r9 != 0)
        result = 0
        var_158[2].q = arg2
        uint64_t rbx = 0
        var_158[0].q = arg3
        
        do
            if (test_bit(r9, rbx.d))
                result = __common_datanh_cout_rare(&var_140[rbx * 2], &var_140[rbx * 2 + 0x10])
            
            rbx = zx.q(rbx.d + 1)
        while (rbx.d s< 2)
        
        var_158[2]
        var_158[0]

return result
