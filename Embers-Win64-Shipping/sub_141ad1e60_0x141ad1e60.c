// 函数: sub_141ad1e60
// 地址: 0x141ad1e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
bool cond:0 = *(arg1 + 0x48) == 0
int32_t zmm1 = *(arg1 + 0x34)
void* rsi = arg2[3]
float var_178 = *(arg1 + 0x30)
int32_t var_170 = *(arg1 + 0x38)
int32_t var_174 = zmm1

if (not(cond:0))
    result = sub_141ea6180(arg1 + 0x180, rsi)
    
    if (result != 0)
        float var_48_1 = arg3[0]
        float var_58_1[0x4] = arg4
        float var_68_1[0x4] = arg5
        float var_78_1[0x4] = arg6
        float var_98_1[0x4] = arg8
        int128_t zmm13
        int128_t var_a8_1 = zmm13
        float zmm14[0x4]
        float var_b8_1[0x4] = zmm14
        float zmm15[0x4]
        float var_c8_1[0x4] = zmm15
        int64_t var_118
        __builtin_memset(&var_118, 0, 0x48)
        sub_141ac0820(&var_118, &arg2[1])
        int32_t rcx_2 = *(arg1 + 0x188)
        int32_t rbx_1 = -1
        int32_t rdx_2
        
        if (rcx_2 s>= 0)
            rdx_2 = *(arg1 + 0x18c)
        else
            int32_t rcx_3 = rcx_2 * 2
            
            if ((rcx_3 & 0xfffffffe) == 0xfffffffe)
                rdx_2 = -1
            else
                rdx_2 = *(*(rsi + 0x80) + (sx.q(rcx_3) s>> 1 << 2))
        
        int64_t r14_1 = sx.q(rdx_2)
        int128_t var_108
        
        if (*(r14_1 + var_108:8.q) == 0)
            sub_141a98300(&var_118, rdx_2)
        
        int64_t rcx_7 = var_118
        zmm15 = *(arg1 + 0x100)
        int64_t rdx_4 = r14_1 * 6
        zmm13 = zx.o(0)
        arg3 = *(rcx_7 + (rdx_4 << 3) + 0x20)
        float zmm5_1[0x4] = *(rcx_7 + (rdx_4 << 3))
        float var_1c8[0x4]
        uint32_t var_168[0x4]
        float zmm1_1[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        float zmm6_1[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, arg3), data_143f2b8d0, 1)) == 0)
            zmm2 = *(arg1 + 0xe0)
            zmm3 = *(arg1 + 0xf0)
            float temp0_133[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
            float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_133)
            float temp0_136[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
            float temp0_137[0x4] = _mm_mul_ps(zmm3, arg3)
            float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143f2b850)
            float temp0_139[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            zmm14 = _mm_mul_ps(zmm15, arg3)
            float temp0_142[0x4] = _mm_add_ps(temp0_138, _mm_mul_ps(temp0_139, zmm2))
            float temp0_144[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            float temp0_147[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143f2b840)
            float temp0_149[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
            float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f2b830)
            float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_148)
            float temp0_152[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_153[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            float temp0_154[0x4] = _mm_mul_ps(temp0_149, temp0_153)
            arg8 = _mm_add_ps(temp0_151, temp0_150)
            float temp0_158[0x4] = _mm_sub_ps(temp0_154, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_152))
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
            float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_139)
            zmm6_1 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), 
                *(rcx_7 + (rdx_4 << 3) + 0x10))
        else
            arg6 = data_143f2b810
            float temp0_4[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
            float temp0_6[0x4] = _mm_shuffle_ps(arg3, arg3, 0xc9)
            _mm_mul_ps(zmm15, arg3)
            float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_5)
            float temp0_10[0x4] = _mm_mul_ps(temp0_4, zmm5_1)
            float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x12), 
                _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff))
            float temp0_14[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
            float temp0_17[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x1a), 
                _mm_shuffle_ps(temp0_10, temp0_10, 1))
            zmm3 = *(arg1 + 0xe0)
            float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_9)
            float temp0_19[0x4] = _mm_sub_ps(temp0_9, temp0_13)
            float temp0_20[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
            float temp0_21[0x4] = _mm_mul_ps(temp0_18, arg3)
            float temp0_22[0x4] = _mm_mul_ps(temp0_6, temp0_19)
            zmm1_1 =
                __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(arg6, temp0_17), arg3), data_143f2b820)
            float temp0_26[0x4] = _mm_shuffle_ps(temp0_22, zmm1_1, 0x32)
            float temp0_28[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0), temp0_26, 0x82)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x31)
            float temp0_31[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1_1, 0x10), temp0_29, 0x88)
            float temp0_33[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_22, 0x12), zmm1_1, 0xe8)
            zmm1_1 = *(rcx_7 + (rdx_4 << 3) + 0x10)
            arg6[0].q = zmm1_1 u>> 0x40
            var_168 = _mm_shuffle_ps(zmm1_1, arg6, 0xc4)
            float temp0_35[0x4] = _mm_add_ps(zmm3, zmm3)
            float temp0_36[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            float temp0_37[0x4] = _mm_mul_ps(zmm3, temp0_35)
            float temp0_39[0x4] = _mm_mul_ps(temp0_20, _mm_shuffle_ps(temp0_35, temp0_35, 0x29))
            float temp0_41[0x4] = _mm_mul_ps(temp0_36, _mm_shuffle_ps(temp0_35, temp0_35, 0x12))
            float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                _mm_shuffle_ps(temp0_37, temp0_37, 1))
            float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
            float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
            float temp0_47[0x4] = _mm_sub_ps(arg6, temp0_44)
            float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm15)
            float temp0_49[0x4] = _mm_mul_ps(temp0_14, temp0_46)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm15), data_143f2b820)
            float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1_1, 0), 
                _mm_shuffle_ps(temp0_49, zmm1_1, 0x32), 0x82)
            zmm6_1 = var_168
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, zmm1_1, 0x10)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_58[0x4] =
                _mm_shuffle_ps(temp0_55, _mm_shuffle_ps(temp0_48, zmm1_1, 0x31), 0x88)
            float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_31)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
            zmm5_1 = *(arg1 + 0xf0)
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1_1, 0xe8)
            float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_33)
            arg6[0].q = zmm5_1 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(zmm5_1, arg6, 0xc4)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), zmm6_1)
            float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_28))
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_28)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_33)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_31)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
            var_1c8 = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_31)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, zmm6_1)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_28)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_33)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, zmm6_1)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            int96_t var_1b8_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_31)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_33)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_28)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), zmm6_1)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
            int96_t var_1a8_1 = temp0_99[0].12
            int96_t var_198_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            arg6, arg8, zmm13, zmm14 = sub_1407740e0(&var_1c8, 0x322bcc77)
            float zmm2_1[0x4] = var_1c8[0]
            arg8 = _mm_and_ps(_mm_cmpeq_ps(arg8, zmm14, 2), data_143f2b8c0 ^ arg6) ^ data_143f2b8c0
            zmm2_1[0] = zmm2_1[0] * arg8[0]
            uint32_t zmm0_2[0x4] = var_1c8[2]
            float zmm1_2 = var_1c8[1] * arg8[0]
            zmm0_2[0] = zmm0_2[0] f* arg8[0]
            var_1c8[0] = zmm2_1[0]
            float temp0_107[0x4] = _mm_shuffle_ps(arg8, arg8, 0x55)
            var_1c8[1] = zmm1_2
            zmm1_2 = var_1b8_1:4.d * temp0_107[0]
            var_1c8[2] = zmm0_2[0]
            zmm0_2 = var_1b8_1:8.d
            zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
            float zmm3_1 = var_1b8_1.d * temp0_107[0]
            zmm2_1 = var_1a8_1.d
            var_1b8_1:4.d = zmm1_2
            var_1b8_1:8.d = zmm0_2[0]
            zmm0_2 = var_1a8_1:8.d
            float temp0_108[0x4] = _mm_shuffle_ps(arg8, arg8, 0xaa)
            zmm1_2 = var_1a8_1:4.d * temp0_108[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
            zmm2_1[0] = zmm2_1[0] * temp0_108[0]
            var_1a8_1:4.d = zmm1_2
            var_1a8_1:8.d = zmm0_2[0]
            var_1b8_1.d = zmm3_1
            var_1a8_1.d = zmm2_1[0]
            sub_14077e4a0(&var_168, &var_1c8)
            zmm5_1 = var_168
            arg8 = data_143f2b8b0
            float temp0_109[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
            float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
            float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
            float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
            float temp0_115[0x4] = _mm_mul_ps(temp0_113, arg8)
            float temp0_120[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(arg8, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                    temp0_114), 
                temp0_114)
            float temp0_123[0x4] =
                _mm_sub_ps(arg8, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
            float temp0_125[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_198_1:4.d, 0)
            arg8 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_1) ^ data_143f2b8a0, temp0_125)
                ^ data_143f2b8a0
            zmm6_1 =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_198_1.d, var_198_1:8.d[0].q), temp0_128[0].q)
        
        var_168 = zmm6_1
        arg4 = arg8
        
        if (sub_141ea6180(arg1 + 0x190, rsi) != 0)
            int32_t rax_6 = *(arg1 + 0x198)
            
            if (rax_6 s>= 0)
                rbx_1 = *(arg1 + 0x19c)
            else
                int32_t rcx_11 = rax_6 * 2
                
                if ((rcx_11 & 0xfffffffe) != 0xfffffffe)
                    rbx_1 = *(*(rsi + 0x80) + (sx.q(rcx_11) s>> 1 << 2))
            
            int64_t rsi_1 = sx.q(rbx_1)
            
            if (var_108:8.q[rsi_1] == 0)
                arg4, arg8, zmm13, zmm14 = sub_141a98300(&var_118, rbx_1)
            
            int64_t rax_11 = var_118
            int64_t rcx_16 = rsi_1 * 6
            zmm3 = *(rax_11 + (rcx_16 << 3) + 0x10)
            var_1c8 = *(rax_11 + (rcx_16 << 3))
            float var_1a8_2[0x4] = *(rax_11 + (rcx_16 << 3) + 0x20)
            float temp0_169[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            float temp0_170[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm6_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, temp0_169[0].q), 
                _mm_unpacklo_ps(temp0_170, zx.o(0)[0].q)[0].q)
            var_168 = zmm6_1
        
        void* rbx_2 = *arg2
        arg5 = *(rbx_2 + 0x610)
        arg3 = *(rbx_2 + 0x5f0)
        float temp0_174[0x4] = _mm_min_ps(zmm14, arg5)
        zmm15 = _mm_mul_ps(zmm14, arg5)
        float zmm4_1[0x4]
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(temp0_174, data_143f2b8d0, 1)) == 0)
            zmm14 = 0x322bcc77
            float temp0_306[0x4] = _mm_mul_ps(zmm6_1, arg5)
            float temp0_307[0x4] = _mm_shuffle_ps(arg3, arg3, 0xc9)
            float temp0_308[0x4] = _mm_shuffle_ps(arg3, arg3, 0xd2)
            float temp0_309[0x4] = _mm_shuffle_ps(arg3, arg3, 0xff)
            float temp0_310[0x4] = _mm_shuffle_ps(temp0_306, temp0_306, 0xc9)
            float temp0_311[0x4] = _mm_shuffle_ps(temp0_306, temp0_306, 0xd2)
            float temp0_312[0x4] = _mm_mul_ps(temp0_310, temp0_308)
            float temp0_314[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_311, temp0_307), temp0_312)
            float temp0_315[0x4] = _mm_add_ps(temp0_314, temp0_314)
            float temp0_317[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_315, temp0_315, 0xc9), temp0_308)
            float temp0_319[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_315, temp0_315, 0xd2), temp0_307)
            float temp0_320[0x4] = _mm_shuffle_ps(arg4, arg4, 0x4e)
            float temp0_321[0x4] = _mm_mul_ps(temp0_315, temp0_309)
            float temp0_322[0x4] = _mm_sub_ps(temp0_319, temp0_317)
            float temp0_323[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
            float temp0_324[0x4] = _mm_add_ps(temp0_321, temp0_306)
            float temp0_326[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0x1b), temp0_323)
            float temp0_327[0x4] = _mm_mul_ps(arg4, temp0_309)
            float temp0_328[0x4] = _mm_shuffle_ps(arg4, arg4, 0xb1)
            float temp0_329[0x4] = _mm_add_ps(temp0_322, temp0_324)
            float temp0_330[0x4] = __mulps_xmmps_memps(temp0_326, data_143f2b850)
            zmm5_1 = __addps_xmmps_memps(temp0_329, *(rbx_2 + 0x600))
            float temp0_332[0x4] = _mm_add_ps(temp0_330, temp0_327)
            float temp0_334[0x4] = _mm_mul_ps(temp0_320, _mm_shuffle_ps(arg3, arg3, 0x55))
            float temp0_336[0x4] = _mm_mul_ps(temp0_328, _mm_shuffle_ps(arg3, arg3, 0xaa))
            float temp0_337[0x4] = __mulps_xmmps_memps(temp0_334, data_143f2b840)
            float temp0_338[0x4] = __mulps_xmmps_memps(temp0_336, data_143f2b830)
            zmm6_1 = _mm_add_ps(_mm_add_ps(temp0_332, temp0_337), temp0_338)
        else
            arg6 = data_143f2b810
            float temp0_178[0x4] = _mm_add_ps(arg3, arg3)
            arg4 = *(rbx_2 + 0x600)
            float temp0_179[0x4] = _mm_shuffle_ps(arg3, arg3, 4)
            float temp0_180[0x4] = _mm_shuffle_ps(arg5, arg5, 0xc9)
            float temp0_181[0x4] = _mm_shuffle_ps(arg3, arg3, 0xff)
            float temp0_182[0x4] = _mm_mul_ps(arg3, temp0_178)
            float temp0_184[0x4] = _mm_mul_ps(temp0_179, _mm_shuffle_ps(temp0_178, temp0_178, 0x29))
            float temp0_185[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0x12)
            float temp0_186[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0x1a)
            float temp0_187[0x4] = _mm_mul_ps(temp0_181, temp0_185)
            float temp0_189[0x4] = _mm_add_ps(temp0_186, _mm_shuffle_ps(temp0_182, temp0_182, 1))
            float temp0_190[0x4] = _mm_add_ps(temp0_187, temp0_184)
            float temp0_191[0x4] = _mm_sub_ps(temp0_184, temp0_187)
            float temp0_192[0x4] = _mm_sub_ps(arg6, temp0_189)
            float temp0_193[0x4] = _mm_mul_ps(temp0_190, arg5)
            float temp0_194[0x4] = _mm_mul_ps(temp0_180, temp0_191)
            float temp0_195[0x4] = _mm_mul_ps(temp0_192, arg5)
            float temp0_196[0x4] = _mm_add_ps(arg8, arg8)
            zmm1_1 = __andps_xmmxud_memxud(temp0_195, data_143f2b820)
            float temp0_198[0x4] = _mm_shuffle_ps(temp0_194, zmm1_1, 0x32)
            float temp0_200[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_193, zmm1_1, 0), temp0_198, 0x82)
            float temp0_201[0x4] = _mm_shuffle_ps(temp0_193, zmm1_1, 0x31)
            float temp0_203[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_194, zmm1_1, 0x10), temp0_201, 0x88)
            float temp0_204[0x4] = _mm_mul_ps(temp0_196, arg8)
            float temp0_206[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_193, temp0_194, 0x12), zmm1_1, 0xe8)
            float temp0_207[0x4] = _mm_shuffle_ps(temp0_196, temp0_196, 0x29)
            arg6[0].q = arg4 u>> 0x40
            float temp0_208[0x4] = _mm_shuffle_ps(arg4, arg6, 0xc4)
            float temp0_210[0x4] = _mm_mul_ps(temp0_207, _mm_shuffle_ps(arg8, arg8, 4))
            float temp0_213[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0x1a), 
                _mm_shuffle_ps(temp0_204, temp0_204, 1))
            float temp0_214[0x4] = _mm_shuffle_ps(arg8, arg8, 0xff)
            float temp0_216[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0x12), temp0_214)
            float temp0_217[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
            float temp0_218[0x4] = _mm_add_ps(temp0_216, temp0_210)
            float temp0_219[0x4] = _mm_sub_ps(temp0_210, temp0_216)
            float temp0_220[0x4] = _mm_mul_ps(temp0_218, zmm14)
            float temp0_221[0x4] = _mm_mul_ps(temp0_217, temp0_219)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(arg6, temp0_213), zmm14), 
                data_143f2b820)
            float temp0_225[0x4] = _mm_shuffle_ps(temp0_221, zmm1_1, 0x32)
            float temp0_227[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_220, zmm1_1, 0), temp0_225, 0x82)
            float temp0_228[0x4] = _mm_shuffle_ps(temp0_220, zmm1_1, 0x31)
            float temp0_229[0x4] = _mm_shuffle_ps(temp0_221, zmm1_1, 0x10)
            float temp0_230[0x4] = _mm_shuffle_ps(temp0_220, temp0_221, 0x12)
            float temp0_231[0x4] = _mm_shuffle_ps(temp0_229, temp0_228, 0x88)
            float temp0_232[0x4] = _mm_shuffle_ps(temp0_230, zmm1_1, 0xe8)
            zmm4_1 = var_168
            float temp0_233[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0x55)
            float temp0_235[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xaa), temp0_206)
            float temp0_236[0x4] = _mm_mul_ps(temp0_233, temp0_203)
            arg6[0].q = zmm4_1 u>> 0x40
            float temp0_237[0x4] = _mm_shuffle_ps(zmm4_1, arg6, 0xc4)
            float temp0_238[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0)
            float temp0_240[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xff), temp0_208)
            float temp0_242[0x4] = _mm_add_ps(temp0_236, _mm_mul_ps(temp0_238, temp0_200))
            float temp0_244[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0), temp0_200)
            float temp0_245[0x4] = _mm_add_ps(temp0_242, temp0_235)
            float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0xaa), temp0_206)
            float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_240)
            float temp0_250[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0x55), temp0_203)
            float temp0_251[0x4] = _mm_shuffle_ps(temp0_231, temp0_231, 0xff)
            var_1c8 = temp0_248
            float temp0_252[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x55)
            float temp0_253[0x4] = _mm_add_ps(temp0_250, temp0_244)
            float temp0_254[0x4] = _mm_mul_ps(temp0_252, temp0_203)
            float temp0_255[0x4] = _mm_mul_ps(temp0_251, temp0_208)
            float temp0_256[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0)
            float temp0_257[0x4] = _mm_add_ps(temp0_253, temp0_247)
            float temp0_258[0x4] = _mm_mul_ps(temp0_256, temp0_200)
            float temp0_260[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xaa), temp0_206)
            float temp0_261[0x4] = _mm_add_ps(temp0_257, temp0_255)
            float temp0_262[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0xff)
            float temp0_263[0x4] = _mm_add_ps(temp0_254, temp0_258)
            float temp0_264[0x4] = _mm_mul_ps(temp0_262, temp0_208)
            float temp0_265[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0)
            int96_t var_1b8_2 = temp0_261[0].12
            float temp0_266[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0x55)
            float temp0_267[0x4] = _mm_add_ps(temp0_263, temp0_260)
            float temp0_268[0x4] = _mm_mul_ps(temp0_266, temp0_203)
            float temp0_270[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_237, temp0_237, 0xaa), temp0_206)
            float temp0_271[0x4] = _mm_mul_ps(temp0_265, temp0_200)
            float temp0_272[0x4] = _mm_add_ps(temp0_267, temp0_264)
            float temp0_274[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_237, temp0_237, 0xff), temp0_208)
            float temp0_275[0x4] = _mm_add_ps(temp0_268, temp0_271)
            int96_t var_1a8_3 = temp0_272[0].12
            int96_t var_198_2 = _mm_add_ps(_mm_add_ps(temp0_275, temp0_270), temp0_274)[0].12
            arg6, zmm13, zmm14, zmm15 = sub_1407740e0(&var_1c8, 0x322bcc77)
            float zmm2_2[0x4] = var_1c8[0]
            float zmm1_3 = var_1c8[1]
            float zmm4_2[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(data_143f2b8d0, zmm15, 2), data_143f2b8c0 ^ arg6)
            uint32_t zmm0_3[0x4] = var_1c8[2]
            zmm4_2 ^= data_143f2b8c0
            zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
            zmm1_3 = zmm1_3 * zmm4_2[0]
            var_1c8[0] = zmm2_2[0]
            zmm0_3[0] = zmm0_3[0] f* zmm4_2[0]
            var_1c8[1] = zmm1_3
            float temp0_280[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
            zmm1_3 = var_1b8_2:4.d * temp0_280[0]
            var_1c8[2] = zmm0_3[0]
            zmm0_3 = var_1b8_2:8.d
            zmm0_3[0] = zmm0_3[0] f* temp0_280[0]
            float zmm3_2 = var_1b8_2.d * temp0_280[0]
            zmm2_2 = var_1a8_3.d
            float temp0_281[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
            var_1b8_2:4.d = zmm1_3
            var_1b8_2:8.d = zmm0_3[0]
            zmm0_3 = var_1a8_3:8.d
            zmm1_3 = var_1a8_3:4.d * temp0_281[0]
            zmm0_3[0] = zmm0_3[0] f* temp0_281[0]
            zmm2_2[0] = zmm2_2[0] * temp0_281[0]
            var_1a8_3:4.d = zmm1_3
            var_1a8_3:8.d = zmm0_3[0]
            var_1b8_2.d = zmm3_2
            var_1a8_3.d = zmm2_2[0]
            sub_14077e4a0(&var_168, &var_1c8)
            zmm5_1 = var_168
            zmm6_1 = data_143f2b8b0
            float temp0_282[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
            float temp0_284[0x4] = _mm_add_ps(temp0_282, _mm_shuffle_ps(temp0_282, temp0_282, 0x4e))
            float temp0_286[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_284, temp0_284, 0x39), temp0_284)
            float temp0_287[0x4] = _mm_rsqrt_ps(temp0_286)
            float temp0_288[0x4] = _mm_mul_ps(temp0_286, zmm6_1)
            float temp0_293[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_287, temp0_287), temp0_288)), 
                    temp0_287), 
                temp0_287)
            float temp0_296[0x4] =
                _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_293, temp0_293), temp0_288))
            float temp0_298[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_286, 2)
            float temp0_300[0x4] = _mm_add_ps(_mm_mul_ps(temp0_296, temp0_293), temp0_293)
            float temp0_301[0x4] = _mm_unpacklo_ps(var_198_2:4.d, 0)
            zmm6_1 = _mm_and_ps(_mm_mul_ps(temp0_300, zmm5_1) ^ data_143f2b8a0, temp0_298)
                ^ data_143f2b8a0
            zmm5_1 =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_198_2.d, var_198_2:8.d[0].q), temp0_301[0].q)
        
        float zmm0_1[0x4] = *(arg1 + 0x16c)
        float temp0_341[0x4] = __mulps_xmmps_memps(*(rbx_2 + 0x620), data_143f2b8e0)
        zmm4_1 = *(arg1 + 0x164)
        float temp0_342[0x4] = _mm_unpacklo_ps(*(arg1 + 0x168), 0)
        float temp0_344[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, zmm0_1[0].q), temp0_342[0].q)
        float temp0_345[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
        temp0_344[0] = temp0_344[0] - zmm5_1[0]
        float temp0_346[0x4] = _mm_shuffle_ps(temp0_341, temp0_341, 0xc9)
        float temp0_347[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
        float temp0_348[0x4] = _mm_shuffle_ps(temp0_344, temp0_344, 0x55)
        temp0_348[0] = temp0_348[0] - temp0_345[0]
        float temp0_349[0x4] = _mm_shuffle_ps(temp0_341, temp0_341, 0xd2)
        float temp0_350[0x4] = _mm_shuffle_ps(temp0_344, temp0_344, 0xaa)
        temp0_350[0] = temp0_350[0] - temp0_347[0]
        float temp0_351[0x4] = _mm_shuffle_ps(temp0_341, temp0_341, 0xff)
        float temp0_352[0x4] = _mm_unpacklo_ps(temp0_348, 0)
        float temp0_354[0x4] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_344, temp0_350[0].q), temp0_352[0].q)
        float temp0_355[0x4] = _mm_shuffle_ps(temp0_354, temp0_354, 0xd2)
        float temp0_357[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_354, temp0_354, 0xc9), temp0_349)
        float temp0_359[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_355, temp0_346), temp0_357)
        float temp0_360[0x4] = _mm_add_ps(temp0_359, temp0_359)
        float temp0_361[0x4] = _mm_shuffle_ps(temp0_360, temp0_360, 0xc9)
        float temp0_362[0x4] = _mm_shuffle_ps(temp0_360, temp0_360, 0xd2)
        float temp0_363[0x4] = _mm_mul_ps(temp0_361, temp0_349)
        float temp0_364[0x4] = _mm_mul_ps(temp0_360, temp0_351)
        float temp0_365[0x4] = _mm_mul_ps(temp0_362, temp0_346)
        float temp0_366[0x4] = _mm_add_ps(temp0_364, temp0_354)
        float temp0_368[0x4] = _mm_add_ps(_mm_sub_ps(temp0_365, temp0_363), temp0_366)
        temp0_368[0] = temp0_368[0] * temp0_368[0]
        float temp0_369[0x4] = _mm_shuffle_ps(temp0_368, temp0_368, 0x55)
        float temp0_370[0x4] = _mm_shuffle_ps(temp0_368, temp0_368, 0xaa)
        temp0_369[0] = temp0_369[0] * temp0_369[0]
        temp0_369[0] = temp0_369[0] + temp0_368[0]
        temp0_370[0] = temp0_370[0] * temp0_370[0]
        temp0_369[0] = temp0_369[0] + temp0_370[0]
        
        if (temp0_369[0] == 1f)
            goto label_141ad2b6e
        
        float var_188
        
        if (temp0_369[0] >= zmm14[0])
            zmm4_1 = 0x3f000000
            zmm3 = zx.o(0)
            zmm2 = 0x3f000000
            zmm3[0] = temp0_369[0]
            float temp0_371[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            temp0_371[0] = temp0_371[0] * temp0_371[0]
            zmm3[0] = zmm3[0] * temp0_371[0]
            zmm2[0] = 0.5f - zmm3[0]
            temp0_371[0] = temp0_371[0] * zmm2[0]
            temp0_371[0] = temp0_371[0] + temp0_371[0]
            temp0_371[0] = temp0_371[0] * temp0_371[0]
            zmm3[0] = zmm3[0] * temp0_371[0]
            zmm4_1[0] = 0.5f - zmm3[0]
            temp0_371[0] = temp0_371[0] * zmm4_1[0]
            temp0_371[0] = temp0_371[0] + temp0_371[0]
            temp0_368[0] = temp0_368[0] * temp0_371[0]
            temp0_369[0] = temp0_369[0] * temp0_371[0]
            temp0_370[0] = temp0_370[0] * temp0_371[0]
        label_141ad2b6e:
            zmm5_1 = data_143dbb200
            float var_180_2 = temp0_370[0]
            arg6 = data_143dbb1fc
            float var_184_2 = temp0_369[0]
            var_188 = temp0_368[0]
        else
            arg6 = data_143dbb1fc
            zmm5_1 = data_143dbb200
            var_188 = data_143dbb1f8[0]
            float var_184_1 = arg6[0]
            float var_180_1 = zmm5_1[0]
        
        zmm2 = *(arg1 + 0x174)
        float temp0_372[0x4] = _mm_unpacklo_ps(*(arg1 + 0x170), (*(arg1 + 0x178))[0].q)
        float temp0_373[0x4] = _mm_unpacklo_ps(zmm2, 0)
        float temp0_374[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
        float temp0_375[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
        float temp0_377[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_372, temp0_373[0].q), zmm15)
        float temp0_378[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
        float temp0_380[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_377, temp0_377, 0xc9), temp0_374)
        float temp0_383[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_377, temp0_377, 0xd2), temp0_375), temp0_380)
        float temp0_384[0x4] = _mm_add_ps(temp0_383, temp0_383)
        float temp0_385[0x4] = _mm_mul_ps(temp0_378, temp0_384)
        float temp0_387[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_384, temp0_384, 0xc9), temp0_374)
        float temp0_388[0x4] = _mm_shuffle_ps(temp0_384, temp0_384, 0xd2)
        float temp0_389[0x4] = _mm_add_ps(temp0_385, temp0_377)
        arg3 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_388, temp0_375), temp0_387), temp0_389)
        arg3[0] = arg3[0] * arg3[0]
        zmm6_1 = _mm_shuffle_ps(arg3, arg3, 0x55)
        arg5 = _mm_shuffle_ps(arg3, arg3, 0xaa)
        zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] + arg3[0]
        arg5[0] = arg5[0] * arg5[0]
        zmm6_1[0] = zmm6_1[0] + arg5[0]
        
        if (not(zmm6_1[0] == 1f))
            if (zmm6_1[0] >= zmm14[0])
                zmm4_1 = 0x3f000000
                zmm3 = zx.o(0)
                zmm2 = 0x3f000000
                zmm3[0] = zmm6_1[0]
                float temp0_395[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                temp0_395[0] = temp0_395[0] * temp0_395[0]
                zmm3[0] = zmm3[0] * temp0_395[0]
                zmm2[0] = 0.5f - zmm3[0]
                temp0_395[0] = temp0_395[0] * zmm2[0]
                temp0_395[0] = temp0_395[0] + temp0_395[0]
                temp0_395[0] = temp0_395[0] * temp0_395[0]
                zmm3[0] = zmm3[0] * temp0_395[0]
                zmm4_1[0] = 0.5f - zmm3[0]
                temp0_395[0] = temp0_395[0] * zmm4_1[0]
                temp0_395[0] = temp0_395[0] + temp0_395[0]
                arg3[0] = arg3[0] * temp0_395[0]
                zmm6_1[0] = zmm6_1[0] * temp0_395[0]
                arg5[0] = arg5[0] * temp0_395[0]
            else
                arg3 = data_143dbb1f8
                zmm6_1 = arg6
                arg5 = zmm5_1
        
        int32_t var_120_1 = data_14399f6a0
        int32_t var_130_1 = data_14399f6c0
        int32_t rax_15 = data_14399f680
        float temp0_396[0x4] = _mm_unpacklo_ps(zmm6_1, 0)
        int32_t var_140_1 = rax_15
        float temp0_398[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(arg3, arg5[0].q), temp0_396[0].q)
        float temp0_400[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_398, temp0_398, 0xc9), temp0_349)
        float temp0_403[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_398, temp0_398, 0xd2), temp0_346), temp0_400)
        float temp0_404[0x4] = _mm_add_ps(temp0_403, temp0_403)
        float temp0_405[0x4] = _mm_mul_ps(temp0_351, temp0_404)
        float temp0_407[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_404, temp0_404, 0xc9), temp0_349)
        float temp0_408[0x4] = _mm_shuffle_ps(temp0_404, temp0_404, 0xd2)
        float temp0_409[0x4] = _mm_add_ps(temp0_405, temp0_398)
        float temp0_412[0x4] =
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_408, temp0_346), temp0_407), temp0_409)
        float var_158 = temp0_412[0]
        float var_154_1 = _mm_shuffle_ps(temp0_412, temp0_412, 0x55)[0]
        int64_t var_128 = data_14399f698.q
        int64_t var_138 = data_14399f6b8
        zmm0_1 = zx.o(data_14399f678)
        float temp0_414[0x4] = _mm_shuffle_ps(temp0_412, temp0_412, 0xaa)
        int64_t var_148 = zmm0_1.q
        float var_150_1 = temp0_414[0]
        float arg_18
        sub_140ad7530(&arg_18, &var_158, &var_128, &var_138, &var_148)
        float arg_10
        int512_t zmm10
        int512_t zmm11
        int512_t zmm12
        zmm10, zmm11, zmm12 = sub_140ad7530(&arg_10, &var_188, &var_128, &var_138, &var_148)
        float zmm0_4[0x4] = arg_10
        zmm0_4[0] = zmm0_4[0] - arg_18
        zmm0_4[0] = zmm0_4[0] * 57.2957764f
        float zmm0_5[0x4]
        float zmm6_2[0x4]
        int32_t zmm8
        int512_t zmm9
        zmm0_5, zmm6_2, zmm8, zmm9 = sub_140a454f0(zmm0_4, 0x43b40000)
        zmm12.o = var_98_1
        zmm11.o = arg7
        zmm10.o = var_78_1
        zmm9.o = var_68_1
        
        if (not(zmm0_5[0] f>= zmm13.d))
            zmm0_5[0] = zmm0_5[0] + zmm6_2[0]
        
        if (not(zmm0_5[0] <= 180f))
            zmm0_5[0] = zmm0_5[0] - zmm6_2[0]
        
        var_178 = zmm0_5[0]
        zmm0_5 = arg9
        zmm0_5[0] = zmm0_5[0] f- arg10
        zmm0_5[0] = zmm0_5[0] f* zmm8
        int32_t zmm0
        float zmm6_3
        float zmm7
        int512_t zmm8_1
        zmm0, result, zmm6_3, zmm7, zmm8_1 = sub_140a454f0(zmm0_5, zmm6_2)
        zmm8_1.o = var_58_1
        
        if (not(zmm0 f>= zmm13.d))
            zmm0 = zmm0 f+ zmm6_3
        
        if (not(zmm0 f<= zmm7))
            zmm0 = zmm0 f- zmm6_3
        
        var_174 = zmm0
        int64_t var_e0
        
        if (var_e0 != 0)
            result = sub_140a74f90(var_e0)
        
        int64_t var_f0
        
        if (var_f0 != 0)
            result = sub_140a74f90(var_f0)
        
        int64_t rcx_23 = var_108:8.q
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)

int64_t* rcx_24 = *(arg1 + 0x48)
*(arg1 + 0x30) = var_178
*(arg1 + 0x34) = var_174

if (rcx_24 == 0)
    return result

return sub_141e42e50(rcx_24, &var_178, arg1 + 0xc8)
