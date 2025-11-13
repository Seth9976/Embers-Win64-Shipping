// 函数: sub_141aa9a70
// 地址: 0x141aa9a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t result = __security_cookie ^ &var_1c8
int64_t result_1 = result

if (not((*(arg1 + 0xe8)).d f== 0f))
    int32_t rax_1 = *(arg1 + 0xd0)
    int32_t rbx_1 = -1
    void* rsi_1 = *(arg2 + 0x18)
    float var_188
    float rdx
    
    if (rax_1 s>= 0)
        rdx = *(arg1 + 0xd4)
        var_188 = rdx
    else
        int32_t rcx = rax_1 * 2
        
        if ((rcx & 0xfffffffe) == 0xfffffffe)
            var_188 = -nanf
            rdx = -nanf
        else
            rdx = *(*(rsi_1 + 0x80) + (sx.q(rcx) s>> 1 << 2))
            var_188 = rdx
    
    int32_t rax_5 = *(arg1 + 0xe0)
    
    if (rax_5 s>= 0)
        rbx_1 = *(arg1 + 0xe4)
    else
        int32_t rcx_3 = rax_5 * 2
        
        if ((rcx_3 & 0xfffffffe) != 0xfffffffe)
            rbx_1 = *(*(rsi_1 + 0x80) + (sx.q(rcx_3) s>> 1 << 2))
    
    int64_t rsi_2 = *(rsi_1 + 0xa0)
    uint32_t rdi_1 = zx.d(*(arg1 + 0xec))
    float var_178[0x4] = *(rsi_2 + sx.q(rdx) * 0x30)
    float var_158
    float (* rax_10)[0x4]
    int32_t zmm6_1
    rax_10, zmm6_1 = sub_141abb9e0(arg2 + 8, &var_158, rbx_1)
    uint32_t var_168[0x4]
    sub_141ac7e70(arg1, &var_168, sx.q(rbx_1) * 0x30 + rsi_2, rax_10, rdi_1, zmm6_1, &var_178)
    float var_118[0x4]
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    uint32_t zmm11_1[0x4]
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    uint32_t zmm14_1[0x4]
    float zmm15_1[0x4]
    zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
        sub_141abb9e0(arg2 + 8, &var_118, var_188)
    uint32_t zmm0_1[0x4]
    uint32_t zmm1_1[0x4]
    float zmm2_1[0x4]
    uint32_t zmm3_1[0x4]
    uint32_t zmm4_1[0x4]
    
    if (*(arg1 + 0xed) == 0)
        zmm4_1 = var_168
    else
        zmm2_1 = var_118
        zmm3_1 = var_168
        zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
        zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b), zmm0_1)
        zmm1_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
        zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm3_1)
        zmm4_1 = __mulps_xmmps_memps(zmm4_1, data_143f2b850)
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
        zmm4_1 = _mm_add_ps(zmm4_1, zmm0_1)
        zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
        zmm3_1 = _mm_mul_ps(zmm3_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
        zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f2b840)
        zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f2b830)
        zmm4_1 = _mm_add_ps(_mm_add_ps(zmm4_1, zmm1_1), zmm3_1)
    
    void* rcx_11 = *(arg2 + 0x18)
    float var_58_1[0x4] = zmm7_1
    float var_68_1[0x4] = zmm8_1
    var_118 = zmm4_1
    int32_t var_184
    sub_141ea4020(rcx_11, &var_184, &var_188)
    int64_t rdx_5 = sx.q(var_184)
    float var_108[0x4]
    float var_f8[0x4]
    float zmm6_2[0x4]
    
    if (rdx_5.d == 0xffffffff)
        int64_t rbx_4 = sx.q(arg3[1].d)
        zmm6_2 = var_118
        var_158 = var_188
        int32_t rax_17 = (rbx_4 + 1).d
        arg3[1].d = rax_17
        
        if (rax_17 s> *(arg3 + 0xc))
            sub_1405c4fe0(arg3)
        
        result = *arg3
        int64_t rcx_23 = rbx_4 << 6
        *(rcx_23 + result) = var_158.o
        *(rcx_23 + result + 0x10) = zmm6_2
        *(rcx_23 + result + 0x20) = var_108
        *(rcx_23 + result + 0x30) = var_f8
    else
        float var_b8_1[0x4] = zmm13_1
        uint32_t var_c8_1[0x4] = zmm14_1
        float var_d8_1[0x4] = zmm15_1
        
        if (*(rdx_5 + *(arg2 + 0x20)) == 0)
            zmm9_1, zmm10_1, zmm11_1, zmm12_1 = sub_141a98300(arg2 + 8, rdx_5.d)
        
        zmm14_1 = var_f8
        uint32_t (* rcx_15)[0x4] = rdx_5 * 0x30 + *(arg2 + 8)
        zmm6_2 = rcx_15[2]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14_1, zmm6_2), data_143f2b8d0, 1)) == 0)
            zmm4_1 = *rcx_15
            zmm2_1 = var_118
            zmm3_1 = __mulps_xmmps_memps(zmm6_2, var_108)
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b)
            float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm0_1)
            zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            float temp0_155[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
            zmm0_1 = _mm_mul_ps(zmm2_1, temp0_155)
            float temp0_157[0x4] = __mulps_xmmps_memps(temp0_153, data_143f2b850)
            zmm13_1 = _mm_mul_ps(zmm6_2, zmm14_1)
            float temp0_159[0x4] = _mm_add_ps(temp0_157, zmm0_1)
            zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), 
                _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
            zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f2b840)
            float temp0_166[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
            zmm0_1 = __mulps_xmmps_memps(zmm0_1, data_143f2b830)
            float temp0_168[0x4] = _mm_add_ps(temp0_159, zmm1_1)
            zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
            float temp0_171[0x4] = _mm_mul_ps(temp0_166, zmm4_1)
            zmm6_2 = _mm_add_ps(temp0_168, zmm0_1)
            float temp0_175[0x4] =
                _mm_sub_ps(temp0_171, _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9), zmm1_1))
            float temp0_176[0x4] = _mm_add_ps(temp0_175, temp0_175)
            float temp0_177[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0xd2)
            zmm0_1 = _mm_shuffle_ps(temp0_176, temp0_176, 0xc9)
            float temp0_179[0x4] = _mm_mul_ps(temp0_177, zmm4_1)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm1_1)
            float temp0_181[0x4] = _mm_mul_ps(temp0_176, temp0_155)
            zmm7_1 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_179, zmm0_1), _mm_add_ps(temp0_181, zmm3_1)), rcx_15[1])
        else
            zmm1_1 = *rcx_15
            float var_78_1[0x4] = zmm9_1
            zmm9_1 = rcx_15[1]
            zmm3_1 = _mm_add_ps(zmm1_1, zmm1_1)
            zmm4_1 = zmm1_1
            float temp0_22[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
            float temp0_23[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
            zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
            zmm4_1 = _mm_mul_ps(zmm4_1, zmm3_1)
            float temp0_27[0x4] = _mm_mul_ps(temp0_23, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x29))
            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x12), zmm1_1)
            zmm0_1 =
                _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
            uint32_t var_98_1[0x4] = zmm11_1
            zmm11_1 = data_143f2b810
            _mm_mul_ps(zmm6_2, zmm14_1)
            zmm1_1 = _mm_sub_ps(zmm11_1, zmm0_1)
            float temp0_35[0x4] = _mm_add_ps(zmm3_1, temp0_27)
            float temp0_36[0x4] = _mm_sub_ps(temp0_27, zmm3_1)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm6_2)
            float temp0_38[0x4] = _mm_mul_ps(temp0_22, temp0_36)
            float temp0_39[0x4] = _mm_mul_ps(temp0_35, zmm6_2)
            uint32_t temp0_40[0x4] = __andps_xmmxud_memxud(zmm1_1, data_143f2b820)
            zmm0_1 = _mm_shuffle_ps(temp0_38, temp0_40, 0x32)
            float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_40, 0x10)
            float temp0_44[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_39, temp0_40, 0), zmm0_1, 0x82)
            float temp0_46[0x4] =
                _mm_shuffle_ps(temp0_42, _mm_shuffle_ps(temp0_39, temp0_40, 0x31), 0x88)
            float temp0_48[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_39, temp0_38, 0x12), temp0_40, 0xe8)
            zmm1_1 = var_118
            zmm11_1[0].q = zmm9_1 u>> 0x40
            zmm3_1 = _mm_add_ps(zmm1_1, zmm1_1)
            float temp0_50[0x4] = _mm_shuffle_ps(zmm9_1, zmm11_1, 0xc4)
            zmm4_1 = zmm1_1
            float temp0_51[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xc9)
            float temp0_52[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
            zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
            zmm4_1 = _mm_mul_ps(zmm4_1, zmm3_1)
            float temp0_56[0x4] = _mm_mul_ps(temp0_52, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x29))
            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x12), zmm1_1)
            zmm0_1 =
                _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
            float temp0_62[0x4] = _mm_add_ps(zmm3_1, temp0_56)
            float temp0_63[0x4] = _mm_sub_ps(temp0_56, zmm3_1)
            zmm1_1 = _mm_sub_ps(zmm11_1, zmm0_1)
            float temp0_65[0x4] = _mm_mul_ps(temp0_62, zmm14_1)
            float temp0_66[0x4] = _mm_mul_ps(temp0_51, temp0_63)
            uint32_t temp0_68[0x4] =
                __andps_xmmxud_memxud(_mm_mul_ps(zmm1_1, zmm14_1), data_143f2b820)
            zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_65, temp0_68, 0), 
                _mm_shuffle_ps(temp0_66, temp0_68, 0x32), 0x82)
            zmm4_1 = _mm_shuffle_ps(temp0_66, temp0_68, 0x10)
            float temp0_73[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            zmm4_1 = _mm_shuffle_ps(zmm4_1, _mm_shuffle_ps(temp0_65, temp0_68, 0x31), 0x88)
            float temp0_76[0x4] = _mm_mul_ps(temp0_73, temp0_46)
            float temp0_78[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_65, temp0_66, 0x12), temp0_68, 0xe8)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), temp0_48)
            zmm11_1[0].q = var_108 u>> 0x40
            float temp0_81[0x4] = _mm_shuffle_ps(var_108, zmm11_1, 0xc4)
            zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_50)
            float temp0_86[0x4] = _mm_add_ps(temp0_76, _mm_mul_ps(zmm0_1, temp0_44))
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), temp0_44)
            float temp0_89[0x4] = _mm_add_ps(temp0_86, zmm1_1)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), temp0_48)
            float temp0_92[0x4] = _mm_add_ps(temp0_89, zmm3_1)
            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), temp0_46)
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
            var_158.o = temp0_92
            float temp0_96[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x55)
            zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
            float temp0_98[0x4] = _mm_mul_ps(temp0_96, temp0_46)
            zmm4_1 = _mm_mul_ps(zmm4_1, temp0_50)
            zmm0_1 = _mm_shuffle_ps(temp0_78, temp0_78, 0)
            zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
            zmm0_1 = _mm_mul_ps(zmm0_1, temp0_44)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xaa), temp0_48)
            zmm3_1 = _mm_add_ps(zmm3_1, zmm4_1)
            float temp0_106[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xff)
            float temp0_107[0x4] = _mm_add_ps(temp0_98, zmm0_1)
            float temp0_108[0x4] = _mm_mul_ps(temp0_106, temp0_50)
            zmm0_1 = _mm_shuffle_ps(temp0_81, temp0_81, 0)
            int96_t var_148_1 = zmm3_1[0].12
            zmm3_1 = _mm_shuffle_ps(temp0_81, temp0_81, 0x55)
            float temp0_111[0x4] = _mm_add_ps(temp0_107, zmm1_1)
            zmm3_1 = _mm_mul_ps(zmm3_1, temp0_46)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0xaa), temp0_48)
            zmm0_1 = _mm_mul_ps(zmm0_1, temp0_44)
            float temp0_116[0x4] = _mm_add_ps(temp0_111, temp0_108)
            float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0xff), temp0_50)
            zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
            int96_t var_138_1 = temp0_116[0].12
            int96_t var_128_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), temp0_118)[0].12
            int512_t zmm9_2
            int512_t zmm10_2
            uint32_t zmm11_2[0x4]
            int512_t zmm12_2
            zmm9_2, zmm10_2, zmm11_2, zmm12_2, zmm13_1, zmm15_1 =
                sub_1407740e0(&var_158, 0x322bcc77)
            zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13_1, 2), data_143f2b8c0 ^ zmm11_2)
                ^ data_143f2b8c0
            float zmm2_2[0x4] = var_158
            int32_t var_150
            uint32_t zmm0_2[0x4] = var_150
            zmm2_2[0] = zmm2_2[0] * zmm15_1[0]
            float var_154
            float zmm1_2 = var_154 * zmm15_1[0]
            zmm0_2[0] = zmm0_2[0] f* zmm15_1[0]
            var_158 = zmm2_2[0]
            float temp0_124[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
            float var_154_1 = zmm1_2
            zmm1_2 = var_148_1:4.d * temp0_124[0]
            uint32_t var_150_1 = zmm0_2[0]
            zmm0_2 = var_148_1:8.d
            zmm0_2[0] = zmm0_2[0] f* temp0_124[0]
            float zmm3_2 = var_148_1.d * temp0_124[0]
            zmm2_2 = var_138_1.d
            var_148_1:4.d = zmm1_2
            var_148_1:8.d = zmm0_2[0]
            zmm0_2 = var_138_1:8.d
            float temp0_125[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
            zmm1_2 = var_138_1:4.d * temp0_125[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_125[0]
            zmm2_2[0] = zmm2_2[0] * temp0_125[0]
            var_138_1:4.d = zmm1_2
            var_138_1:8.d = zmm0_2[0]
            var_148_1.d = zmm3_2
            var_138_1.d = zmm2_2[0]
            sub_14077e4a0(&var_178, &var_158)
            float zmm5_2[0x4] = var_178
            zmm6_2 = data_143f2b8b0
            zmm12_2.o = zmm12_1
            zmm10_2.o = zmm10_1
            zmm9_2.o = var_78_1
            float temp0_126[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            float temp0_128[0x4] = _mm_add_ps(temp0_126, _mm_shuffle_ps(temp0_126, temp0_126, 0x4e))
            float temp0_130[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_128, temp0_128, 0x39), temp0_128)
            float temp0_131[0x4] = _mm_rsqrt_ps(temp0_130)
            float temp0_132[0x4] = _mm_mul_ps(temp0_130, zmm6_2)
            float temp0_137[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_131, temp0_131), temp0_132)), 
                    temp0_131), 
                temp0_131)
            float temp0_140[0x4] =
                _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_137, temp0_137), temp0_132))
            zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_130, 2)
            float temp0_144[0x4] = _mm_add_ps(_mm_mul_ps(temp0_140, temp0_137), temp0_137)
            float temp0_145[0x4] = _mm_unpacklo_ps(var_128_1:4.d, 0)
            zmm6_2 =
                _mm_and_ps(_mm_mul_ps(temp0_144, zmm5_2) ^ data_143f2b8a0, zmm0_1) ^ data_143f2b8a0
            zmm7_1 =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_128_1.d, var_128_1:8.d[0].q), temp0_145[0].q)
        
        int64_t rbx_3 = sx.q(arg3[1].d)
        var_158 = var_188
        int32_t rax_15 = (rbx_3 + 1).d
        arg3[1].d = rax_15
        
        if (rax_15 s> *(arg3 + 0xc))
            sub_1405c4fe0(arg3)
        
        result = *arg3
        uint32_t (* rcx_20)[0x4] = rbx_3 << 6
        *(rcx_20 + result) = var_158.o
        *(rcx_20 + result + 0x10) = zmm6_2
        *(rcx_20 + result + 0x20) = zmm7_1
        *(rcx_20 + result + 0x30) = zmm13_1

__security_check_cookie(result_1 ^ &var_1c8)
return result
