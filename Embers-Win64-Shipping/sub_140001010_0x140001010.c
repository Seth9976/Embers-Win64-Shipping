// 函数: sub_140001010
// 地址: 0x140001010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0[0x8]
zmm0[0].o = arg1[0xe]
float temp0[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
float temp0_1[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, temp0, *(arg1 + 0xe4))
float temp0_2[0x4] = _mm_mask_broadcastss_ps(arg5, zmm0[0].o)
float temp0_3[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, temp0, *(arg1 + 0xec))
zmm0[0].o = _mm_permute_pd(temp0, 1)
float temp0_5[0x4] = __vmulss_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm0[0].o, *(arg1 + 0xe8))
float temp0_6[0x4] = _mm_mask_mul_ps(arg5, temp0, temp0_2)
zmm0[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_6, temp0_1, 0x88)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd8)
float temp0_9[0x4] = _mm_mask_add_ps(arg5, temp0_3, zmm0[0].o)
float temp0_10[0x4] = _mm_mask_sub_ps(arg5, zmm0[0].o, temp0_3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_1, 0x4e)
zmm0[0].o = _mm_mask_shuffle_ps(arg5, zmm0[0].o, temp0_6, 0xc)
float temp0_13[0x4] = _mm_mask_permute_ps(arg5, zmm0[0].o, 0x78)
zmm0[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_5, temp0_5, 0x1c)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_1, 0x60)
float temp0_16[0x4] = __vbroadcastss_xmmf32_maskmskw_memf32_avx512(arg5, 1f)
zmm0[0].o = _mm_mask_add_ps(arg5, temp0_13, zmm0[0].o)
zmm0[0].o = _mm_mask_sub_ps(arg5, temp0_16, zmm0[0].o)
float temp0_19[0x4] = _mm_mask_load_ss(arg5, arg1[6].d)
float temp0_20[0x4] = _mm_mask_load_ss(arg5, *(arg1 + 0x6c))
float zmm17[0x4] = _mm_mask_xor_ps(arg5, temp0_13, temp0_13)
float temp0_22[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm17, *(arg1 + 0x64), 0x10)
float temp0_23[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm17, *(arg1 + 0x68), 0x20)
float temp0_25[0x4] = _mm_mask_mul_ps(arg5, temp0_19, _mm_broadcastss_ps(zmm0[0].o))
float temp0_27[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, temp0_10, 0xea), arg5, temp0_22, temp0_25)
float temp0_29[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, temp0_9, 0xd5), arg5, temp0_23, temp0_27)
float temp0_30[0x4] = _mm_mask_permute_ps(arg5, temp0_9, 0xea)
float temp0_33[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg5, temp0_22, _mm_permute_ps(zmm0[0].o, 0xd5)), arg5, temp0_19, temp0_30)
float temp0_35[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_broadcastss_ps(arg5, temp0_10), arg5, temp0_23, temp0_33)
float temp0_36[0x4] = _mm_mask_permute_ps(arg5, temp0_10, 0xd5)
float temp0_39[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg5, temp0_22, _mm_mask_broadcastss_ps(arg5, temp0_9)), arg5, temp0_19, 
    temp0_36)
float temp0_41[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm0[0].o, 0xea), arg5, temp0_23, temp0_39)
float temp0_43[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0[0].o, temp0_9, 0x9c), temp0_10, 0x60)
float temp0_45[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0[0].o, temp0_10, 0x8c), temp0_9, 0x20)
float temp0_48[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0[0].o, temp0_9, 0x4e), temp0_10, 0x14), 
    zmm0[0].o, 4)
float temp0_49[0x4] = _mm_mask_broadcastss_ps(arg5, temp0_29)
zmm0[0].o = _mm_permute_ps(temp0_29, 0xd5)
zmm0[0].o = _mm_mask_mul_ps(arg5, temp0_45, zmm0[0].o)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, temp0_43, temp0_49)
float temp0_54[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, temp0_29, 0xea), arg5, temp0_48, zmm0[0].o)
zmm0[0].o = _mm_mask_broadcastss_ps(arg5, temp0_35)
float temp0_58[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg5, temp0_45, _mm_mask_permute_ps(arg5, temp0_35, 0xd5)), arg5, temp0_43, 
    zmm0[0].o)
float temp0_60[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, temp0_35, 0xea), arg5, temp0_48, temp0_58)
float temp0_61[0x4] = _mm_mask_broadcastss_ps(arg5, temp0_41)
zmm0[0].o = _mm_mask_permute_ps(arg5, temp0_41, 0xd5)
zmm0[0].o = _mm_mask_mul_ps(arg5, temp0_45, zmm0[0].o)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, temp0_43, temp0_61)
float temp0_66[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, temp0_41, 0xea), arg5, temp0_48, zmm0[0].o)
zmm0[0].o = arg1[0xf]
float temp0_67[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
float temp0_69[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, temp0_67, *(arg1 + 0xf4))
float temp0_70[0x4] = _mm_mask_mul_ps(arg5, temp0_67, zmm0[0].o)
float temp0_71[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, temp0_67, *(arg1 + 0xfc))
float temp0_73[0x4] =
    __vmulss_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, _mm_permute_pd(temp0_67, 1), *(arg1 + 0xf8))
float temp0_75[0x4] =
    _mm_permute_ps(__vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_70, temp0_69, 0x88), 0xd8)
zmm0[0].o = _mm_mask_add_ps(arg5, temp0_71, temp0_75)
float temp0_77[0x4] = _mm_mask_sub_ps(arg5, temp0_75, temp0_71)
float temp0_83[0x4] = _mm_mask_add_ps(arg5, 
    _mm_mask_permute_ps(arg5, 
        _mm_mask_shuffle_ps(arg5, 
            __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0[0].o, temp0_69, 0x4e), temp0_70, 
            0xc), 
        0x78), 
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_73, temp0_73, 0x1c), temp0_69, 0x60))
float temp0_84[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm17, arg1[7].d, 0x10)
float temp0_85[0x4] = _mm_mask_sub_ps(arg5, temp0_16, temp0_83)
float temp0_86[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm17, *(arg1 + 0x74), 0x20)
float temp0_88[0x4] = _mm_mask_mul_ps(arg5, temp0_20, _mm_broadcastss_ps(temp0_85))
float temp0_90[0x4] = _mm_mask3_fmadd_ps(_mm_permute_ps(temp0_77, 0xea), arg5, temp0_84, temp0_88)
float temp0_92[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm0[0].o, 0xd5), arg5, temp0_86, temp0_90)
float temp0_93[0x4] = _mm_mask_permute_ps(arg5, zmm0[0].o, 0xea)
float temp0_96[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg5, temp0_84, _mm_permute_ps(temp0_85, 0xd5)), arg5, temp0_20, temp0_93)
float temp0_98[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_broadcastss_ps(arg5, temp0_77), arg5, temp0_86, temp0_96)
float temp0_99[0x4] = _mm_mask_permute_ps(arg5, temp0_77, 0xd5)
float temp0_102[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg5, temp0_84, _mm_broadcastss_ps(zmm0[0].o)), arg5, temp0_20, temp0_99)
float temp0_104[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, temp0_85, 0xea), arg5, temp0_86, temp0_102)
float temp0_106[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_85, zmm0[0].o, 0x9c), temp0_77, 0x60)
float temp0_108[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_85, temp0_77, 0x8c), zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm0[0].o, 0x4e)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_77, 0x14)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_85, 4)
float temp0_112[0x4] = _mm_mask_broadcastss_ps(arg5, temp0_92)
float temp0_115[0x4] = _mm_mask3_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_108, _mm_mask_permute_ps(arg5, temp0_92, 0xd5)), arg5, 
    temp0_106, temp0_112)
float temp0_117[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, temp0_92, 0xea), arg5, zmm0[0].o, temp0_115)
float temp0_118[0x4] = _mm_mask_broadcastss_ps(arg5, temp0_98)
float temp0_121[0x4] = _mm_mask3_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_108, _mm_mask_permute_ps(arg5, temp0_98, 0xd5)), arg5, 
    temp0_106, temp0_118)
float temp0_123[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, temp0_98, 0xea), arg5, zmm0[0].o, temp0_121)
float temp0_124[0x4] = _mm_mask_broadcastss_ps(arg5, temp0_104)
float temp0_127[0x4] = _mm_mask3_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_108, _mm_mask_permute_ps(arg5, temp0_104, 0xd5)), arg5, 
    temp0_106, temp0_124)
float temp0_129[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, temp0_104, 0xea), arg5, zmm0[0].o, temp0_127)
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
float temp0_131[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm0[0].o, *(arg1 + 0x88), 0x20)
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
float temp0_133[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm0[0].o, *(arg1 + 0xc8), 0x20)
float temp0_134[0x4] = _mm_mask_load_ss(arg5, arg7[2])
float temp0_135[0x4] = _mm_mask_load_ss(arg5, *arg7)
float temp0_136[0x4] = _mm_mask_load_ss(arg5, arg7[1])
zmm0[0].o = _mm_mask_sub_ps(arg5, temp0_131, temp0_133)
float temp0_138[0x4] = _mm_permute_ps(zmm0[0].o, 0xc9)
float temp0_140[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_134, temp0_135, 0x10), temp0_136, 0x20)
float result_1[0x4] = __vmovsd_xmmdq_memq(*(arg7 + 4))
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
float temp0_143[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(result_1, temp0_135, 0x20)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_143)
float temp0_145[0x4] = _mm_fmsub_ps(temp0_138, temp0_140, zmm0[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
float temp0_147[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm0[0].o, *(arg1 + 0x94), 0x20)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
float temp0_149[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm0[0].o, *(arg1 + 0xd4), 0x20)
zmm0[0].o = _mm_mask_sub_ps(arg5, temp0_147, temp0_149)
float temp0_151[0x4] = _mm_mask_permute_ps(arg5, zmm0[0].o, 0xc9)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_143, zmm0[0].o)
zmm0[0].o = _mm_mask3_fmsub_ps(zmm0[0].o, arg5, temp0_140, temp0_151)
float temp0_155[0x4] = _mm_broadcastss_ps(temp0_145)
float temp0_158[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg5, temp0_60, _mm_permute_ps(temp0_145, 0xd5)), arg5, temp0_54, temp0_155)
float temp0_160[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, temp0_145, 0xea), arg5, temp0_66, temp0_158)
float temp0_161[0x4] = _mm_broadcastss_ps(zmm0[0].o)
float temp0_164[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg5, temp0_123, _mm_permute_ps(zmm0[0].o, 0xd5)), arg5, temp0_117, temp0_161)
float temp0_166[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm0[0].o, 0xea), arg5, temp0_129, temp0_164)
float temp0_167[0x4] = _mm_mask_mul_ps(arg5, temp0_145, temp0_160)
float temp0_168[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_167)
float zmm4[0x4] = _mm_permute_pd(temp0_167, 1) f+ (temp0_167 f+ temp0_168[0])[0]
zmm0[0].o = _mm_mask_mul_ps(arg5, zmm0[0].o, temp0_166)
float temp0_171[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
float zmm6[0x4] = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ temp0_171[0]
float temp0_173[0x4] = _mm_add_round_ss(arg5, zmm6, zmm0[0].o)
float temp0_174[0x4] = _mm_mask_load_ss(arg5, *(arg1 + 0x78))
zmm0[0].o = _mm_add_round_ss(arg5, temp0_174, zmm4)
float temp0_176[0x4] = _mm_mask_load_ss(arg5, *(arg1 + 0x7c))
float temp0_177[0x4] = _mm_add_round_ss(arg5, temp0_176, zmm0[0].o)
float zmm30[0x4] = _mm_mask_xor_ps(arg5, temp0_129, temp0_129)

if (not(arg4 f<= 9.99999975e-05f))
    zmm0[0].o = __vmovsd_xmmdq_memq(arg1[0x17].q)
    zmm4 = __vmovsd_xmmdq_memq(*(arg1 + 0x17c))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x178), 0x20)
    zmm0[0].o = _mm_mask_sub_ps(arg5, temp0_131, zmm0[0].o)
    zmm0[0].o = _mm_mask_div_ps(arg5, zmm0[0].o, temp0_16)
    float temp0_186[0x4] = _mm_mask_div_ps(arg5, 
        _mm_mask_sub_ps(arg5, temp0_147, 
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4, *(arg1 + 0x184), 0x20)), 
        temp0_16)
    zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_186)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
            __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_135, temp0_136, 0x10), temp0_134, 
            0x20), 
        zmm0[0].o)
    float temp0_191[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    result_1 = _mm_permute_pd(zmm0[0].o, 1)
    zmm0[0].o = zmm0[0].o f+ temp0_191[0]
    zmm30 = _mm_add_round_ss(arg5, result_1, zmm0[0].o)

zmm0[0].o = _mm_add_round_ss(arg5, temp0_177, temp0_173)
float temp0_195[0x4] = _mm_mask_load_ss(arg5, 1f)
zmm4 = _mm_mask_mov_ps(arg5, temp0_195)

if ((arg6 & 1) != 0)
    zmm4 = 0x3f800000 / _mm_add_round_ss(arg5, temp0_174, temp0_176)[0]

arg3 = zmm4 f* arg3[0] f* arg2[0] f* arg2[0]
arg2[0].o = zmm4 f* arg4[0] f* arg2[0]
zmm0[0].o = _mm_div_round_ss(arg5, temp0_195, 
    _mm_mask3_fmadd_round_ss(arg2[0].o f+ arg3[0], arg5, zmm0[0].o, temp0_195))
arg2[0].o = _mm_mask_mul_round_ss(arg5, zmm30, arg2[0].o)
float temp0_201[0x4] = _mm_fmsub_ss(arg8, arg3[0], arg2[0])
arg3 = *arg9
arg2[0].o = temp0_201 f- arg3[0]
zmm0[0].o = arg2[0].o f* zmm0[0]
arg2[0].o = _mm_mask_mul_round_ss(arg5, temp0_174, zmm0[0].o)
arg2[0].o = _mm_broadcastss_ps(arg2[0].o)
float temp0_205[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_135, temp0_136, 0x10), temp0_134, 0x20)
float temp0_206[0x4] = _mm_mask_mul_ps(arg5, temp0_205, arg2[0].o)
float temp0_207[0x4] = _mm_mask_mul_round_ss(arg5, temp0_176, zmm0[0].o)
float temp0_208[0x4] = _mm_broadcast_ss(-0f)
float temp0_211[0x4] = _mm_mask_mul_ps(arg5, temp0_205, 
    _mm_broadcastss_ps(__vxorps_xmmdq_xmmdq_xmmdq(temp0_207, temp0_208)))
float temp0_213[0x4] = _mm_mask_mul_ps(arg5, temp0_160, _mm_broadcastss_ps(zmm0[0].o))
arg4 = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_208)
zmm0[0].o = arg3 f+ zmm0[0]
*arg9 = zmm0[0]
zmm0[0].o = _mm_mask_broadcastss_ps(arg5, temp0_195)
float temp0_216[0x4] = _mm_mask3_fmadd_ps(temp0_206, arg5, zmm0[0].o, temp0_133)
float temp0_217[0x4] = _mm_mask3_fmadd_ps(temp0_211, arg5, zmm0[0].o, temp0_149)
zmm0[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_216, temp0_217, 0x30)
arg1[0xc] = zmm0[0].o
arg1[0xd].d = __vextractps_memf32_xmmf32_imm8_avx512(temp0_217, 1)
zmm0[0].o = _mm_broadcastss_ps(arg4)
*(arg1 + 0xd4) = __vextractps_memf32_xmmf32_imm8_avx512(temp0_217, 2)
result_1 = arg1[0xe]
float temp0_222[0x4] = _mm_mask_mul_ps(arg5, temp0_166, zmm0[0].o)
float temp0_223[0x4] = _mm_mask_load_ps(arg5, arg1[0xf])
float zmm21[0x4] = _mm_mask_xor_ps(arg5, temp0_136, temp0_136)
float temp0_225[0x4] = _mm_broadcastss_ps(temp0_213)
arg2[0].o = _mm_permute_ps(result_1, 0x1b)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_225, arg2[0].o)
float zmm18[0x4] = __vpbroadcastq_xmmu64_maskmskw_memu64_avx512(arg5, -0x407fffffc0800000)
arg2[0].o = _mm_mask_mul_ps(arg5, arg2[0].o, zmm18)
arg2[0].o = _mm_mask3_fmadd_ps(arg2[0].o, arg5, result_1, zmm21)
float temp0_233[0x4] =
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_213, 0x55), _mm_permute_pd(result_1, 1))
float temp0_234[0x4] = _mm_mask_load_ps(arg5, data_142d3f7d0)
float temp0_235[0x4] = _mm_mask3_fmadd_ps(temp0_233, arg5, temp0_234, arg2[0].o)
arg2[0].o = _mm_permute_ps(temp0_213, 0xaa)
float temp0_237[0x4] = _mm_permute_ps(result_1, 0xb1)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_237)
float temp0_239[0x4] = _mm_mask_load_ps(arg5, data_142d3f7b0)
float temp0_240[0x4] = _mm_mask_load_ss(arg5, 0.5f)
arg2[0].o = _mm_mask3_fmadd_ps(arg2[0].o, arg5, temp0_239, temp0_235)
float temp0_242[0x4] = _mm_mask_broadcastss_ps(arg5, temp0_240)
float temp0_247[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg5, 
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcastss_ps(temp0_222), 
            _mm_mask_permute_ps(arg5, temp0_223, 0x1b)), 
        zmm18), 
    arg5, temp0_223, zmm21)
float temp0_251[0x4] = _mm_mask3_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_222, 0x55), 
        _mm_mask_permute_pd(arg5, temp0_223, 1)), 
    arg5, temp0_234, temp0_247)
float temp0_255[0x4] = _mm_mask3_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_222, 0xaa), 
        _mm_mask_permute_ps(arg5, temp0_223, 0xb1)), 
    arg5, temp0_239, temp0_251)
arg2[0].o = _mm_mask3_fmadd_ps(arg2[0].o, arg5, temp0_242, result_1)
float temp0_257[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
float temp0_259[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_257, _mm_permute_pd(temp0_257, 1))
arg3 = temp0_259 f+ __vmovshdup_xmmdq_xmmdq(temp0_259)[0]
float temp0_261[0x4] = _mm_mask_load_ss(arg5, 9.99999994e-09f)
int64_t k1 = _mm_cmp_round_ss_mask(arg5, temp0_261, arg3, 6)
zmm21 = _mm_mask_xor_ps(arg5, zmm21, zmm21)
float temp0_263[0x4] = _mm_mask_move_ss(k1, zmm0[0].o, zmm21)
float temp0_264[0x4] = _mm_mask_mul_round_ss(arg5, arg3, temp0_240)
float temp0_265[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(arg3, arg3[0])
zmm0[0].o = temp0_265 f* temp0_265[0]
zmm0[0].o = _mm_fnmadd_round_ss(zmm0[0].o, arg5, temp0_264, temp0_240)
zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, temp0_265[0], temp0_265[0])
zmm0[0].o = _mm_broadcastss_ps(_mm_fmadd_ss(
    _mm_fnmadd_round_ss(zmm0[0].o f* zmm0[0], arg5, temp0_264, temp0_240), zmm0[0], zmm0[0]))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
arg2 = _mm256_broadcastss_ps(temp0_263)
zmm0 = _mm256_and_ps(zmm0, arg2)
arg2 = __vandnps_ymmqq_ymmqq_memqq(arg2, data_142fc9280)
zmm0 = _mm256_or_ps(zmm0, arg2)
int64_t rdx_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
int64_t rax_1 = zmm0[0].q
float temp0_276[0x4] = _mm_mask3_fmadd_ps(temp0_255, arg5, temp0_242, temp0_223)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_276, temp0_276)
arg3 = _mm_permute_pd(arg2[0].o, 1)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg3)
float temp0_280[0x4] = __vmovshdup_xmmdq_xmmdq(arg2[0].o)
arg2[0].o = arg2[0].o f+ temp0_280[0]
float temp0_281[0x4] =
    _mm_mask_move_ss(_mm_cmp_round_ss_mask(arg5, temp0_261, arg2[0].o, 6), zmm0[0].o, zmm21)
float temp0_282[0x4] = _mm_mask_mul_round_ss(arg5, arg2[0].o, temp0_240)
arg2[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg2[0].o, arg2[0])
float temp0_285[0x4] = _mm_fmadd_ss(
    _mm_fnmadd_round_ss(arg2[0].o f* arg2[0], arg5, temp0_282, temp0_240), arg2[0], arg2[0])
arg2[0].o = temp0_285 f* temp0_285[0]
arg2[0].o = _mm_fnmadd_round_ss(arg2[0].o, arg5, temp0_282, temp0_240)
arg2[0].o = _mm_fmadd_ss(arg2[0].o, temp0_285[0], temp0_285[0])
arg2[0].o = _mm_broadcastss_ps(arg2[0].o)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_276, arg2[0].o)
float temp0_290[0x4] = _mm_broadcastss_ps(temp0_281)
arg2[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_290)
arg3 = __vandnps_xmmdq_xmmdq_memdq(temp0_290, data_142d3f660)
arg2[0].o = __vorps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg3)
float temp0_294[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
float temp0_296[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_294, _mm_permute_pd(temp0_294, 1))
int64_t k1_2 =
    _mm_cmp_round_ss_mask(arg5, zmm21, temp0_296 f+ __vmovshdup_xmmdq_xmmdq(temp0_296)[0], 2)
_mm_mask_mov_ps(arg5, _mm_mask_load_ss(arg5, -1f))
float temp0_301[0x4] = _mm_broadcastss_ps(_mm_mask_move_ss(k1_2, zmm0[0].o, temp0_195))
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_301)
arg1[0xe] = zmm0[0].o
arg1[0xf] = arg2[0].o
zmm0[0].o = zx.o(rax_1.d)
arg4 = zx.o(rdx_2.d)
uint32_t result = (rax_1 u>> 0x20).d
zmm4 = *(arg1 + 0x18)
result_1 = zx.o(result)
zmm6 = arg1[1].d
float temp0_304[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(result_1, arg4, 0x10), zmm0[0].o, 0x20)
float temp0_306[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm6, 0x10), *(arg1 + 0x14), 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, result_1, 0x20)
float temp0_310[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x14)), zmm6, 0x20)
float temp0_312[0x4] =
    _mm_mask3_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_310), arg5, temp0_304, temp0_306)
float temp0_313[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_312, temp0_312)
float temp0_317[0x4] = _mm_fmadd_ps(_mm_broadcastd_epi32(zx.o((rdx_2 u>> 0x20).d)[0]), temp0_313, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(arg1[1].q), zmm4, 0x20))
float temp0_318[0x4] = _mm_permute_ps(temp0_313, 0xd2)
float temp0_319[0x4] = _mm_permute_ps(temp0_313, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_319)
zmm0[0].o = _mm_mask3_fmsub_ps(zmm0[0].o, arg5, temp0_304, temp0_318)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_317, zmm0[0].o)
float temp0_323[0x4] = _mm_mask_add_ps(arg5, temp0_216, zmm0[0].o)
arg3 = *(arg1 + 0x48)
arg4 = arg1[4].d
float temp0_324[0x4] = _mm_permute_ps(arg2[0].o, 0xc9)
float temp0_326[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3, arg4, 0x10), *(arg1 + 0x44), 0x20)
float temp0_327[0x4] = _mm_permute_ps(arg2[0].o, 0xd2)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x44))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg4, 0x20)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_327, zmm0[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, temp0_324, temp0_326)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg2[0].o = _mm_permute_ps(arg2[0].o, 0xff)
float temp0_335[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(arg1[4].q), arg3, 0x20)
arg2[0].o = _mm_fmadd_ps(arg2[0].o, zmm0[0].o, temp0_335)
float temp0_337[0x4] = _mm_permute_ps(zmm0[0].o, 0xd2)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_327, zmm0[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, temp0_324, temp0_337)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
zmm0[0].o = _mm_mask_add_ps(arg5, temp0_217, zmm0[0].o)
arg2[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_323, zmm0[0].o, 0x30)
arg1[8] = arg2[0].o
arg1[9].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x94) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = *arg1
arg2[0].o = *(arg1 + 0xc)
arg3 = *(arg1 + 8)
arg4 = *(arg1 + 4)
float temp0_351[0x4] = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    _mm_mask_mul_ps(arg5, 
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, arg3, 0x10), arg4, 0x20), 
                zmm0[0].o, 0x30), 
            arg1[0xe].d), 
        zmm18), 
    arg5, zmm0[0].o, *(arg1 + 0xec))
float temp0_355[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), zmm0[0].o, 0x20), 
        arg4, 0x30), 
    *(arg1 + 0xe4))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg2[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3, 0x30)
zmm0[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm0[0].o, *(arg1 + 0xe8))
arg2[0].o = arg1[3]
arg3 = *(arg1 + 0x3c)
arg4 = *(arg1 + 0x38)
zmm6 = *(arg1 + 0x34)
float temp0_360[0x4] = _mm_mask3_fmadd_ps(temp0_355, arg5, temp0_234, temp0_351)
float temp0_364[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3, arg4, 0x10), 
            zmm6, 0x20), 
        arg2[0].o, 0x30), 
    arg1[0xf].d)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, temp0_239, temp0_360)
float temp0_367[0x4] = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    _mm_mask_mul_ps(arg5, temp0_364, zmm18), arg5, arg2[0].o, *(arg1 + 0xfc))
float temp0_372[0x4] = _mm_mask3_fmadd_ps(
    __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), arg2[0].o, 
                0x20), 
            zmm6, 0x30), 
        *(arg1 + 0xf4)), 
    arg5, temp0_234, temp0_367)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, arg2[0].o, 0x10)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, arg3, 0x20)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, arg4, 0x30)
arg2[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, arg2[0].o, *(arg1 + 0xf8))
arg2[0].o = _mm_mask3_fmadd_ps(arg2[0].o, arg5, temp0_239, temp0_372)
float temp0_378[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
float temp0_380[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_378, _mm_permute_pd(temp0_378, 1))
float temp0_383[0x4] = _mm_mask_broadcastss_ps(arg5, 
    _mm_mask_move_ss(
        _mm_cmp_round_ss_mask(arg5, zmm21, temp0_380 f+ __vmovshdup_xmmdq_xmmdq(temp0_380)[0], 2), 
        zmm0[0].o, temp0_195))
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_383)
arg1[0xa] = zmm0[0].o
arg1[0xb] = arg2[0].o
_mm256_zeroupper()
return result
