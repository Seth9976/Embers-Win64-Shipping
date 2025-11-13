// 函数: sub_1420efba0
// 地址: 0x1420efba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* rax_2 = arg4[1]

if (rax_2 == 0)
    rax_2 = arg2[0x23]
    
    if (rax_2 == 0)
        (*(*arg2 + 0x390))(arg2)
        rax_2 = arg2[0x23]

uint128_t zmm6 = *arg3
int128_t zmm14 = arg3[1]
int128_t zmm8 = arg3[2]
uint128_t var_108 = zmm6
int128_t var_f8 = zmm14
int128_t var_e8 = zmm8
int64_t* rbx_1

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rbx_1 = *(rax_2 + 0x130)

float zmm7[0x4]
float zmm9[0x4]

if (rbx_1 != 0)
    float var_48_1[0x4] = zmm7
    float zmm8_1[0x4]
    float zmm14_1[0x4]
    zmm6, zmm8_1, zmm9, zmm14_1 = sub_1405c6ac0(rbx_1, 0, 0)
    float zmm2_1[0x4] = *(rbx_1 + 0x1e0)
    uint32_t zmm11_1[0x4] = data_143f481d0
    float zmm3_1[0x4] = data_143f482f0
    uint32_t temp0_1[0x4] = _mm_and_ps(zmm2_1, zmm11_1)
    uint32_t zmm15_1[0x4] = data_143f481e0
    float zmm0_1[0x4]
    uint32_t zmm1_1[0x4]
    float zmm5_1[0x4]
    float zmm10_1[0x4]
    float zmm12_1[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3_1, temp0_1, 1)) == 0)
        zmm10_1 = data_143dbb0c0
        zmm12_1 = data_143dbb0d0
        zmm11_1 = data_143dbb0e0
    else
        zmm0_1 = data_143f48200
        zmm10_1 = __mulps_xmmps_memps(*(rbx_1 + 0x1c0), data_143f482e0)
        zmm5_1 = *(rbx_1 + 0x1d0)
        zmm0_1[0].q = zmm2_1 u>> 0x40
        float temp0_5[0x4] = _mm_shuffle_ps(zmm2_1, zmm0_1, 0xc4)
        zmm1_1 = _mm_rcp_ps(temp0_5)
        uint32_t temp0_7[0x4] = _mm_and_ps(zmm11_1, temp0_5)
        float temp0_8[0x4] = _mm_mul_ps(zmm1_1, zmm1_1)
        zmm1_1 = _mm_add_ps(zmm1_1, zmm1_1)
        zmm11_1 = _mm_cmpeq_ps(temp0_7, zmm3_1, 2)
        float temp0_11[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xd2)
        zmm1_1 = _mm_sub_ps(zmm1_1, _mm_mul_ps(temp0_8, temp0_5))
        float temp0_14[0x4] = _mm_mul_ps(zmm1_1, zmm1_1)
        zmm1_1 = _mm_sub_ps(_mm_add_ps(zmm1_1, zmm1_1), _mm_mul_ps(temp0_14, temp0_5))
        zmm11_1 = _mm_and_ps(zmm11_1, zx.o(0) ^ zmm1_1) ^ zmm1_1
        zmm1_1 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xc9)
        zmm11_1 = _mm_and_ps(zmm11_1, zmm15_1)
        float temp0_21[0x4] = _mm_mul_ps(zmm5_1, zmm11_1)
        float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), temp0_11)
        float temp0_26[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xd2), zmm1_1), temp0_23)
        float temp0_27[0x4] = _mm_add_ps(temp0_26, temp0_26)
        float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), zmm1_1)
        zmm1_1 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xff)
        float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xc9)
        zmm1_1 = _mm_mul_ps(zmm1_1, temp0_27)
        float temp0_33[0x4] = _mm_mul_ps(temp0_31, temp0_11)
        zmm1_1 = _mm_add_ps(zmm1_1, temp0_21)
        zmm12_1 = _mm_and_ps(
            _mm_sub_ps(zx.o(0), _mm_add_ps(_mm_sub_ps(temp0_29, temp0_33), zmm1_1)), zmm15_1)
    
    zmm1_1 = zmm6
    float zmm13_1[0x4]
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm11_1, zmm8_1), data_143f482d0, 1))
            == 0)
        zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm6, 0x55)
        float temp0_174[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), _mm_shuffle_ps(zmm10_1, zmm10_1, 0x1b))
        float temp0_175[0x4] = _mm_mul_ps(zmm8_1, zmm12_1)
        float temp0_176[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_177[0x4] = __mulps_xmmps_memps(temp0_174, data_143f48290)
        float temp0_178[0x4] = _mm_mul_ps(zmm10_1, temp0_176)
        float temp0_179[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0xd2)
        zmm13_1 = _mm_mul_ps(zmm8_1, zmm11_1)
        float temp0_181[0x4] = _mm_add_ps(temp0_177, temp0_178)
        zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm10_1, zmm10_1, 0x4e))
        float temp0_186[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), _mm_shuffle_ps(zmm10_1, zmm10_1, 0xb1))
        zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f48280)
        float temp0_188[0x4] = __mulps_xmmps_memps(temp0_186, data_143f48270)
        float temp0_189[0x4] = _mm_add_ps(temp0_181, zmm1_1)
        zmm1_1 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_192[0x4] = _mm_mul_ps(temp0_179, zmm6)
        zmm7 = _mm_add_ps(temp0_189, temp0_188)
        float temp0_196[0x4] =
            _mm_sub_ps(temp0_192, _mm_mul_ps(_mm_shuffle_ps(temp0_175, temp0_175, 0xc9), zmm1_1))
        float temp0_197[0x4] = _mm_add_ps(temp0_196, temp0_196)
        float temp0_198[0x4] = _mm_shuffle_ps(temp0_197, temp0_197, 0xd2)
        float temp0_199[0x4] = _mm_shuffle_ps(temp0_197, temp0_197, 0xc9)
        float temp0_200[0x4] = _mm_mul_ps(temp0_198, zmm6)
        float temp0_201[0x4] = _mm_mul_ps(temp0_199, zmm1_1)
        float temp0_202[0x4] = _mm_mul_ps(temp0_197, temp0_176)
        zmm5_1 = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_200, temp0_201), _mm_add_ps(temp0_202, temp0_175)), zmm14_1)
    else
        zmm5_1 = data_143f48200
        zmm1_1 = _mm_add_ps(zmm1_1, zmm6)
        float temp0_43[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
        float temp0_44[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
        float temp0_45[0x4] = _mm_mul_ps(zmm6, zmm1_1)
        float temp0_47[0x4] = _mm_mul_ps(temp0_43, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
        zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
        float temp0_51[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0x1a), 
            _mm_shuffle_ps(temp0_45, temp0_45, 1))
        zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm1_1)
        _mm_mul_ps(zmm8_1, zmm11_1)
        zmm1_1 = _mm_sub_ps(zmm5_1, temp0_51)
        float temp0_56[0x4] = _mm_add_ps(zmm6, temp0_47)
        float temp0_57[0x4] = _mm_sub_ps(temp0_47, zmm6)
        zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
        float temp0_59[0x4] = _mm_mul_ps(temp0_56, zmm8_1)
        float temp0_60[0x4] = _mm_mul_ps(temp0_44, temp0_57)
        uint32_t temp0_61[0x4] = _mm_and_ps(zmm1_1, zmm15_1)
        float temp0_62[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 4)
        float temp0_65[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_59, temp0_61, 0), 
            _mm_shuffle_ps(temp0_60, temp0_61, 0x32), 0x82)
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_59, temp0_61, 0x31)
        float temp0_68[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_60, temp0_61, 0x10), temp0_66, 0x88)
        float temp0_70[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_59, temp0_60, 0x12), temp0_61, 0xe8)
        zmm1_1 = _mm_add_ps(zmm10_1, zmm10_1)
        zmm5_1[0].q = zmm14_1 u>> 0x40
        float temp0_72[0x4] = _mm_shuffle_ps(zmm14_1, zmm5_1, 0xc4)
        float temp0_73[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xc9)
        float temp0_75[0x4] = _mm_mul_ps(temp0_62, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
        float temp0_76[0x4] = _mm_mul_ps(zmm1_1, zmm10_1)
        zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xff), zmm1_1)
        float temp0_82[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x1a), 
            _mm_shuffle_ps(temp0_76, temp0_76, 1))
        zmm6 = _mm_add_ps(temp0_79, temp0_75)
        float temp0_84[0x4] = _mm_sub_ps(temp0_75, temp0_79)
        zmm1_1 = _mm_sub_ps(zmm5_1, temp0_82)
        zmm6 = _mm_mul_ps(zmm6, zmm11_1)
        float temp0_87[0x4] = _mm_mul_ps(temp0_73, temp0_84)
        uint32_t temp0_89[0x4] = _mm_and_ps(_mm_mul_ps(zmm1_1, zmm11_1), zmm15_1)
        float temp0_90[0x4] = _mm_shuffle_ps(temp0_87, temp0_89, 0x32)
        float temp0_92[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, temp0_89, 0), temp0_90, 0x82)
        float temp0_93[0x4] = _mm_shuffle_ps(zmm6, temp0_89, 0x31)
        float temp0_95[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_87, temp0_89, 0x10), temp0_93, 0x88)
        zmm0_1 = data_143f48200
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0x55), temp0_68)
        zmm0_1[0].q = zmm12_1 u>> 0x40
        float temp0_98[0x4] = _mm_shuffle_ps(zmm12_1, zmm0_1, 0xc4)
        float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0), temp0_65)
        zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, temp0_87, 0x12), temp0_89, 0xe8)
        zmm1_1 = _mm_shuffle_ps(temp0_92, temp0_92, 0xaa)
        float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
        float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xff), temp0_72)
        zmm1_1 = _mm_mul_ps(zmm1_1, temp0_70)
        float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0), temp0_65)
        float temp0_110[0x4] = _mm_add_ps(temp0_104, zmm1_1)
        zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xaa), temp0_70)
        float temp0_113[0x4] = _mm_add_ps(temp0_110, temp0_106)
        float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0x55), temp0_68)
        float temp0_116[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xff)
        float var_158[0x4] = temp0_113
        float temp0_117[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        float temp0_118[0x4] = _mm_add_ps(temp0_115, temp0_109)
        float temp0_119[0x4] = _mm_mul_ps(temp0_117, temp0_68)
        float temp0_120[0x4] = _mm_mul_ps(temp0_116, temp0_72)
        float temp0_121[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_122[0x4] = _mm_add_ps(temp0_118, zmm1_1)
        float temp0_123[0x4] = _mm_mul_ps(temp0_121, temp0_65)
        zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), temp0_70)
        float temp0_126[0x4] = _mm_add_ps(temp0_122, temp0_120)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_128[0x4] = _mm_add_ps(temp0_119, temp0_123)
        zmm6 = _mm_mul_ps(zmm6, temp0_72)
        float temp0_130[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0)
        int96_t var_148_1 = temp0_126[0].12
        float temp0_131[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0x55)
        float temp0_132[0x4] = _mm_add_ps(temp0_128, zmm1_1)
        float temp0_133[0x4] = _mm_mul_ps(temp0_131, temp0_68)
        zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xaa), temp0_70)
        float temp0_136[0x4] = _mm_mul_ps(temp0_130, temp0_65)
        float temp0_137[0x4] = _mm_add_ps(temp0_132, zmm6)
        float temp0_139[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xff), temp0_72)
        float temp0_140[0x4] = _mm_add_ps(temp0_133, temp0_136)
        int96_t var_138_1 = temp0_137[0].12
        int96_t var_128_1 = _mm_add_ps(_mm_add_ps(temp0_140, zmm1_1), temp0_139)[0].12
        zmm13_1 = sub_1407740e0(&var_158, 0x322bcc77)
        float zmm2_2[0x4] = var_158[0]
        float zmm1_2 = var_158[1]
        float zmm4_2[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(data_143f482d0, zmm13_1, 2), data_143f482c0 ^ data_143f48200)
        uint32_t zmm0_2[0x4] = var_158[2]
        zmm4_2 ^= data_143f482c0
        zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
        zmm1_2 = zmm1_2 * zmm4_2[0]
        zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
        var_158[0] = zmm2_2[0]
        var_158[1] = zmm1_2
        float temp0_145[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
        zmm1_2 = var_148_1:4.d * temp0_145[0]
        var_158[2] = zmm0_2[0]
        zmm0_2 = var_148_1:8.d
        zmm0_2[0] = zmm0_2[0] f* temp0_145[0]
        float zmm3_2 = var_148_1.d * temp0_145[0]
        zmm2_2 = var_138_1.d
        float temp0_146[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
        var_148_1:4.d = zmm1_2
        var_148_1:8.d = zmm0_2[0]
        zmm0_2 = var_138_1:8.d
        zmm1_2 = var_138_1:4.d * temp0_146[0]
        zmm0_2[0] = zmm0_2[0] f* temp0_146[0]
        zmm2_2[0] = zmm2_2[0] * temp0_146[0]
        var_138_1:4.d = zmm1_2
        var_138_1:8.d = zmm0_2[0]
        var_148_1.d = zmm3_2
        var_138_1.d = zmm2_2[0]
        uint32_t var_118[0x4]
        zmm6 = sub_14077e4a0(&var_118, &var_158)
        zmm5_1 = var_118
        zmm7 = data_143f482b0
        float temp0_147[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
        float temp0_149[0x4] = _mm_add_ps(temp0_147, _mm_shuffle_ps(temp0_147, temp0_147, 0x4e))
        float temp0_151[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0x39), temp0_149)
        float temp0_152[0x4] = _mm_rsqrt_ps(temp0_151)
        float temp0_153[0x4] = _mm_mul_ps(temp0_151, zmm7)
        float temp0_158[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_152, temp0_152), temp0_153)), 
                temp0_152), 
            temp0_152)
        float temp0_161[0x4] =
            _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_158, temp0_158), temp0_153))
        float temp0_163[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_151, 2)
        float temp0_165[0x4] = _mm_add_ps(_mm_mul_ps(temp0_161, temp0_158), temp0_158)
        float temp0_166[0x4] = _mm_unpacklo_ps(var_128_1:4.d, 0)
        zmm7 =
            _mm_and_ps(_mm_mul_ps(temp0_165, zmm5_1) ^ data_143f482a0, temp0_163) ^ data_143f482a0
        zmm5_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_128_1.d, var_128_1:8.d[0].q), temp0_166[0].q)
    
    var_108 = zmm7
    zmm7 = var_48_1
    float var_e8_1[0x4] = zmm13_1
    float var_f8_1[0x4] = zmm5_1

void* result = sub_1420eeee0(arg1, arg2, &var_108, arg4, zmm6, zmm7, zmm9)
__security_check_cookie(rax_1 ^ &var_188)
return result
