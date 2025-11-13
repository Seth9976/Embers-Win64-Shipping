// 函数: sub_141f4d380
// 地址: 0x141f4d380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t rbx = arg3
int64_t* rsi = arg2
void* result
int512_t zmm1
float zmm7[0x4]
float zmm10[0x4]
float zmm13[0x4]
uint128_t zmm14

if (arg2 == 0 || (*(arg2 + 0x14c) & 1) != 0)
label_141f4d3d8:
    uint128_t zmm5 = zx.o(*(arg1 + 0x134))
    float zmm3[0x4] = zx.o(0)
    char rcx_1 = *(arg1 + 0x14c)
    uint128_t zmm4 = zx.o(*(arg1 + 0x11c))
    uint128_t var_98_1 = arg9
    *(arg1 + 0x14c) = rcx_1 | 1
    float zmm0[0x4] = zmm4
    int32_t rax_3 = *(arg1 + 0x13c)
    int32_t rax_4 = *(arg1 + 0x124)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm1.o = rax_4
    zmm0 = zmm5
    float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, zmm3[0].q)
    arg9 = _mm_unpacklo_ps(zmm4, zmm1.q)
    zmm1.o = rax_3
    arg9 = _mm_unpacklo_ps(arg9, temp0_2[0].q)
    float var_a8_1[0x4] = zmm13
    zmm13 = *arg11
    uint128_t var_b8_1 = zmm14
    float temp0_5[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm14 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm1.q), _mm_unpacklo_ps(temp0_5, zmm3[0].q)[0].q)
    uint128_t var_118_1 = zmm14
    float var_138[0x4] = zmm13
    uint128_t var_128_1 = arg9
    uint64_t var_158 = zmm5.q
    
    if (rsi == 0)
        rbx = arg1[0x19]
        rsi = arg1[0x18]
    
    float var_38_1[0x4] = arg5
    float var_48_1[0x4] = zmm7
    uint128_t var_c8_1 = arg10
    
    if (rsi == 0)
        arg5 = zmm13
        arg10 = zmm14
    else
        float var_198[0x4]
        
        if ((rcx_1 & 0x1c) != 0)
            arg2, zmm1 = sub_141f355c0(arg1, &var_198, &var_138, rsi, rbx)
            uint128_t var_178
            arg10 = var_178
            uint128_t var_188
            arg9 = var_188
            arg5 = var_198
        else
            void var_108
            int128_t* rax_7
            rax_7, arg2 = (*(*rsi + 0x408))(rsi, &var_108, rbx, 0)
            zmm7 = rax_7[2]
            float zmm5_1[0x4] = *rax_7
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm14, zmm7), data_143f3b4e0, 
                    1)) == 0)
                arg9 = _mm_mul_ps(arg9, zmm7)
                float temp0_142[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x1b)
                zmm1.o = zmm13
                zmm1.o = _mm_shuffle_ps(zmm1.o, zmm13, 0x4e)
                float temp0_145[0x4] = _mm_mul_ps(temp0_142, _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
                zmm3 = arg9
                zmm4 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                float temp0_147[0x4] = _mm_mul_ps(zmm13, zmm4)
                float temp0_148[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
                float temp0_149[0x4] = __mulps_xmmps_memps(temp0_145, data_143f3b3b0)
                float temp0_150[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
                arg10 = _mm_mul_ps(zmm14, zmm7)
                float temp0_152[0x4] = _mm_add_ps(temp0_149, temp0_147)
                zmm1.o = _mm_mul_ps(zmm1.o, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
                float temp0_156[0x4] = _mm_mul_ps(temp0_150, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
                zmm1.o = __mulps_xmmps_memps(zmm1.o, data_143f3b3a0)
                float temp0_158[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                float temp0_159[0x4] = __mulps_xmmps_memps(temp0_156, data_143f3b390)
                float temp0_160[0x4] = _mm_add_ps(temp0_152, zmm1.o)
                zmm1.o = zmm5_1
                zmm1.o = _mm_shuffle_ps(zmm1.o, zmm5_1, 0xd2)
                float temp0_162[0x4] = _mm_mul_ps(temp0_158, zmm1.o)
                float temp0_163[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                float temp0_164[0x4] = _mm_mul_ps(temp0_148, temp0_163)
                arg5 = _mm_add_ps(temp0_160, temp0_159)
                float temp0_166[0x4] = _mm_sub_ps(temp0_164, temp0_162)
                float temp0_167[0x4] = _mm_add_ps(temp0_166, temp0_166)
                arg9 = _mm_shuffle_ps(temp0_167, temp0_167, 0xd2)
                float temp0_169[0x4] = _mm_shuffle_ps(temp0_167, temp0_167, 0xc9)
                arg9 = _mm_mul_ps(arg9, temp0_163)
                float temp0_171[0x4] = _mm_mul_ps(temp0_169, zmm1.o)
                float temp0_172[0x4] = _mm_mul_ps(temp0_167, zmm4)
                arg9 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(arg9, temp0_171), _mm_add_ps(temp0_172, zmm3)), rax_7[1])
            else
                float var_58_1[0x4] = arg6
                arg6 = rax_7[1]
                zmm1.o = zmm5_1
                zmm1.o = _mm_add_ps(zmm1.o, zmm5_1)
                zmm4 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                float var_78_1[0x4] = zmm10
                zmm10 = data_143f3b4b0
                float temp0_14[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
                float temp0_15[0x4] = _mm_mul_ps(zmm5_1, zmm1.o)
                float temp0_17[0x4] = _mm_mul_ps(temp0_14, _mm_shuffle_ps(zmm1.o, zmm1.o, 0x29))
                zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x12)
                float temp0_21[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0x1a), 
                    _mm_shuffle_ps(temp0_15, temp0_15, 1))
                _mm_mul_ps(zmm14, zmm7)
                float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm1.o)
                zmm1.o = zmm10
                zmm1.o = _mm_sub_ps(zmm1.o, temp0_21)
                float temp0_26[0x4] = _mm_add_ps(temp0_24, temp0_17)
                zmm1.o = _mm_mul_ps(zmm1.o, zmm7)
                float temp0_28[0x4] = _mm_sub_ps(temp0_17, temp0_24)
                float temp0_29[0x4] = _mm_mul_ps(temp0_26, zmm7)
                zmm1.o = __andps_xmmxud_memxud(zmm1.o, data_143f3b4c0)
                zmm4 = _mm_mul_ps(zmm4, temp0_28)
                float temp0_32[0x4] = _mm_add_ps(zmm13, zmm13)
                float temp0_35[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, zmm1.o, 0), 
                    _mm_shuffle_ps(zmm4, zmm1.o, 0x32), 0x82)
                float temp0_36[0x4] = _mm_shuffle_ps(temp0_29, zmm1.o, 0x31)
                float temp0_38[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1.o, 0x10), temp0_36, 0x88)
                float temp0_39[0x4] = _mm_mul_ps(zmm13, temp0_32)
                float temp0_41[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, zmm4, 0x12), zmm1.o, 0xe8)
                zmm1.o = temp0_32
                zmm1.o = _mm_shuffle_ps(zmm1.o, temp0_32, 0x29)
                zmm10[0].q = arg6 u>> 0x40
                float temp0_43[0x4] = _mm_shuffle_ps(arg6, zmm10, 0xc4)
                zmm1.o = _mm_mul_ps(zmm1.o, _mm_shuffle_ps(zmm13, zmm13, 4))
                float temp0_48[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0x1a), 
                    _mm_shuffle_ps(temp0_39, temp0_39, 1))
                float temp0_49[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x12), temp0_49)
                zmm4 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                float temp0_53[0x4] = _mm_add_ps(temp0_51, zmm1.o)
                zmm1.o = _mm_sub_ps(zmm1.o, temp0_51)
                float temp0_55[0x4] = _mm_mul_ps(temp0_53, zmm14)
                zmm4 = _mm_mul_ps(zmm4, zmm1.o)
                zmm1.o = zmm10
                zmm1.o = _mm_sub_ps(zmm1.o, temp0_48)
                zmm1.o = _mm_mul_ps(zmm1.o, zmm14)
                zmm1.o = __andps_xmmxud_memxud(zmm1.o, data_143f3b4c0)
                float temp0_62[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_55, zmm1.o, 0), 
                    _mm_shuffle_ps(zmm4, zmm1.o, 0x32), 0x82)
                float temp0_63[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
                float temp0_64[0x4] = _mm_shuffle_ps(temp0_55, zmm1.o, 0x31)
                float temp0_66[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1.o, 0x10), temp0_64, 0x88)
                float temp0_67[0x4] = _mm_mul_ps(temp0_63, temp0_38)
                zmm10[0].q = arg9 u>> 0x40
                arg9 = _mm_shuffle_ps(arg9, zmm10, 0xc4)
                float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0), temp0_35)
                float temp0_72[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_55, zmm4, 0x12), zmm1.o, 0xe8)
                zmm1.o = temp0_62
                zmm1.o = _mm_shuffle_ps(zmm1.o, temp0_62, 0xaa)
                float temp0_74[0x4] = _mm_add_ps(temp0_67, temp0_70)
                float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xff), temp0_43)
                float temp0_77[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
                zmm1.o = _mm_mul_ps(zmm1.o, temp0_41)
                float temp0_79[0x4] = _mm_mul_ps(temp0_77, temp0_35)
                float temp0_80[0x4] = _mm_add_ps(temp0_74, zmm1.o)
                zmm1.o = temp0_66
                zmm1.o = _mm_shuffle_ps(zmm1.o, temp0_66, 0xaa)
                zmm1.o = _mm_mul_ps(zmm1.o, temp0_41)
                float temp0_83[0x4] = _mm_add_ps(temp0_80, temp0_76)
                float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0x55), temp0_38)
                float temp0_86[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xff)
                var_198 = temp0_83
                float temp0_87[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
                float temp0_88[0x4] = _mm_add_ps(temp0_85, temp0_79)
                float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_38)
                float temp0_90[0x4] = _mm_mul_ps(temp0_86, temp0_43)
                float temp0_91[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0)
                float temp0_92[0x4] = _mm_add_ps(temp0_88, zmm1.o)
                float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_35)
                zmm1.o = temp0_72
                zmm1.o = _mm_shuffle_ps(zmm1.o, temp0_72, 0xaa)
                zmm1.o = _mm_mul_ps(zmm1.o, temp0_41)
                float temp0_96[0x4] = _mm_add_ps(temp0_89, temp0_93)
                float temp0_97[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xff)
                float temp0_98[0x4] = _mm_add_ps(temp0_92, temp0_90)
                float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_43)
                float temp0_100[0x4] = _mm_shuffle_ps(arg9, arg9, 0)
                float temp0_101[0x4] = _mm_add_ps(temp0_96, zmm1.o)
                float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_35)
                zmm1.o = 0x322bcc77
                int96_t var_188_1 = temp0_98[0].12
                float temp0_103[0x4] = _mm_shuffle_ps(arg9, arg9, 0x55)
                float temp0_104[0x4] = _mm_add_ps(temp0_101, temp0_99)
                float temp0_105[0x4] = _mm_mul_ps(temp0_103, temp0_38)
                int96_t var_178_1 = temp0_104[0].12
                float temp0_106[0x4] = _mm_add_ps(temp0_105, temp0_102)
                float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0xaa), temp0_41)
                arg9 = _mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0xff), temp0_43)
                int96_t var_168_1 = _mm_add_ps(_mm_add_ps(temp0_106, temp0_108), arg9)[0].12
                int512_t zmm8
                int512_t zmm9
                float zmm10_1[0x4]
                int512_t zmm11
                zmm8, zmm9, zmm10_1, zmm11, arg10 = sub_1407740e0(&var_198, zmm1.o)
                float zmm2_1[0x4] = var_198[0]
                float zmm4_1[0x4] =
                    _mm_and_ps(_mm_cmpeq_ps(data_143f3b4e0, arg10, 2), data_143f3b4d0 ^ zmm10_1)
                    ^ data_143f3b4d0
                float zmm1_1 = var_198[1]
                uint32_t zmm0_1[0x4] = var_198[2]
                zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                zmm1_1 = zmm1_1 * zmm4_1[0]
                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                var_198[0] = zmm2_1[0]
                float temp0_115[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                var_198[1] = zmm1_1
                zmm1_1 = var_188_1:4.d * temp0_115[0]
                var_198[2] = zmm0_1[0]
                zmm0_1 = var_188_1:8.d
                zmm0_1[0] = zmm0_1[0] f* temp0_115[0]
                float zmm3_1 = var_188_1.d * temp0_115[0]
                zmm2_1 = var_178_1.d
                float temp0_116[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                var_188_1:4.d = zmm1_1
                var_188_1:8.d = zmm0_1[0]
                zmm0_1 = var_178_1:8.d
                zmm1_1 = var_178_1:4.d * temp0_116[0]
                zmm0_1[0] = zmm0_1[0] f* temp0_116[0]
                zmm2_1[0] = zmm2_1[0] * temp0_116[0]
                var_178_1:4.d = zmm1_1
                var_178_1:8.d = zmm0_1[0]
                var_188_1.d = zmm3_1
                var_178_1.d = zmm2_1[0]
                arg2, zmm1 = sub_14077e4a0(&var_158, &var_198)
                float zmm5_2[0x4] = var_158.o
                arg5 = data_143f3b3d0
                zmm1.o = zmm5_2
                zmm11.o = arg8
                zmm9.o = arg7
                zmm8.o = var_58_1
                zmm1.o = _mm_mul_ps(zmm1.o, zmm5_2)
                zmm1.o = _mm_add_ps(zmm1.o, _mm_shuffle_ps(zmm1.o, zmm1.o, 0x4e))
                zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1.o, zmm1.o, 0x39), zmm1.o)
                zmm1.o = _mm_rsqrt_ps(zmm4)
                float temp0_123[0x4] = _mm_mul_ps(zmm4, arg5)
                float temp0_128[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(arg5, _mm_mul_ps(_mm_mul_ps(zmm1.o, zmm1.o), temp0_123)), 
                        zmm1.o), 
                    zmm1.o)
                zmm1.o = zx.o(0)
                float temp0_131[0x4] =
                    _mm_sub_ps(arg5, _mm_mul_ps(_mm_mul_ps(temp0_128, temp0_128), temp0_123))
                float temp0_133[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
                float temp0_135[0x4] = _mm_add_ps(_mm_mul_ps(temp0_131, temp0_128), temp0_128)
                float temp0_136[0x4] = _mm_unpacklo_ps(var_168_1:4.d, 0)
                arg5 = _mm_and_ps(_mm_mul_ps(temp0_135, zmm5_2) ^ data_143f3b3c0, temp0_133)
                    ^ data_143f3b3c0
                arg9 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_168_1.d, var_168_1:8.d[0].q), 
                    temp0_136[0].q)
    
    zmm1.o = *(arg1 + 0x1d0)
    zmm3 = data_143f3b3e0
    zmm1.o = _mm_sub_ps(zmm1.o, arg9)
    char r9_1 = arg12
    zmm1.o = _mm_and_ps(zmm1.o, zmm3)
    float temp0_179[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
    int32_t r8_2
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_179, zmm1.o, 1)) != 0)
    label_141f4daa5:
        *(arg1 + 0x1c0) = arg5
        r8_2 = arg4
        *(arg1 + 0x1d0) = arg9
        arg2.b = 1
        *(arg1 + 0x1e0) = arg10
    else
        zmm4 = *(arg1 + 0x1c0)
        zmm1.o = zmm4
        zmm1.o = _mm_sub_ps(zmm1.o, arg5)
        zmm1.o = _mm_and_ps(zmm1.o, zmm3)
        uint32_t temp0_185 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_179, zmm1.o, 1))
        uint32_t temp0_189
        
        if (temp0_185 != 0)
            zmm1.o = arg5
            zmm1.o = _mm_add_ps(zmm1.o, zmm4)
            zmm1.o = _mm_and_ps(zmm1.o, zmm3)
            temp0_189 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_179, zmm1.o, 1))
        
        if (temp0_185 != 0 && temp0_189 != 0)
            goto label_141f4daa5
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_179, 
                _mm_and_ps(_mm_sub_ps(*(arg1 + 0x1e0), arg10), zmm3), 1)) != 0 || r9_1 != 0)
            goto label_141f4daa5
        
        r9_1 = 0
        r8_2 = 0
        arg2 = nullptr
    
    int512_t zmm6
    int512_t zmm12
    int512_t zmm15
    result, zmm6, zmm12, zmm15 = sub_141f44ed0(arg1, arg2.b, r8_2, r9_1, zmm1)
    zmm6.o = var_38_1
    zmm15.o = var_c8_1
    zmm12.o = var_98_1
else
    result, arg2, zmm1, arg5, zmm7, arg6, arg7, zmm10, arg8, arg9, zmm13, zmm14, arg10 =
        sub_1405c6ac0(rsi, 0, 0)
    
    if ((*(arg1 + 0x14c) & 1) == 0)
        goto label_141f4d3d8
__security_check_cookie(rax_1 ^ &var_1d8)
return result
