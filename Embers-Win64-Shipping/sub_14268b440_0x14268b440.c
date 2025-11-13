// 函数: sub_14268b440
// 地址: 0x14268b440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg4
float zmm10[0x4] = *(arg1 + 0xdc)
float zmm15[0x4] = *(arg1 + 0x148)
float arg_10 = zmm15[0]
float var_144 = zmm10[0]
int128_t zmm0

if ((*(arg2 + 0x4a) & 1) == 0)
    zmm0 = zx.o(0)
else
    zmm0 = *(arg1 + 0x140)

void* rax = *arg4
zmm10[0] = zmm10[0] f+ zmm0.d
int128_t zmm1 = *(rax + 0x20)
float var_210 = (*(rax + 0x14) ^ 0x80000000).d
float var_148 = zmm10[0]
int32_t var_20c = (*(rax + 0x1c) ^ 0x80000000).d
int32_t var_208 = (*(rax + 0x18)).d
int32_t var_204 = (zmm1 ^ 0x80000000).d
int32_t var_200 = (*(rax + 0x28) ^ 0x80000000).d
int32_t var_1fc = (*(rax + 0x24)).d
float var_108
sub_140acc6d0(&var_108, &var_210, 2)
float var_130
uint64_t* result = sub_140ae2c60(arg2 + 0x1c, &var_130, arg3)
int32_t var_124
float zmm1_1[0x4] = var_124
float zmm2[0x4] = var_130
zmm1_1[0] = zmm1_1[0] + zmm15[0]
int32_t var_12c
float zmm4[0x4] = var_12c
zmm2[0] = zmm2[0] - zmm15[0]
int32_t var_128
float zmm5[0x4] = var_128
zmm4[0] = zmm4[0] - zmm15[0]
int32_t var_120
float zmm3[0x4] = var_120
zmm5[0] = zmm5[0] - zmm10[0]
int32_t var_11c
float zmm7[0x4] = var_11c
zmm3[0] = zmm3[0] + zmm15[0]
float zmm0_1 = var_108
zmm7[0] = zmm7[0] + zmm10[0]
bool cond:1 = zmm0_1 > zmm1_1[0]
var_130 = zmm2[0]
float var_12c_1 = zmm4[0]
float var_128_1 = zmm5[0]
float var_124_1 = zmm1_1[0]
float var_120_1 = zmm3[0]
float var_11c_1 = zmm7[0]
float var_104
float var_100
int32_t var_fc
int32_t var_f8
int32_t var_f4

if (not(cond:1) && not(zmm2[0] f> var_fc) && not(var_104 > zmm3[0]) && not(zmm4[0] f> var_f8)
        && not(var_100 > zmm7[0]) && not(zmm5[0] f> var_f4))
    result = zx.q(*(arg2 + 0x48))
    int32_t* r14_2 = *r15 + 0x14
    float var_238
    float var_1e8
    
    if (result.b == 1)
        sub_141dc7d50(arg2, &var_238)
        zmm7 = arg3[2]
        zmm10[0] = zmm10[0] - zmm10[0]
        zmm4 = *arg3
        zmm5 = var_238
        zmm10[0] = zmm10[0] * 0.5f
        float temp0_18[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        int32_t var_234
        float temp0_19[0x4] = _mm_unpacklo_ps(var_234, zx.o(0)[0].q)
        float temp0_20[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        int32_t var_230
        float temp0_22[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, var_230[0].q), temp0_19[0].q)
        float temp0_23[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm7)
        float temp0_29[0x4] = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xd2), temp0_18), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xc9), temp0_20))
        float temp0_30[0x4] = _mm_add_ps(temp0_29, temp0_29)
        float temp0_31[0x4] = _mm_mul_ps(temp0_23, temp0_30)
        float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc9)
        float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0xd2), temp0_18)
        float temp0_35[0x4] = _mm_mul_ps(temp0_32, temp0_20)
        float temp0_36[0x4] = _mm_add_ps(temp0_31, temp0_24)
        float temp0_37[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        float temp0_38[0x4] = _mm_sub_ps(temp0_34, temp0_35)
        zmm3 = _mm_and_ps(temp0_37, 0x7fffffff)
        float temp0_40[0x4] = _mm_add_ps(temp0_38, temp0_36)
        float temp0_41[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
        zmm7 = _mm_and_ps(zmm7, 0x7fffffff)
        float temp0_43[0x4] = _mm_max_ss(zmm3[0], zmm7[0])
        zmm4 = _mm_and_ps(temp0_41, 0x7fffffff)
        int32_t var_228
        zmm4[0] = zmm4[0] f* var_228
        float temp0_45[0x4] = __addps_xmmps_memps(temp0_40, arg3[1])
        int32_t var_22c
        temp0_43[0] = temp0_43[0] f* var_22c
        var_238 = temp0_45[0]
        float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xaa)
        float temp0_47[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x55)
        temp0_46[0] = temp0_46[0] + zmm10[0]
        float var_234_1 = temp0_47[0]
        float var_1e0_2 = (temp0_47 ^ 0x80000000)[0]
        zmm10 = _mm_and_ps(zmm10, 0x7fffffff)
        zmm2 = *(arg1 + 0xd8)
        zmm10[0] = zmm10[0] + zmm10[0]
        temp0_43[0] = temp0_43[0] + zmm15[0]
        float var_230_2 = temp0_46[0]
        var_1e8 = (temp0_45 ^ 0x80000000)[0]
        float var_1e4_3 = temp0_46[0]
        zmm4[0] = zmm4[0] + zmm10[0]
        float var_22c_2 = temp0_43[0]
        float var_228_1 = zmm4[0]
        
        if (arg6 == 0)
            return sub_142628490(r15, r14_2, zmm2[0], *(arg1 + 0xdc), &var_1e8, temp0_43[0], 
                zmm4[0], arg5)
        
        return sub_142629540(r15, r14_2, zmm2[0], *(arg1 + 0xdc), &var_1e8, temp0_43[0], zmm4[0], 
            arg5, *arg6)
    
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int32_t var_1d0
    float var_1c8
    int32_t var_1c0
    int32_t var_1bc
    int32_t var_1b0
    int32_t var_1a4
    int32_t var_1a0
    int64_t var_188
    float var_160
    int32_t var_154
    int32_t var_150
    
    if (result.b == 2)
        sub_141dc6f70(arg2, &var_160)
        float zmm6_1[0x4] = var_160
        int32_t var_158
        zmm3 = var_158
        int32_t var_15c
        zmm5 = var_15c
        int32_t var_14c
        zmm3[0] = zmm3[0] f+ var_14c
        zmm3[0] = zmm3[0] f- var_14c
        char var_1f8_1 = 1
        zmm6_1[0] = zmm6_1[0] f- var_154
        zmm6_1[0] = zmm6_1[0] f+ var_154
        float var_138_2 = zmm3[0]
        zmm5[0] = zmm5[0] f- var_150
        zmm5[0] = zmm5[0] f+ var_150
        float var_208_1 = zmm3[0]
        var_210.q = (_mm_unpacklo_ps(zmm6_1, zmm5[0].q)).q
        var_204.q = (_mm_unpacklo_ps(zmm6_1, zmm5[0].q)).q
        float var_1fc_1 = var_138_2
        sub_140ae2c60(&var_210, &var_1b0, arg3)
        float zmm4_2[0x4] = var_1a4
        float zmm2_1[0x4] = var_1b0
        zmm4_2[0] = zmm4_2[0] + zmm15[0]
        zmm2_1[0] = zmm2_1[0] - zmm15[0]
        int32_t var_1ac
        uint128_t zmm1_2
        zmm1_2.d = var_1ac.d f- zmm15[0]
        int32_t var_19c
        float var_138_3 = var_19c[0]
        int64_t zmm3_1
        zmm3_1.d = var_1a0.d f+ zmm15[0]
        float var_1a8
        float zmm5_2 = var_1a8 - zmm10[0]
        float var_208_2 = var_1a8
        float temp0_14[0x4] = _mm_unpacklo_ps(zmm2_1, zmm1_2.q)
        var_204.q = (_mm_unpacklo_ps(zmm4_2, zmm3_1)).q
        float zmm0_5[0x4] = var_210.o
        float var_1fc_2 = var_138_3
        zmm1_2 = zx.o(var_200.q)
        zmm0_5[0].q = temp0_14.q
        var_1a0.q = zmm1_2.q
        var_210.o = zmm0_5
        zmm2_1 = zmm1_2
        var_1b0.o = zmm0_5
        int32_t var_198_1 = 1.d
        var_210 = (var_1b0 ^ 0x80000000)[0]
        int32_t var_208_3 = (var_1ac ^ 0x80000000).d
        float temp0_16[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
        temp0_16[0] = temp0_16[0] + zmm10[0]
        float var_204_1 = (var_1a4 ^ 0x80000000)[0]
        int32_t var_1fc_3 = (var_1a0 ^ 0x80000000).d
        float var_1a8_2 = zmm5_2
        float var_20c_1 = zmm5_2
        float var_19c_2 = temp0_16[0]
        float var_200_1 = temp0_16[0]
        sub_140acc6d0(&var_1d0, &var_210, 2)
        float zmm6_3[0x4] = var_1d0
        float zmm2_2[0x4] = var_1bc
        float zmm3_2[0x4] = var_1c0
        zmm2_2[0] = zmm2_2[0] - var_1c8
        int32_t var_1cc
        int64_t zmm5_3 = var_1cc
        zmm3_2[0] = zmm3_2[0] f- zmm5_3.d
        float var_1c4
        float zmm4_3 = var_1c4 - zmm6_3[0]
        zmm2_2[0] = zmm2_2[0] * 0.5f
        zmm3_2[0] = zmm3_2[0] * 0.5f
        zmm4_3 = zmm4_3 * 0.5f
        float zmm1_3 = var_1c8 + zmm2_2[0]
        zmm5_3.d = zmm5_3.d f+ zmm3_2[0]
        float var_1e4_2 = zmm3_2[0]
        zmm3_2 = *(arg1 + 0xdc)
        zmm6_3[0] = zmm6_3[0] + zmm4_3
        float var_1e0_1 = zmm2_2[0]
        zmm2_2 = *(arg1 + 0xd8)
        float var_180_1 = zmm1_3
        float temp0_17[0x4] = _mm_unpacklo_ps(zmm6_3, zmm5_3)
        var_1e8 = zmm4_3
        var_188 = temp0_17.q
        int32_t var_260
        
        if (arg6 == 0)
            var_260.q = &var_1e8
            result = sub_142627c10(r15, r14_2, zmm2_2, zmm3_2, &var_188, var_260, arg5)
        else
            var_260.q = &var_1e8
            result = sub_142628c10(r15, r14_2, zmm2_2, zmm3_2, &var_188, var_260, arg5, *arg6)
    else if (result.b u> 2 && result.b u<= 4)
        void* r13_1 = nullptr
        var_1d0.q = 0
        var_1c8.q = 0
        
        if (result.b != 4)
            result = sub_141dc7c90(arg2, &var_1d0)
        else
            result = sub_141dcb250(arg2, arg3, &var_1d0)
        
        int64_t rdi_1 = sx.q(var_1c8)
        uint64_t rbx_1 = 0
        var_238.q = 0
        void* rsi_1 = nullptr
        int32_t var_230_1 = 0
        int32_t var_22c_1 = 0
        float zmm0_2[0x4]
        
        if (rdi_1.d s>= 3)
            int64_t* r15_1 = var_1d0.q
            void* var_220 = nullptr
            int32_t var_218_1 = rdi_1.d
            int32_t var_214
            int32_t rdx_4
            
            if (rdi_1.d != 0)
                sub_1407c3650(&var_220, rdi_1.d, 0)
                r13_1 = var_220
                memcpy(r13_1, r15_1, (rdi_1 * 0xc).d)
                rdx_4 = var_214
                r15_1 = var_1d0.q
                rdi_1 = zx.q(var_218_1)
            else
                rdx_4 = 0
                var_214 = 0
            
            int32_t r14_3 = (rdi_1 + 1).d
            
            if (r14_3 s> rdx_4)
                sub_140638a00(&var_220)
                rdx_4 = var_214
                r13_1 = var_220
            
            int32_t r8_4 = r14_3 + 1
            int64_t rcx_6 = sx.q(rdi_1.d) * 3
            *(r13_1 + (rcx_6 << 2)) = *r15_1
            *(r13_1 + (rcx_6 << 2) + 8) = r15_1[1].d
            void* rdi_2 = var_1d0.q
            
            if (r8_4 s> rdx_4)
                sub_140638a00(&var_220)
                r13_1 = var_220
            
            float zmm12[0x4]
            float var_a8_1[0x4] = zmm12
            float zmm13[0x4]
            float var_b8_1[0x4] = zmm13
            float zmm14[0x4]
            float var_c8_1[0x4] = zmm14
            int64_t rcx_8 = sx.q(r14_3) * 3
            *(r13_1 + (rcx_8 << 2)) = *(rdi_2 + 0xc)
            *(r13_1 + (rcx_8 << 2) + 8) = *(rdi_2 + 0x14)
            result = zx.q(r8_4 - 2)
            int64_t rdx_9 = sx.q(result.d)
            
            if (result.d s> 0)
                float zmm5_1[0x4] = *(r13_1 + 0x14)
                void* result_4 = r13_1 + 0x14
                zmm12 = data_143dbb200
                result = result_4
                zmm13 = data_143dbb1fc
                int64_t rcx_9 = 0
                zmm14 = data_143dbb1f8
                float zmm4_1[0x4] = 0x3f800000
                zmm3 = 0x322bcc77
                
                while (true)
                    zmm7 = *(result - 0x14)
                    float zmm6_2[0x4] = zmm5_1
                    zmm8 = result[-2].d
                    float zmm11[0x4] = *(result - 0xc)
                    float zmm9[0x4] = result[-1].d
                    zmm11[0] = zmm11[0] - zmm6_2[0]
                    zmm10 = *(result - 4)
                    zmm7[0] = zmm7[0] - zmm9[0]
                    zmm8[0] = zmm8[0] - zmm10[0]
                    zmm11[0] = zmm11[0] * zmm11[0]
                    zmm7[0] = zmm7[0] * zmm7[0]
                    zmm8[0] = zmm8[0] * zmm8[0]
                    zmm8[0] = zmm8[0] + zmm7[0]
                    zmm8[0] = zmm8[0] + zmm11[0]
                    float arg_8
                    
                    if (not(zmm8[0] == zmm4_1[0]))
                        if (zmm8[0] >= zmm3[0])
                            zmm4_1 = 0x3f000000
                            float temp0_1[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
                            zmm2 = 0x3f000000
                            zmm8[0] = zmm8[0] * 0.5f
                            temp0_1[0] = temp0_1[0] * temp0_1[0]
                            zmm8[0] = zmm8[0] * temp0_1[0]
                            zmm2[0] = 0.5f - zmm8[0]
                            temp0_1[0] = temp0_1[0] * zmm2[0]
                            temp0_1[0] = temp0_1[0] + temp0_1[0]
                            temp0_1[0] = temp0_1[0] * temp0_1[0]
                            zmm8[0] = zmm8[0] * temp0_1[0]
                            zmm4_1[0] = 0.5f - zmm8[0]
                            zmm3 = 0x322bcc77
                            temp0_1[0] = temp0_1[0] * zmm4_1[0]
                            zmm4_1 = 0x3f800000
                            temp0_1[0] = temp0_1[0] + temp0_1[0]
                            arg_8 = temp0_1[0]
                            zmm7[0] = zmm7[0] * temp0_1[0]
                            zmm8[0] = zmm8[0] * temp0_1[0]
                            zmm11[0] = zmm11[0] * temp0_1[0]
                        else
                            zmm7 = zmm14
                            zmm8 = zmm13
                            zmm11 = zmm12
                    
                    zmm9[0] = zmm9[0] f- *(result + 4)
                    zmm10[0] = zmm10[0] f- result[1].d
                    zmm5_1 = *(result + 0xc)
                    zmm6_2[0] = zmm6_2[0] - zmm5_1[0]
                    arg_8 = zmm5_1[0]
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm10[0] = zmm10[0] * zmm10[0]
                    zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
                    zmm10[0] = zmm10[0] + zmm9[0]
                    zmm10[0] = zmm10[0] + zmm6_2[0]
                    
                    if (not(zmm10[0] == zmm4_1[0]))
                        if (zmm10[0] >= zmm3[0])
                            zmm4_1 = 0x3f000000
                            float temp0_2[0x4] = _mm_rsqrt_ss(zmm10[0], zmm10[0])
                            zmm2 = 0x3f000000
                            zmm10[0] = zmm10[0] * 0.5f
                            temp0_2[0] = temp0_2[0] * temp0_2[0]
                            zmm10[0] = zmm10[0] * temp0_2[0]
                            zmm2[0] = 0.5f - zmm10[0]
                            temp0_2[0] = temp0_2[0] * zmm2[0]
                            temp0_2[0] = temp0_2[0] + temp0_2[0]
                            temp0_2[0] = temp0_2[0] * temp0_2[0]
                            zmm10[0] = zmm10[0] * temp0_2[0]
                            zmm4_1[0] = 0.5f - zmm10[0]
                            temp0_2[0] = temp0_2[0] * zmm4_1[0]
                            zmm4_1 = 0x3f800000
                            temp0_2[0] = temp0_2[0] + temp0_2[0]
                            float var_190_1 = temp0_2[0]
                            zmm9[0] = zmm9[0] * temp0_2[0]
                            zmm10[0] = zmm10[0] * temp0_2[0]
                            zmm6_2[0] = zmm6_2[0] * temp0_2[0]
                            zmm5_1 = arg_8
                        else
                            zmm9 = zmm14
                            zmm10 = zmm13
                            zmm6_2 = zmm12
                    
                    zmm6_2[0] = zmm6_2[0] * zmm11[0]
                    zmm7[0] = zmm7[0] * 0.707106769f
                    zmm8[0] = zmm8[0] * -0.707106769f
                    zmm7[0] = zmm7[0] * 1.41421354f
                    zmm7[0] = zmm7[0] * 1.41421354f
                    zmm8[0] = zmm8[0] + zmm8[0]
                    zmm7[0] = zmm7[0] + zmm8[0]
                    zmm8[0] = zmm8[0] * 0.707106769f
                    zmm8[0] = zmm8[0] * 0.707106769f
                    zmm8[0] = zmm8[0] + zmm7[0]
                    zmm7[0] = zmm7[0] + zmm8[0]
                    zmm8[0] = zmm8[0] - zmm7[0]
                    zmm7[0] = zmm7[0] * zmm10[0]
                    zmm8[0] = zmm8[0] * zmm9[0]
                    zmm7[0] = zmm7[0] + zmm8[0]
                    zmm7[0] = zmm7[0] + zmm6_2[0]
                    zmm7[0] - 0f
                    
                    if (zmm7[0] < 0f)
                        zmm2 = 0xbf490fdb
                    else if (zmm7[0] > 0f)
                        zmm2 = 0x3f490fdb
                    else
                        zmm3 = 0x322bcc77
                        rcx_9 += 1
                        result += 0xc
                        
                        if (rcx_9 s>= rdx_9)
                            break
                        
                        continue
                    
                    bool cond:4_1 = zmm2[0] < 0f
                    zmm5_1 = 0x3f000000
                    zmm15[0] = zmm15[0] + zmm15[0]
                    zmm15[0] = zmm15[0] * zmm15[0]
                    float var_190_2 = zmm15[0]
                    zmm2[0] = zmm2[0] * 0.159154937f
                    
                    if (cond:4_1)
                        zmm2[0] = zmm2[0] - 0.5f
                    else
                        zmm2[0] = zmm2[0] + 0.5f
                    
                    float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(int.d(zmm2[0])))
                    temp0_3[0] = temp0_3[0] * 6.28318548f
                    zmm2[0] = zmm2[0] - temp0_3[0]
                    
                    if (not(zmm2[0] <= 1.57079637f))
                        zmm0_2 = 0x40490fdb
                        zmm3 = 0xbf800000
                        zmm0_2[0] = 3.14159274f - zmm2[0]
                        zmm2 = zmm0_2
                    else if (zmm2[0] >= -1.57079637f)
                        zmm3 = zmm4_1
                    else
                        zmm0_2 = 0xc0490fdb
                        zmm3 = 0xbf800000
                        zmm0_2[0] = -3.14159274f - zmm2[0]
                        zmm2 = zmm0_2
                    
                    zmm10 = 0x3638b88e
                    zmm7 = 0x37cfb4c2
                    zmm2[0] = zmm2[0] * zmm2[0]
                    zmm2[0] = zmm2[0] * 2.3889859e-08f
                    zmm10[0] = 2.75255616e-06f - zmm2[0]
                    zmm2[0] = zmm2[0] * 2.60516146e-07f
                    zmm10[0] = zmm10[0] * zmm2[0]
                    zmm7[0] = 2.47604949e-05f - zmm2[0]
                    zmm10[0] = zmm10[0] - 0.000198408743f
                    zmm7[0] = zmm7[0] * zmm2[0]
                    zmm10[0] = zmm10[0] * zmm2[0]
                    zmm7[0] = zmm7[0] - 0.00138883782f
                    zmm10[0] = zmm10[0] + 0.00833333097f
                    zmm7[0] = zmm7[0] * zmm2[0]
                    zmm10[0] = zmm10[0] * zmm2[0]
                    zmm7[0] = zmm7[0] + 0.0416666381f
                    zmm10[0] = zmm10[0] - 0.166666672f
                    zmm7[0] = zmm7[0] * zmm2[0]
                    zmm10[0] = zmm10[0] * zmm2[0]
                    zmm7[0] = zmm7[0] - 0.5f
                    zmm10[0] = zmm10[0] + zmm4_1[0]
                    zmm7[0] = zmm7[0] * zmm2[0]
                    zmm10[0] = zmm10[0] * zmm2[0]
                    zmm7[0] = zmm7[0] + zmm4_1[0]
                    zmm7[0] = zmm7[0] * zmm3[0]
                    arg_8 = zmm7[0]
                    
                    if (var_1c8 s> 0)
                        sub_140638cc0(&var_238, var_1c8)
                        zmm4_1 = 0x3f800000
                        zmm5_1 = 0x3f000000
                        zmm12 = data_143dbb200
                        zmm13 = data_143dbb1fc
                        zmm14 = data_143dbb1f8
                        rbx_1 = zx.q(var_230_1)
                        rsi_1 = var_238.q
                    
                    zmm0_2 = zx.o(var_1a0.q)
                    int64_t r15_2 = 0
                    zmm1_1 = var_1b0.o
                    
                    while (true)
                        zmm11 = *(result_4 - 8)
                        zmm15 = *(result_4 - 4)
                        
                        if (r15_2 s<= 0)
                            zmm0_2 = *(result_4 - 0x10)
                            zmm8 = *(result_4 - 0x14)
                            zmm9 = zmm0_2
                            zmm3 = 0x322bcc77
                            zmm9[0] = zmm9[0] - zmm15[0]
                            float var_1d8_1 = zmm0_2[0]
                            zmm0_2 = *(result_4 - 0xc)
                            zmm6_2 = zmm0_2
                            float var_1d4_1 = zmm0_2[0]
                            zmm6_2[0] = zmm6_2[0] f- *result_4
                            float var_1f0_1 = zmm8[0]
                            zmm8[0] = zmm8[0] - zmm11[0]
                            zmm9[0] = zmm9[0] * zmm9[0]
                            zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
                            zmm8[0] = zmm8[0] * zmm8[0]
                            zmm9[0] = zmm9[0] + zmm8[0]
                            zmm9[0] = zmm9[0] + zmm6_2[0]
                            
                            if (not(zmm9[0] == zmm4_1[0]))
                                if (zmm9[0] >= 9.99999994e-09f)
                                    float temp0_4[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
                                    zmm9[0] = zmm9[0] * zmm5_1[0]
                                    temp0_4[0] = temp0_4[0] * temp0_4[0]
                                    zmm9[0] = zmm9[0] * temp0_4[0]
                                    zmm5_1[0] = zmm5_1[0] - zmm9[0]
                                    temp0_4[0] = temp0_4[0] * zmm5_1[0]
                                    temp0_4[0] = temp0_4[0] + temp0_4[0]
                                    temp0_4[0] = temp0_4[0] * temp0_4[0]
                                    zmm9[0] = zmm9[0] * temp0_4[0]
                                    zmm5_1[0] = zmm5_1[0] - zmm9[0]
                                    zmm3 = 0x322bcc77
                                    temp0_4[0] = temp0_4[0] * zmm5_1[0]
                                    zmm4_1 = 0x3f800000
                                    temp0_4[0] = temp0_4[0] + temp0_4[0]
                                    temp0_4[0] = temp0_4[0] * zmm8[0]
                                    temp0_4[0] = temp0_4[0] * zmm9[0]
                                    temp0_4[0] = temp0_4[0] * zmm6_2[0]
                                    zmm8 = temp0_4
                                    zmm9 = temp0_4
                                    zmm6_2 = temp0_4
                                else
                                    zmm8 = zmm14
                                    zmm9 = zmm13
                                    zmm6_2 = zmm12
                            
                            zmm9[0] = zmm9[0] * zmm10[0]
                            zmm10[0] = zmm10[0] + zmm10[0]
                            zmm2 = zmm9 ^ data_142d3f780
                            zmm10[0] = zmm10[0] * zmm8[0]
                            zmm2[0] = zmm2[0] + zmm2[0]
                            zmm10[0] = zmm10[0] * zmm10[0]
                            zmm7[0] = zmm7[0] * zmm2[0]
                            zmm7[0] = zmm7[0] + zmm8[0]
                            zmm8 = arg_8
                            zmm8[0] = zmm8[0] * zmm10[0]
                            zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
                            zmm7[0] = zmm7[0] - zmm10[0]
                            zmm10[0] = zmm10[0] * zmm2[0]
                            zmm8[0] = zmm8[0] + zmm9[0]
                            zmm8[0] = zmm8[0] + zmm10[0]
                            zmm7[0] = zmm7[0] * zmm7[0]
                            zmm8[0] = zmm8[0] * zmm8[0]
                            zmm7[0] = zmm7[0] + zmm8[0]
                            zmm7[0] = zmm7[0] + zmm6_2[0]
                            
                            if (not(zmm7[0] == zmm4_1[0]))
                                if (zmm7[0] >= zmm3[0])
                                    zmm4_1 = 0x3f000000
                                    float temp0_5[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                                    zmm2 = 0x3f000000
                                    zmm7[0] = zmm7[0] * 0.5f
                                    temp0_5[0] = temp0_5[0] * temp0_5[0]
                                    zmm7[0] = zmm7[0] * temp0_5[0]
                                    zmm2[0] = 0.5f - zmm7[0]
                                    temp0_5[0] = temp0_5[0] * zmm2[0]
                                    temp0_5[0] = temp0_5[0] + temp0_5[0]
                                    temp0_5[0] = temp0_5[0] * temp0_5[0]
                                    zmm7[0] = zmm7[0] * temp0_5[0]
                                    zmm4_1[0] = 0.5f - zmm7[0]
                                    temp0_5[0] = temp0_5[0] * zmm4_1[0]
                                    temp0_5[0] = temp0_5[0] + temp0_5[0]
                                    temp0_5[0] = temp0_5[0] * zmm7[0]
                                    temp0_5[0] = temp0_5[0] * zmm8[0]
                                    temp0_5[0] = temp0_5[0] * zmm6_2[0]
                                    zmm7 = temp0_5
                                    zmm8 = temp0_5
                                    zmm6_2 = temp0_5
                                else
                                    zmm7 = zmm14
                                    zmm8 = zmm13
                                    zmm6_2 = zmm12
                            
                            zmm0_2 = arg_10
                            zmm1_1 = var_1d8_1
                            zmm4_1 = *result_4
                            zmm5_1 = var_1d4_1
                            zmm7[0] = zmm7[0] * zmm0_2[0]
                            zmm8[0] = zmm8[0] * zmm0_2[0]
                            zmm6_2[0] = zmm6_2[0] * zmm0_2[0]
                            zmm11[0] = zmm11[0] + zmm7[0]
                            zmm1_1[0] = zmm1_1[0] + zmm8[0]
                            zmm15[0] = zmm15[0] + zmm8[0]
                            zmm5_1[0] = zmm5_1[0] + zmm6_2[0]
                            zmm6_2[0] = zmm6_2[0] + zmm4_1[0]
                            float var_e0_1 = zmm5_1[0]
                            float var_138_1 = zmm6_2[0]
                            zmm0_2 = var_1f0_1
                            zmm0_2[0] = zmm0_2[0] + zmm7[0]
                            float var_1a8_1 = var_e0_1
                            zmm7 = arg_8
                            float var_19c_1 = var_138_1
                            float temp0_6[0x4] = _mm_unpacklo_ps(zmm0_2, zmm1_1[0].q)
                            var_1a4.q = (_mm_unpacklo_ps(zmm11, zmm15[0].q)).q
                            zmm0_2 = var_1b0.o
                            zmm0_2[0].q = temp0_6.q
                            var_1b0.o = zmm0_2
                            var_210.o = zmm0_2
                            zmm0_2 = zx.o(var_1a0.q)
                        else
                            zmm4_1 = *result_4
                            var_210.o = zmm1_1
                        
                        zmm5_1 = 0x3f800000
                        zmm8 = zmm11
                        zmm8[0] = zmm8[0] f- *(result_4 + 4)
                        zmm3 = 0x322bcc77
                        zmm9 = zmm15
                        zmm9[0] = zmm9[0] f- *(result_4 + 8)
                        zmm6_2 = zmm4_1
                        var_200.q = zmm0_2.q
                        zmm6_2[0] = zmm6_2[0] f- *(result_4 + 0xc)
                        zmm8[0] = zmm8[0] * zmm8[0]
                        zmm9[0] = zmm9[0] * zmm9[0]
                        zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
                        zmm9[0] = zmm9[0] + zmm8[0]
                        zmm9[0] = zmm9[0] + zmm6_2[0]
                        
                        if (not(zmm9[0] == 1f))
                            if (zmm9[0] >= 9.99999994e-09f)
                                zmm4_1 = 0x3f000000
                                float temp0_8[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
                                zmm2 = 0x3f000000
                                zmm9[0] = zmm9[0] * 0.5f
                                temp0_8[0] = temp0_8[0] * temp0_8[0]
                                zmm9[0] = zmm9[0] * temp0_8[0]
                                zmm2[0] = 0.5f - zmm9[0]
                                temp0_8[0] = temp0_8[0] * zmm2[0]
                                temp0_8[0] = temp0_8[0] + temp0_8[0]
                                temp0_8[0] = temp0_8[0] * temp0_8[0]
                                zmm9[0] = zmm9[0] * temp0_8[0]
                                zmm4_1[0] = 0.5f - zmm9[0]
                                zmm3 = 0x322bcc77
                                temp0_8[0] = temp0_8[0] * zmm4_1[0]
                                temp0_8[0] = temp0_8[0] + temp0_8[0]
                                zmm8[0] = zmm8[0] * temp0_8[0]
                                zmm9[0] = zmm9[0] * temp0_8[0]
                                zmm6_2[0] = zmm6_2[0] * temp0_8[0]
                                zmm5_1 = 0x3f800000
                            else
                                zmm8 = zmm14
                                zmm9 = zmm13
                                zmm6_2 = zmm12
                        
                        zmm9[0] = zmm9[0] * zmm10[0]
                        zmm10[0] = zmm10[0] + zmm10[0]
                        zmm2 = zmm9 ^ data_142d3f780
                        zmm10[0] = zmm10[0] * zmm8[0]
                        zmm2[0] = zmm2[0] + zmm2[0]
                        zmm10[0] = zmm10[0] * zmm10[0]
                        zmm7[0] = zmm7[0] * zmm2[0]
                        zmm7[0] = zmm7[0] + zmm8[0]
                        zmm8 = arg_8
                        zmm8[0] = zmm8[0] * zmm10[0]
                        zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
                        zmm7[0] = zmm7[0] - zmm10[0]
                        zmm10[0] = zmm10[0] * zmm2[0]
                        zmm8[0] = zmm8[0] + zmm9[0]
                        zmm8[0] = zmm8[0] + zmm10[0]
                        zmm7[0] = zmm7[0] * zmm7[0]
                        zmm8[0] = zmm8[0] * zmm8[0]
                        zmm8[0] = zmm8[0] + zmm7[0]
                        zmm8[0] = zmm8[0] + zmm6_2[0]
                        
                        if (not(zmm8[0] == zmm5_1[0]))
                            if (zmm8[0] >= zmm3[0])
                                zmm4_1 = 0x3f000000
                                float temp0_9[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
                                zmm2 = 0x3f000000
                                zmm8[0] = zmm8[0] * 0.5f
                                temp0_9[0] = temp0_9[0] * temp0_9[0]
                                zmm8[0] = zmm8[0] * temp0_9[0]
                                zmm2[0] = 0.5f - zmm8[0]
                                temp0_9[0] = temp0_9[0] * zmm2[0]
                                temp0_9[0] = temp0_9[0] + temp0_9[0]
                                temp0_9[0] = temp0_9[0] * temp0_9[0]
                                zmm8[0] = zmm8[0] * temp0_9[0]
                                zmm4_1[0] = 0.5f - zmm8[0]
                                temp0_9[0] = temp0_9[0] * zmm4_1[0]
                                temp0_9[0] = temp0_9[0] + temp0_9[0]
                                zmm7[0] = zmm7[0] * temp0_9[0]
                                temp0_9[0] = temp0_9[0] * zmm8[0]
                                zmm6_2[0] = zmm6_2[0] * temp0_9[0]
                                zmm5_1 = 0x3f800000
                                zmm8 = temp0_9
                            else
                                zmm7 = zmm14
                                zmm8 = zmm13
                                zmm6_2 = zmm12
                        
                        zmm9 = arg_10
                        zmm6_2[0] = zmm6_2[0] * zmm9[0]
                        zmm7[0] = zmm7[0] * zmm9[0]
                        zmm8[0] = zmm8[0] * zmm9[0]
                        zmm6_2[0] = zmm6_2[0] f+ *(result_4 + 0xc)
                        zmm2 = zmm7
                        zmm11[0] = zmm11[0] + zmm7[0]
                        zmm2[0] = zmm2[0] f+ *(result_4 + 4)
                        zmm7 = var_204
                        zmm15[0] = zmm15[0] + zmm8[0]
                        zmm7[0] = zmm7[0] - var_210
                        float var_218_4 = zmm6_2[0]
                        zmm1_1 = zmm8
                        zmm1_1[0] = zmm1_1[0] f+ *(result_4 + 8)
                        zmm8 = *result_4
                        zmm8[0] = zmm8[0] + zmm6_2[0]
                        var_160 = zmm11[0]
                        zmm6_2 = var_200
                        zmm6_2[0] = zmm6_2[0] f- var_20c
                        float var_15c_1 = zmm15[0]
                        float var_14c_1 = var_218_4
                        float var_1d8_2 = zmm8[0]
                        float var_158_1 = zmm8[0]
                        var_154.q = (_mm_unpacklo_ps(zmm2, zmm1_1[0].q)).q
                        zmm11[0] = zmm11[0] - zmm2[0]
                        zmm15[0] = zmm15[0] - zmm1_1[0]
                        float var_1d4_2 = zmm11[0]
                        float var_1f0_2 = zmm15[0]
                        zmm6_2[0] = zmm6_2[0] * zmm11[0]
                        zmm7[0] = zmm7[0] * var_1f0_2
                        zmm6_2[0] = zmm6_2[0] - zmm7[0]
                        int64_t r14_4
                        
                        if (zmm6_2[0] == 0f)
                            float var_178_2 = zmm14[0]
                            float var_174_2 = zmm13[0]
                            float var_170_1 = zmm12[0]
                        label_14268c436:
                            r14_4 = sx.q(rbx_1.d)
                            var_1e8 = zmm11[0]
                            float var_1e4_1 = zmm15[0]
                            float result_1 = var_1d8_2[0]
                            rbx_1 = zx.q((r14_4 + 1).d)
                            var_230_1 = rbx_1.d
                            
                            if (rbx_1.d s> var_22c_1)
                                sub_140638a00(&var_238)
                                rbx_1 = zx.q(var_230_1)
                                rsi_1 = var_238.q
                            
                            zmm0_2 = zx.o(var_1e8.q)
                            result = zx.q(result_1)
                        else
                            zmm15[0] = zmm15[0] f- var_20c
                            zmm11[0] = zmm11[0] - var_210
                            zmm15[0] = zmm15[0] * var_1d4_2
                            zmm11[0] = zmm11[0] * var_1f0_2
                            zmm15[0] = zmm15[0] - zmm11[0]
                            zmm15[0] = zmm15[0] / zmm6_2[0]
                            zmm2 = var_1fc
                            zmm2[0] = zmm2[0] f- var_208
                            zmm7[0] = zmm7[0] * zmm15[0]
                            zmm6_2[0] = zmm6_2[0] * zmm15[0]
                            zmm7[0] = zmm7[0] + var_210
                            zmm2[0] = zmm2[0] * zmm15[0]
                            zmm6_2[0] = zmm6_2[0] f+ var_20c
                            bool cond:5_1 = zmm7[0] != zmm14[0]
                            zmm2[0] = zmm2[0] f+ var_208
                            float var_178_1 = zmm7[0]
                            float var_174_1 = zmm6_2[0]
                            float result_3 = zmm2[0]
                            
                            if (not(cond:5_1) && not(zmm6_2[0] != zmm13[0]) && zmm2[0] == zmm12[0])
                                goto label_14268c436
                            
                            zmm7[0] = zmm7[0] - zmm11[0]
                            zmm6_2[0] = zmm6_2[0] - zmm15[0]
                            zmm2[0] = zmm2[0] - zmm8[0]
                            zmm7[0] = zmm7[0] * zmm7[0]
                            zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
                            zmm6_2[0] = zmm6_2[0] + zmm7[0]
                            
                            if (zmm6_2[0] <= var_190_2)
                                r14_4 = sx.q(rbx_1.d)
                                rbx_1 = zx.q((r14_4 + 1).d)
                                var_230_1 = rbx_1.d
                                
                                if (rbx_1.d s> var_22c_1)
                                    sub_140638a00(&var_238)
                                    rbx_1 = zx.q(var_230_1)
                                    rsi_1 = var_238.q
                                
                                zmm0_2 = zx.o(var_178_1.q)
                                result = zx.q(result_3)
                            else
                                if (zmm6_2[0] != zmm5_1[0])
                                    if (zmm6_2[0] >= 9.99999994e-09f)
                                        zmm4_1 = 0x3f000000
                                        float temp0_11[0x4] = _mm_rsqrt_ss(zmm6_2[0], zmm6_2[0])
                                        zmm2 = 0x3f000000
                                        zmm6_2[0] = zmm6_2[0] * 0.5f
                                        temp0_11[0] = temp0_11[0] * temp0_11[0]
                                        zmm6_2[0] = zmm6_2[0] * temp0_11[0]
                                        zmm2[0] = 0.5f - zmm6_2[0]
                                        temp0_11[0] = temp0_11[0] * zmm2[0]
                                        temp0_11[0] = temp0_11[0] + temp0_11[0]
                                        temp0_11[0] = temp0_11[0] * temp0_11[0]
                                        zmm6_2[0] = zmm6_2[0] * temp0_11[0]
                                        zmm4_1[0] = 0.5f - zmm6_2[0]
                                        temp0_11[0] = temp0_11[0] * zmm4_1[0]
                                        temp0_11[0] = temp0_11[0] + temp0_11[0]
                                        zmm7[0] = zmm7[0] * temp0_11[0]
                                        zmm6_2[0] = zmm6_2[0] * temp0_11[0]
                                        zmm2 = zx.o(0)
                                    else
                                        zmm7 = zmm14
                                        zmm6_2 = zmm13
                                        zmm2 = zmm12
                                else if (not(zmm2[0] == zx.o(0)[0]))
                                    zmm2 = zx.o(0)
                                
                                zmm7[0] = zmm7[0] * zmm9[0]
                                r14_4 = sx.q(rbx_1.d)
                                zmm6_2[0] = zmm6_2[0] * zmm9[0]
                                zmm2[0] = zmm2[0] * zmm9[0]
                                rbx_1 = zx.q((r14_4 + 1).d)
                                zmm7[0] = zmm7[0] * 1.41419995f
                                var_230_1 = rbx_1.d
                                zmm6_2[0] = zmm6_2[0] * 1.41419995f
                                zmm7[0] = zmm7[0] + zmm11[0]
                                zmm2[0] = zmm2[0] * 1.41419995f
                                zmm6_2[0] = zmm6_2[0] + zmm15[0]
                                zmm2[0] = zmm2[0] + zmm8[0]
                                var_188.d = zmm7[0]
                                var_188:4.d = zmm6_2[0]
                                float result_2 = zmm2[0]
                                
                                if (rbx_1.d s> var_22c_1)
                                    sub_140638a00(&var_238)
                                    rbx_1 = zx.q(var_230_1)
                                    rsi_1 = var_238.q
                                
                                zmm0_2 = zx.o(var_188)
                                result = zx.q(result_2)
                        
                        zmm1_1 = var_160.o
                        int64_t rcx_19 = r14_4 * 3
                        r15_2 += 1
                        *(rsi_1 + (rcx_19 << 2)) = zmm0_2.q
                        result_4 += 0xc
                        zmm0_2 = zx.o(var_150.q)
                        *(rsi_1 + (rcx_19 << 2) + 8) = result.d
                        
                        if (r15_2 s>= rdx_9)
                            break
                        
                        zmm12 = data_143dbb200
                        zmm13 = data_143dbb1fc
                        zmm14 = data_143dbb1f8
                        zmm7 = arg_8
                        zmm4_1 = 0x3f800000
                        zmm5_1 = 0x3f000000
                    
                    break
            
            if (r13_1 != 0)
                result = sub_140a74f90(r13_1)
            
            r15 = arg4
        
        zmm0_2 = var_1c0
        zmm1_1 = var_1bc
        zmm0_2[0] = zmm0_2[0] - var_148
        zmm1_1[0] = zmm1_1[0] + var_144
        float var_1c0_1 = zmm0_2[0]
        float var_1bc_1 = zmm1_1[0]
        
        if (rbx_1.d != 0)
            var_238.q = 0
            var_230_1.q = 0
            sub_141c56710(&var_238, (rbx_1 * 3).d)
            int128_t* rdi_3 = var_238.q
            int128_t* rax_5 = rdi_3
            
            if (rbx_1.d s> 0)
                void* rcx_12 = rsi_1 + 4
                uint64_t i_1 = zx.q(rbx_1.d)
                uint64_t i
                
                do
                    rax_5 += 0xc
                    float zmm0_3 = *(rcx_12 + 4)
                    zmm2 = *rcx_12 ^ 0x80000000
                    *(rax_5 - 0xc) = (*(rcx_12 - 4) ^ 0x80000000)[0]
                    rcx_12 += 0xc
                    *(rax_5 - 8) = zmm0_3
                    *(rax_5 - 4) = zmm2[0]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            zmm1_1 = var_1c0_1
            zmm3 = *(arg1 + 0xdc)
            zmm2 = *(arg1 + 0xd8)
            char var_250
            
            if (arg6 == 0)
                var_250.d = var_1bc_1
                result =
                    sub_142627f00(r15, r14_2, zmm2, zmm3, rdi_3, rbx_1.d, zmm1_1[0], var_250, arg5)
            else
                var_250.d = var_1bc_1
                result = sub_142628f50(r15, r14_2, zmm2[0], zmm3[0], rdi_3, rbx_1.d, zmm1_1[0], 
                    var_250, arg5, *arg6)
            
            if (rdi_3 != 0)
                result = sub_140a74f90(rdi_3)
        
        if (rsi_1 != 0)
            result = sub_140a74f90(rsi_1)
        
        int64_t rcx_23 = var_1d0.q
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)

return result
