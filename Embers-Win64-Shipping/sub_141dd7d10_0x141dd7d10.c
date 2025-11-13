// 函数: sub_141dd7d10
// 地址: 0x141dd7d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t rsi = sx.q(arg3)
int128_t* rax_2 = sub_141deb5d0(arg5, 0)
float zmm14[0x4] = arg6[2]
float zmm7[0x4] = rax_2[2]
uint32_t var_188[0x4]
float var_118[0x4]
float zmm5[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm7), data_143f38cd0, 1)) == 0)
    zmm5 = *rax_2
    float zmm2[0x4] = *arg6
    float zmm4[0x4] = arg6[1]
    float temp0_132[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    float temp0_134[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_132)
    float temp0_135[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    float temp0_136[0x4] = _mm_mul_ps(zmm4, zmm7)
    float temp0_137[0x4] = __mulps_xmmps_memps(temp0_134, data_143f38c90)
    float temp0_138[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float var_f8_1[0x4] = _mm_mul_ps(zmm14, zmm7)
    float temp0_141[0x4] = _mm_add_ps(temp0_137, _mm_mul_ps(temp0_138, zmm2))
    float temp0_143[0x4] = _mm_mul_ps(temp0_135, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_146[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_147[0x4] = __mulps_xmmps_memps(temp0_143, data_143f38c80)
    float temp0_148[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_149[0x4] = __mulps_xmmps_memps(temp0_146, data_143f38c70)
    float temp0_150[0x4] = _mm_add_ps(temp0_141, temp0_147)
    float temp0_151[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_152[0x4] = _mm_add_ps(temp0_150, temp0_149)
    float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_148)
    var_118 = temp0_152
    float temp0_157[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xd2), temp0_151), temp0_154)
    float temp0_158[0x4] = _mm_add_ps(temp0_157, temp0_157)
    float temp0_159[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xd2)
    float temp0_160[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xc9)
    float temp0_161[0x4] = _mm_mul_ps(temp0_159, temp0_151)
    float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_148)
    float temp0_163[0x4] = _mm_mul_ps(temp0_158, temp0_138)
    float var_108_1[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_161, temp0_162), _mm_add_ps(temp0_163, temp0_136)), rax_2[1])
else
    float zmm3[0x4] = *rax_2
    float temp0_3[0x4] = _mm_add_ps(zmm3, zmm3)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
    float zmm9[0x4] = rax_2[1]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_6[0x4] = _mm_mul_ps(zmm3, temp0_3)
    float temp0_8[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_3, temp0_3, 0x29))
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x12)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x1a)
    float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_9)
    float temp0_14[0x4] = _mm_add_ps(temp0_10, _mm_shuffle_ps(temp0_6, temp0_6, 1))
    float zmm11[0x4] = data_143f38c20
    float temp0_15[0x4] = _mm_add_ps(temp0_12, temp0_8)
    float temp0_16[0x4] = _mm_sub_ps(zmm11, temp0_14)
    _mm_mul_ps(zmm7, zmm14)
    float temp0_18[0x4] = _mm_sub_ps(temp0_8, temp0_12)
    zmm3 = *arg6
    float temp0_19[0x4] = _mm_mul_ps(temp0_15, zmm7)
    float temp0_20[0x4] = _mm_mul_ps(temp0_16, zmm7)
    float temp0_21[0x4] = _mm_mul_ps(temp0_4, temp0_18)
    float temp0_22[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float zmm1[0x4] = __andps_xmmxud_memxud(temp0_20, data_143f38c30)
    float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm1, 0), 
        _mm_shuffle_ps(temp0_21, zmm1, 0x32), 0x82)
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_19, zmm1, 0x31)
    float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_27, 0x88)
    float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, temp0_21, 0x12), zmm1, 0xe8)
    float temp0_32[0x4] = _mm_add_ps(zmm3, zmm3)
    zmm11[0].q = zmm9 u>> 0x40
    float temp0_33[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    float temp0_36[0x4] = _mm_mul_ps(zmm3, temp0_32)
    float temp0_38[0x4] = _mm_mul_ps(temp0_22, _mm_shuffle_ps(temp0_32, temp0_32, 0x29))
    float temp0_40[0x4] = _mm_mul_ps(temp0_34, _mm_shuffle_ps(temp0_32, temp0_32, 0x12))
    float temp0_43[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x1a), _mm_shuffle_ps(temp0_36, temp0_36, 1))
    float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_38)
    float temp0_45[0x4] = _mm_sub_ps(temp0_38, temp0_40)
    float temp0_46[0x4] = _mm_sub_ps(zmm11, temp0_43)
    float temp0_47[0x4] = _mm_mul_ps(temp0_44, zmm14)
    float temp0_48[0x4] = _mm_mul_ps(temp0_35, temp0_45)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_46, zmm14), data_143f38c30)
    float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0), 
        _mm_shuffle_ps(temp0_48, zmm1, 0x32), 0x82)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_47, zmm1, 0x31)
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
    float temp0_57[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0x10), temp0_54, 0x88)
    float temp0_58[0x4] = _mm_mul_ps(temp0_55, temp0_29)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_47, temp0_48, 0x12)
    zmm5 = arg6[1]
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, zmm1, 0xe8)
    float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), temp0_31)
    zmm11[0].q = zmm5 u>> 0x40
    float temp0_63[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0)
    float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xff), temp0_33)
    float temp0_68[0x4] = _mm_add_ps(temp0_58, _mm_mul_ps(temp0_64, temp0_26))
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_26)
    float temp0_71[0x4] = _mm_add_ps(temp0_68, temp0_62)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_31)
    float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_66)
    float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_29)
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
    float var_178[0x4] = temp0_74
    float temp0_78[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
    float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_70)
    float temp0_80[0x4] = _mm_mul_ps(temp0_78, temp0_29)
    float temp0_81[0x4] = _mm_mul_ps(temp0_77, temp0_33)
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
    float temp0_83[0x4] = _mm_add_ps(temp0_79, temp0_73)
    float temp0_84[0x4] = _mm_mul_ps(temp0_82, temp0_26)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_31)
    float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_81)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
    float temp0_89[0x4] = _mm_add_ps(temp0_80, temp0_84)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_33)
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
    int96_t var_168_1 = temp0_87[0].12
    float temp0_92[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
    float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_86)
    float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_29)
    float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_31)
    float temp0_97[0x4] = _mm_mul_ps(temp0_91, temp0_26)
    float temp0_98[0x4] = _mm_add_ps(temp0_93, temp0_90)
    float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xff), temp0_33)
    float temp0_101[0x4] = _mm_add_ps(temp0_94, temp0_97)
    int96_t var_158_1 = temp0_98[0].12
    int96_t var_148_1 = _mm_add_ps(_mm_add_ps(temp0_101, temp0_96), temp0_100)[0].12
    int128_t zmm11_1
    float zmm13_1[0x4]
    float zmm15_1[0x4]
    zmm11_1, zmm13_1, zmm15_1 = sub_1407740e0(&var_178, 0x322bcc77)
    uint32_t zmm0_1[0x4] = data_143f38cc0
    float temp0_104[0x4] = _mm_cmpeq_ps(zmm15_1, zmm13_1, 2)
    float zmm2_1[0x4] = var_178[0]
    float zmm1_1 = var_178[1]
    zmm15_1 = _mm_and_ps(temp0_104, zmm0_1 ^ zmm11_1)
    zmm0_1 = var_178[2]
    zmm15_1 ^= data_143f38cc0
    zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
    zmm1_1 = zmm1_1 * zmm15_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
    var_178[0] = zmm2_1[0]
    float temp0_106[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
    var_178[1] = zmm1_1
    zmm1_1 = var_168_1:4.d * temp0_106[0]
    var_178[2] = zmm0_1[0]
    zmm0_1 = var_168_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_106[0]
    float zmm3_1 = var_168_1.d * temp0_106[0]
    zmm2_1 = var_158_1.d
    var_168_1:4.d = zmm1_1
    var_168_1:8.d = zmm0_1[0]
    zmm0_1 = var_158_1:8.d
    float temp0_107[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
    zmm1_1 = var_158_1:4.d * temp0_107[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
    zmm2_1[0] = zmm2_1[0] * temp0_107[0]
    var_158_1:4.d = zmm1_1
    var_158_1:8.d = zmm0_1[0]
    var_168_1.d = zmm3_1
    var_158_1.d = zmm2_1[0]
    sub_14077e4a0(&var_188, &var_178)
    uint32_t zmm6_1[0x4] = var_188
    float zmm5_1[0x4] = data_143f38cb0
    uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
    float var_f8[0x4] = zmm13_1
    zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
    uint32_t zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
    zmm1_2 = _mm_rsqrt_ps(zmm4_1)
    float temp0_114[0x4] = _mm_mul_ps(zmm4_1, zmm5_1)
    float temp0_119[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_114)), zmm1_2), 
        zmm1_2)
    float temp0_122[0x4] =
        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_114))
    uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
    float temp0_126[0x4] = _mm_add_ps(_mm_mul_ps(temp0_122, temp0_119), temp0_119)
    float temp0_127[0x4] = _mm_unpacklo_ps(var_148_1:4.d, 0)
    zmm5_1 = _mm_and_ps(_mm_mul_ps(temp0_126, zmm6_1) ^ data_143f38ca0, zmm0_2) ^ data_143f38ca0
    float var_108[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_148_1.d, var_148_1:8.d[0].q), temp0_127[0].q)
    var_118 = zmm5_1
int64_t var_138 = 0
int32_t var_130 = 0
sub_141dc2d40(arg2 + rsi * 0xc, arg4 - rsi.d, &var_118, &var_138, arg1 + 0x1c)
int64_t rdi_1 = sx.q(var_130)
int64_t rsi_1 = var_138
uint32_t result

if (rdi_1.d s<= 0)
    result.b = 0
else
    int32_t rcx_6 = *(arg1 + 0x40)
    int32_t rdx_3 = rdi_1.d + rcx_6
    
    if (rdx_3 s> *(arg1 + 0x44))
        sub_140638cc0(arg1 + 0x38, rdx_3)
        rcx_6 = *(arg1 + 0x40)
    
    memcpy(*(arg1 + 0x38) + sx.q(rcx_6) * 0xc, rsi_1, (rdi_1 * 0xc).d)
    int32_t rdi_2 = rdi_1.d + *(arg1 + 0x40)
    int32_t var_128
    var_188[0] = var_128.d
    int32_t var_124
    var_188[1] = var_124
    var_188[2] = 0
    *(arg1 + 0x40) = rdi_2 + 1
    
    if (rdi_2 + 1 s> *(arg1 + 0x44))
        sub_140638a00(arg1 + 0x38)
    
    int64_t rcx_11 = *(arg1 + 0x38)
    int64_t rdx_6 = sx.q(rdi_2) * 3
    result = var_188[2]
    *(rcx_11 + (rdx_6 << 2)) = var_188[0].q
    *(rcx_11 + (rdx_6 << 2) + 8) = result
    result.b = 3

*(arg1 + 0x48) = result.b

if (rsi_1 != 0)
    result = sub_140a74f90(rsi_1)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
