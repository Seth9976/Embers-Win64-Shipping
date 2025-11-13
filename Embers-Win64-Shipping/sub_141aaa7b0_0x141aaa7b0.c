// 函数: sub_141aaa7b0
// 地址: 0x141aaa7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((*(arg1 + 0x124) & 0xe) != 0)
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    float zmm12[0x4]
    float var_98_1[0x4] = zmm12
    int128_t zmm13
    int128_t var_a8_1 = zmm13
    int128_t zmm14
    int128_t var_b8_1 = zmm14
    float zmm15[0x4]
    float var_c8_1[0x4] = zmm15
    int32_t rax = *(arg1 + 0xd0)
    int32_t arg_8
    int32_t rdx_2
    
    if (rax s>= 0)
        rdx_2 = *(arg1 + 0xd4)
        arg_8 = rdx_2
    else
        int32_t rcx = rax * 2
        
        if ((rcx & 0xfffffffe) == 0xfffffffe)
            arg_8 = 0xffffffff
            rdx_2 = -1
        else
            rdx_2 = *(*(arg2[3] + 0x80) + (sx.q(rcx) s>> 1 << 2))
            arg_8 = rdx_2
    
    int64_t rdi_1 = sx.q(rdx_2)
    float zmm8[0x4]
    
    if (*(rdi_1 + arg2[4]) == 0)
        zmm8 = sub_141a98300(&arg2[1], rdx_2)
    
    int128_t* rcx_4 = *arg2 + 0x10
    zmm14 = 0x322bcc77
    zmm13 = zx.o(0)
    int128_t* rdi_4 = rdi_1 * 0x30 + arg2[1]
    float zmm5[0x4] = *rcx_4
    zmm12 = rcx_4[2]
    float var_58_1[0x4] = zmm8
    uint32_t var_148[0x4]
    float var_138[0x4]
    float arg_20
    float zmm0[0x4]
    float zmm1[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(rdi_4[2], zmm12), data_143f2b8d0, 1)) == 0)
        float temp0_133[0x4] = _mm_mul_ps(rdi_4[1], zmm12)
        float temp0_134[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        float temp0_135[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        float temp0_136[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_138[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_133, temp0_133, 0xc9), temp0_134)
        float temp0_141[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_133, temp0_133, 0xd2), temp0_135), temp0_138)
        float temp0_142[0x4] = _mm_add_ps(temp0_141, temp0_141)
        float temp0_143[0x4] = _mm_mul_ps(temp0_136, temp0_142)
        float temp0_145[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_142, temp0_142, 0xd2), temp0_135)
        float temp0_146[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xc9)
        float temp0_147[0x4] = _mm_add_ps(temp0_143, temp0_133)
        zmm9 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_145, _mm_mul_ps(temp0_146, temp0_134)), temp0_147), 
            rcx_4[1])
    else
        zmm10 = data_143f2b810
        float temp0_4[0x4] = _mm_add_ps(zmm5, zmm5)
        zmm8 = rcx_4[1]
        float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_8[0x4] = _mm_mul_ps(zmm5, temp0_4)
        float temp0_10[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
        float temp0_13[0x4] = _mm_mul_ps(temp0_7, temp0_11)
        float temp0_15[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
        float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_10)
        float temp0_17[0x4] = _mm_sub_ps(temp0_10, temp0_13)
        float temp0_18[0x4] = _mm_sub_ps(zmm10, temp0_15)
        float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm12)
        float temp0_20[0x4] = _mm_mul_ps(temp0_6, temp0_17)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_18, zmm12), data_143f2b820)
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x32)
        float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm1, 0), temp0_23, 0x82)
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_19, zmm1, 0x31)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_19, temp0_20, 0x12)
        float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0x10), temp0_26, 0x88)
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_27, zmm1, 0xe8)
        zmm1 = *rdi_4
        zmm10[0].q = zmm8 u>> 0x40
        float temp0_31[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_32[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
        float temp0_33[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_34[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_35[0x4] = _mm_mul_ps(zmm1, temp0_31)
        float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x29), temp0_33)
        zmm0 = rdi_4[2]
        float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x12), temp0_34)
        float temp0_40[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
        float temp0_41[0x4] = _mm_add_ps(temp0_39, temp0_37)
        float temp0_42[0x4] = _mm_sub_ps(temp0_37, temp0_39)
        float temp0_43[0x4] = _mm_mul_ps(temp0_41, zmm0)
        float temp0_46[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x1a), 
            _mm_shuffle_ps(temp0_35, temp0_35, 1))
        float temp0_47[0x4] = _mm_mul_ps(temp0_40, temp0_42)
        zmm1 = __andps_xmmxud_memxud(__mulps_xmmps_memps(_mm_sub_ps(zmm10, temp0_46), rdi_4[2]), 
            data_143f2b820)
        float temp0_51[0x4] = _mm_shuffle_ps(temp0_47, zmm1, 0x32)
        float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_43, zmm1, 0), temp0_51, 0x82)
        float temp0_54[0x4] = _mm_shuffle_ps(temp0_43, zmm1, 0x31)
        float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0x10), temp0_54, 0x88)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_43, temp0_47, 0x12)
        zmm5 = rdi_4[1]
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, zmm1, 0xe8)
        float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), temp0_30)
        float temp0_62[0x4] = _mm_mul_ps(temp0_58, temp0_29)
        zmm10[0].q = zmm5 u>> 0x40
        float temp0_63[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
        float temp0_64[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0)
        float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xff), temp0_32)
        float temp0_68[0x4] = _mm_add_ps(temp0_62, _mm_mul_ps(temp0_64, temp0_25))
        float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0), temp0_25)
        float temp0_71[0x4] = _mm_add_ps(temp0_68, temp0_61)
        float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_30)
        float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_66)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0x55), temp0_29)
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xff)
        var_138 = temp0_74
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
        float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_70)
        float temp0_80[0x4] = _mm_mul_ps(temp0_78, temp0_29)
        float temp0_81[0x4] = _mm_mul_ps(temp0_77, temp0_32)
        float temp0_82[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0)
        float temp0_83[0x4] = _mm_add_ps(temp0_79, temp0_73)
        float temp0_84[0x4] = _mm_mul_ps(temp0_82, temp0_25)
        float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_30)
        float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_81)
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
        float temp0_89[0x4] = _mm_add_ps(temp0_80, temp0_84)
        float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_32)
        float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
        int96_t var_128_1 = temp0_87[0].12
        float temp0_92[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
        float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_86)
        float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_29)
        float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_30)
        float temp0_97[0x4] = _mm_mul_ps(temp0_91, temp0_25)
        float temp0_98[0x4] = _mm_add_ps(temp0_93, temp0_90)
        float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xff), temp0_32)
        float temp0_101[0x4] = _mm_add_ps(temp0_94, temp0_97)
        int96_t var_118_1 = temp0_98[0].12
        int96_t var_108_1 = _mm_add_ps(_mm_add_ps(temp0_101, temp0_96), temp0_100)[0].12
        zmm10, zmm12, zmm13, zmm14, zmm15 = sub_1407740e0(&var_138, 0x322bcc77)
        float zmm2_1[0x4] = var_138[0]
        float zmm1_1 = var_138[1]
        zmm15 =
            _mm_and_ps(_mm_cmpeq_ps(zmm15, _mm_mul_ps(rdi_4[2], zmm12), 2), data_143f2b8c0 ^ zmm10)
        float zmm0_1[0x4] = var_138[2]
        zmm15 ^= data_143f2b8c0
        zmm2_1[0] = zmm2_1[0] * zmm15[0]
        zmm1_1 = zmm1_1 * zmm15[0]
        zmm0_1[0] = zmm0_1[0] * zmm15[0]
        var_138[0] = zmm2_1[0]
        float temp0_107[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        var_138[2] = zmm0_1[0]
        zmm0_1 = var_128_1:8.d
        zmm0_1[0] = zmm0_1[0] * temp0_107[0]
        var_138[1] = zmm1_1
        zmm1_1 = var_128_1:4.d * temp0_107[0]
        float zmm3_1 = var_128_1.d * temp0_107[0]
        zmm2_1 = var_118_1.d
        var_128_1:8.d = zmm0_1[0]
        zmm0_1 = var_118_1:8.d
        var_128_1:4.d = zmm1_1
        float temp0_108[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        zmm0_1[0] = zmm0_1[0] * temp0_108[0]
        zmm2_1[0] = zmm2_1[0] * temp0_108[0]
        zmm1_1 = var_118_1:4.d * temp0_108[0]
        var_118_1:8.d = zmm0_1[0]
        var_128_1.d = zmm3_1
        var_118_1.d = zmm2_1[0]
        var_118_1:4.d = zmm1_1
        sub_14077e4a0(&var_148, &var_138)
        zmm6 = var_148
        zmm5 = data_143f2b8b0
        float temp0_109[0x4] = _mm_mul_ps(zmm6, zmm6)
        arg_20 = 9.99999994e-09f
        float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
        float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
        float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
        float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm5)
        float temp0_120[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                temp0_114), 
            temp0_114)
        float temp0_123[0x4] =
            _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
        zmm0 = arg_20
        float temp0_125[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_113, 2)
        float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
        float temp0_128[0x4] = _mm_unpacklo_ps(var_108_1:4.d, 0)
        zmm5 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm6) ^ data_143f2b8a0, temp0_125) ^ data_143f2b8a0
        zmm9 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_108_1.d, var_108_1:8.d[0].q), temp0_128[0].q)
        var_148 = zmm5
    
    int64_t var_168
    zmm1 = zx.o(var_168)
    float zmm2[0x4] = *(arg1 + 0x118)
    zmm1[0] = zmm9[0]
    bool cond:2_1 = zmm2[0] f!= zmm13.d
    float temp0_152[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    float temp0_153[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
    temp0_152[0] = temp0_153[0]
    float temp0_154[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
    float temp0_155[0x4] = _mm_shuffle_ps(temp0_152, temp0_152, 0xe1)
    float var_160_1 = temp0_154[0]
    zmm7 = temp0_155
    var_168 = temp0_155.q
    float var_f8[0x4]
    var_f8[0].q = temp0_155.q
    
    if (not(cond:2_1))
        *(arg1 + 0xe8) = temp0_155.q
        *(arg1 + 0xf0) = var_160_1
        *(arg1 + 0xf4) = data_143dbb1f8.q
        *(arg1 + 0xfc) = data_143dbb200
    
    float zmm4[0x4] = *(arg1 + 0x11c)
    
    if (__andps_xmmxud_memxud(zmm4, data_142d3f770)[0] <= 9.99999975e-05f)
        void* rax_14 = *arg2
        zmm2 = *(arg1 + 0x110)
        zmm5 = *(rax_14 + 0x10)
        float temp0_200[0x4] = _mm_unpacklo_ps(*(arg1 + 0x10c), (*(arg1 + 0x114))[0].q)
        float temp0_201[0x4] = _mm_unpacklo_ps(zmm2, 0)
        float temp0_202[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        float temp0_204[0x4] =
            __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_200, temp0_201[0].q), *(rax_14 + 0x30))
        float temp0_205[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        float temp0_206[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_208[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0xc9), temp0_205)
        float temp0_211[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0xd2), temp0_202), temp0_208)
        float temp0_212[0x4] = _mm_add_ps(temp0_211, temp0_211)
        float temp0_213[0x4] = _mm_mul_ps(temp0_206, temp0_212)
        float temp0_214[0x4] = _mm_shuffle_ps(temp0_212, temp0_212, 0xd2)
        float temp0_215[0x4] = _mm_shuffle_ps(temp0_212, temp0_212, 0xc9)
        float temp0_216[0x4] = _mm_mul_ps(temp0_214, temp0_202)
        float temp0_217[0x4] = _mm_mul_ps(temp0_215, temp0_205)
        float temp0_218[0x4] = _mm_add_ps(temp0_213, temp0_204)
        float temp0_221[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_216, temp0_217), temp0_218), *(rax_14 + 0x20))
        var_148[2] = _mm_shuffle_ps(temp0_221, temp0_221, 0xaa)[0]
        uint32_t rax_15 = var_148[2]
        *(arg1 + 0xe8) =
            (_mm_unpacklo_ps(temp0_221, _mm_shuffle_ps(temp0_221, temp0_221, 0x55)[0].q)).q
        *(arg1 + 0xf0) = rax_15
    else
        if (not(zmm2[0] <= zmm4[0]))
            bool cond:5_1
            
            do
                zmm5 = *(arg1 + 0x104)
                zmm4[0] = zmm4[0] f* *(arg1 + 0x100)
                zmm6 = *(arg1 + 0x108)
                zmm5[0] = zmm5[0] * zmm4[0]
                zmm4[0] = zmm4[0] f+ *(arg1 + 0xe8)
                zmm6[0] = zmm6[0] * zmm4[0]
                zmm5[0] = zmm5[0] f+ *(arg1 + 0xec)
                zmm6[0] = zmm6[0] f+ *(arg1 + 0xf0)
                zmm9[0] = zmm9[0] - zmm4[0]
                *(arg1 + 0xe8) = zmm4[0]
                temp0_153[0] = temp0_153[0] - zmm5[0]
                *(arg1 + 0xec) = zmm5[0]
                temp0_154[0] = temp0_154[0] - zmm6[0]
                *(arg1 + 0xf0) = zmm6[0]
                zmm1 = *(arg1 + 0xe4)
                zmm9[0] = zmm9[0] * zmm9[0]
                temp0_153[0] = temp0_153[0] * temp0_153[0]
                temp0_154[0] = temp0_154[0] * temp0_154[0]
                temp0_153[0] = temp0_153[0] + zmm9[0]
                zmm1[0] = zmm1[0] * zmm1[0]
                temp0_153[0] = temp0_153[0] + temp0_154[0]
                
                if (not(temp0_153[0] <= zmm1[0]))
                    *(arg1 + 0xe8) = zmm7.q
                    *(arg1 + 0xf0) = var_160_1
                    *(arg1 + 0xf4) = data_143dbb1f8.q
                    *(arg1 + 0xfc) = data_143dbb200
                    zmm5 = *(arg1 + 0xec)
                    zmm6 = *(arg1 + 0xf0)
                
                zmm7 = *(arg1 + 0xe0)
                zmm1 = *(arg1 + 0xdc)
                temp0_153[0] = temp0_153[0] - zmm5[0]
                zmm2 = *(arg1 + 0x11c)
                zmm7[0] = zmm7[0] f* *(arg1 + 0xf8)
                zmm8 = *(arg1 + 0xf4)
                temp0_154[0] = temp0_154[0] - zmm6[0]
                zmm6 = 0x3f800000
                temp0_153[0] = temp0_153[0] * zmm1[0]
                zmm6[0] = 1f / zmm2[0]
                temp0_153[0] = temp0_153[0] - zmm7[0]
                temp0_154[0] = temp0_154[0] * zmm1[0]
                bool cond:4_1 = zmm7[0] <= zmm6[0]
                zmm7[0] = zmm7[0] f* *(arg1 + 0xfc)
                zmm9[0] = zmm9[0] f- *(arg1 + 0xe8)
                temp0_154[0] = temp0_154[0] - zmm7[0]
                zmm7[0] = zmm7[0] * zmm8[0]
                zmm9[0] = zmm9[0] * zmm1[0]
                zmm9[0] = zmm9[0] - zmm7[0]
                zmm9[0] = zmm9[0] * zmm2[0]
                float zmm3[0x4]
                
                if (cond:4_1)
                    zmm0 = zmm2
                    zmm9[0] = zmm9[0] + zmm8[0]
                    temp0_153[0] = temp0_153[0] * zmm0[0]
                    zmm2 = temp0_154
                    zmm2[0] = zmm2[0] * zmm0[0]
                    temp0_153[0] = temp0_153[0] f+ *(arg1 + 0xf8)
                    *(arg1 + 0xf4) = zmm9[0]
                    *(arg1 + 0xf8) = temp0_153[0]
                    zmm3 = temp0_153
                else
                    zmm6[0] = zmm6[0] / zmm7[0]
                    zmm9[0] = zmm9[0] * zmm6[0]
                    zmm9[0] = zmm9[0] + zmm8[0]
                    *(arg1 + 0xf4) = zmm9[0]
                    zmm3 = zmm2
                    zmm3[0] = zmm3[0] * temp0_153[0]
                    zmm2[0] = zmm2[0] * temp0_154[0]
                    zmm3[0] = zmm3[0] * zmm6[0]
                    zmm2[0] = zmm2[0] * zmm6[0]
                    zmm3[0] = zmm3[0] f+ *(arg1 + 0xf8)
                    *(arg1 + 0xf8) = zmm3[0]
                
                zmm2[0] = zmm2[0] f+ *(arg1 + 0xfc)
                zmm3[0] = zmm3[0] * zmm3[0]
                *(arg1 + 0xfc) = zmm2[0]
                zmm6 = *(arg1 + 0xf4)
                zmm5 = *(arg1 + 0x11c)
                zmm4 = *(arg1 + 0xf8)
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm2[0] = zmm2[0] * zmm2[0]
                zmm3[0] = zmm3[0] + zmm6[0]
                zmm3[0] = zmm3[0] + zmm2[0]
                zmm1 = *(arg1 + 0xe4)
                float temp0_157[0x4] = _mm_sqrt_ss(0, zmm3[0])
                temp0_157[0] = temp0_157[0] * zmm5[0]
                
                if (temp0_157[0] <= zmm1[0])
                    zmm1 = zmm2
                    zmm2 = zmm6
                else
                    zmm1[0] = zmm1[0] / temp0_157[0]
                    zmm2 = zmm1
                    zmm4 = zmm1
                    zmm4[0] = zmm4[0] f* *(arg1 + 0xf8)
                    zmm1[0] = zmm1[0] f* *(arg1 + 0xfc)
                    zmm2[0] = zmm2[0] * zmm6[0]
                    *(arg1 + 0xf8) = zmm4[0]
                    *(arg1 + 0xfc) = zmm1[0]
                    *(arg1 + 0xf4) = zmm2[0]
                    zmm5 = *(arg1 + 0x11c)
                
                int32_t rax_8 = *(arg1 + 0xf0)
                zmm0 = zx.o(*(arg1 + 0xe8))
                zmm2[0] = zmm2[0] * zmm5[0]
                zmm4[0] = zmm4[0] * zmm5[0]
                zmm2[0] = zmm2[0] f+ *(arg1 + 0xe8)
                zmm5[0] = zmm5[0] * zmm1[0]
                zmm4[0] = zmm4[0] f+ *(arg1 + 0xec)
                var_168 = zmm0.q
                zmm5[0] = zmm5[0] f+ *(arg1 + 0xf0)
                *(arg1 + 0xe8) = zmm2[0]
                *(arg1 + 0xec) = zmm4[0]
                *(arg1 + 0xf0) = zmm5[0]
                uint8_t rax_9 = *(arg1 + 0x124)
                
                if ((not.b(rax_9 u>> 1) & 1) != 0)
                    *(arg1 + 0xe8) = zmm9[0]
                
                if ((not.b(rax_9 u>> 2) & 1) != 0)
                    *(arg1 + 0xec) = temp0_153[0]
                
                if ((not.b(rax_9 u>> 3) & 1) != 0)
                    *(arg1 + 0xf0) = temp0_154[0]
                
                if ((*(arg1 + 0x124) & 1) != 0)
                    zmm7 = *(arg1 + 0xe8)
                    zmm8 = *(arg1 + 0xec)
                    zmm7[0] = zmm7[0] - zmm9[0]
                    zmm6 = *(arg1 + 0xf0)
                    zmm8[0] = zmm8[0] - temp0_153[0]
                    zmm12 = *(arg1 + 0xd8)
                    zmm6[0] = zmm6[0] - temp0_154[0]
                    zmm7[0] = zmm7[0] * zmm7[0]
                    zmm8[0] = zmm8[0] * zmm8[0]
                    zmm6[0] = zmm6[0] * zmm6[0]
                    zmm8[0] = zmm8[0] + zmm7[0]
                    zmm12[0] = zmm12[0] * zmm12[0]
                    zmm8[0] = zmm8[0] + zmm6[0]
                    
                    if (not(zmm8[0] <= zmm12[0]))
                        if (not(zmm8[0] == 1f))
                            if (zmm8[0] f>= zmm14.d)
                                zmm4 = zx.o(0)
                                zmm4[0] = 0x3f000000
                                float temp0_158[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
                                zmm8[0] = zmm8[0] * 0.5f
                                temp0_158[0] = temp0_158[0] * temp0_158[0]
                                zmm8[0] = zmm8[0] * temp0_158[0]
                                zmm4[0] = zmm4[0] - zmm8[0]
                                temp0_158[0] = temp0_158[0] * zmm4[0]
                                temp0_158[0] = temp0_158[0] + temp0_158[0]
                                temp0_158[0] = temp0_158[0] * temp0_158[0]
                                zmm8[0] = zmm8[0] * temp0_158[0]
                                zmm4[0] = 0.5f - zmm8[0]
                                temp0_158[0] = temp0_158[0] * zmm4[0]
                                temp0_158[0] = temp0_158[0] + temp0_158[0]
                                arg_20 = temp0_158[0]
                                zmm7[0] = zmm7[0] * temp0_158[0]
                                zmm8[0] = zmm8[0] * temp0_158[0]
                                zmm6[0] = zmm6[0] * temp0_158[0]
                            else
                                zmm7 = data_143dbb1f8
                                zmm8 = data_143dbb1fc
                                zmm6 = data_143dbb200
                        
                        zmm7[0] = zmm7[0] * zmm12[0]
                        zmm8[0] = zmm8[0] * zmm12[0]
                        zmm6[0] = zmm6[0] * zmm12[0]
                        zmm7[0] = zmm7[0] + zmm9[0]
                        zmm8[0] = zmm8[0] + temp0_153[0]
                        zmm6[0] = zmm6[0] + temp0_154[0]
                        *(arg1 + 0xe8) = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
                        var_148[2] = zmm6[0]
                        *(arg1 + 0xf0) = var_148[2]
                
                zmm0 = *(arg1 + 0xf0)
                zmm2 = 0x3f800000
                zmm3 = *(arg1 + 0xe8)
                zmm0[0] = zmm0[0] f- rax_8
                zmm4 = *(arg1 + 0x11c)
                zmm1 = *(arg1 + 0xec)
                zmm3[0] = zmm3[0] f- var_168.d
                zmm1[0] = zmm1[0] f- var_168:4.d
                zmm7 = zx.o(var_f8[0].q)
                zmm2[0] = 1f / zmm4[0]
                zmm0[0] = zmm0[0] * zmm2[0]
                zmm3[0] = zmm3[0] * zmm2[0]
                float var_150_1 = zmm0[0]
                zmm1[0] = zmm1[0] * zmm2[0]
                *(arg1 + 0xf4) = (_mm_unpacklo_ps(zmm3, zmm1[0].q)).q
                zmm0 = *(arg1 + 0x118)
                zmm0[0] = zmm0[0] - zmm4[0]
                *(arg1 + 0xfc) = var_150_1
                cond:5_1 = zmm0[0] > zmm4[0]
                *(arg1 + 0x118) = zmm0[0]
            while (cond:5_1)
        
        void* rax_12 = *arg2
        zmm0 = *(arg1 + 0xf0)
        zmm2 = *(arg1 + 0xec)
        zmm8 = *(arg1 + 0xe8)
        zmm6 = *(rax_12 + 0x30)
        float temp0_161[0x4] = __mulps_xmmps_memps(*(rax_12 + 0x10), data_143f2b8e0)
        float temp0_165[0x4] = __subps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q), 
            *(rax_12 + 0x20))
        float temp0_166[0x4] = _mm_rcp_ps(zmm6)
        zmm8 = __andps_xmmxud_memxud(temp0_165, data_143f2b820)
        float temp0_168[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
        float temp0_169[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
        float temp0_171[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_169)
        float temp0_173[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_168)
        float temp0_174[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xff)
        float temp0_175[0x4] = _mm_sub_ps(temp0_173, temp0_171)
        float temp0_176[0x4] = _mm_mul_ps(temp0_166, temp0_166)
        float temp0_177[0x4] = _mm_add_ps(temp0_166, temp0_166)
        float temp0_178[0x4] = _mm_add_ps(temp0_175, temp0_175)
        float temp0_179[0x4] = _mm_mul_ps(temp0_176, zmm6)
        float temp0_180[0x4] = _mm_mul_ps(temp0_174, temp0_178)
        float temp0_181[0x4] = _mm_sub_ps(temp0_177, temp0_179)
        float temp0_183[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0xd2), temp0_168)
        float temp0_184[0x4] = _mm_add_ps(temp0_180, zmm8)
        float temp0_185[0x4] = _mm_mul_ps(temp0_181, temp0_181)
        float temp0_186[0x4] = _mm_add_ps(temp0_181, temp0_181)
        float temp0_187[0x4] = _mm_mul_ps(temp0_185, zmm6)
        float temp0_189[0x4] =
            __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f2b9a0), data_143f2b990, 2)
        float temp0_190[0x4] = _mm_sub_ps(temp0_186, temp0_187)
        float temp0_193[0x4] =
            _mm_sub_ps(temp0_183, _mm_mul_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0xc9), temp0_169))
        zmm6 = _mm_and_ps(temp0_189, temp0_190 ^ zx.o(0)) ^ temp0_190
        float temp0_196[0x4] = _mm_mul_ps(_mm_add_ps(temp0_193, temp0_184), zmm6)
        var_148[2] = _mm_shuffle_ps(temp0_196, temp0_196, 0xaa)[0]
        uint32_t rax_13 = var_148[2]
        *(arg1 + 0x10c) =
            (_mm_unpacklo_ps(temp0_196, _mm_shuffle_ps(temp0_196, temp0_196, 0x55)[0].q)).q
        *(arg1 + 0x114) = rax_13
    
    bool cond:3_1 = (*(arg1 + 0x124) & 0x70) == 0
    zmm6 = rdi_4[2]
    zmm7 = *rdi_4
    zmm12 = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x10c), (*(arg1 + 0x114))[0].q), 
        _mm_unpacklo_ps(*(arg1 + 0x110), zx.o(0)[0].q)[0].q)
    float var_d8_1[0x4] = zmm6
    
    if (not(cond:3_1))
        sub_141ea4020(arg2[3], &arg_20, &arg_8)
        void* rax_16
        float zmm9_1[0x4]
        rax_16, zmm9_1, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_141ab9f30(&arg2[1], arg_20)
        float zmm1_2[0x4] = *(rax_16 + 0x10)
        zmm9_1[0] = zmm9_1[0] - zmm1_2[0]
        float temp0_228[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
        zmm11[0] = zmm11[0] - temp0_228[0]
        float temp0_229[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
        zmm10[0] = zmm10[0] - temp0_229[0]
        zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
        zmm11[0] = zmm11[0] * zmm11[0]
        zmm10[0] = zmm10[0] * zmm10[0]
        zmm11[0] = zmm11[0] + zmm9_1[0]
        zmm11[0] = zmm11[0] + zmm10[0]
        
        if (zmm11[0] f== zmm13.d)
            goto label_141aab559
        
        float zmm3_2[0x4]
        float zmm4_1[0x4]
        float zmm5_1[0x4]
        
        if (zmm11[0] f>= zmm14.d)
            zmm3_2 = zx.o(0)
            zmm4_1 = zx.o(0)
            zmm4_1[0] = zmm15[0]
            zmm3_2[0] = zmm11[0]
            float temp0_230[0x4] = _mm_rsqrt_ss(zmm3_2[0], zmm3_2[0])
            zmm3_2[0] = zmm3_2[0] * zmm4_1[0]
            temp0_230[0] = temp0_230[0] * temp0_230[0]
            zmm3_2[0] = zmm3_2[0] * temp0_230[0]
            zmm4_1[0] = zmm4_1[0] - zmm3_2[0]
            temp0_230[0] = temp0_230[0] * zmm4_1[0]
            temp0_230[0] = temp0_230[0] + temp0_230[0]
            temp0_230[0] = temp0_230[0] * temp0_230[0]
            zmm3_2[0] = zmm3_2[0] * temp0_230[0]
            zmm4_1[0] = zmm4_1[0] - zmm3_2[0]
            temp0_230[0] = temp0_230[0] * zmm4_1[0]
            temp0_230[0] = temp0_230[0] + temp0_230[0]
            var_f8[0] = temp0_230[0]
            zmm9_1[0] = zmm9_1[0] * temp0_230[0]
            zmm11[0] = zmm11[0] * temp0_230[0]
            zmm10[0] = zmm10[0] * temp0_230[0]
        label_141aab559:
            zmm5_1 = data_143dbb1f8
            zmm4_1 = data_143dbb1fc
            zmm3_2 = data_143dbb200
            float var_160_4 = zmm10[0]
            var_168:4.d = zmm11[0]
            var_168.d = zmm9_1[0]
        else
            zmm5_1 = data_143dbb1f8
            zmm4_1 = data_143dbb1fc
            zmm3_2 = data_143dbb200
            var_168.d = zmm5_1[0]
            var_168:4.d = zmm4_1[0]
            float var_160_3 = zmm3_2[0]
        
        zmm1_2 = *(rax_16 + 0x10)
        float zmm6_1[0x4] = *(arg1 + 0xe8)
        float zmm8_1[0x4] = *(arg1 + 0xec)
        zmm6_1[0] = zmm6_1[0] - zmm1_2[0]
        zmm9_1 = *(arg1 + 0xf0)
        float temp0_231[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
        zmm8_1[0] = zmm8_1[0] - temp0_231[0]
        float temp0_232[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
        zmm9_1[0] = zmm9_1[0] - temp0_232[0]
        zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
        zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
        zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
        zmm8_1[0] = zmm8_1[0] + zmm6_1[0]
        zmm8_1[0] = zmm8_1[0] + zmm9_1[0]
        
        if (zmm8_1[0] f== zmm13.d)
            goto label_141aab661
        
        float var_158
        
        if (zmm8_1[0] f>= zmm14.d)
            zmm4_1 = zx.o(0)
            zmm4_1[0] = zmm15[0]
            float temp0_233[0x4] = _mm_rsqrt_ss(zmm8_1[0], zmm8_1[0])
            zmm8_1[0] = zmm8_1[0] * zmm4_1[0]
            temp0_233[0] = temp0_233[0] * temp0_233[0]
            zmm8_1[0] = zmm8_1[0] * temp0_233[0]
            zmm4_1[0] = zmm4_1[0] - zmm8_1[0]
            temp0_233[0] = temp0_233[0] * zmm4_1[0]
            temp0_233[0] = temp0_233[0] + temp0_233[0]
            temp0_233[0] = temp0_233[0] * temp0_233[0]
            zmm8_1[0] = zmm8_1[0] * temp0_233[0]
            zmm4_1[0] = zmm4_1[0] - zmm8_1[0]
            temp0_233[0] = temp0_233[0] * zmm4_1[0]
            temp0_233[0] = temp0_233[0] + temp0_233[0]
            var_f8[0] = temp0_233[0]
            zmm6_1[0] = zmm6_1[0] * temp0_233[0]
            zmm8_1[0] = zmm8_1[0] * temp0_233[0]
            zmm9_1[0] = zmm9_1[0] * temp0_233[0]
        label_141aab661:
            float var_150_3 = zmm9_1[0]
            float var_154_2 = zmm8_1[0]
            var_158 = zmm6_1[0]
        else
            var_158 = zmm5_1[0]
            float var_154_1 = zmm4_1[0]
            float var_150_2 = zmm3_2[0]
        
        void var_e8
        sub_140ad6660(&var_e8, &var_168, &var_158)
        int512_t zmm6_2
        int128_t zmm7_1
        zmm6_2, zmm7_1 = sub_140ad3d90(&var_e8, &var_148)
        uint8_t rax_17 = *(arg1 + 0x124)
        
        if ((not.b(rax_17 u>> 4) & 1) != 0)
            var_148[0] = data_143dbb1f8
        
        if ((not.b(rax_17 u>> 5) & 1) != 0)
            var_148[1] = data_143dbb1fc
        
        if ((not.b(rax_17 u>> 6) & 1) != 0)
            var_148[2] = data_143dbb200
        
        zmm6_2.o = zmm7_1
        float (* rax_18)[0x4]
        rax_18, zmm6, zmm7 = sub_140ada080(&var_f8, &var_148)
        float temp0_234[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x1b)
        float temp0_235[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
        float zmm2_3[0x4] = *rax_18
        float temp0_237[0x4] = _mm_mul_ps(temp0_234, _mm_shuffle_ps(zmm2_3, zmm2_3, 0))
        float temp0_239[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6)
        float temp0_240[0x4] = __mulps_xmmps_memps(temp0_237, data_143f2b850)
        float temp0_241[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xb1)
        float temp0_242[0x4] = _mm_add_ps(temp0_240, temp0_239)
        float temp0_244[0x4] = _mm_mul_ps(temp0_235, _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55))
        float temp0_246[0x4] = _mm_mul_ps(temp0_241, _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa))
        float temp0_247[0x4] = __mulps_xmmps_memps(temp0_244, data_143f2b840)
        float temp0_248[0x4] = __mulps_xmmps_memps(temp0_246, data_143f2b830)
        zmm7 = _mm_add_ps(_mm_add_ps(temp0_242, temp0_247), temp0_248)
        zmm6 = var_d8_1
    
    int64_t rbx_1 = sx.q(arg3[1].d)
    var_138[0] = arg_8
    int32_t rax_20 = (rbx_1 + 1).d
    arg3[1].d = rax_20
    
    if (rax_20 s> *(arg3 + 0xc))
        sub_1405c4fe0(arg3)
    
    result = *arg3
    int128_t* rcx_16 = rbx_1 << 6
    *(rcx_16 + result) = var_138
    *(rcx_16 + result + 0x10) = zmm7
    *(rcx_16 + result + 0x20) = zmm12
    *(rcx_16 + result + 0x30) = zmm6

return result
