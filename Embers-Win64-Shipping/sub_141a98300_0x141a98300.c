// 函数: sub_141a98300
// 地址: 0x141a98300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t var_1f8
sub_141ea4020(*(arg1 + 0x10), &var_1f8, &arg_10)
int64_t rbx = sx.q(var_1f8)

if (*(rbx + *(arg1 + 0x18)) == 0)
    sub_141a98300(arg1, zx.q(rbx.d))
    rbx = zx.q(var_1f8)

float zmm12[0x4] = data_143f2b810
float zmm14[0x4] = data_143f2b8d0
zmm12[0].q = zx.o(0) u>> 0x40
float temp0[0x4] = _mm_shuffle_ps(zx.o(0), zmm12, 0xc4)
float zmm1[0x4] = __andps_xmmxud_memxud(zmm12, data_143f2b820)
float var_f8[0x4] = temp0
int64_t rax_4 = sx.q(arg_10)
float (* rdx_4)[0x4] = sx.q(rbx.d) * 0x30 + *arg1
float var_e8[0x4] = zx.o(0)
float var_d8[0x4] = zmm1
float (* r8_3)[0x4] = rax_4 * 0x30 + *arg1
float zmm6[0x4] = rdx_4[2]
float zmm13[0x4] = r8_3[2]
uint32_t var_1d8[0x4]
float var_178[0x4]
int96_t var_168
float var_158[0x4]
float zmm4[0x4]
float zmm5[0x4]
float zmm8[0x4]
float zmm11[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm6), zmm14, 1)) == 0)
    zmm5 = *rdx_4
    float zmm2[0x4] = *r8_3
    zmm4 = r8_3[1]
    float zmm7[0x4] = rdx_4[1]
    float temp0_134[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    float temp0_135[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    float temp0_136[0x4] = _mm_mul_ps(zmm6, zmm4)
    float temp0_138[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_134)
    float temp0_139[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    zmm11 = _mm_mul_ps(zmm6, zmm13)
    float temp0_143[0x4] =
        _mm_add_ps(__mulps_xmmps_memps(temp0_138, data_143f2b850), _mm_mul_ps(temp0_139, zmm2))
    float temp0_145[0x4] = _mm_mul_ps(temp0_135, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_148[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_149[0x4] = __mulps_xmmps_memps(temp0_145, data_143f2b840)
    float temp0_150[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_151[0x4] = __mulps_xmmps_memps(temp0_148, data_143f2b830)
    float temp0_152[0x4] = _mm_add_ps(temp0_143, temp0_149)
    float temp0_153[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_155[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xd2), temp0_150)
    zmm8 = _mm_add_ps(temp0_152, temp0_151)
    float temp0_159[0x4] =
        _mm_sub_ps(temp0_155, _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_153))
    float temp0_160[0x4] = _mm_add_ps(temp0_159, temp0_159)
    float temp0_161[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xd2)
    float temp0_162[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc9)
    float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_150)
    float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_153)
    float temp0_165[0x4] = _mm_mul_ps(temp0_160, temp0_139)
    zmm4 = _mm_add_ps(
        _mm_add_ps(_mm_sub_ps(temp0_163, temp0_164), _mm_add_ps(temp0_165, temp0_136)), zmm7)
else
    zmm1 = *rdx_4
    zmm8 = rdx_4[1]
    float temp0_5[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    _mm_mul_ps(zmm13, zmm6)
    float temp0_9[0x4] = _mm_mul_ps(temp0_5, zmm1)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x29), temp0_7)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x1a)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x12), temp0_12)
    float temp0_17[0x4] = _mm_add_ps(temp0_13, _mm_shuffle_ps(temp0_9, temp0_9, 1))
    float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_11)
    float temp0_19[0x4] = _mm_sub_ps(temp0_11, temp0_15)
    float temp0_20[0x4] = _mm_sub_ps(zmm12, temp0_17)
    float temp0_21[0x4] = _mm_mul_ps(temp0_18, zmm6)
    float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm6)
    float temp0_23[0x4] = _mm_mul_ps(temp0_6, temp0_19)
    zmm1 = __andps_xmmxud_memxud(temp0_22, data_143f2b820)
    float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0), 
        _mm_shuffle_ps(temp0_23, zmm1, 0x32), 0x82)
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x31)
    float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, zmm1, 0x10), temp0_28, 0x88)
    float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_23, 0x12), zmm1, 0xe8)
    zmm1 = *r8_3
    zmm12[0].q = zmm8 u>> 0x40
    float temp0_33[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm8, zmm12, 0xc4)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
    float temp0_36[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_37[0x4] = _mm_mul_ps(temp0_33, zmm1)
    float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x29), temp0_36)
    float temp0_40[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x12), temp0_40)
    float temp0_45[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), _mm_shuffle_ps(temp0_37, temp0_37, 1))
    float temp0_46[0x4] = _mm_add_ps(temp0_42, temp0_39)
    float temp0_47[0x4] = _mm_sub_ps(temp0_39, temp0_42)
    float temp0_48[0x4] = _mm_sub_ps(zmm12, temp0_45)
    float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm13)
    float temp0_50[0x4] = _mm_mul_ps(temp0_35, temp0_47)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_48, zmm13), data_143f2b820)
    float temp0_55[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0), 
        _mm_shuffle_ps(temp0_50, zmm1, 0x32), 0x82)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
    float temp0_59[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1, 0x10), 
        _mm_shuffle_ps(temp0_49, zmm1, 0x31), 0x88)
    float temp0_60[0x4] = _mm_mul_ps(temp0_56, temp0_30)
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_49, temp0_50, 0x12)
    zmm5 = r8_3[1]
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, zmm1, 0xe8)
    float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xaa), temp0_32)
    zmm12[0].q = zmm5 u>> 0x40
    float temp0_65[0x4] = _mm_shuffle_ps(zmm5, zmm12, 0xc4)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0)
    float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xff), temp0_34)
    float temp0_70[0x4] = _mm_add_ps(temp0_60, _mm_mul_ps(temp0_66, temp0_27))
    float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_27)
    float temp0_73[0x4] = _mm_add_ps(temp0_70, temp0_64)
    float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_32)
    float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_68)
    float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), temp0_30)
    float temp0_79[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
    var_178 = temp0_76
    float temp0_80[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
    float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_72)
    float temp0_82[0x4] = _mm_mul_ps(temp0_80, temp0_30)
    float temp0_83[0x4] = _mm_mul_ps(temp0_79, temp0_34)
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0)
    float temp0_85[0x4] = _mm_add_ps(temp0_81, temp0_75)
    float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_27)
    float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_32)
    float temp0_89[0x4] = _mm_add_ps(temp0_85, temp0_83)
    float temp0_90[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
    float temp0_91[0x4] = _mm_add_ps(temp0_82, temp0_86)
    float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_34)
    float temp0_93[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
    var_168 = temp0_89[0].12
    float temp0_94[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
    float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_88)
    float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_30)
    float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_32)
    float temp0_99[0x4] = _mm_mul_ps(temp0_93, temp0_27)
    float temp0_100[0x4] = _mm_add_ps(temp0_95, temp0_92)
    float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), temp0_34)
    float temp0_103[0x4] = _mm_add_ps(temp0_96, temp0_99)
    var_158 = temp0_100
    int96_t var_148_1 = _mm_add_ps(_mm_add_ps(temp0_103, temp0_98), temp0_102)[0].12
    int128_t zmm12_1
    float zmm14_1[0x4]
    zmm11, zmm12_1, zmm14_1 = sub_1407740e0(&var_178, 0x322bcc77)
    float zmm2_1[0x4] = var_178[0]
    zmm14_1 = _mm_and_ps(_mm_cmpeq_ps(zmm14_1, zmm11, 2), data_143f2b8c0 ^ zmm12_1) ^ data_143f2b8c0
    zmm2_1[0] = zmm2_1[0] * zmm14_1[0]
    uint32_t zmm0_1[0x4] = var_178[2]
    float zmm1_1 = var_178[1] * zmm14_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm14_1[0]
    var_178[0] = zmm2_1[0]
    float temp0_108[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
    var_178[1] = zmm1_1
    zmm1_1 = var_168:4.d * temp0_108[0]
    var_178[2] = zmm0_1[0]
    zmm0_1 = var_168:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
    float zmm3_1 = var_168.d * temp0_108[0]
    zmm2_1 = var_158[0]
    var_168:4.d = zmm1_1
    zmm1_1 = var_158[1]
    var_168:8.d = zmm0_1[0]
    zmm0_1 = var_158[2]
    float temp0_109[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
    zmm1_1 = zmm1_1 * temp0_109[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
    zmm2_1[0] = zmm2_1[0] * temp0_109[0]
    var_158[1] = zmm1_1
    var_158[2] = zmm0_1[0]
    var_168.d = zmm3_1
    var_158[0] = zmm2_1[0]
    sub_14077e4a0(&var_1d8, &var_178)
    zmm5 = var_1d8
    zmm8 = data_143f2b8b0
    rbx = zx.q(var_1f8)
    float temp0_110[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_112[0x4] = _mm_add_ps(temp0_110, _mm_shuffle_ps(temp0_110, temp0_110, 0x4e))
    float temp0_114[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_112, temp0_112, 0x39), temp0_112)
    float temp0_115[0x4] = _mm_rsqrt_ps(temp0_114)
    float temp0_116[0x4] = _mm_mul_ps(temp0_114, zmm8)
    float temp0_121[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_115, temp0_115), temp0_116)), 
            temp0_115), 
        temp0_115)
    float temp0_124[0x4] = _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_121, temp0_121), temp0_116))
    float temp0_126[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_114, 2)
    float temp0_128[0x4] = _mm_add_ps(_mm_mul_ps(temp0_124, temp0_121), temp0_121)
    float temp0_129[0x4] = _mm_unpacklo_ps(var_148_1:4.d, 0)
    zmm8 = _mm_and_ps(_mm_mul_ps(temp0_128, zmm5) ^ data_143f2b8a0, temp0_126) ^ data_143f2b8a0
    zmm4 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_148_1.d, var_148_1:8.d[0].q), temp0_129[0].q)

uint32_t temp0_172 = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
    __andps_xmmxud_memxud(zmm8, data_142d3f760), data_142d3f760, 0))
var_e8 = zmm4
var_f8 = zmm8
int32_t var_1c8 = 0x7f800000

if (temp0_172 != 0)
label_141a98928:
    wchar16 const* const r14_1 = u"false"
    wchar16 const* const r15_1 = u"false"
    
    if (sub_141a995e0(sx.q(arg_10) * 0x30 + *arg1) != 0)
        r15_1 = u"true"
    
    if (sub_141a995e0(sx.q(rbx.d) * 0x30 + *arg1) != 0)
        r14_1 = u"true"
    
    int64_t var_1c0 = 0
    int32_t var_1b8_1 = 0
    sub_1405947f0(&var_1c0, 0x31)
    int32_t rax_13 = var_1b8_1 + 0x31
    var_1b8_1 = rax_13
    
    if (rax_13 s> 0)
        sub_140594770(&var_1c0)
    
    UnDecorator::getReferenceType(var_1c0, NaN created in during FTransform Multiplication\n", 0x62)
    sub_140b2f3a0(&var_178, arg_10)
    sub_140b2f3a0(&var_158, var_1f8)
    void var_138
    sub_140b2f3c0(&var_138, r15_1)
    void var_118
    sub_140b2f3c0(&var_118, r14_1)
    var_1d8[0].q = &var_178
    var_1d8[2].q = &var_f8
    var_1d8 = var_1d8
    void* var_1f0
    sub_141a8c8b0(&var_1f0, &var_1d8)
    int64_t var_1a8
    int64_t* rax_14 = sub_140b3b4b0(&var_1a8, 
        \tBoneIndex {0} : ParentBoneIndex {1} BoneTransformNaN={2} : ParentTransformNaN=", &var_1f0)
    int32_t rcx_19 = rax_14[1].d
    int32_t r8_5 = rcx_19 - 1
    
    if (rcx_19 == 0)
        r8_5 = 0
    
    sub_140a20ba0(&var_1c0, *rax_14, r8_5)
    int64_t rcx_21 = var_1a8
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int32_t i_5
    int32_t i_3 = i_5
    
    if (i_3 != 0)
        int64_t* rbx_2 = var_1f0 + 0x10
        int32_t i
        
        do
            int64_t rcx_22 = *rbx_2
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            rbx_2 = &rbx_2[4]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    void* rcx_23 = var_1f0
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    int64_t i_1 = 4
    float (* rdi_1)[0x4] = &var_e8
    
    do
        int64_t rcx_24 = rdi_1[-2][0].q
        rdi_1 = &rdi_1[-2]
        i_1 -= 1
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
    while (i_1 != 0)
    
    void var_188
    sub_140b2f3e0(&var_178, sub_140ae1ec0(sx.q(arg_10) * 0x30 + *arg1, &var_188))
    var_1d8[0].q = &var_178
    var_1d8[2].q = &var_158
    var_1a8.o = var_1d8
    sub_141a8c8b0(&var_1f0, &var_1a8)
    int64_t var_198
    int64_t* rax_17 = sub_140b3b4b0(&var_198, u"\tBone {0}\n", &var_1f0)
    int32_t rcx_31 = rax_17[1].d
    int32_t r8_7 = rcx_31 - 1
    
    if (rcx_31 == 0)
        r8_7 = 0
    
    sub_140a20ba0(&var_1c0, *rax_17, r8_7)
    int64_t rcx_33 = var_198
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    int32_t i_4 = i_5
    
    if (i_4 != 0)
        void* rbx_4 = var_1f0 + 0x10
        int32_t i_2
        
        do
            int64_t rcx_34 = *rbx_4
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            rbx_4 += 0x20
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    void* rcx_35 = var_1f0
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    int64_t rcx_36 = var_168.q
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    sub_140b2f3e0(&var_178, sub_140ae1ec0(sx.q(var_1f8) * 0x30 + *arg1, &var_188))
    var_1d8[0].q = &var_178
    var_1d8[2].q = &var_158
    var_198.o = var_1d8
    sub_141a8c8b0(&var_1f0, &var_198)
    int64_t* rax_20 = sub_140b3b4b0(&var_1a8, u"\tParent {0}\n", &var_1f0)
    int32_t rcx_43 = rax_20[1].d
    int32_t r8_9 = rcx_43 - 1
    
    if (rcx_43 == 0)
        r8_9 = 0
    
    sub_140a20ba0(&var_1c0, *rax_20, r8_9)
    int64_t rcx_45 = var_1a8
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
    
    sub_14100dc70(&var_1f0)
    int64_t rcx_47 = var_168.q
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)
    
    sub_140b2f3e0(&var_178, sub_140ae1ec0(&var_f8, &var_188))
    var_1d8[0].q = &var_178
    var_1d8[2].q = &var_158
    var_198.o = var_1d8
    sub_141a8c8b0(&var_1f0, &var_198)
    int64_t* rax_22 = sub_140b3b4b0(&var_1a8, u"\tResult {0}\n", &var_1f0)
    int32_t rcx_52 = rax_22[1].d
    int32_t r8_11 = rcx_52 - 1
    
    if (rcx_52 == 0)
        r8_11 = 0
    
    sub_140a20ba0(&var_1c0, *rax_22, r8_11)
    int64_t rcx_54 = var_1a8
    
    if (rcx_54 != 0)
        sub_140a74f90(rcx_54)
    
    sub_14100dc70(&var_1f0)
    int64_t rcx_56 = var_168.q
    
    if (rcx_56 != 0)
        sub_140a74f90(rcx_56)
    
    sub_140b2f3e0(&var_178, sub_140aef380(&var_188, sx.q(arg_10) * 0x30 + *arg1, 0x30))
    var_1d8[0].q = &var_178
    var_1d8[2].q = &var_158
    var_198.o = var_1d8
    sub_141a8c8b0(&var_1f0, &var_198)
    int64_t* rax_25 = sub_140b3b4b0(&var_1a8, u"\tBone B64 {0}\n", &var_1f0)
    int32_t rcx_61 = rax_25[1].d
    int32_t r8_13 = rcx_61 - 1
    
    if (rcx_61 == 0)
        r8_13 = 0
    
    sub_140a20ba0(&var_1c0, *rax_25, r8_13)
    int64_t rcx_63 = var_1a8
    
    if (rcx_63 != 0)
        sub_140a74f90(rcx_63)
    
    sub_14100dc70(&var_1f0)
    int64_t rcx_65 = var_168.q
    
    if (rcx_65 != 0)
        sub_140a74f90(rcx_65)
    
    sub_140b2f3e0(&var_178, sub_140aef380(&var_188, sx.q(var_1f8) * 0x30 + *arg1, 0x30))
    var_1d8[0].q = &var_178
    var_1d8[2].q = &var_158
    var_198.o = var_1d8
    sub_141a8c8b0(&var_1f0, &var_198)
    int64_t* rax_28 = sub_140b3b4b0(&var_1a8, u"\tParent B64 {0}\n", &var_1f0)
    int32_t rcx_70 = rax_28[1].d
    int32_t r8_15 = rcx_70 - 1
    
    if (rcx_70 == 0)
        r8_15 = 0
    
    sub_140a20ba0(&var_1c0, *rax_28, r8_15)
    int64_t rcx_72 = var_1a8
    
    if (rcx_72 != 0)
        sub_140a74f90(rcx_72)
    
    sub_14100dc70(&var_1f0)
    int64_t rcx_74 = var_168.q
    
    if (rcx_74 != 0)
        sub_140a74f90(rcx_74)
    
    sub_140b2f3e0(&var_178, sub_140aef380(&var_188, &var_f8, 0x30))
    var_1d8[0].q = &var_178
    var_1d8[2].q = &var_158
    var_198.o = var_1d8
    sub_141a8c8b0(&var_1f0, &var_198)
    int64_t* rax_30 = sub_140b3b4b0(&var_1a8, u"\tResult B64 {0}\n", &var_1f0)
    int32_t rcx_79 = rax_30[1].d
    int32_t r8_17 = rcx_79 - 1
    
    if (rcx_79 == 0)
        r8_17 = 0
    
    sub_140a20ba0(&var_1c0, *rax_30, r8_17)
    int64_t rcx_81 = var_1a8
    
    if (rcx_81 != 0)
        sub_140a74f90(rcx_81)
    
    sub_14100dc70(&var_1f0)
    int64_t rcx_83 = var_168.q
    
    if (rcx_83 != 0)
        sub_140a74f90(rcx_83)
    
    int64_t rcx_84 = var_1c0
    
    if (rcx_84 != 0)
        sub_140a74f90(rcx_84)
    
    zmm8 = var_f8
else
    int32_t var_1c8_1 = 0x7f800000
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm4, data_142d3f760), 
            data_142d3f760, 0)) != 0)
        goto label_141a98928
    
    int32_t var_1c8_2 = 0x7f800000
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm11, data_142d3f760), 
            data_142d3f760, 0)) != 0)
        goto label_141a98928

float (* rcx_87)[0x4] = sx.q(arg_10) * 0x30 + *arg1
*rcx_87 = zmm8
rcx_87[1] = var_e8
rcx_87[2] = zmm11
zmm5 = data_143f2b8b0
float (* rcx_90)[0x4] = sx.q(arg_10) * 0x30 + *arg1
zmm6 = *rcx_90
float temp0_179[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_181[0x4] = _mm_add_ps(temp0_179, _mm_shuffle_ps(temp0_179, temp0_179, 0x4e))
float temp0_183[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_181, temp0_181, 0x39), temp0_181)
float temp0_184[0x4] = _mm_rsqrt_ps(temp0_183)
float temp0_185[0x4] = _mm_mul_ps(temp0_183, zmm5)
float temp0_190[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_184, temp0_184), temp0_185)), 
        temp0_184), 
    temp0_184)
float temp0_193[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_190, temp0_190), temp0_185))
float temp0_194[0x4] = _mm_cmpeq_ps(data_143f2b8f0, temp0_183, 2)
*rcx_90 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_193, temp0_190), temp0_190), zmm6) ^ data_143f2b8a0, 
    temp0_194) ^ data_143f2b8a0
int64_t result = *(arg1 + 0x18)
*(sx.q(arg_10) + result) = 1
__security_check_cookie(rax_1 ^ &var_218)
return result
