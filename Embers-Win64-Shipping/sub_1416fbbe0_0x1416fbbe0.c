// 函数: sub_1416fbbe0
// 地址: 0x1416fbbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t rdi = 0
void* rsi = arg5 + 0xf8
*(rsi + 0x38) = 0

if (*(rsi + 0x3c) s<= 0xffffffff)
    sub_141750700(rsi, 0)

float var_128[0x4]
float (* rax_2)[0x4]
int512_t zmm13
rax_2, zmm13 = sub_140ad7d70(arg2, &var_128, arg4)
zmm13.o = 0x3f800000
int32_t* var_1c8 = nullptr
int64_t var_178 = 0x3f800000
int32_t var_1d0 = 0
float var_158[0x4] = *rax_2
float zmm1[0x4] = rax_2[1]
float zmm0[0x4] = rax_2[2]
int32_t var_170 = 0
float var_1b8
float var_1a8
float var_198
float var_188
float result
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13_1[0x4]
float zmm14[0x4]
float zmm15[0x4]
result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14, zmm15 = sub_1415e9c60(arg3, 
    arg1, &var_158, &var_188, &var_198, &var_1a8, &var_1b8, 0, &var_178, var_1d0, var_1c8)

if (result.b != 0)
    float zmm5_1[0x4] = *arg4
    int32_t var_194
    float temp0_1[0x4] = _mm_unpacklo_ps(var_194, 0)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float var_58_1[0x4] = zmm6
    int32_t var_190
    float temp0_5[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_198, var_190[0].q), temp0_1[0].q), arg4[2])
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float var_68_1[0x4] = zmm7
    float var_88_1[0x4] = zmm9
    int32_t var_1b0
    zmm9 = var_1b0
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_2)
    float var_98_1[0x4] = zmm10
    float var_1b4
    zmm10 = var_1b4
    float var_a8_1[0x4] = zmm11
    zmm11 = var_1b8
    float temp0_12[0x4] = _mm_sub_ps(temp0_11, temp0_9)
    float var_b8_1[0x4] = zmm12
    float temp0_13[0x4] = _mm_unpacklo_ps(zmm11, zmm9[0].q)
    float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_15[0x4] = _mm_mul_ps(temp0_7, temp0_14)
    float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), temp0_6)
    float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xd2), temp0_2)
    float temp0_20[0x4] = _mm_add_ps(temp0_15, temp0_5)
    float temp0_23[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_19, temp0_17), temp0_20), arg4[1])
    float var_170_1 = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)[0]
    float temp0_26[0x4] = _mm_unpacklo_ps(temp0_23, _mm_shuffle_ps(temp0_23, temp0_23, 0x55)[0].q)
    float temp0_27[0x4] = _mm_unpacklo_ps(zmm10, 0)
    *(arg5 + 0x90) = temp0_26.q
    float temp0_28[0x4] = _mm_unpacklo_ps(temp0_13, temp0_27[0].q)
    *(arg5 + 0x98) = var_170_1
    zmm5_1 = *arg4
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
    float temp0_30[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_31[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_32[0x4] = _mm_mul_ps(temp0_29, temp0_31)
    float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_30)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_36[0x4] = _mm_sub_ps(temp0_34, temp0_32)
    float temp0_37[0x4] = _mm_add_ps(temp0_36, temp0_36)
    float temp0_38[0x4] = _mm_mul_ps(temp0_35, temp0_37)
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xd2)
    float temp0_41[0x4] = _mm_mul_ps(temp0_39, temp0_31)
    float temp0_42[0x4] = _mm_mul_ps(temp0_40, temp0_30)
    float temp0_43[0x4] = _mm_add_ps(temp0_38, temp0_28)
    float temp0_45[0x4] = _mm_add_ps(_mm_sub_ps(temp0_42, temp0_41), temp0_43)
    int32_t rdx_2 = 0
    int32_t* r9_1 = &var_1b4
    float result_3 = -nanf
    zmm5_1 = zx.o(0)
    float i = 0f
    float var_170_2 = _mm_shuffle_ps(temp0_45, temp0_45, 0xaa)[0]
    *(arg5 + 0x84) = (_mm_unpacklo_ps(temp0_45, _mm_shuffle_ps(temp0_45, temp0_45, 0x55)[0].q)).q
    *(arg5 + 0x9c) = (var_188 ^ data_142d3f780)[0]
    *(arg5 + 0x8c) = var_170_2
    zmm7 = data_143ef74d0
    float zmm0_1[0x4]
    float zmm1_1[0x4]
    float zmm4_1[0x4]
    
    do
        int32_t rcx_3 = rdx_2 + 1
        zmm0_1 = r9_1[1]
        zmm4_1 = _mm_and_ps(r9_1[-1], 0x7fffffff)
        zmm1_1 = *r9_1
        r9_1 = &r9_1[3]
        bool cond:0_1 = zmm4_1[0] <= zmm7[0]
        zmm1_1 = _mm_and_ps(zmm1_1, 0x7fffffff)
        zmm0_1 = _mm_and_ps(zmm0_1, 0x7fffffff)
        
        if (cond:0_1)
            rcx_3 = rdx_2
        
        float temp0_52[0x4] = _mm_max_ss(zmm4_1[0], zmm5_1[0])
        bool cond:1_1 = zmm1_1[0] <= zmm7[0]
        int32_t rax_5 = rcx_3 + 1
        float temp0_53[0x4] = _mm_max_ss(temp0_52[0], zmm1_1[0])
        
        if (cond:1_1)
            rax_5 = rcx_3
        
        float rcx_4 = i
        rdx_2 = rax_5 + 1
        
        if (zmm0_1[0] <= zmm7[0])
            rdx_2 = rax_5
        
        result = i i+ 1
        bool cond:3_1 = zmm4_1[0] <= zmm5_1[0]
        zmm5_1 = _mm_max_ss(zmm0_1[0], temp0_53[0])
        
        if (cond:3_1)
            rcx_4 = result_3
        
        result_3 = i i+ 2
        
        if (zmm1_1[0] <= temp0_52[0])
            result = rcx_4
        
        if (zmm0_1[0] <= temp0_53[0])
            result_3 = result
        
        i += 3
    while (i s< 3)
    
    if (result_3 != 0xffffffff)
        float temp0_57[0x4] = _mm_unpacklo_ps(
            _mm_unpacklo_ps(*(arg1 + 0x1c), (*(arg1 + 0x24))[0].q), 
            _mm_unpacklo_ps(*(arg1 + 0x20), zmm14[0].q)[0].q)
        float var_78_1[0x4] = zmm8
        zmm8 = var_158
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc9)
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xd2)
        float temp0_60[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
        float temp0_61[0x4] = _mm_mul_ps(temp0_58, temp0_60)
        float temp0_62[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        float temp0_64[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_59, temp0_62), temp0_61)
        float temp0_65[0x4] = _mm_add_ps(temp0_64, temp0_64)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xc9), temp0_60)
        float temp0_74[0x4] = _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xd2), temp0_62), temp0_67), 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xff), temp0_65), temp0_57))
        temp0_74[0] = temp0_74[0] * zmm11[0]
        float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0x55)
        float temp0_76[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xaa)
        temp0_75[0] = temp0_75[0] * zmm10[0]
        temp0_74[0] = temp0_74[0] + temp0_75[0]
        temp0_76[0] = temp0_76[0] * zmm9[0]
        temp0_74[0] = temp0_74[0] + temp0_76[0]
        result.b = zmm7[0] > temp0_74[0]
        
        if (rdx_2 != 3 && (rdx_2 != 2 || result.b != 0))
            temp0_75[0] = temp0_75[0] * zmm9[0]
            temp0_74[0] = temp0_74[0] * zmm9[0]
            temp0_75[0] = temp0_75[0] * zmm11[0]
            temp0_76[0] = temp0_76[0] * zmm10[0]
            temp0_76[0] = temp0_76[0] - temp0_75[0]
            temp0_76[0] = temp0_76[0] * zmm11[0]
            temp0_74[0] = temp0_74[0] - temp0_76[0]
            temp0_76[0] = temp0_76[0] * temp0_76[0]
            temp0_74[0] = temp0_74[0] * zmm10[0]
            temp0_76[0] = temp0_76[0] * temp0_74[0]
            temp0_75[0] = temp0_75[0] - temp0_74[0]
            temp0_74[0] = temp0_74[0] * temp0_74[0]
            temp0_75[0] = temp0_75[0] * temp0_76[0]
            temp0_75[0] = temp0_75[0] * temp0_75[0]
            temp0_74[0] = temp0_74[0] * temp0_75[0]
            temp0_75[0] = temp0_75[0] - temp0_74[0]
            temp0_76[0] = temp0_76[0] - temp0_75[0]
            temp0_74[0] = temp0_74[0] - temp0_76[0]
            temp0_75[0] = temp0_75[0] * temp0_75[0]
            temp0_76[0] = temp0_76[0] * temp0_76[0]
            temp0_74[0] = temp0_74[0] * temp0_74[0]
            temp0_74[0] = temp0_74[0] + temp0_76[0]
            temp0_74[0] = temp0_74[0] + temp0_75[0]
        
        int32_t var_1a4
        int32_t var_1a0
        
        if (rdx_2 == 3 || (rdx_2 == 2 && result.b == 0) || temp0_74[0] <= 9.99999994e-09f)
            zmm7 = var_1a8
            *(arg5 + 0xe0) = var_1b8.q
            *(arg5 + 0xec) = var_198.q
            float temp0_342[0x4] = __subps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, var_1a0[0].q), 
                    _mm_unpacklo_ps(var_1a4, zmm14[0].q)[0].q), 
                zmm1)
            float temp0_343[0x4] = _mm_rcp_ps(zmm0)
            *(arg5 + 0xe8) = var_1b0
            *(arg5 + 0xf4) = var_190
            *(arg5 + 0xd8) = 1
            *(arg5 + 0xdc) = 0xffffffff
            int64_t rbx_4 = sx.q(*(rsi + 0x38))
            float temp0_344[0x4] = __mulps_xmmps_memps(zmm8, data_143ef7590)
            zmm7 = __andps_xmmxud_memxud(temp0_342, data_143ef7300)
            int32_t rax_19 = (rbx_4 + 1).d
            float temp0_346[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_347[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
            float temp0_348[0x4] = _mm_shuffle_ps(temp0_344, temp0_344, 0xc9)
            float temp0_349[0x4] = _mm_shuffle_ps(temp0_344, temp0_344, 0xd2)
            float temp0_350[0x4] = _mm_mul_ps(temp0_346, temp0_349)
            *(rsi + 0x38) = rax_19
            float temp0_351[0x4] = _mm_mul_ps(temp0_347, temp0_348)
            float temp0_352[0x4] = _mm_shuffle_ps(temp0_344, temp0_344, 0xff)
            float temp0_353[0x4] = _mm_sub_ps(temp0_351, temp0_350)
            float temp0_354[0x4] = _mm_mul_ps(temp0_343, temp0_343)
            float temp0_355[0x4] = _mm_add_ps(temp0_343, temp0_343)
            float temp0_356[0x4] = _mm_add_ps(temp0_353, temp0_353)
            float temp0_357[0x4] = _mm_mul_ps(temp0_354, zmm0)
            float temp0_358[0x4] = _mm_mul_ps(temp0_352, temp0_356)
            float temp0_359[0x4] = _mm_sub_ps(temp0_355, temp0_357)
            float temp0_361[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_356, temp0_356, 0xd2), temp0_348)
            float temp0_362[0x4] = _mm_add_ps(temp0_358, zmm7)
            float temp0_363[0x4] = _mm_mul_ps(temp0_359, temp0_359)
            float temp0_364[0x4] = _mm_add_ps(temp0_359, temp0_359)
            float temp0_365[0x4] = _mm_mul_ps(temp0_363, zmm0)
            float temp0_367[0x4] = __cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(zmm0, data_143ef7580), data_143ef7570, 2)
            float temp0_368[0x4] = _mm_sub_ps(temp0_364, temp0_365)
            float temp0_371[0x4] = _mm_sub_ps(temp0_361, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_356, temp0_356, 0xc9), temp0_349))
            zmm6 = _mm_and_ps(temp0_367, temp0_368 ^ zx.o(0)) ^ temp0_368
            float temp0_374[0x4] = _mm_mul_ps(_mm_add_ps(temp0_371, temp0_362), zmm6)
            var_1b8 = temp0_374[0]
            float temp0_375[0x4] = _mm_shuffle_ps(temp0_374, temp0_374, 0x55)
            float result_2 = _mm_shuffle_ps(temp0_374, temp0_374, 0xaa)[0]
            var_1b4 = temp0_375[0]
            
            if (rax_19 s> *(rsi + 0x3c))
                sub_140775760(rsi, rbx_4.d)
            
            void* rax_20 = *(rsi + 0x30)
            int64_t rcx_19 = rbx_4 * 3
            
            if (rax_20 != 0)
                rsi = rax_20
            
            result = result_2
            *(rsi + (rcx_19 << 2)) = var_1b8.q
            *(rsi + (rcx_19 << 2) + 8) = result
        else
            zmm4_1 = 0x3f000000
            float var_e8_1[0x4] = zmm15
            float zmm3_1[0x4] = zx.o(0)
            int64_t result_4 = sx.q(result_3)
            zmm3_1[0] = temp0_74[0]
            float zmm2_1[0x4] = 0x3f000000
            float temp0_77[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            temp0_77[0] = temp0_77[0] * temp0_77[0]
            zmm3_1[0] = zmm3_1[0] * temp0_77[0]
            zmm2_1[0] = 0.5f - zmm3_1[0]
            temp0_77[0] = temp0_77[0] * zmm2_1[0]
            temp0_77[0] = temp0_77[0] + temp0_77[0]
            temp0_77[0] = temp0_77[0] * temp0_77[0]
            zmm3_1[0] = zmm3_1[0] * temp0_77[0]
            zmm4_1[0] = 0.5f - zmm3_1[0]
            temp0_77[0] = temp0_77[0] * zmm4_1[0]
            temp0_77[0] = temp0_77[0] + temp0_77[0]
            var_188 = temp0_77[0]
            temp0_77[0] = temp0_77[0] * temp0_76[0]
            temp0_77[0] = temp0_77[0] * temp0_74[0]
            temp0_77[0] = temp0_77[0] * temp0_75[0]
            float var_184_1 = temp0_77[0]
            float var_180_1 = temp0_77[0]
            var_178:4.d = temp0_77[0]
            var_178.d = temp0_77[0]
            float var_170_3 = temp0_77[0]
            int64_t* var_1f8
            
            if (rdx_2 == 1)
                zmm6 = var_1a8
                *(arg5 + 0xe0) = var_1b8.q
                *(arg5 + 0xec) = var_198.q
                float temp0_81[0x4] = __subps_xmmps_memps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, var_1a0[0].q), 
                        _mm_unpacklo_ps(var_1a4, zmm14[0].q)[0].q), 
                    zmm1)
                float temp0_82[0x4] = _mm_rcp_ps(zmm0)
                *(arg5 + 0xe8) = var_1b0
                *(arg5 + 0xf4) = var_190
                *(arg5 + 0xd8) = rdx_2
                *(arg5 + 0xdc) = 0xffffffff
                int64_t rbx_1 = sx.q(*(rsi + 0x38))
                float temp0_83[0x4] = __mulps_xmmps_memps(zmm8, data_143ef7590)
                zmm6 = __andps_xmmxud_memxud(temp0_81, data_143ef7300)
                int32_t rax_8 = (rbx_1 + 1).d
                float temp0_85[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                float temp0_86[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0xd2)
                float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_86)
                *(rsi + 0x38) = rax_8
                float temp0_88[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0xc9)
                float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_88)
                float temp0_91[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0xff)
                float temp0_92[0x4] = _mm_sub_ps(temp0_90, temp0_87)
                float temp0_93[0x4] = _mm_mul_ps(temp0_82, temp0_82)
                float temp0_94[0x4] = _mm_add_ps(temp0_82, temp0_82)
                float temp0_95[0x4] = _mm_add_ps(temp0_92, temp0_92)
                float temp0_96[0x4] = _mm_mul_ps(temp0_93, zmm0)
                float temp0_97[0x4] = _mm_mul_ps(temp0_91, temp0_95)
                float temp0_98[0x4] = _mm_sub_ps(temp0_94, temp0_96)
                float temp0_99[0x4] = _mm_add_ps(temp0_97, zmm6)
                float temp0_100[0x4] = _mm_mul_ps(temp0_98, temp0_98)
                float temp0_101[0x4] = _mm_add_ps(temp0_98, temp0_98)
                float temp0_102[0x4] = _mm_mul_ps(temp0_100, zmm0)
                float temp0_104[0x4] = __cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(zmm0, data_143ef7580), data_143ef7570, 2)
                float temp0_105[0x4] = _mm_sub_ps(temp0_101, temp0_102)
                float temp0_107[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xc9), temp0_86)
                float temp0_110[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xd2), temp0_88), temp0_107)
                zmm5_1 = _mm_and_ps(temp0_104, zx.o(0) ^ temp0_105) ^ temp0_105
                float temp0_113[0x4] = _mm_mul_ps(_mm_add_ps(temp0_110, temp0_99), zmm5_1)
                var_1b8 = temp0_113[0]
                float temp0_114[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0x55)
                float var_1b0_1 = _mm_shuffle_ps(temp0_113, temp0_113, 0xaa)[0]
                var_1b4 = temp0_114[0]
                
                if (rax_8 s> *(rsi + 0x3c))
                    sub_140775760(rsi, rbx_1.d)
                
                void* rax_9 = *(rsi + 0x30)
                int64_t rcx_6 = rbx_1 * 3
                void* rdx_4 = rsi
                
                if (rax_9 != 0)
                    rdx_4 = rax_9
                
                *(rdx_4 + (rcx_6 << 2)) = var_1b8.q
                *(rdx_4 + (rcx_6 << 2) + 8) = var_1b0_1
                zmm11 = var_158
                zmm0_1 = *(arg1 + 0x2c)
                zmm6 = *(arg1 + 0x14)
                zmm5_1 = *(arg1 + 0x10)
                zmm12 = zmm0
                temp0_77[0] = temp0_77[0] * zmm0_1[0]
                temp0_77[0] = temp0_77[0] * zmm0_1[0]
                temp0_77[0] = temp0_77[0] * zmm0_1[0]
                float temp0_116[0x4] = _mm_unpacklo_ps(zmm6, zmm14[0].q)
                float var_184_2 = temp0_77[0]
                float temp0_117[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xd2)
                float var_180_2 = temp0_77[0]
                zmm7 = *(arg1 + 0x18)
                zmm2_1 = var_180_2
                float temp0_120[0x4] = _mm_mul_ps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, zmm7[0].q), temp0_116[0].q), zmm12)
                float temp0_121[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
                float temp0_122[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                float temp0_123[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xc9)
                float temp0_124[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xd2)
                float temp0_125[0x4] = _mm_mul_ps(temp0_123, temp0_117)
                float temp0_127[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_124, temp0_121), temp0_125)
                float temp0_128[0x4] = _mm_add_ps(temp0_127, temp0_127)
                float temp0_129[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xc9)
                float temp0_130[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xd2)
                float temp0_131[0x4] = _mm_mul_ps(temp0_129, temp0_117)
                float temp0_132[0x4] = _mm_mul_ps(temp0_130, temp0_121)
                float temp0_133[0x4] = _mm_mul_ps(temp0_128, temp0_122)
                zmm3_1 = var_184_2
                float temp0_137[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_132, temp0_131), _mm_add_ps(temp0_133, temp0_120)), 
                    zmm1)
                zmm3_1[0] = zmm3_1[0] + temp0_137[0]
                float temp0_138[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0x55)
                zmm2_1[0] = zmm2_1[0] + temp0_138[0]
                float temp0_139[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xaa)
                temp0_77[0] = temp0_77[0] + temp0_139[0]
                var_198 = zmm3_1[0]
                float var_194_1 = zmm2_1[0]
                zmm2_1 = *(arg1 + 0x28)
                float var_190_1 = temp0_77[0]
                zmm2_1[0] = zmm2_1[0] f* *(arg1 + 0x20)
                zmm2_1[0] = zmm2_1[0] f* *(arg1 + 0x1c)
                zmm2_1[0] = zmm2_1[0] + zmm6[0]
                zmm6 = *(arg1 + 0x28)
                zmm6[0] = zmm6[0] f* *(arg1 + 0x24)
                zmm2_1[0] = zmm2_1[0] + zmm5_1[0]
                float temp0_140[0x4] = _mm_unpacklo_ps(zmm2_1, zmm14[0].q)
                zmm6[0] = zmm6[0] + zmm7[0]
                float temp0_143[0x4] = _mm_mul_ps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm2_1, zmm6[0].q), temp0_140[0].q), zmm12)
                float temp0_145[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0xc9), temp0_117)
                int64_t r14_1 = 0
                float temp0_148[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0xd2), temp0_121), temp0_145)
                float temp0_149[0x4] = _mm_add_ps(temp0_148, temp0_148)
                float temp0_150[0x4] = _mm_shuffle_ps(temp0_149, temp0_149, 0xd2)
                float temp0_151[0x4] = _mm_shuffle_ps(temp0_149, temp0_149, 0xc9)
                float temp0_152[0x4] = _mm_mul_ps(temp0_150, temp0_121)
                float temp0_153[0x4] = _mm_mul_ps(temp0_151, temp0_117)
                float temp0_154[0x4] = _mm_mul_ps(temp0_149, temp0_122)
                float temp0_158[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_152, temp0_153), _mm_add_ps(temp0_154, temp0_143)), 
                    zmm1)
                temp0_158[0] = temp0_158[0] + var_184_2
                float temp0_159[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0x55)
                temp0_159[0] = temp0_159[0] + var_180_2
                float temp0_160[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xaa)
                temp0_160[0] = temp0_160[0] + temp0_77[0]
                var_1b8 = temp0_158[0]
                var_1b4 = temp0_159[0]
                float var_1b0_2 = temp0_160[0]
                
                while (true)
                    if (r14_1 != result_4)
                        var_1f8.d = (*arg3)[r14_1 + 3][0]
                        char rax_10
                        float zmm7_1[0x4]
                        rax_10, zmm7_1 =
                            sub_141734630(&var_198, &var_1b8, rdi, zmm13_1[0], var_1f8.d)
                        var_1f8.d = (*arg3)[r14_1]
                        result, zmm6 = sub_141734630(&var_198, &var_1b8, rdi, zmm7_1[0], var_1f8.d)
                        
                        if (rax_10 == 0)
                            goto label_1416fc7f7
                        
                        if (result.b == 0)
                            goto label_1416fc7f7
                    
                    rdi += 1
                    r14_1 += 1
                    
                    if (rdi s>= 3)
                        zmm7 = var_1b8
                        zmm8 = var_1b4
                        zmm3_1 = var_198
                        zmm4_1 = var_194_1
                        zmm7[0] = zmm7[0] - zmm3_1[0]
                        zmm9 = var_1b0_2
                        zmm8[0] = zmm8[0] - zmm4_1[0]
                        zmm5_1 = var_190_1
                        zmm15 = var_1a8
                        zmm9[0] = zmm9[0] - zmm5_1[0]
                        zmm13_1 = var_1a4
                        zmm10 = var_1a0
                        zmm8[0] = zmm8[0] * zmm8[0]
                        zmm7[0] = zmm7[0] * zmm7[0]
                        zmm9[0] = zmm9[0] * zmm9[0]
                        zmm8[0] = zmm8[0] + zmm7[0]
                        zmm6[0] = zmm6[0] * zmm6[0]
                        zmm6[0] = zmm6[0] * 0.0100000007f
                        zmm8[0] = zmm8[0] + zmm9[0]
                        
                        if (not(zmm8[0] <= zmm6[0]))
                            zmm4_1[0] = zmm4_1[0] - zmm13_1[0]
                            zmm3_1[0] = zmm3_1[0] - zmm15[0]
                            zmm5_1[0] = zmm5_1[0] - zmm10[0]
                            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                            zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                            zmm4_1[0] = zmm4_1[0] + zmm3_1[0]
                            zmm4_1[0] = zmm4_1[0] + zmm5_1[0]
                        
                        if (zmm8[0] <= zmm6[0] || zmm4_1[0] <= zmm6[0])
                            result.b = 0
                        else
                            result.b = 1
                        
                        zmm8[0] = zmm8[0] - zmm13_1[0]
                        zmm7[0] = zmm7[0] - zmm15[0]
                        zmm9[0] = zmm9[0] - zmm10[0]
                        zmm8[0] = zmm8[0] * zmm8[0]
                        zmm7[0] = zmm7[0] * zmm7[0]
                        zmm9[0] = zmm9[0] * zmm9[0]
                        zmm8[0] = zmm8[0] + zmm7[0]
                        zmm8[0] = zmm8[0] + zmm9[0]
                        rdi.b = zmm8[0] > zmm6[0]
                        
                        if (result.b == 0)
                            zmm10 = zx.o(0)
                        else
                            float temp0_161[0x4] = __mulps_xmmps_memps(zmm11, data_143ef7590)
                            int64_t rbx_3 = sx.q(*(rsi + 0x38))
                            float temp0_162[0x4] = _mm_unpacklo_ps(zmm3_1, zmm5_1[0].q)
                            zmm10 = zx.o(0)
                            float temp0_163[0x4] = _mm_rcp_ps(zmm12)
                            int32_t rax_11 = (rbx_3 + 1).d
                            *(rsi + 0x38) = rax_11
                            float temp0_166[0x4] = __subps_xmmps_memps(
                                _mm_unpacklo_ps(temp0_162, 
                                    _mm_unpacklo_ps(zmm4_1, zmm14[0].q)[0].q), 
                                zmm1)
                            float temp0_167[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
                            float temp0_168[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
                            float temp0_169[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xff)
                            zmm5_1 = __andps_xmmxud_memxud(temp0_166, data_143ef7300)
                            float temp0_172[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), temp0_167)
                            float temp0_175[0x4] = _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), temp0_168), 
                                temp0_172)
                            float temp0_176[0x4] = _mm_mul_ps(temp0_163, temp0_163)
                            float temp0_177[0x4] = _mm_add_ps(temp0_163, temp0_163)
                            float temp0_178[0x4] = _mm_add_ps(temp0_175, temp0_175)
                            float temp0_179[0x4] = _mm_mul_ps(temp0_176, zmm12)
                            float temp0_180[0x4] = _mm_mul_ps(temp0_169, temp0_178)
                            float temp0_181[0x4] = _mm_sub_ps(temp0_177, temp0_179)
                            float temp0_182[0x4] = _mm_add_ps(temp0_180, zmm5_1)
                            float temp0_183[0x4] = _mm_mul_ps(temp0_181, temp0_181)
                            float temp0_184[0x4] = _mm_add_ps(temp0_181, temp0_181)
                            float temp0_185[0x4] = _mm_mul_ps(temp0_183, zmm12)
                            float temp0_187[0x4] = __cmpps_xmmps_memps_immb(
                                __andps_xmmxud_memxud(zmm12, data_143ef7580), data_143ef7570, 2)
                            float temp0_188[0x4] = _mm_sub_ps(temp0_184, temp0_185)
                            float temp0_190[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0xc9), temp0_167)
                            float temp0_193[0x4] = _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0xd2), temp0_168), 
                                temp0_190)
                            zmm12 = _mm_and_ps(temp0_187, zx.o(0) ^ temp0_188) ^ temp0_188
                            float temp0_196[0x4] =
                                _mm_mul_ps(_mm_add_ps(temp0_193, temp0_182), zmm12)
                            var_1b8 = temp0_196[0]
                            float temp0_197[0x4] = _mm_shuffle_ps(temp0_196, temp0_196, 0x55)
                            float result_1 = _mm_shuffle_ps(temp0_196, temp0_196, 0xaa)[0]
                            var_1b4 = temp0_197[0]
                            
                            if (rax_11 s> *(rsi + 0x3c))
                                sub_140775760(rsi, rbx_3.d)
                            
                            void* rax_12 = *(rsi + 0x30)
                            int64_t rcx_10 = rbx_3 * 3
                            
                            if (rax_12 != 0)
                                rsi = rax_12
                            
                            result = result_1
                            *(rsi + (rcx_10 << 2)) = var_1b8.q
                            *(rsi + (rcx_10 << 2) + 8) = result
                            zmm12 = zmm0
                            zmm11 = var_158
                        
                        if (rdi.b == 0)
                            goto label_1416fc7f7
                        
                        float temp0_199[0x4] = __mulps_xmmps_memps(zmm11, data_143ef7590)
                        float temp0_200[0x4] = _mm_rcp_ps(zmm12)
                        float temp0_201[0x4] = _mm_unpacklo_ps(zmm8, zmm14[0].q)
                        float temp0_202[0x4] = _mm_shuffle_ps(temp0_199, temp0_199, 0xc9)
                        float temp0_203[0x4] = _mm_shuffle_ps(temp0_199, temp0_199, 0xd2)
                        float temp0_206[0x4] = __subps_xmmps_memps(
                            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, zmm9[0].q), temp0_201[0].q), zmm1)
                        float temp0_207[0x4] = _mm_shuffle_ps(temp0_199, temp0_199, 0xff)
                        zmm6 = __andps_xmmxud_memxud(temp0_206, data_143ef7300)
                        float temp0_210[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_203)
                        float temp0_213[0x4] = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_202), temp0_210)
                        float temp0_214[0x4] = _mm_mul_ps(temp0_200, temp0_200)
                        float temp0_215[0x4] = _mm_add_ps(temp0_200, temp0_200)
                        float temp0_216[0x4] = _mm_add_ps(temp0_213, temp0_213)
                        float temp0_217[0x4] = _mm_mul_ps(temp0_214, zmm12)
                        float temp0_218[0x4] = _mm_mul_ps(temp0_207, temp0_216)
                        float temp0_219[0x4] = _mm_sub_ps(temp0_215, temp0_217)
                        float temp0_221[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_216, temp0_216, 0xd2), temp0_202)
                        float temp0_222[0x4] = _mm_add_ps(temp0_218, zmm6)
                        float temp0_223[0x4] = _mm_mul_ps(temp0_219, temp0_219)
                        float temp0_224[0x4] = _mm_add_ps(temp0_219, temp0_219)
                        float temp0_225[0x4] = _mm_mul_ps(temp0_223, zmm12)
                        float temp0_227[0x4] = __cmpps_xmmps_memps_immb(
                            __andps_xmmxud_memxud(zmm12, data_143ef7580), data_143ef7570, 2)
                        float temp0_228[0x4] = _mm_sub_ps(temp0_224, temp0_225)
                        float temp0_231[0x4] = _mm_sub_ps(temp0_221, 
                            _mm_mul_ps(_mm_shuffle_ps(temp0_216, temp0_216, 0xc9), temp0_203))
                        zmm12 = _mm_and_ps(temp0_227, temp0_228 ^ zmm10) ^ temp0_228
                        float temp0_234[0x4] = _mm_mul_ps(_mm_add_ps(temp0_231, temp0_222), zmm12)
                        float var_1b0_3 = _mm_shuffle_ps(temp0_234, temp0_234, 0xaa)[0]
                        var_178 = (_mm_unpacklo_ps(temp0_234, 
                            _mm_shuffle_ps(temp0_234, temp0_234, 0x55)[0].q)).q
                        float var_170_4 = var_1b0_3
                        break
                
                result = sub_14172f790(arg5, &var_178)
            else if (rdx_2 == 2 && result.b != 0)
                float temp0_238[0x4] = __mulps_xmmps_memps(zmm8, data_143ef7590)
                zmm5_1 = var_1a8
                float temp0_239[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
                float temp0_240[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xd2)
                float temp0_241[0x4] = _mm_shuffle_ps(temp0_238, temp0_238, 0xd2)
                float temp0_242[0x4] = _mm_mul_ps(temp0_239, temp0_241)
                float temp0_243[0x4] = _mm_shuffle_ps(temp0_238, temp0_238, 0xc9)
                float temp0_244[0x4] = _mm_mul_ps(temp0_240, temp0_243)
                float temp0_245[0x4] = _mm_unpacklo_ps(var_1a4, zmm14[0].q)
                float temp0_246[0x4] = _mm_shuffle_ps(temp0_238, temp0_238, 0xff)
                float temp0_247[0x4] = _mm_sub_ps(temp0_244, temp0_242)
                float temp0_248[0x4] = _mm_add_ps(temp0_247, temp0_247)
                float temp0_250[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_248, temp0_248, 0xc9), temp0_241)
                float temp0_256[0x4] = _mm_add_ps(
                    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_248, temp0_248, 0xd2), temp0_243), 
                        temp0_250), 
                    _mm_add_ps(_mm_mul_ps(temp0_246, temp0_248), temp0_28))
                float temp0_259[0x4] = __subps_xmmps_memps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, var_1a0[0].q), temp0_245[0].q), zmm1)
                float temp0_260[0x4] = _mm_rcp_ps(zmm0)
                zmm5_1 = __andps_xmmxud_memxud(temp0_259, data_143ef7300)
                float temp0_263[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), temp0_241)
                float temp0_266[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), temp0_243), temp0_263)
                float temp0_267[0x4] = _mm_mul_ps(temp0_260, temp0_260)
                float temp0_268[0x4] = _mm_add_ps(temp0_260, temp0_260)
                float temp0_269[0x4] = _mm_add_ps(temp0_266, temp0_266)
                float temp0_270[0x4] = _mm_mul_ps(temp0_267, zmm0)
                float temp0_271[0x4] = _mm_mul_ps(temp0_246, temp0_269)
                float temp0_272[0x4] = _mm_sub_ps(temp0_268, temp0_270)
                float temp0_273[0x4] = _mm_add_ps(temp0_271, zmm5_1)
                float temp0_274[0x4] = _mm_mul_ps(temp0_272, temp0_272)
                float temp0_275[0x4] = _mm_add_ps(temp0_272, temp0_272)
                float temp0_276[0x4] = _mm_mul_ps(temp0_274, zmm0)
                float temp0_278[0x4] = __cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(zmm0, data_143ef7580), data_143ef7570, 2)
                float temp0_279[0x4] = _mm_sub_ps(temp0_275, temp0_276)
                float temp0_281[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_269, temp0_269, 0xc9), temp0_241)
                float temp0_284[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_269, temp0_269, 0xd2), temp0_243), temp0_281)
                zmm3_1 = _mm_and_ps(temp0_278, temp0_279 ^ zx.o(0)) ^ temp0_279
                float temp0_286[0x4] = _mm_shuffle_ps(temp0_256, temp0_256, 0x55)
                float temp0_288[0x4] = _mm_mul_ps(_mm_add_ps(temp0_284, temp0_273), zmm3_1)
                float var_15c_1 = _mm_shuffle_ps(temp0_288, temp0_288, 0xaa)[0]
                float temp0_290[0x4] = _mm_shuffle_ps(temp0_288, temp0_288, 0x55)
                float temp0_291[0x4] = _mm_shuffle_ps(temp0_256, temp0_256, 0xaa)
                *(arg5 + 0xe0) =
                    (_mm_unpacklo_ps(temp0_256 ^ 0x80000000, (temp0_286 ^ 0x80000000)[0].q)).q
                float var_1a0_1 = (temp0_291 ^ 0x80000000)[0]
                float temp0_293[0x4] = _mm_unpacklo_ps(temp0_288, temp0_290[0].q)
                *(arg5 + 0xe8) = var_1a0_1
                *(arg5 + 0xec) = temp0_293.q
                *(arg5 + 0xf4) = var_15c_1
                *(arg5 + 0xd8) = 0
                *(arg5 + 0xdc) = 0xffffffff
                sub_14172f790(arg5, &var_198)
                float zmm0_3[0x4] = (&var_1b8)[result_4]
                zmm0_3[0] - zmm14[0]
                float var_168_1
                
                if (not(zmm0_3[0] <= zmm14[0]))
                    var_168_1 = zmm13_1[0]
                    zmm1_1 = (*arg3)[result_4 + 3]
                else if (zmm0_3[0] >= zmm14[0])
                    var_168_1 = zmm14[0]
                    zmm1_1 = (*arg3)[result_4 + 3]
                else
                    zmm1_1 = (*arg3)[result_4]
                    var_168_1 = -1f
                
                zmm13_1 = var_158
                float zmm4_2[0x4] = *(arg1 + 0x10)
                zmm6 = *(arg1 + 0x14)
                zmm7 = *(arg1 + 0x18)
                var_188 = zmm1_1[0]
                float temp0_297[0x4] = __mulps_xmmps_memps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_2, zmm7[0].q), 
                        _mm_unpacklo_ps(zmm6, zmm14[0].q)[0].q), 
                    zmm0)
                float temp0_298[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xc9)
                float temp0_299[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xd2)
                float temp0_300[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xff)
                float temp0_301[0x4] = _mm_shuffle_ps(temp0_297, temp0_297, 0xc9)
                float temp0_302[0x4] = _mm_shuffle_ps(temp0_297, temp0_297, 0xd2)
                float temp0_303[0x4] = _mm_mul_ps(temp0_301, temp0_299)
                float temp0_305[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_302, temp0_298), temp0_303)
                float temp0_306[0x4] = _mm_add_ps(temp0_305, temp0_305)
                float temp0_307[0x4] = _mm_shuffle_ps(temp0_306, temp0_306, 0xc9)
                float temp0_308[0x4] = _mm_shuffle_ps(temp0_306, temp0_306, 0xd2)
                float temp0_309[0x4] = _mm_mul_ps(temp0_307, temp0_299)
                float temp0_310[0x4] = _mm_mul_ps(temp0_306, temp0_300)
                float temp0_311[0x4] = _mm_mul_ps(temp0_308, temp0_298)
                float temp0_312[0x4] = _mm_add_ps(temp0_310, temp0_297)
                float temp0_313[0x4] = _mm_sub_ps(temp0_311, temp0_309)
                zmm0_3 = *(arg1 + 0x28)
                zmm0_3[0] = zmm0_3[0] f* *(arg1 + 0x24)
                zmm0_3[0] = zmm0_3[0] f* *(arg1 + 0x1c)
                zmm0_3[0] = zmm0_3[0] f* *(arg1 + 0x20)
                float temp0_314[0x4] = _mm_add_ps(temp0_313, temp0_312)
                zmm0_3[0] = zmm0_3[0] + zmm7[0]
                zmm0_3[0] = zmm0_3[0] + zmm4_2[0]
                zmm0_3[0] = zmm0_3[0] + zmm6[0]
                float temp0_315[0x4] = __addps_xmmps_memps(temp0_314, zmm1)
                float temp0_319[0x4] = __mulps_xmmps_memps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0_3, zmm0_3[0].q), 
                        _mm_unpacklo_ps(zmm0_3, 0)[0].q), 
                    zmm0)
                float temp0_320[0x4] = _mm_shuffle_ps(temp0_315, temp0_315, 0x55)
                float temp0_321[0x4] = _mm_shuffle_ps(temp0_315, temp0_315, 0xaa)
                var_1a8 = temp0_315[0]
                float var_1a4_1 = temp0_320[0]
                float temp0_322[0x4] = _mm_shuffle_ps(temp0_319, temp0_319, 0xc9)
                float temp0_323[0x4] = _mm_shuffle_ps(temp0_319, temp0_319, 0xd2)
                float temp0_324[0x4] = _mm_mul_ps(temp0_322, temp0_299)
                float temp0_325[0x4] = _mm_mul_ps(temp0_323, temp0_298)
                float var_1a0_2 = temp0_321[0]
                float temp0_326[0x4] = _mm_sub_ps(temp0_325, temp0_324)
                float temp0_327[0x4] = _mm_add_ps(temp0_326, temp0_326)
                float temp0_328[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xd2)
                float temp0_329[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xc9)
                float temp0_330[0x4] = _mm_mul_ps(temp0_328, temp0_298)
                float temp0_331[0x4] = _mm_mul_ps(temp0_329, temp0_299)
                float temp0_332[0x4] = _mm_mul_ps(temp0_327, temp0_300)
                float temp0_336[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_330, temp0_331), _mm_add_ps(temp0_332, temp0_319)), 
                    zmm1)
                var_1b8 = temp0_336[0]
                float temp0_337[0x4] = _mm_shuffle_ps(temp0_336, temp0_336, 0x55)
                var_1b4 = temp0_337[0]
                zmm8 = var_168_1
                zmm13_1 = var_188
                zmm8[0] = zmm8[0] f* *(&var_178 + (result_4 << 2))
                int64_t rsi_1 = 0
                zmm13_1[0] = zmm13_1[0] - (&var_1a8)[result_4]
                zmm9 = var_184_1
                zmm12 = var_180_1
                float temp0_338[0x4] = _mm_shuffle_ps(temp0_336, temp0_336, 0xaa)
                float var_1b0_4 = temp0_338[0]
                zmm13_1[0] = zmm13_1[0] - (&var_1b8)[result_4]
                zmm13_1[0] = zmm13_1[0] * zmm8[0]
                zmm13_1[0] = zmm13_1[0] / zmm8[0]
                zmm13_1[0] = zmm13_1[0] * zmm8[0]
                zmm9[0] = zmm9[0] * zmm13_1[0]
                zmm13_1[0] = zmm13_1[0] / zmm8[0]
                zmm12[0] = zmm12[0] * zmm13_1[0]
                temp0_315[0] = temp0_315[0] + zmm9[0]
                zmm9[0] = zmm9[0] * zmm13_1[0]
                zmm12[0] = zmm12[0] * zmm13_1[0]
                temp0_320[0] = temp0_320[0] + zmm12[0]
                temp0_336[0] = temp0_336[0] + zmm9[0]
                temp0_77[0] = temp0_77[0] * zmm13_1[0]
                temp0_337[0] = temp0_337[0] + zmm12[0]
                temp0_77[0] = temp0_77[0] * zmm13_1[0]
                temp0_321[0] = temp0_321[0] + temp0_77[0]
                var_1a8 = temp0_315[0]
                var_1b8 = temp0_336[0]
                temp0_338[0] = temp0_338[0] + temp0_77[0]
                var_1b4 = temp0_337[0]
                zmm6 = 0x3f800000
                float var_1a4_2 = temp0_320[0]
                float var_1a0_3 = temp0_321[0]
                float var_1b0_5 = temp0_338[0]
                
                while (true)
                    if (rsi_1 != result_4)
                        var_1f8.d = (*arg3)[rsi_1 + 3][0]
                        char rax_16
                        float zmm7_2[0x4]
                        rax_16, zmm7_2 = sub_141734630(&var_1a8, &var_1b8, rdi, zmm6[0], var_1f8.d)
                        var_1f8.d = (*arg3)[rsi_1]
                        result, zmm6 = sub_141734630(&var_1a8, &var_1b8, rdi, zmm7_2[0], var_1f8.d)
                        
                        if (rax_16 == 0)
                            goto label_1416fc7f7
                        
                        if (result.b == 0)
                            goto label_1416fc7f7
                    
                    rdi += 1
                    rsi_1 += 1
                    
                    if (rdi s>= 3)
                        float zmm5_2[0x4] = var_1b8
                        zmm3_1 = var_1b4
                        zmm7 = var_1a8
                        zmm4_2 = var_1a4_2
                        zmm5_2[0] = zmm5_2[0] - zmm7[0]
                        zmm6 = var_1b0_5
                        zmm3_1[0] = zmm3_1[0] - zmm4_2[0]
                        zmm8 = var_1a0_3
                        zmm9 = *(arg1 + 0x28)
                        zmm6[0] = zmm6[0] - zmm8[0]
                        zmm9[0] = zmm9[0] * zmm9[0]
                        zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                        zmm9[0] = zmm9[0] * 0.0100000007f
                        zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                        zmm6[0] = zmm6[0] * zmm6[0]
                        zmm3_1[0] = zmm3_1[0] + zmm5_2[0]
                        zmm1_1 = var_194
                        zmm3_1[0] = zmm3_1[0] + zmm6[0]
                        zmm0_3 = var_190
                        zmm2_1 = var_198
                        
                        if (not(zmm3_1[0] <= zmm9[0]))
                            zmm4_2[0] = zmm4_2[0] - zmm1_1[0]
                            zmm7[0] = zmm7[0] - zmm2_1[0]
                            zmm8[0] = zmm8[0] - zmm0_3[0]
                            zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                            zmm7[0] = zmm7[0] * zmm7[0]
                            zmm8[0] = zmm8[0] * zmm8[0]
                            zmm4_2[0] = zmm4_2[0] + zmm7[0]
                            zmm4_2[0] = zmm4_2[0] + zmm8[0]
                        
                        if (zmm3_1[0] <= zmm9[0] || zmm4_2[0] <= zmm9[0])
                            result.b = 0
                        else
                            result.b = 1
                        
                        zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
                        zmm5_2[0] = zmm5_2[0] - zmm2_1[0]
                        zmm6[0] = zmm6[0] - zmm0_3[0]
                        zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                        zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                        zmm6[0] = zmm6[0] * zmm6[0]
                        zmm3_1[0] = zmm3_1[0] + zmm5_2[0]
                        zmm3_1[0] = zmm3_1[0] + zmm6[0]
                        int128_t* rbx
                        rbx.b = zmm3_1[0] > zmm9[0]
                        
                        if (result.b != 0)
                            result = sub_14172f790(arg5, &var_1a8)
                        
                        if (rbx.b == 0)
                            goto label_1416fc7f7
                        
                        break
                
                result = sub_14172f790(arg5, &var_1b8)

label_1416fc7f7:
__security_check_cookie(rax_1 ^ &var_218)
return result
