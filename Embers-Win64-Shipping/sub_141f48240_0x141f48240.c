// 函数: sub_141f48240
// 地址: 0x141f48240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_38[0x4] = zmm6
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
uint8_t rax_2 = sub_141ee9350(arg1)
char rax_3

if (rax_2 == 0)
    rax_3 = sub_141eea9c0(arg1)

int32_t result
uint32_t var_118[0x4]
uint32_t zmm0[0x4]

if (rax_2 != 0 || rax_3 != 0)
    float rax_7 = (*arg2)[2]
    *(arg1 + 0x11c) = *arg2
    *(arg1 + 0x124) = rax_7
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(*(arg1 + 0x1a0), *arg3, 4)) != 0)
        zmm6 = *arg3
        float zmm5[0x4] = data_143f3b3d0
        float temp0_178[0x4] = _mm_mul_ps(zmm6, zmm6)
        float temp0_180[0x4] = _mm_add_ps(temp0_178, _mm_shuffle_ps(temp0_178, temp0_178, 0x4e))
        float temp0_182[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0x39), temp0_180)
        float temp0_183[0x4] = _mm_rsqrt_ps(temp0_182)
        float temp0_184[0x4] = _mm_mul_ps(temp0_182, zmm5)
        float temp0_189[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_183, temp0_183), temp0_184)), 
                temp0_183), 
            temp0_183)
        float temp0_192[0x4] =
            _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_189, temp0_189), temp0_184))
        zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_182, 2)
        *(arg1 + 0x1a0) = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_192, temp0_189), temp0_189), zmm6)
                ^ data_143f3b3c0, 
            zmm0) ^ data_143f3b3c0
        int32_t* rax_9 = sub_140adf5d0(&arg1[0x34], &var_118)
        arg1[0x36] = *rax_9
        arg1[0x37].d = rax_9[2]
    
    arg1[0x25] = arg1[0x36]
    result = arg1[0x37].d
    arg1[0x26].d = result
else
    float zmm12[0x4]
    float var_98_1[0x4] = zmm12
    float zmm13[0x4]
    float var_a8_1[0x4] = zmm13
    float zmm15[0x4]
    float var_c8_1[0x4] = zmm15
    float zmm11[0x4]
    float zmm14[0x4]
    
    if ((*(arg1 + 0x14c) & 1) == 0)
        arg5, arg6, arg7, arg8, zmm11, zmm14 = sub_1405c6ac0(arg1, 0, 0)
    
    zmm0 = (*arg2)[2]
    float zmm1[0x4] = zx.o(0)
    zmm12 = *arg2
    zmm15 = data_14399f668
    int64_t* rcx_2 = arg1[0x18]
    zmm13 = *arg3
    int64_t rax_4 = arg1[0x19]
    float temp0[0x4] = _mm_unpacklo_ps((*arg2)[1], zmm1[0].q)
    float temp0_1[0x4] = _mm_unpacklo_ps(zmm12, zmm0[0].q)
    zmm0 = data_14399f670
    zmm12 = _mm_unpacklo_ps(temp0_1, temp0[0].q)
    float temp0_3[0x4] = _mm_unpacklo_ps(data_14399f66c, zmm1[0].q)
    float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm15, zmm0[0].q), temp0_3[0].q)
    float var_148_1[0x4] = temp0_5
    float var_b8_1[0x4] = zmm14
    float var_168[0x4] = zmm13
    float var_158_1[0x4] = zmm12
    
    if (rcx_2 == 0)
        zmm6 = zmm13
    else
        float var_108[0x4]
        float (* rdx)[0x4] = &var_108
        
        if ((*(arg1 + 0x14c) & 0x1c) != 0)
            sub_141f355c0(arg1, rdx, &var_168, rcx_2, rax_4)
            float var_f8[0x4]
            zmm12 = var_f8
            zmm6 = var_108
        else
            int128_t* rax_5 = (*(*rcx_2 + 0x408))(rcx_2, rdx, rax_4, 0)
            zmm14 = rax_5[2]
            float zmm4_1[0x4] = *rax_5
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_5, zmm14), 
                    data_143f3b4e0, 1)) == 0)
                float temp0_138[0x4] = _mm_mul_ps(zmm14, zmm12)
                float temp0_141[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), 
                    _mm_shuffle_ps(zmm13, zmm13, 0x1b))
                float temp0_142[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                float temp0_143[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xd2)
                float temp0_144[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                float temp0_147[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_141, data_143f3b3b0), 
                    _mm_mul_ps(temp0_144, zmm13))
                float temp0_149[0x4] = _mm_mul_ps(temp0_142, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), 
                    _mm_shuffle_ps(zmm13, zmm13, 0xb1))
                float temp0_153[0x4] = __mulps_xmmps_memps(temp0_149, data_143f3b3a0)
                zmm0 = __mulps_xmmps_memps(zmm0, data_143f3b390)
                float temp0_155[0x4] = _mm_add_ps(temp0_147, temp0_153)
                float temp0_156[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                float temp0_157[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                float temp0_158[0x4] = _mm_mul_ps(temp0_143, temp0_157)
                zmm6 = _mm_add_ps(temp0_155, zmm0)
                float temp0_162[0x4] = _mm_sub_ps(temp0_158, 
                    _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xc9), temp0_156))
                float temp0_163[0x4] = _mm_add_ps(temp0_162, temp0_162)
                float temp0_164[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xd2)
                zmm0 = _mm_shuffle_ps(temp0_163, temp0_163, 0xc9)
                float temp0_166[0x4] = _mm_mul_ps(temp0_164, temp0_157)
                zmm0 = _mm_mul_ps(zmm0, temp0_156)
                float temp0_168[0x4] = _mm_mul_ps(temp0_163, temp0_144)
                zmm12 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_166, zmm0), _mm_add_ps(temp0_168, temp0_138)), 
                    rax_5[1])
            else
                float temp0_9[0x4] = _mm_add_ps(zmm4_1, zmm4_1)
                float var_58_1[0x4] = arg6
                arg6 = rax_5[1]
                zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 4)
                float temp0_11[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                float temp0_12[0x4] = _mm_mul_ps(zmm4_1, temp0_9)
                float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x29), zmm0)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0x1a), 
                    _mm_shuffle_ps(temp0_12, temp0_12, 1))
                float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x12), temp0_11)
                float temp0_20[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                float var_88_1[0x4] = zmm11
                zmm11 = data_143f3b4b0
                float temp0_21[0x4] = _mm_add_ps(temp0_19, temp0_14)
                float temp0_22[0x4] = _mm_sub_ps(temp0_14, temp0_19)
                float temp0_23[0x4] = _mm_add_ps(zmm13, zmm13)
                float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm14)
                float temp0_25[0x4] = _mm_mul_ps(temp0_20, temp0_22)
                float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm13)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, zmm0), zmm14), 
                    data_143f3b4c0)
                zmm0 = _mm_shuffle_ps(temp0_25, zmm1, 0x32)
                float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, zmm1, 0), zmm0, 0x82)
                zmm0 = _mm_shuffle_ps(temp0_24, zmm1, 0x31)
                float temp0_35[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, zmm1, 0x10), zmm0, 0x88)
                zmm0 = zmm11
                float temp0_37[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, temp0_25, 0x12), zmm1, 0xe8)
                float temp0_38[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x29)
                zmm0[0].q = arg6 u>> 0x40
                float temp0_39[0x4] = _mm_shuffle_ps(arg6, zmm0, 0xc4)
                float temp0_41[0x4] = _mm_mul_ps(temp0_38, _mm_shuffle_ps(zmm13, zmm13, 4))
                zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0x1a), 
                    _mm_shuffle_ps(temp0_26, temp0_26, 1))
                float temp0_45[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x12), temp0_45)
                float temp0_48[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
                float temp0_49[0x4] = _mm_add_ps(temp0_47, temp0_41)
                float temp0_50[0x4] = _mm_sub_ps(temp0_41, temp0_47)
                float temp0_51[0x4] = _mm_mul_ps(temp0_49, temp0_5)
                float temp0_52[0x4] = _mm_mul_ps(temp0_48, temp0_50)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, zmm0), temp0_5), 
                    data_143f3b4c0)
                float temp0_58[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, zmm1, 0), 
                    _mm_shuffle_ps(temp0_52, zmm1, 0x32), 0x82)
                float temp0_59[0x4] = _mm_shuffle_ps(temp0_52, zmm1, 0x10)
                zmm0 = _mm_shuffle_ps(temp0_51, zmm1, 0x31)
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
                float temp0_62[0x4] = _mm_shuffle_ps(temp0_59, zmm0, 0x88)
                zmm0 = zmm11
                float temp0_63[0x4] = _mm_mul_ps(temp0_61, temp0_35)
                zmm0[0].q = zmm12 u>> 0x40
                float temp0_64[0x4] = _mm_shuffle_ps(zmm12, zmm0, 0xc4)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_32)
                float temp0_68[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, temp0_52, 0x12), zmm1, 0xe8)
                float temp0_69[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)
                float temp0_70[0x4] = _mm_add_ps(temp0_63, zmm0)
                float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xff), temp0_39)
                float temp0_73[0x4] = _mm_mul_ps(temp0_69, temp0_37)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0), temp0_32)
                float temp0_76[0x4] = _mm_add_ps(temp0_70, temp0_73)
                float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_37)
                float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_72)
                float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x55), temp0_35)
                float temp0_82[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
                var_168 = temp0_79
                float temp0_83[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
                float temp0_84[0x4] = _mm_add_ps(temp0_81, zmm0)
                float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_35)
                float temp0_86[0x4] = _mm_mul_ps(temp0_82, temp0_39)
                zmm0 = _mm_shuffle_ps(temp0_68, temp0_68, 0)
                float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_78)
                zmm0 = _mm_mul_ps(zmm0, temp0_32)
                float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xaa), temp0_37)
                float temp0_92[0x4] = _mm_add_ps(temp0_88, temp0_86)
                float temp0_93[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xff)
                float temp0_94[0x4] = _mm_add_ps(temp0_85, zmm0)
                float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_39)
                zmm0 = _mm_shuffle_ps(temp0_64, temp0_64, 0)
                int96_t var_158_2 = temp0_92[0].12
                float temp0_97[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                float temp0_98[0x4] = _mm_add_ps(temp0_94, temp0_91)
                float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_35)
                float temp0_101[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_37)
                zmm0 = _mm_mul_ps(zmm0, temp0_32)
                float temp0_103[0x4] = _mm_add_ps(temp0_98, temp0_95)
                float temp0_105[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_39)
                float temp0_106[0x4] = _mm_add_ps(temp0_99, zmm0)
                int96_t var_148_2 = temp0_103[0].12
                int96_t var_138_1 = _mm_add_ps(_mm_add_ps(temp0_106, temp0_101), temp0_105)[0].12
                int512_t zmm7
                int512_t zmm8
                int512_t zmm9
                int512_t zmm10
                float zmm11_1[0x4]
                zmm7, zmm8, zmm9, zmm10, zmm11_1, zmm14, zmm15 = sub_1407740e0(&var_168, 0x322bcc77)
                float zmm2_1[0x4] = var_168[0]
                float zmm4_2[0x4] = _mm_and_ps(
                    _mm_cmpeq_ps(data_143f3b4e0, _mm_mul_ps(zmm14, zmm15), 2), 
                    data_143f3b4d0 ^ zmm11_1) ^ data_143f3b4d0
                zmm2_1[0] = zmm2_1[0] * zmm4_2[0]
                uint32_t zmm0_1[0x4] = var_168[2]
                float zmm1_1 = var_168[1] * zmm4_2[0]
                zmm0_1[0] = zmm0_1[0] f* zmm4_2[0]
                var_168[0] = zmm2_1[0]
                float temp0_112[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                var_168[1] = zmm1_1
                zmm1_1 = var_158_2:4.d * temp0_112[0]
                var_168[2] = zmm0_1[0]
                zmm0_1 = var_158_2:8.d
                zmm0_1[0] = zmm0_1[0] f* temp0_112[0]
                float zmm3_1 = var_158_2.d * temp0_112[0]
                zmm2_1 = var_148_2.d
                float temp0_113[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                var_158_2:4.d = zmm1_1
                var_158_2:8.d = zmm0_1[0]
                zmm0_1 = var_148_2:8.d
                zmm1_1 = var_148_2:4.d * temp0_113[0]
                zmm0_1[0] = zmm0_1[0] f* temp0_113[0]
                zmm2_1[0] = zmm2_1[0] * temp0_113[0]
                var_148_2:4.d = zmm1_1
                var_148_2:8.d = zmm0_1[0]
                var_158_2.d = zmm3_1
                var_148_2.d = zmm2_1[0]
                sub_14077e4a0(&var_118, &var_168)
                uint32_t zmm5_2[0x4] = var_118
                zmm6 = data_143f3b3d0
                zmm10.o = arg8
                zmm9.o = arg7
                zmm8.o = var_58_1
                zmm7.o = arg5
                float temp0_114[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                float temp0_116[0x4] =
                    _mm_add_ps(temp0_114, _mm_shuffle_ps(temp0_114, temp0_114, 0x4e))
                float temp0_118[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0x39), temp0_116)
                float temp0_119[0x4] = _mm_rsqrt_ps(temp0_118)
                float temp0_120[0x4] = _mm_mul_ps(temp0_118, zmm6)
                float temp0_125[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_120)), 
                        temp0_119), 
                    temp0_119)
                float temp0_128[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_125, temp0_125), temp0_120))
                zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_118, 2)
                float temp0_132[0x4] = _mm_add_ps(_mm_mul_ps(temp0_128, temp0_125), temp0_125)
                float temp0_133[0x4] = _mm_unpacklo_ps(var_138_1:4.d, 0)
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_132, zmm5_2) ^ data_143f3b3c0, zmm0)
                    ^ data_143f3b3c0
                zmm12 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_138_1.d, var_138_1:8.d[0].q), 
                    temp0_133[0].q)
    
    float temp0_173[0x4] = __subps_xmmps_memps(zmm12, *(arg1 + 0x1d0))
    int64_t r10_2 = *arg1
    int32_t var_190_1 = 0
    float var_128 = temp0_173[0]
    zmm0 = _mm_shuffle_ps(temp0_173, temp0_173, 0x55)
    float var_120_1 = _mm_shuffle_ps(temp0_173, temp0_173, 0xaa)[0]
    uint32_t var_124_1 = zmm0[0]
    var_118 = zmm6
    result = (*(r10_2 + 0x470))(arg1, &var_128, &var_118, zx.q(arg4), arg9, var_190_1, arg10)
__security_check_cookie(rax_1 ^ &var_1b8)
return result
