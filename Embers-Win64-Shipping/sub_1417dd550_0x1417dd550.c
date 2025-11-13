// 函数: sub_1417dd550
// 地址: 0x1417dd550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
char r15 = 0
int32_t var_188 = 0
*(arg1 + 0xa8) = *arg2
void* rbx = arg2[1]
int64_t* rcx = *(arg1 + 0xb0)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0xb0)
    
    if (rcx != 0)
        int32_t rax_3 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0xb0) = rbx

float zmm8[0x4] = *arg4
*(arg1 + 0x40) = zmm8
float zmm14[0x4] = arg4[1]
*(arg1 + 0x50) = zmm14
float zmm0[0x4] = arg4[2]
*(arg1 + 0x60) = zmm0
void* rcx_1 = *arg2
float zmm3[0x4] = *(rcx_1 + 0x60)
float zmm9[0x4] = *(rcx_1 + 0x80)
float zmm5[0x4]
float zmm6[0x4]
float zmm15[0x4]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm0, zmm9), data_143ef8ad0, 1)) == 0)
    zmm15 = *(arg1 + 0x60)
    float temp0_136[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0x1b), _mm_shuffle_ps(zmm3, zmm3, 0))
    float temp0_137[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float temp0_138[0x4] = _mm_mul_ps(zmm14, zmm9)
    float temp0_139[0x4] = __mulps_xmmps_memps(temp0_136, data_143ef8a90)
    float temp0_140[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    zmm15 = _mm_mul_ps(zmm15, zmm9)
    float temp0_142[0x4] = _mm_mul_ps(temp0_140, zmm8)
    float temp0_143[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xd2)
    float temp0_144[0x4] = _mm_add_ps(temp0_139, temp0_142)
    float temp0_146[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm8, zmm8, 0x4e))
    float temp0_149[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), _mm_shuffle_ps(zmm8, zmm8, 0xb1))
    float temp0_150[0x4] = __mulps_xmmps_memps(temp0_146, data_143ef8a80)
    float temp0_151[0x4] = __mulps_xmmps_memps(temp0_149, data_143ef8a70)
    float temp0_152[0x4] = _mm_add_ps(temp0_144, temp0_150)
    float temp0_153[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
    float temp0_154[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
    float temp0_155[0x4] = _mm_mul_ps(temp0_143, temp0_154)
    zmm6 = _mm_add_ps(temp0_152, temp0_151)
    float temp0_159[0x4] =
        _mm_sub_ps(temp0_155, _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xc9), temp0_153))
    float temp0_160[0x4] = _mm_add_ps(temp0_159, temp0_159)
    float temp0_161[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xd2)
    float temp0_162[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc9)
    float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_154)
    float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_153)
    float temp0_165[0x4] = _mm_mul_ps(temp0_160, temp0_140)
    zmm5 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_163, temp0_164), _mm_add_ps(temp0_165, temp0_138)), 
        *(rcx_1 + 0x70))
else
    float temp0_5[0x4] = _mm_add_ps(zmm3, zmm3)
    float zmm7[0x4] = *(arg1 + 0x60)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float zmm10[0x4] = *(rcx_1 + 0x70)
    float temp0_9[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_5, temp0_5, 0x29))
    float temp0_10[0x4] = _mm_mul_ps(zmm3, temp0_5)
    float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(temp0_5, temp0_5, 0x12))
    float temp0_15[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x1a), _mm_shuffle_ps(temp0_10, temp0_10, 1))
    float temp0_16[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
    float zmm12[0x4] = data_143ef8a30
    float temp0_17[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
    float temp0_18[0x4] = _mm_sub_ps(zmm12, temp0_15)
    _mm_mul_ps(zmm9, zmm7)
    float temp0_20[0x4] = _mm_add_ps(temp0_12, temp0_9)
    float temp0_21[0x4] = _mm_sub_ps(temp0_9, temp0_12)
    float temp0_22[0x4] = _mm_mul_ps(temp0_18, zmm9)
    float temp0_23[0x4] = _mm_mul_ps(temp0_20, zmm9)
    float temp0_24[0x4] = _mm_mul_ps(temp0_16, temp0_21)
    float zmm1[0x4] = __andps_xmmxud_memxud(temp0_22, data_143ef8a40)
    float temp0_26[0x4] = _mm_add_ps(zmm8, zmm8)
    float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, zmm1, 0), 
        _mm_shuffle_ps(temp0_24, zmm1, 0x32), 0x82)
    float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, zmm1, 0x10), 
        _mm_shuffle_ps(temp0_23, zmm1, 0x31), 0x88)
    float temp0_33[0x4] = _mm_mul_ps(temp0_26, zmm8)
    zmm12[0].q = zmm10 u>> 0x40
    float temp0_34[0x4] = _mm_shuffle_ps(zmm10, zmm12, 0xc4)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm8, zmm8, 4)
    float temp0_36[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
    float temp0_38[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, temp0_24, 0x12), zmm1, 0xe8)
    float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0x29), temp0_35)
    float temp0_43[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x1a), _mm_shuffle_ps(temp0_33, temp0_33, 1))
    float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0x12), temp0_36)
    float temp0_46[0x4] = _mm_add_ps(temp0_45, temp0_40)
    float temp0_47[0x4] = _mm_sub_ps(temp0_40, temp0_45)
    float temp0_48[0x4] = _mm_mul_ps(temp0_46, zmm7)
    float temp0_49[0x4] = _mm_mul_ps(temp0_17, temp0_47)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm12, temp0_43), zmm7), data_143ef8a40)
    float temp0_55[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
        _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
    float temp0_59[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0x10), temp0_56, 0x88)
    float temp0_60[0x4] = _mm_mul_ps(temp0_57, temp0_32)
    zmm12[0].q = zmm14 u>> 0x40
    float temp0_61[0x4] = _mm_shuffle_ps(zmm14, zmm12, 0xc4)
    float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0), temp0_29)
    float temp0_65[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, temp0_49, 0x12), zmm1, 0xe8)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xaa)
    float temp0_67[0x4] = _mm_add_ps(temp0_60, temp0_63)
    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xff), temp0_34)
    float temp0_70[0x4] = _mm_mul_ps(temp0_66, temp0_38)
    float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_29)
    float temp0_73[0x4] = _mm_add_ps(temp0_67, temp0_70)
    float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_38)
    float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_69)
    float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), temp0_32)
    float temp0_79[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
    float var_178[0x4] = temp0_76
    float temp0_80[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
    float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_72)
    float temp0_82[0x4] = _mm_mul_ps(temp0_80, temp0_32)
    float temp0_83[0x4] = _mm_mul_ps(temp0_79, temp0_34)
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
    float temp0_85[0x4] = _mm_add_ps(temp0_81, temp0_75)
    float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_29)
    float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_38)
    float temp0_89[0x4] = _mm_add_ps(temp0_85, temp0_83)
    float temp0_90[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
    float temp0_91[0x4] = _mm_add_ps(temp0_82, temp0_86)
    float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_34)
    float temp0_93[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
    int96_t var_168_1 = temp0_89[0].12
    float temp0_94[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
    float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_88)
    float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_32)
    float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_38)
    float temp0_99[0x4] = _mm_mul_ps(temp0_93, temp0_29)
    float temp0_100[0x4] = _mm_add_ps(temp0_95, temp0_92)
    float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xff), temp0_34)
    float temp0_103[0x4] = _mm_add_ps(temp0_96, temp0_99)
    int96_t var_158_1 = temp0_100[0].12
    int96_t var_148_1 = _mm_add_ps(_mm_add_ps(temp0_103, temp0_98), temp0_102)[0].12
    int128_t zmm12_1
    zmm12_1, zmm15 = sub_1407740e0(&var_178, 0x322bcc77)
    float zmm2_1[0x4] = var_178[0]
    float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143ef8ad0, zmm15, 2), data_143ef8ac0 ^ zmm12_1)
        ^ data_143ef8ac0
    float zmm1_1 = var_178[1]
    uint32_t zmm0_1[0x4] = var_178[2]
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    zmm1_1 = zmm1_1 * zmm4_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
    var_178[0] = zmm2_1[0]
    float temp0_108[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_178[1] = zmm1_1
    zmm1_1 = var_168_1:4.d * temp0_108[0]
    var_178[2] = zmm0_1[0]
    zmm0_1 = var_168_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
    float zmm3_1 = var_168_1.d * temp0_108[0]
    zmm2_1 = var_158_1.d
    float temp0_109[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_168_1:4.d = zmm1_1
    var_168_1:8.d = zmm0_1[0]
    zmm0_1 = var_158_1:8.d
    zmm1_1 = var_158_1:4.d * temp0_109[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
    zmm2_1[0] = zmm2_1[0] * temp0_109[0]
    var_158_1:4.d = zmm1_1
    var_158_1:8.d = zmm0_1[0]
    var_168_1.d = zmm3_1
    var_158_1.d = zmm2_1[0]
    uint32_t var_118[0x4]
    sub_14077e4a0(&var_118, &var_178)
    zmm5 = var_118
    zmm6 = data_143ef8ab0
    float temp0_110[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_112[0x4] = _mm_add_ps(temp0_110, _mm_shuffle_ps(temp0_110, temp0_110, 0x4e))
    float temp0_114[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_112, temp0_112, 0x39), temp0_112)
    float temp0_115[0x4] = _mm_rsqrt_ps(temp0_114)
    float temp0_116[0x4] = _mm_mul_ps(temp0_114, zmm6)
    float temp0_121[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_115, temp0_115), temp0_116)), 
            temp0_115), 
        temp0_115)
    float temp0_124[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_121, temp0_121), temp0_116))
    float temp0_126[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_114, 2)
    float temp0_128[0x4] = _mm_add_ps(_mm_mul_ps(temp0_124, temp0_121), temp0_121)
    float temp0_129[0x4] = _mm_unpacklo_ps(var_148_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_128, zmm5) ^ data_143ef8aa0, temp0_126) ^ data_143ef8aa0
    zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_148_1.d, var_148_1:8.d[0].q), temp0_129[0].q)

*(arg1 + 0x70) = zmm6
*(arg1 + 0x90) = zmm15
*(arg1 + 0x80) = zmm5
*(arg1 + 0x30) = arg3
*(arg1 + 0x28) = arg5
*(arg1 + 0xa0) = 1

if (arg3 != 0)
    float var_108[0x3][0x4]
    sub_1417db650(arg1, &var_108)
    sub_141f4a580(*(arg1 + 0x30), &var_108, 0, 0, 0)

int32_t rcx_6
rcx_6.b = sub_140b5b8a0(arg6.d, 0) == 0
rcx_6.b |= arg6:4.d != 0
int16_t* var_130
int64_t* rax_8

if (rcx_6.b == 0)
    uint64_t r8 = zx.q(data_143ef8a20)
    data_143ef8a20 = (r8 + 1).d
    sub_140a2e390(&var_130, u"PIN %02d", r8)
    int16_t* rdx_3 = &data_142d40450
    int32_t var_128
    
    if (var_128 != 0)
        rdx_3 = var_130
    
    void var_120
    rax_8 = sub_140b58260(&var_120, rdx_3, 1)
    r15 = 1
else
    int64_t var_138 = arg6
    rax_8 = &var_138

int64_t result = *rax_8
*(arg1 + 0xb8) = result

if ((r15 & 1) != 0)
    int16_t* rcx_9 = var_130
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
