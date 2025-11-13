// 函数: sub_1420eeee0
// 地址: 0x1420eeee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
sub_140b33630("ActorSpawning")
void* r15 = *(arg1 + 0x30)
void* result

if (arg2 == 0)
    result = nullptr
else
    int32_t rcx = *(arg2 + 0xcc)
    
    if (((rcx u>> 0x19).b & 1) != 0 || (rcx.b & 1) != 0)
        result = nullptr
    else
        void* rax_4 = sub_142452380()
        
        if (rax_4 == 0)
            result = nullptr
        else
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> arg2[7].d || *(arg2[6] + (rax_5 << 3)) != rax_4 + 0x30)
                result = nullptr
            else
                int64_t* rsi_1 = arg4[1]
                int32_t var_1b8
                
                if (rsi_1 == 0 || rsi_1[2] == arg2)
                    if (((*(arg1 + 0x11c) & 2) == 0 || (*(arg4 + 0x29) & 8) != 0)
                            && (*(arg1 + 0x11d) & 0x20) == 0)
                        if (arg3 == 0)
                            goto label_1420ef040
                        
                        uint32_t temp0_3 = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
                            __andps_xmmxud_memxud(*arg3, data_142d3f760), data_142d3f760, 0))
                        var_1b8 = 0x7f800000
                        
                        if (temp0_3 != 0)
                            result = nullptr
                        else
                            uint32_t temp0_6 = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
                                __andps_xmmxud_memxud(arg3[1], data_142d3f760), data_142d3f760, 0))
                            var_1b8 = 0x7f800000
                            
                            if (temp0_6 != 0)
                                result = nullptr
                            else
                                uint32_t temp0_9 = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
                                    __andps_xmmxud_memxud(arg3[2], data_142d3f760), data_142d3f760, 
                                    0))
                                var_1b8 = 0x7f800000
                                
                                if (temp0_9 == 0)
                                    goto label_1420ef040
                                
                                result = nullptr
                    else
                        result = nullptr
                else if ((*(arg4 + 0x29) & 2) != 0)
                label_1420ef040:
                    void* r14_1 = arg4[4]
                    
                    if (r14_1 == 0)
                        void* r14_2 = arg4[2]
                        
                        if (r14_2 == 0)
                            r14_1 = r15
                        else
                            r14_1 = *(r14_2 + 0x20)
                    
                    uint64_t r8 = *arg4
                    uint64_t var_1e8 = r8
                    
                    if (rsi_1 == 0)
                        int64_t* rax_11 = sub_141db59c0(arg2)
                        r8 = var_1e8
                        rsi_1 = rax_11
                    
                    uint64_t var_1d8
                    int64_t var_1c8
                    int64_t var_1a8
                    int64_t* rax_13
                    int64_t* rcx_10
                    void* rbx_1
                    
                    if (r8 == 0)
                        if (((rsi_1[1].d u>> 4).b & 1) != 0)
                            goto label_1420ef0fa
                        
                        var_1b8.q = rsi_1[3]
                        int64_t* rax_12 = sub_140b5e690(&var_1b8, &var_1a8)
                        int16_t* r15_1
                        
                        if (rax_12[1].d == 0)
                            r15_1 = &data_142d40450
                        else
                            r15_1 = *rax_12
                        
                        rbx_1 = rsi_1[2]
                        rax_13 = sub_140b58260(&var_1d8, r15_1, 1)
                        rcx_10 = &var_1c8
                        goto label_1420ef0d7
                    
                    uint8_t var_218 = 0
                    int64_t rax_17
                    rax_17, arg5 = sub_140d2f0c0(nullptr, r14_1, r8, 0, 0, 0)
                    char var_228
                    uint128_t zmm8
                    
                    if (rax_17 == 0)
                    label_1420ef0fa:
                        
                        if (sub_140cd8000(rsi_1) == 0)
                            result = nullptr
                        else
                            char r15_2 = arg4[5].b
                            int128_t* rax_16 = &data_143dbb0c0
                            
                            if (arg3 != 0)
                                rax_16 = arg3
                            
                            bool cond:0_1 = (*(arg4 + 0x29) & 2) == 0
                            float zmm1_1[0x4] = rax_16[1]
                            float var_128[0x4] = *rax_16
                            float var_108_1[0x4] = rax_16[2]
                            float var_118_1[0x4] = zmm1_1
                            
                            if (cond:0_1)
                            label_1420ef24c:
                                
                                if (r15_2 == 0)
                                    r15_2 = *(rsi_1 + 0xf2)
                            else if (r15_2 != 3)
                                if (r15_2 != 4)
                                    goto label_1420ef24c
                                
                                r15_2 = 1
                            else
                                r15_2 = 2
                            
                            char rax_28
                            
                            if (r15_2 == 4)
                                void* rcx_20 = rsi_1[0x26]
                                uint128_t var_58_1 = arg5
                                float var_68_1[0x4] = arg6
                                float var_158_1[0x4]
                                float var_148_1[0x4]
                                
                                if (rcx_20 == 0)
                                    var_158_1 = *rax_16
                                    float var_138_3[0x4] = rax_16[2]
                                    var_148_1 = zmm1_1
                                else
                                    int32_t rax_22 = *(rcx_20 + 0x13c)
                                    *(rcx_20 + 0x134)
                                    *(rcx_20 + 0x11c)
                                    int32_t rax_23 = *(rcx_20 + 0x124)
                                    int32_t rax_24 = *(rcx_20 + 0x130)
                                    uint128_t var_78_1 = zmm8
                                    var_1c8 = *(rcx_20 + 0x128)
                                    int32_t var_1c0_1 = rax_24
                                    arg5, arg6 = sub_140ade170(&var_1c8, &var_1b8)
                                    float zmm0_1[0x4] = arg5
                                    float zmm14[0x4] = var_1b8.o
                                    int64_t var_1f8_1 = arg6.q
                                    float temp0_11[0x4] =
                                        _mm_unpacklo_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55), 0)
                                    float temp0_12[0x4] = _mm_shuffle_ps(arg6, arg6, 0x55)
                                    uint128_t zmm8_1 = _mm_unpacklo_ps(
                                        _mm_unpacklo_ps(arg5, rax_23[0].q), temp0_11[0].q)
                                    float temp0_15[0x4] = _mm_unpacklo_ps(temp0_12, 0)
                                    float temp0_17[0x4] = _mm_unpacklo_ps(
                                        _mm_unpacklo_ps(arg6, rax_22[0].q), temp0_15[0].q)
                                    var_1d8 = arg5.q
                                    float temp0_18[0x4] = _mm_min_ps(temp0_17, var_108_1)
                                    var_1d8.o = zmm8_1
                                    
                                    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(temp0_18, 
                                            data_143f482d0, 1)) == 0)
                                        float zmm5_1[0x4] = var_128
                                        float temp0_150[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x1b)
                                        float temp0_151[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x4e)
                                        float temp0_153[0x4] =
                                            _mm_mul_ps(temp0_150, _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
                                        arg5 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                        float temp0_155[0x4] = _mm_mul_ps(var_108_1, zmm8_1)
                                        float temp0_156[0x4] =
                                            __mulps_xmmps_memps(temp0_153, data_143f48290)
                                        float temp0_157[0x4] = _mm_mul_ps(arg5, zmm14)
                                        float temp0_158[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                                        float temp0_159[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xb1)
                                        float temp0_160[0x4] = _mm_mul_ps(var_108_1, temp0_17)
                                        float temp0_161[0x4] = _mm_add_ps(temp0_156, temp0_157)
                                        float temp0_163[0x4] = _mm_mul_ps(temp0_151, 
                                            _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
                                        float temp0_165[0x4] = _mm_mul_ps(temp0_159, 
                                            _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
                                        float temp0_166[0x4] =
                                            __mulps_xmmps_memps(temp0_163, data_143f48280)
                                        float temp0_167[0x4] =
                                            _mm_shuffle_ps(temp0_155, temp0_155, 0xc9)
                                        float temp0_168[0x4] =
                                            __mulps_xmmps_memps(temp0_165, data_143f48270)
                                        float temp0_169[0x4] = _mm_add_ps(temp0_161, temp0_166)
                                        float temp0_170[0x4] = _mm_mul_ps(temp0_167, temp0_158)
                                        float temp0_171[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                        float var_138_2[0x4] = temp0_160
                                        var_158_1 = _mm_add_ps(temp0_169, temp0_168)
                                        float temp0_175[0x4] = _mm_sub_ps(
                                            _mm_mul_ps(_mm_shuffle_ps(temp0_155, temp0_155, 0xd2), 
                                                temp0_171), 
                                            temp0_170)
                                        float temp0_176[0x4] = _mm_add_ps(temp0_175, temp0_175)
                                        arg5 = _mm_mul_ps(arg5, temp0_176)
                                        float temp0_179[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_176, temp0_176, 0xd2), temp0_171)
                                        float temp0_180[0x4] =
                                            _mm_shuffle_ps(temp0_176, temp0_176, 0xc9)
                                        arg5 = _mm_add_ps(arg5, temp0_155)
                                        var_148_1 = __addps_xmmps_memps(
                                            _mm_add_ps(
                                                _mm_sub_ps(temp0_179, 
                                                    _mm_mul_ps(temp0_180, temp0_158)), 
                                                arg5), 
                                            var_118_1)
                                    else
                                        float zmm3_1[0x4] = var_128
                                        float temp0_21[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
                                        float temp0_22[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                                        float temp0_23[0x4] =
                                            _mm_shuffle_ps(var_108_1, var_108_1, 0xc9)
                                        float zmm11[0x4] = data_143f48200
                                        float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm3_1)
                                        float temp0_26[0x4] = _mm_mul_ps(temp0_22, 
                                            _mm_shuffle_ps(temp0_21, temp0_21, 0x29))
                                        float temp0_27[0x4] =
                                            _mm_shuffle_ps(temp0_21, temp0_21, 0x12)
                                        float temp0_28[0x4] =
                                            _mm_shuffle_ps(temp0_24, temp0_24, 0x1a)
                                        float temp0_30[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_27)
                                        float temp0_32[0x4] = _mm_add_ps(temp0_28, 
                                            _mm_shuffle_ps(temp0_24, temp0_24, 1))
                                        float temp0_33[0x4] = _mm_add_ps(temp0_30, temp0_26)
                                        _mm_mul_ps(var_108_1, temp0_17)
                                        float temp0_35[0x4] = _mm_sub_ps(temp0_26, temp0_30)
                                        float temp0_36[0x4] = _mm_sub_ps(zmm11, temp0_32)
                                        float temp0_37[0x4] =
                                            _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
                                        float temp0_38[0x4] = _mm_mul_ps(temp0_33, var_108_1)
                                        float temp0_39[0x4] = _mm_mul_ps(temp0_23, temp0_35)
                                        float temp0_40[0x4] = _mm_mul_ps(temp0_36, var_108_1)
                                        float temp0_41[0x4] = _mm_shuffle_ps(zmm14, zmm14, 4)
                                        zmm1_1 = __andps_xmmxud_memxud(temp0_40, data_143f481e0)
                                        float temp0_43[0x4] = _mm_shuffle_ps(temp0_39, zmm1_1, 0x32)
                                        float temp0_45[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_38, zmm1_1, 0), temp0_43, 0x82)
                                        float temp0_46[0x4] = _mm_shuffle_ps(temp0_38, zmm1_1, 0x31)
                                        zmm8_1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_39, zmm1_1, 0x10), temp0_46, 0x88)
                                        zmm11[0].q = var_118_1 u>> 0x40
                                        float temp0_49[0x4] = _mm_shuffle_ps(var_118_1, zmm11, 0xc4)
                                        float temp0_51[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_38, temp0_39, 0x12), zmm1_1, 0xe8)
                                        float temp0_52[0x4] = _mm_add_ps(zmm14, zmm14)
                                        float temp0_53[0x4] =
                                            _mm_shuffle_ps(temp0_52, temp0_52, 0x29)
                                        float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm14)
                                        float temp0_55[0x4] = _mm_mul_ps(temp0_41, temp0_53)
                                        float temp0_56[0x4] =
                                            _mm_shuffle_ps(temp0_52, temp0_52, 0x12)
                                        float temp0_58[0x4] =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xff), temp0_56)
                                        float temp0_61[0x4] = _mm_add_ps(
                                            _mm_shuffle_ps(temp0_54, temp0_54, 0x1a), 
                                            _mm_shuffle_ps(temp0_54, temp0_54, 1))
                                        float temp0_62[0x4] = _mm_add_ps(temp0_58, temp0_55)
                                        float temp0_63[0x4] = _mm_sub_ps(temp0_55, temp0_58)
                                        float temp0_64[0x4] = _mm_sub_ps(zmm11, temp0_61)
                                        float temp0_65[0x4] = _mm_mul_ps(temp0_62, temp0_17)
                                        float temp0_66[0x4] = _mm_mul_ps(temp0_37, temp0_63)
                                        zmm1_1 = __andps_xmmxud_memxud(
                                            _mm_mul_ps(temp0_64, temp0_17), data_143f481e0)
                                        float temp0_71[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_65, zmm1_1, 0), 
                                            _mm_shuffle_ps(temp0_66, zmm1_1, 0x32), 0x82)
                                        float temp0_72[0x4] = _mm_shuffle_ps(temp0_65, zmm1_1, 0x31)
                                        float temp0_73[0x4] =
                                            _mm_shuffle_ps(temp0_71, temp0_71, 0x55)
                                        float temp0_75[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_66, zmm1_1, 0x10), temp0_72, 0x88)
                                        float temp0_76[0x4] = _mm_mul_ps(temp0_73, zmm8_1)
                                        float temp0_77[0x4] =
                                            _mm_shuffle_ps(temp0_65, temp0_66, 0x12)
                                        float zmm4_1[0x4] = var_1d8.o
                                        float temp0_78[0x4] = _mm_shuffle_ps(temp0_77, zmm1_1, 0xe8)
                                        float temp0_80[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_71, temp0_71, 0xaa), temp0_51)
                                        zmm11[0].q = zmm4_1 u>> 0x40
                                        float temp0_81[0x4] = _mm_shuffle_ps(zmm4_1, zmm11, 0xc4)
                                        float temp0_82[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0)
                                        float temp0_84[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_71, temp0_71, 0xff), temp0_49)
                                        float temp0_86[0x4] =
                                            _mm_add_ps(temp0_76, _mm_mul_ps(temp0_82, temp0_45))
                                        float temp0_88[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_75, temp0_75, 0), temp0_45)
                                        float temp0_89[0x4] = _mm_add_ps(temp0_86, temp0_80)
                                        float temp0_91[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_75, temp0_75, 0xaa), temp0_51)
                                        float temp0_92[0x4] = _mm_add_ps(temp0_89, temp0_84)
                                        float temp0_94[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_75, temp0_75, 0x55), zmm8_1)
                                        float temp0_95[0x4] =
                                            _mm_shuffle_ps(temp0_75, temp0_75, 0xff)
                                        float var_198[0x4] = temp0_92
                                        float temp0_96[0x4] =
                                            _mm_shuffle_ps(temp0_78, temp0_78, 0x55)
                                        float temp0_97[0x4] = _mm_add_ps(temp0_94, temp0_88)
                                        float temp0_98[0x4] = _mm_mul_ps(temp0_96, zmm8_1)
                                        float temp0_99[0x4] = _mm_mul_ps(temp0_95, temp0_49)
                                        float temp0_100[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0)
                                        float temp0_101[0x4] = _mm_add_ps(temp0_97, temp0_91)
                                        float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_45)
                                        float temp0_104[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_78, temp0_78, 0xaa), temp0_51)
                                        float temp0_105[0x4] = _mm_add_ps(temp0_101, temp0_99)
                                        float temp0_106[0x4] =
                                            _mm_shuffle_ps(temp0_78, temp0_78, 0xff)
                                        float temp0_107[0x4] = _mm_add_ps(temp0_98, temp0_102)
                                        float temp0_108[0x4] = _mm_mul_ps(temp0_106, temp0_49)
                                        float temp0_109[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0)
                                        int96_t var_188_1 = temp0_105[0].12
                                        float temp0_110[0x4] =
                                            _mm_shuffle_ps(temp0_81, temp0_81, 0x55)
                                        float temp0_111[0x4] = _mm_add_ps(temp0_107, temp0_104)
                                        float temp0_112[0x4] = _mm_mul_ps(temp0_110, zmm8_1)
                                        float temp0_114[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_81, temp0_81, 0xaa), temp0_51)
                                        float temp0_115[0x4] = _mm_mul_ps(temp0_109, temp0_45)
                                        float temp0_116[0x4] = _mm_add_ps(temp0_111, temp0_108)
                                        float temp0_118[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_81, temp0_81, 0xff), temp0_49)
                                        float temp0_119[0x4] = _mm_add_ps(temp0_112, temp0_115)
                                        int96_t var_178_1 = temp0_116[0].12
                                        int96_t var_168_1 = _mm_add_ps(
                                            _mm_add_ps(temp0_119, temp0_114), temp0_118)[0].12
                                        int512_t zmm9
                                        int128_t zmm11_1
                                        float zmm13_1[0x4]
                                        zmm9, zmm11_1, zmm13_1 = sub_1407740e0(&var_198, 0x322bcc77)
                                        uint32_t zmm0_2[0x4] = data_143f482c0
                                        float temp0_122[0x4] =
                                            _mm_cmpeq_ps(data_143f482d0, zmm13_1, 2)
                                        float zmm2_2[0x4] = var_198[0]
                                        float zmm1_2 = var_198[1]
                                        float zmm4_2[0x4] =
                                            _mm_and_ps(temp0_122, zmm0_2 ^ zmm11_1) ^ data_143f482c0
                                        zmm0_2 = var_198[2]
                                        zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                                        zmm1_2 = zmm1_2 * zmm4_2[0]
                                        zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
                                        var_198[0] = zmm2_2[0]
                                        float temp0_124[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                                        var_198[1] = zmm1_2
                                        zmm1_2 = var_188_1:4.d * temp0_124[0]
                                        var_198[2] = zmm0_2[0]
                                        zmm0_2 = var_188_1:8.d
                                        zmm0_2[0] = zmm0_2[0] f* temp0_124[0]
                                        float zmm3_2 = var_188_1.d * temp0_124[0]
                                        zmm2_2 = var_178_1.d
                                        float temp0_125[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                                        var_188_1:4.d = zmm1_2
                                        var_188_1:8.d = zmm0_2[0]
                                        zmm0_2 = var_178_1:8.d
                                        zmm1_2 = var_178_1:4.d * temp0_125[0]
                                        zmm0_2[0] = zmm0_2[0] f* temp0_125[0]
                                        zmm2_2[0] = zmm2_2[0] * temp0_125[0]
                                        var_178_1:4.d = zmm1_2
                                        var_178_1:8.d = zmm0_2[0]
                                        var_188_1.d = zmm3_2
                                        var_178_1.d = zmm2_2[0]
                                        sub_14077e4a0(&var_1d8, &var_198)
                                        arg5 = var_1d8.o
                                        float zmm5_2[0x4] = data_143f482b0
                                        float temp0_126[0x4] = _mm_mul_ps(arg5, arg5)
                                        var_1b8 = 0x322bcc77
                                        float var_138_1[0x4] = zmm13_1
                                        float temp0_128[0x4] = _mm_add_ps(temp0_126, 
                                            _mm_shuffle_ps(temp0_126, temp0_126, 0x4e))
                                        float temp0_130[0x4] = _mm_add_ps(
                                            _mm_shuffle_ps(temp0_128, temp0_128, 0x39), temp0_128)
                                        float temp0_131[0x4] = _mm_rsqrt_ps(temp0_130)
                                        float temp0_132[0x4] = _mm_mul_ps(temp0_130, zmm5_2)
                                        float temp0_137[0x4] = _mm_add_ps(
                                            _mm_mul_ps(
                                                _mm_sub_ps(zmm5_2, 
                                                    _mm_mul_ps(_mm_mul_ps(temp0_131, temp0_131), 
                                                        temp0_132)), 
                                                temp0_131), 
                                            temp0_131)
                                        float temp0_140[0x4] = _mm_sub_ps(zmm5_2, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_137, temp0_137), temp0_132))
                                        zmm0_1 = var_1b8
                                        float temp0_142[0x4] = _mm_cmpeq_ps(
                                            _mm_shuffle_ps(zmm0_1, zmm0_1, 0), temp0_130, 2)
                                        float temp0_144[0x4] =
                                            _mm_add_ps(_mm_mul_ps(temp0_140, temp0_137), temp0_137)
                                        float temp0_145[0x4] = _mm_unpacklo_ps(var_168_1:4.d, 0)
                                        zmm5_2 = _mm_and_ps(
                                            _mm_mul_ps(temp0_144, arg5) ^ data_143f482a0, temp0_142)
                                            ^ data_143f482a0
                                        var_148_1 = _mm_unpacklo_ps(
                                            _mm_unpacklo_ps(var_168_1.d, var_168_1:8.d[0].q), 
                                            temp0_145[0].q)
                                        var_158_1 = zmm5_2
                                        zmm9.o = arg7
                                
                                var_1c8.o = var_158_1
                                float var_1f0_2 = _mm_shuffle_ps(var_148_1, var_148_1, 0xaa)[0]
                                _mm_shuffle_ps(var_148_1, var_148_1, 0x55)
                                int64_t zmm6
                                uint128_t zmm7
                                zmm6, zmm7 = sub_140adf5d0(&var_1c8, &var_1a8)
                                var_1c8 = var_1a8
                                int32_t var_1a0
                                int32_t var_1c0_2 = var_1a0
                                var_1d8 = (_mm_unpacklo_ps(zmm7, zmm6)).q
                                float var_1d0_2 = var_1f0_2
                                var_228.q = 0
                                int512_t zmm6_1
                                int512_t zmm7_1
                                rax_28, zmm6_1, zmm7_1 =
                                    sub_1420e1940(arg1, rsi_1, &var_1d8, &var_1c8, var_228)
                                zmm7_1.o = var_68_1
                                zmm6_1.o = var_58_1
                            
                            if (r15_2 == 4 && rax_28 != 0)
                                result = nullptr
                            else
                                uint64_t rbx_3 = var_1e8
                                var_1b8 = *(arg4 + 0x2c)
                                int32_t rcx_26
                                rcx_26.b = rbx_3:4.d == 0
                                
                                if ((rcx_26.b & sub_140b5b8a0(rbx_3.d, 0)) != 0)
                                    sub_140d19010(r14_1, 
                                        NewObject with empty name can't be used to create default "
                                    "subobjects (inside of UObject derived class constructor) as it "
                                    "produces incon")
                                
                                int32_t var_220
                                var_220.q = rsi_1
                                var_228.d = 0
                                result = sub_140d2dfc0(arg2, r14_1, rbx_3, var_1b8, var_228, 
                                    var_220, 0, 0, 0)
                                data_143ddb408
                                int64_t r13_1 = sx.q(*(r14_1 + 0xa0))
                                int32_t rax_32 = (r13_1 + 1).d
                                *(r14_1 + 0xa0) = rax_32
                                
                                if (rax_32 s> *(r14_1 + 0xa4))
                                    sub_1405a4d70(r14_1 + 0x98)
                                
                                *(*(r14_1 + 0x98) + (r13_1 << 3)) = result
                                int64_t rbx_4 = sx.q(*(r14_1 + 0xb0))
                                int32_t rax_34 = (rbx_4 + 1).d
                                *(r14_1 + 0xb0) = rax_34
                                
                                if (rax_34 s> *(r14_1 + 0xb4))
                                    sub_1405a4d70(r14_1 + 0xa8)
                                
                                *(*(r14_1 + 0xa8) + (rbx_4 << 3)) = result
                                *(result + 0xf2) = r15_2
                                uint8_t rdx_17 = *(arg4 + 0x29)
                                var_220.b = rdx_17 u>> 1 & 1
                                sub_141dd1cf0(result, &var_128, arg4[2], arg4[3], rdx_17 & 1, 
                                    var_220.b, rdx_17 u>> 2 & 1)
                                int32_t rax_37 = *(result + 0xc)
                                void* const rax_44
                                
                                if (rax_37 s>= data_143e1d9b4)
                                    rax_44 = nullptr
                                else
                                    int16_t temp0_189
                                    int32_t temp1_1
                                    temp0_189:temp1_1 = sx.q(rax_37)
                                    uint32_t rdx_20 = zx.d(temp0_189)
                                    int32_t rax_39 = temp1_1 + rdx_20
                                    rax_44 = *(data_143e1d9a0 + (sx.q(rax_39 s>> 0x10) << 3))
                                        + sx.q(zx.d(rax_39.w) - rdx_20) * 0x18
                                
                                if (((*(rax_44 + 8) u>> 0x1d).b & 1) == 0
                                        || (*(arg4 + 0x29) & 2) != 0)
                                    sub_140cd8040(result, 0)
                                    r15_2 = 0
                                    *(arg1 + 0x2fc) += 1
                                    int32_t rax_47 = *(arg1 + 0x2f0)
                                    int32_t rcx_39 = *(arg1 + 0x2fc)
                                    int64_t rdi_1 = sx.q(rax_47 - 1)
                                    
                                    if (rax_47 - 1 s>= 0)
                                        int64_t rbx_6 = rdi_1 << 4
                                        int64_t temp3_1
                                        
                                        do
                                            int64_t rcx_40 = *(arg1 + 0x2e8)
                                            
                                            if (*(rbx_6 + rcx_40 + 8) == 0)
                                                r15_2 = 1
                                            else
                                                int64_t* rcx_41 = *(rbx_6 + rcx_40)
                                                
                                                if (rcx_41 == 0)
                                                    r15_2 = 1
                                                else if ((*(*rcx_41 + 0x50))(rcx_41, result) == 0)
                                                    r15_2 = 1
                                            
                                            rbx_6 -= 0x10
                                            temp3_1 = rdi_1
                                            rdi_1 -= 1
                                        while (temp3_1 - 1 s>= 0)
                                        rcx_39 = *(arg1 + 0x2fc)
                                    
                                    *(arg1 + 0x2fc) = rcx_39 - 1
                                    
                                    if (r15_2 != 0)
                                        sub_140599630(arg1 + 0x2e8, 0)
                                    
                                    sub_14242c0c0(arg1, result)
                                else
                                    result = nullptr
                    else
                        char rax_18 = *(arg4 + 0x2a)
                        
                        if (rax_18 == 3)
                            int64_t* rax_19 = sub_140b5e690(&var_1e8, &var_1a8)
                            int16_t* r15_3
                            
                            if (rax_19[1].d == 0)
                                r15_3 = &data_142d40450
                            else
                                r15_3 = *rax_19
                            
                            rbx_1 = rsi_1[2]
                            rax_13 = sub_140b58260(&var_1c8, r15_3, 1)
                            rcx_10 = &var_1d8
                        label_1420ef0d7:
                            int64_t* rax_14
                            rax_14, arg5, arg6, zmm8, arg7 =
                                sub_140d25240(rcx_10, r14_1, rbx_1, *rax_13)
                            var_1e8 = *rax_14
                            int64_t rcx_12 = var_1a8
                            
                            if (rcx_12 != 0)
                                sub_140a74f90(rcx_12)
                            
                            goto label_1420ef0fa
                        
                        if (rax_18 == 0)
                            int64_t* rax_20 = sub_140d21830(r14_1, &var_1c8, 0, 0)
                            int16_t* const r15_4 = &data_142d40450
                            int16_t* const rbx_2
                            
                            if (rax_20[1].d == 0)
                                rbx_2 = &data_142d40450
                            else
                                rbx_2 = *rax_20
                            
                            int64_t* rax_21 = sub_140b63b70(&var_1e8, &var_1a8)
                            
                            if (rax_21[1].d != 0)
                                r15_4 = *rax_21
                            
                            var_228.q = rbx_2
                            sub_140af98a0("Unknown", 0x199, 
                                An actor of name '%s' already exists in level '%s'.", r15_4)
                            int64_t rcx_18 = var_1a8
                            
                            if (rcx_18 != 0)
                                sub_140a74f90(rcx_18)
                            
                            int64_t rcx_19 = var_1c8
                            
                            if (rcx_19 != 0)
                                sub_140a74f90(rcx_19)
                            
                            sub_140afbb40()
                        
                        result = nullptr
                else
                    result = nullptr

sub_140b37f60("ActorSpawning")
__security_check_cookie(rax_1 ^ &var_248)
return result
