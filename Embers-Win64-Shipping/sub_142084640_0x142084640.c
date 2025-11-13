// 函数: sub_142084640
// 地址: 0x142084640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t rbx = sx.q(arg1[0x94].d)
void* rax_3 = (*(*arg1 + 0x690))()
int32_t* result

if (rax_3 == 0)
    int64_t rsi_2 = sx.q(arg1[0xa4].d)
    int32_t rax_17 = (rsi_2 + rbx).d
    arg1[0xa4].d = rax_17
    
    if (rax_17 s> *(arg1 + 0x524))
        sub_1405a4d70(&arg1[0xa3])
    
    result = memset(arg1[0xa3] + (rsi_2 << 3), 0, rbx << 3)
else
    void* rax_4 = arg1[0x15]
    
    if (rax_4 == 0)
        rax_4 = sub_141ee69e0(arg1)
    
    void* rax_5 = *(rax_4 + 0x1f8)
    
    if (sub_142217b60(&arg1[0x55]) == 0)
        sub_142222280(&arg1[0x55], rax_3 + 0x98, 0)
    
    result = zx.q(arg1[0xa4].d)
    
    if (rbx.d s> result.d)
        arg1[0xa4].d = rbx.d
        
        if (rbx.d s> *(arg1 + 0x524))
            result = sub_1405a4d70(&arg1[0xa3])
    else if (rbx.d s< result.d && rbx.d != result.d)
        arg1[0xa4].d = rbx.d
        result = sub_1405c53d0(&arg1[0xa3])
    
    int64_t var_1b0 = 0
    int64_t var_1a8_1 = 0
    
    if (rbx.d s> 0)
        result = sub_1405c5570(&var_1b0, rbx.d)
    
    int32_t* result_1 = nullptr
    int64_t var_198_1 = 0
    
    if (rbx.d s> 0)
        result = sub_1405a5220(&result_1, rbx.d)
    
    int32_t r15_1 = 0
    
    if (rbx.d s> 0)
        int64_t rsi_1 = 0
        data_143f47570
        
        do
            float var_188[0x4]
            float zmm6_1[0x4]
            uint32_t zmm12_1[0x4]
            uint32_t zmm13_1[0x4]
            int32_t zmm14_1
            zmm6_1, zmm12_1, zmm13_1, zmm14_1 =
                sub_1407c8dd0(&var_188, (sx.q(r15_1) << 6) + arg1[0x93])
            float zmm15_1[0x4] = data_143f47560
            float zmm5_1[0x4] = *(arg1 + 0x1e0)
            zmm15_1[0].q = zmm6_1 u>> 0x40
            float var_108[0x4] = _mm_shuffle_ps(zx.o(0), zmm15_1, 0xc4)
            float var_e8_1[0x4] = _mm_and_ps(zmm15_1, zmm12_1)
            float zmm1_1[0x4] = data_143f47880
            float var_168[0x4]
            float temp0_3[0x4] = _mm_min_ps(var_168, zmm5_1)
            float var_f8_1[0x4] = zmm6_1
            zmm6_1 = *(arg1 + 0x1c0)
            float var_148_1[0x4] = zmm1_1
            uint32_t var_f8_2[0x4]
            float zmm11_1[0x4]
            float var_178[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_3, zmm1_1, 1)) == 0)
                float zmm2_1[0x4] = var_188
                float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0), 
                    _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b))
                float temp0_138[0x4] = __mulps_xmmps_memps(zmm5_1, var_178)
                float temp0_139[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                float temp0_140[0x4] = __mulps_xmmps_memps(temp0_137, data_143f47840)
                float temp0_141[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                zmm11_1 = _mm_mul_ps(zmm5_1, var_168)
                float temp0_144[0x4] = _mm_add_ps(temp0_140, _mm_mul_ps(temp0_141, zmm2_1))
                float temp0_146[0x4] = _mm_mul_ps(temp0_139, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
                float temp0_149[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), 
                    _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
                float temp0_150[0x4] = __mulps_xmmps_memps(temp0_146, data_143f47830)
                float temp0_151[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
                float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f47820)
                float temp0_153[0x4] = _mm_add_ps(temp0_144, temp0_150)
                float temp0_154[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
                float temp0_155[0x4] = _mm_add_ps(temp0_153, temp0_152)
                float temp0_157[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xc9), temp0_151)
                var_108 = temp0_155
                float temp0_160[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xd2), temp0_154), temp0_157)
                float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
                float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
                float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
                float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_154)
                float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_151)
                float temp0_166[0x4] = _mm_mul_ps(temp0_161, temp0_141)
                var_f8_2 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_164, temp0_165), _mm_add_ps(temp0_166, temp0_138)), 
                    *(arg1 + 0x1d0))
            else
                float zmm8_1[0x4] = *(arg1 + 0x1d0)
                float temp0_6[0x4] = _mm_add_ps(zmm6_1, zmm6_1)
                _mm_mul_ps(zmm5_1, var_168)
                float temp0_8[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
                float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                float temp0_10[0x4] = _mm_mul_ps(zmm6_1, temp0_6)
                float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x29), temp0_8)
                float temp0_13[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x12)
                float temp0_16[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x1a), 
                    _mm_shuffle_ps(temp0_10, temp0_10, 1))
                float temp0_18[0x4] = _mm_mul_ps(temp0_13, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff))
                float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_12)
                float temp0_20[0x4] = _mm_sub_ps(temp0_12, temp0_18)
                float temp0_21[0x4] = _mm_mul_ps(temp0_19, zmm5_1)
                float temp0_22[0x4] = _mm_mul_ps(temp0_9, temp0_20)
                zmm1_1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm15_1, temp0_16), zmm5_1), zmm12_1)
                float temp0_26[0x4] = _mm_shuffle_ps(temp0_22, zmm1_1, 0x32)
                float temp0_28[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0), temp0_26, 0x82)
                float temp0_29[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x31)
                float temp0_31[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1_1, 0x10), temp0_29, 0x88)
                float temp0_33[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_22, 0x12), zmm1_1, 0xe8)
                zmm1_1 = var_188
                zmm15_1[0].q = zmm8_1 u>> 0x40
                float temp0_34[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
                float temp0_35[0x4] = _mm_shuffle_ps(zmm8_1, zmm15_1, 0xc4)
                float temp0_36[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                float temp0_37[0x4] = _mm_mul_ps(temp0_34, zmm1_1)
                float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x29), temp0_36)
                float temp0_40[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                float temp0_41[0x4] = _mm_shuffle_ps(var_168, var_168, 0xc9)
                float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x12), temp0_40)
                float temp0_44[0x4] = _mm_add_ps(temp0_43, temp0_39)
                float temp0_45[0x4] = _mm_sub_ps(temp0_39, temp0_43)
                float temp0_46[0x4] = _mm_mul_ps(temp0_44, var_168)
                float temp0_49[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                    _mm_shuffle_ps(temp0_37, temp0_37, 1))
                float temp0_50[0x4] = _mm_mul_ps(temp0_41, temp0_45)
                zmm1_1 =
                    _mm_and_ps(__mulps_xmmps_memps(_mm_sub_ps(zmm15_1, temp0_49), var_168), zmm12_1)
                float temp0_54[0x4] = _mm_shuffle_ps(temp0_50, zmm1_1, 0x32)
                float temp0_56[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_46, zmm1_1, 0), temp0_54, 0x82)
                float temp0_57[0x4] = _mm_shuffle_ps(temp0_46, zmm1_1, 0x31)
                float temp0_59[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1_1, 0x10), temp0_57, 0x88)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_46, temp0_50, 0x12)
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
                float temp0_62[0x4] = _mm_shuffle_ps(temp0_60, zmm1_1, 0xe8)
                float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_33)
                float temp0_65[0x4] = _mm_mul_ps(temp0_61, temp0_31)
                zmm15_1[0].q = var_178 u>> 0x40
                float temp0_66[0x4] = _mm_shuffle_ps(var_178, zmm15_1, 0xc4)
                float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
                float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_35)
                float temp0_71[0x4] = _mm_add_ps(temp0_65, _mm_mul_ps(temp0_67, temp0_28))
                float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_28)
                float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_64)
                float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_33)
                float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_69)
                float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), temp0_31)
                float temp0_80[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
                var_188 = temp0_77
                float temp0_81[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
                float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
                float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_31)
                float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_35)
                float temp0_85[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0)
                float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_76)
                float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_28)
                float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_33)
                float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
                float temp0_91[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
                float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
                float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_35)
                float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
                var_178 = temp0_90
                float temp0_95[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
                float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_89)
                float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_31)
                float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_33)
                float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_28)
                float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
                float temp0_103[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_35)
                var_168 = temp0_101
                int96_t var_158_1 = _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(temp0_97, temp0_100), temp0_99), temp0_103)[0].12
                int128_t zmm15_2
                zmm11_1, zmm13_1, zmm14_1, zmm15_2 = sub_1407740e0(&var_188, 0x322bcc77)
                float zmm2_2[0x4] = var_188[0]
                float zmm1_2 = var_188[1]
                float zmm4_2[0x4] =
                    _mm_and_ps(_mm_cmpeq_ps(var_148_1, zmm11_1, 2), data_143f47870 ^ zmm15_2)
                uint32_t zmm0_2[0x4] = var_188[2]
                zmm4_2 ^= data_143f47870
                zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                zmm1_2 = zmm1_2 * zmm4_2[0]
                float zmm3_2 = var_178[0]
                zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
                var_188[0] = zmm2_2[0]
                float temp0_109[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                var_188[2] = zmm0_2[0]
                zmm0_2 = var_178[2]
                zmm0_2[0] = zmm0_2[0] f* temp0_109[0]
                var_188[1] = zmm1_2
                zmm1_2 = var_178[1] * temp0_109[0]
                zmm3_2 = zmm3_2 * temp0_109[0]
                zmm2_2 = var_168[0]
                float temp0_110[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                var_178[2] = zmm0_2[0]
                zmm0_2 = var_168[2]
                var_178[1] = zmm1_2
                zmm1_2 = var_168[1]
                zmm0_2[0] = zmm0_2[0] f* temp0_110[0]
                zmm2_2[0] = zmm2_2[0] * temp0_110[0]
                zmm1_2 = zmm1_2 * temp0_110[0]
                var_168[2] = zmm0_2[0]
                var_178[0] = zmm3_2
                var_168[0] = zmm2_2[0]
                var_168[1] = zmm1_2
                uint32_t var_128[0x4]
                sub_14077e4a0(&var_128, &var_188)
                uint32_t zmm5_2[0x4] = var_128
                zmm6_1 = data_143f47860
                uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
                uint32_t zmm4_3[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
                zmm1_3 = _mm_rsqrt_ps(zmm4_3)
                uint32_t zmm3_3[0x4] = _mm_mul_ps(zmm4_3, zmm6_1)
                float temp0_122[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), zmm3_3)), 
                        zmm1_3), 
                    zmm1_3)
                float temp0_125[0x4] =
                    _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), zmm3_3))
                float temp0_127[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_3, 2)
                float temp0_129[0x4] = _mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122)
                float temp0_130[0x4] = _mm_unpacklo_ps(var_158_1:4.d, 0)
                zmm6_1 = _mm_and_ps(_mm_mul_ps(temp0_129, zmm5_2) ^ data_143f47850, temp0_127)
                    ^ data_143f47850
                var_f8_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_1.d, var_158_1:8.d[0].q), 
                    temp0_130[0].q)
                var_128 = zmm6_1
                var_108 = zmm6_1
            int96_t var_148_2 = zmm11_1[0].12
            
            if (_mm_and_ps(zmm11_1, zmm13_1)[0] f> zmm14_1)
            label_142084cf6:
                int32_t* rax_8 = j_sub_140a82f30(0x130)
                int32_t* rbx_1
                
                if (rax_8 == 0)
                    rbx_1 = nullptr
                else
                    rbx_1 = sub_14220ad50(rax_8)
                
                int64_t r14_1 = sx.q(var_1a8_1.d)
                int32_t rax_10 = (r14_1 + 1).d
                var_1a8_1.d = rax_10
                
                if (rax_10 s> var_1a8_1:4.d)
                    sub_1405a4d70(&var_1b0)
                
                *(var_1b0 + (r14_1 << 3)) = rbx_1
                *(arg1[0xa3] + (rsi_1 << 3)) = rbx_1
                j_sub_14220baf0(rbx_1, &arg1[0x55])
                rbx_1[3].b &= 0x6f
                *rbx_1 = r15_1
                
                if (*(arg1 + 0x14f) != 2)
                    int64_t rbx_2 = sx.q(var_198_1.d)
                    int32_t rax_14 = (rbx_2 + 1).d
                    var_198_1.d = rax_14
                    
                    if (rax_14 s> var_198_1:4.d)
                        sub_140638970(&result_1)
                    
                    result = result_1
                    int64_t rcx_17 = rbx_2 * 6
                    *(result + (rcx_17 << 3)) = var_108
                    *(result + (rcx_17 << 3) + 0x10) = var_f8_2
                    *(result + (rcx_17 << 3) + 0x20) = zmm11_1
                else
                    void var_118
                    sub_14220af60(&var_118, nullptr)
                    result = sub_142219250(rbx_1, rax_3, &var_108, arg1, rax_5, &var_118)
                
                data_143f47570
            else
                if (_mm_and_ps(var_148_2:4.d, zmm13_1)[0] f> zmm14_1)
                    goto label_142084cf6
                
                if (_mm_and_ps(var_148_2:8.d, zmm13_1)[0] f> zmm14_1)
                    goto label_142084cf6
                
                result = arg1[0xa3]
                *(result + (rsi_1 << 3)) = 0
            
            r15_1 += 1
            rsi_1 += 1
        while (rsi_1 s< rbx)
    
    if (var_1a8_1.d s> 0 && *(arg1 + 0x14f) != 2)
        void* rax_15 = arg1[0x15]
        
        if (rax_15 == 0)
            rax_15 = sub_141ee69e0(arg1)
        
        int64_t var_1c8_2 = *(rax_15 + 0x1f8)
        result = sub_14221aa10(&var_1b0, &result_1, rax_3, arg1)
    
    int32_t* result_2 = result_1
    
    if (result_2 != 0)
        result = sub_140a74f90(result_2)
    
    int64_t rcx_20 = var_1b0
    
    if (rcx_20 != 0)
        result = sub_140a74f90(rcx_20)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
