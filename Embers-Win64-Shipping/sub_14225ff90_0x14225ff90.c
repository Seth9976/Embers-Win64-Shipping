// 函数: sub_14225ff90
// 地址: 0x14225ff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
uint64_t var_d8 = __security_cookie ^ &var_248
int32_t var_1e8 = arg2.d
uint64_t result

if (data_143f526f0 != 0)
    result.b = 0
else if (sub_142222800(arg3, arg2).b == 0)
    result.b = 0
else if (sub_14221b2f0(arg3).b == 0)
    result.b = 0
else
    float var_118[0x4] = *arg4
    float zmm13[0x4] = arg4[2]
    int72_t var_e8_1 = arg4[3][0].9
    float zmm14[0x4] = arg4[1]
    float zmm15[0x4]
    float var_c8_1[0x4] = zmm15
    float temp0_1[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
    arg2.o = zmm14
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    arg2.o = _mm_shuffle_ps(arg2.o, zmm14, 0xaa)
    arg2.d = arg2.d f* arg2.d
    zmm14[0] = zmm14[0] + temp0_1[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xff)
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    zmm14[0] = zmm14[0] f+ arg2.d
    zmm14[0] = zmm14[0] + temp0_3[0]
    
    if (sub_142222800(arg3, arg2).b == 0)
        result.b = 1
    else if (sub_14221b2f0(arg3).b == 0 || zmm14[0] < 9.99999975e-05f)
        result.b = 1
    else
        zmm15 = 0x3f800000
        zmm14[0] = zmm14[0] - 1f
        
        if (__andps_xmmxud_memxud(zmm14, data_142d3f770)[0] > 9.99999975e-05f)
            result.b = 1
        else
            float zmm7[0x4] = data_143a2f2d4
            
            if (not(zmm7[0] >= 0f))
                zmm7 = *arg5
            
            float zmm6[0x4] = data_143a2f2d8
            
            if (not(zmm6[0] > 0f))
                zmm6 = *(arg5 + 4)
            
            int128_t zmm0_2 = data_143a2f2dc
            int32_t var_220_1 = zmm0_2.d
            
            if (not(zmm0_2.d f>= 0f))
                var_220_1 = (*(arg5 + 8)).d
            
            arg2.o = data_143a2f2e0
            int32_t var_218_1 = arg2.d
            
            if (not(arg2.d f>= 0f))
                var_218_1 = (*(arg5 + 0xc)).d
            
            zmm0_2 = data_143a2f2f4
            int32_t var_21c_1 = zmm0_2.d
            
            if (not(zmm0_2.d f>= 0f))
                var_21c_1 = arg5[1].d.d
            
            arg2.o = data_143a2f2e4
            int32_t var_1e0_1 = arg2.d
            
            if (not(arg2.d f>= 0f))
                var_1e0_1 = (*(arg5 + 0x28)).d
            
            zmm0_2 = data_143a2f2e8
            int32_t var_1f0_1 = zmm0_2.d
            
            if (not(zmm0_2.d f>= 0f))
                var_1f0_1 = (*(arg5 + 0x2c)).d
            
            arg2.o = data_143a2f2ec
            int32_t var_1ec_1 = arg2.d
            
            if (not(arg2.d f>= 0f))
                var_1ec_1 = arg5[3].d.d
            
            zmm0_2 = data_143a2f2f8
            int32_t var_1d4_1 = zmm0_2.d
            
            if (not(zmm0_2.d f>= 0f))
                var_1d4_1 = (*(arg5 + 0x18)).d
            
            zmm0_2 = data_143a2f2fc
            int32_t var_1dc_1 = zmm0_2.d
            
            if (not(zmm0_2.d f>= 0f))
                var_1dc_1 = arg5[2].d.d
            
            arg2.o = data_143a2f300
            int32_t var_1d0_1 = arg2.d
            
            if (not(arg2.d f>= 0f))
                var_1d0_1 = (*(arg5 + 0x1c)).d
            
            zmm0_2 = data_143a2f304
            int32_t var_1d8_1 = zmm0_2.d
            
            if (not(zmm0_2.d f>= 0f))
                var_1d8_1 = (*(arg5 + 0x24)).d
            
            float zmm8[0x4] = data_143a2f2f0
            float var_1e4_1 = zmm8[0]
            
            if (not(zmm8[0] >= 0f))
                var_1e4_1 = (*(arg5 + 0x14)).d
            
            arg2.o = zx.o(0)
            int128_t var_188 = data_142d3f660
            int128_t var_178
            __builtin_memset(&var_178, 0, 0x19)
            int64_t var_198 = 0
            int32_t var_190_1 = 0
            sub_1422180e0(arg3, &var_198, arg2)
            float zmm1[0x4] = var_188:8.d
            float var_208 = (var_188.d ^ 0x80000000)[0]
            float var_200_1 = (zmm1 ^ 0x80000000)[0]
            zmm1 = arg6
            float var_204_1 = (var_188:4.d ^ 0x80000000)[0]
            float var_1fc_1 = var_188:0xc.d[0]
            
            if (zmm1[0] >= 0f)
                zmm6 = _mm_min_ss(zmm6[0], zmm1[0])
            else
                zmm6 = zx.o(0)
            
            float zmm4_1[0x4] = var_e8_1.d
            float temp0_6[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
            int96_t var_1c8_1 = temp0_6[0].12
            zmm6[0] = zmm6[0] * zmm7[0]
            zmm7 = var_e8_1:4.d
            float temp0_7[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
            float var_138_1 = temp0_7[0]
            temp0_8[0] = temp0_8[0] * temp0_8[0]
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            temp0_8[0] = temp0_8[0] + zmm4_1[0]
            zmm13[0] = zmm13[0] * zmm6[0]
            temp0_6[0] = temp0_6[0] * zmm6[0]
            zmm13[0] = zmm13[0] + var_118[0]
            temp0_8[0] = temp0_8[0] + zmm7[0]
            temp0_7[0] = temp0_7[0] * zmm6[0]
            temp0_6[0] = temp0_6[0] + var_118[1]
            float var_148[0x4] = temp0_8
            temp0_7[0] = temp0_7[0] + var_118[2]
            float zmm5_1[0x4] = _mm_sqrt_ss(0, temp0_8[0])
            float var_158_1 = zmm13[0]
            float var_154_1 = temp0_6[0]
            float var_150_1 = temp0_7[0]
            float var_224_1
            float zmm0_3[0x4]
            float zmm2_1[0x4]
            
            if (zmm5_1[0] <= 9.99999994e-09f)
                zmm2_1 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                var_224_1 = data_143dbb200[0]
            else
                zmm0_3 = 0x3f800000
                zmm0_3[0] = 1f / zmm5_1[0]
                zmm2_1 = temp0_8
                zmm8 = zmm4_1
                zmm7[0] = zmm7[0] * zmm0_3[0]
                zmm2_1[0] = zmm2_1[0] * zmm0_3[0]
                var_224_1 = zmm7[0]
                zmm8[0] = zmm8[0] * zmm0_3[0]
            
            zmm5_1[0] = zmm5_1[0] * 0.00872664619f
            zmm5_1[0] = zmm5_1[0] * zmm6[0]
            bool cond:15_1 = zmm5_1[0] < 0f
            zmm5_1[0] = zmm5_1[0] * 0.159154937f
            
            if (cond:15_1)
                zmm5_1[0] = zmm5_1[0] - 0.5f
            else
                zmm5_1[0] = zmm5_1[0] + 0.5f
            
            float temp0_10[0x4] = _mm_cvtepi32_ps(zx.o(int.d(zmm5_1[0])))
            temp0_10[0] = temp0_10[0] * 6.28318548f
            zmm5_1[0] = zmm5_1[0] - temp0_10[0]
            int32_t var_228_1
            
            if (not(zmm5_1[0] <= 1.57079637f))
                zmm0_3 = 0x40490fdb
                zmm0_3[0] = 3.14159274f - zmm5_1[0]
                var_228_1 = 0xbf800000
                zmm5_1 = zmm0_3
            else if (zmm5_1[0] >= -1.57079637f)
                var_228_1 = 0x3f800000
            else
                zmm0_3 = 0xc0490fdb
                zmm0_3[0] = -3.14159274f - zmm5_1[0]
                var_228_1 = 0xbf800000
                zmm5_1 = zmm0_3
            
            zmm4_1 = 0x3638b88e
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm5_1[0] = zmm5_1[0] * 2.3889859e-08f
            zmm4_1[0] = 2.75255616e-06f - zmm5_1[0]
            zmm5_1[0] = zmm5_1[0] * 2.60516146e-07f
            zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] - 0.000198408743f
            zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] + 0.00833333097f
            zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] - 0.166666672f
            zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] + 1f
            zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] * var_224_1
            zmm4_1[0] = zmm4_1[0] * zmm2_1[0]
            zmm2_1 = 0x37cfb4c2
            zmm2_1[0] = 2.47604949e-05f - zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm8[0]
            float temp0_11[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x1b)
            temp0_11[0] = zmm4_1[0]
            zmm2_1[0] = zmm2_1[0] * zmm5_1[0]
            float temp0_13[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x4e)
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc6)
            zmm2_1[0] = zmm2_1[0] - 0.00138883782f
            temp0_14[0] = zmm4_1[0]
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
            zmm2_1[0] = zmm2_1[0] * zmm5_1[0]
            zmm2_1[0] = zmm2_1[0] + 0.0416666381f
            zmm2_1[0] = zmm2_1[0] * zmm5_1[0]
            zmm2_1[0] = zmm2_1[0] - 0.5f
            zmm2_1[0] = zmm2_1[0] * zmm5_1[0]
            temp0_7[0] = temp0_7[0] f- var_190_1
            zmm2_1[0] = zmm2_1[0] + 1f
            float var_1f8_1 = temp0_7[0]
            zmm2_1[0] = zmm2_1[0] f* var_228_1
            temp0_15[0] = zmm2_1[0]
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
            float var_1b8[0x4] = temp0_16
            float temp0_18[0x4] = _mm_mul_ps(temp0_12, _mm_shuffle_ps(temp0_16, temp0_16, 0))
            float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xff), zmm14)
            float temp0_21[0x4] = __mulps_xmmps_memps(temp0_18, data_143f522b0)
            float temp0_22[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xb1)
            float temp0_23[0x4] = _mm_add_ps(temp0_21, temp0_20)
            float temp0_25[0x4] = _mm_mul_ps(temp0_13, _mm_shuffle_ps(temp0_16, temp0_16, 0x55))
            temp0_6[0] = temp0_6[0] f- var_198:4.d
            float temp0_27[0x4] = _mm_mul_ps(temp0_22, _mm_shuffle_ps(temp0_16, temp0_16, 0xaa))
            float temp0_28[0x4] = __mulps_xmmps_memps(temp0_25, data_143f522a0)
            float var_1a4_1 = temp0_6[0]
            float temp0_29[0x4] = __mulps_xmmps_memps(temp0_27, data_143f52290)
            float temp0_30[0x4] = _mm_add_ps(temp0_23, temp0_28)
            temp0_6[0] = temp0_6[0] * temp0_6[0]
            zmm13[0] = zmm13[0] f- var_198.d
            float temp0_31[0x4] = _mm_add_ps(temp0_30, temp0_29)
            float var_1a8_1 = zmm13[0]
            zmm13[0] = zmm13[0] * zmm13[0]
            temp0_7[0] = temp0_7[0] * temp0_7[0]
            temp0_6[0] = temp0_6[0] + zmm13[0]
            float var_128[0x4] = temp0_31
            temp0_6[0] = temp0_6[0] + temp0_7[0]
            float zmm3_1[0x4] = var_208.o
            float temp0_32[0x4] = _mm_sqrt_ss(0, temp0_6[0])
            float temp0_33[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
            float var_224_2 = temp0_32[0]
            float temp0_35[0x4] = _mm_mul_ps(temp0_33, _mm_shuffle_ps(temp0_31, temp0_31, 0x1b))
            float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_31)
            float temp0_38[0x4] = __mulps_xmmps_memps(temp0_35, data_143f522b0)
            float temp0_39[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            float temp0_40[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            float temp0_41[0x4] = _mm_add_ps(temp0_38, temp0_37)
            float temp0_43[0x4] = _mm_mul_ps(temp0_39, _mm_shuffle_ps(temp0_31, temp0_31, 0x4e))
            zmm0_3 = 0xbf800000
            float temp0_45[0x4] = _mm_mul_ps(temp0_40, _mm_shuffle_ps(temp0_31, temp0_31, 0xb1))
            float temp0_46[0x4] = __mulps_xmmps_memps(temp0_43, data_143f522a0)
            float temp0_47[0x4] = __mulps_xmmps_memps(temp0_45, data_143f52290)
            float temp0_49[0x4] = _mm_add_ps(_mm_add_ps(temp0_41, temp0_46), temp0_47)
            var_208.o = temp0_49
            float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xff)
            
            if (not(temp0_50[0] < -1f))
                zmm0_3 = _mm_min_ss(temp0_50[0], 0x3f800000)
            
            zmm6 = acosf(zmm0_3[0])
            temp0_50[0] = temp0_50[0] * temp0_50[0]
            zmm1 = 0x3f800000
            zmm6[0] = zmm6[0] + zmm6[0]
            zmm1[0] = 1f - temp0_50[0]
            float temp0_53[0x4] = _mm_sqrt_ss(0, _mm_max_ss(zmm1[0], 0)[0])
            
            if (temp0_53[0] < 9.99999975e-05f)
                zmm8 = 0x3f800000
                zmm14 = zx.o(0)
                zmm7 = zx.o(0)
            else
                zmm7 = 0x3f800000
                zmm7[0] = 1f / temp0_53[0]
                zmm8 = zmm7
                zmm14 = zmm7
                zmm8[0] = zmm8[0] * var_208
                zmm14[0] = zmm14[0] * var_204_1
                zmm7[0] = zmm7[0] * var_200_1
            
            if (not(zmm6[0] <= 3.14159274f))
                do
                    zmm6[0] = zmm6[0] + -6.28318548f
                while (zmm6[0] > 3.14159274f)
            
            if (not(zmm6[0] >= -3.14159274f))
                do
                    zmm6[0] = zmm6[0] + 6.28318548f
                while (zmm6[0] < -3.14159274f)
            
            zmm6[0] = zmm6[0] * 57.2957764f
            sub_14221afe0(arg3)
            float zmm0_4[0x4] = var_224_2
            zmm1 = __andps_xmmxud_memxud(zmm6, data_142d3f770)
            zmm1[0] = zmm1[0] f* var_218_1
            zmm0_4[0] = zmm0_4[0] f* var_220_1
            zmm1[0] = zmm1[0] + zmm0_4[0]
            int64_t r14
            r14.b = var_21c_1[0] > zmm1[0]
            
            if (r14.b == 0)
                zmm3_1 = arg4[5].d
                zmm3_1[0] = zmm3_1[0] f- *(arg4 + 0x5c)
                float zmm4_2[0x4] = *(arg4 + 0x54)
                zmm4_2[0] = zmm4_2[0] f- arg4[6].d
                float zmm5_2[0x4] = *(arg4 + 0x58)
                zmm5_2[0] = zmm5_2[0] f- *(arg4 + 0x64)
                float var_220_2 = zmm3_1[0]
                zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                zmm2_1 = zmm4_2
                float var_218_2 = zmm4_2[0]
                zmm2_1[0] = zmm2_1[0] * zmm4_2[0]
                zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                zmm2_1[0] = zmm2_1[0] + zmm3_1[0]
                float var_21c_2 = zmm5_2[0]
                zmm2_1[0] = zmm2_1[0] + zmm5_2[0]
                float var_228_2
                
                if (zmm2_1[0] != 1f)
                    if (zmm2_1[0] >= 9.99999994e-09f)
                        zmm4_2 = 0x3f000000
                        zmm3_1 = zmm2_1
                        float temp0_55[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm3_1[0])
                        zmm2_1 = 0x3f000000
                        zmm3_1[0] = zmm3_1[0] * 0.5f
                        temp0_55[0] = temp0_55[0] * temp0_55[0]
                        zmm3_1[0] = zmm3_1[0] * temp0_55[0]
                        zmm2_1[0] = 0.5f - zmm3_1[0]
                        temp0_55[0] = temp0_55[0] * zmm2_1[0]
                        zmm2_1 = var_21c_2
                        temp0_55[0] = temp0_55[0] + temp0_55[0]
                        temp0_55[0] = temp0_55[0] * temp0_55[0]
                        zmm3_1[0] = zmm3_1[0] * temp0_55[0]
                        zmm4_2[0] = 0.5f - zmm3_1[0]
                        zmm3_1 = var_220_2
                        zmm1 = zmm3_1
                        temp0_55[0] = temp0_55[0] * zmm4_2[0]
                        zmm4_2 = var_218_2
                        temp0_55[0] = temp0_55[0] + temp0_55[0]
                        zmm0_4 = zmm4_2
                        zmm1[0] = zmm1[0] * temp0_55[0]
                        zmm0_4[0] = zmm0_4[0] * temp0_55[0]
                        zmm2_1[0] = zmm2_1[0] * temp0_55[0]
                        zmm5_2 = var_21c_2
                    else
                        zmm1 = data_143dbb1f8
                        zmm0_4 = data_143dbb1fc
                        zmm2_1 = data_143dbb200
                    
                    var_228_2 = zmm2_1[0]
                else
                    var_228_2 = zmm5_2[0]
                    zmm1 = zmm3_1
                    zmm0_4 = zmm4_2
                
                zmm2_1 = var_198:4.d
                zmm13[0] = zmm13[0] f- var_198.d
                temp0_7[0] = temp0_7[0] f- var_190_1
                temp0_6[0] = temp0_6[0] - zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f- arg4[6].d
                zmm2_1[0] = zmm2_1[0] * zmm0_4[0]
                zmm0_4 = var_198.d
                zmm0_4[0] = zmm0_4[0] f- *(arg4 + 0x5c)
                zmm0_4[0] = zmm0_4[0] * zmm1[0]
                zmm1 = var_190_1
                zmm1[0] = zmm1[0] f- *(arg4 + 0x64)
                zmm2_1[0] = zmm2_1[0] + zmm0_4[0]
                zmm1[0] = zmm1[0] * var_228_2
                zmm2_1[0] = zmm2_1[0] + zmm1[0]
                
                if (zmm2_1[0] f>= var_1f0_1)
                label_142260915:
                    zmm0_4 = *(arg4 + 0x4c)
                    zmm1 = var_1e8
                    zmm0_4[0] = zmm0_4[0] - zmm1[0]
                    zmm0_4 = _mm_max_ss(zmm0_4[0], 0)
                else
                    temp0_6[0] = temp0_6[0] * zmm4_2[0]
                    zmm13[0] = zmm13[0] * zmm3_1[0]
                    temp0_7[0] = temp0_7[0] * zmm5_2[0]
                    temp0_6[0] = temp0_6[0] + zmm13[0]
                    temp0_6[0] = temp0_6[0] + temp0_7[0]
                    
                    if (temp0_6[0] f<= var_1ec_1)
                        goto label_142260915
                    
                    zmm1 = var_1e8
                    zmm0_4 = zmm1
                    zmm0_4[0] = zmm0_4[0] f+ *(arg4 + 0x4c)
                
                bool cond:18_1 = var_224_2[0] > var_1e4_1
                *(arg4 + 0x4c) = zmm0_4[0]
                float rax_3
                int128_t* rdi
                
                if (cond:18_1 || zmm0_4[0] f> var_1e0_1 || data_143f526f4 != 0)
                    rdi.b = 1
                    rax_3 = var_e8_1:4.d
                    r14 = 1
                    var_1b8[0].q = zmm13.q
                    var_1c8_1.q = zmm13[3].q
                    zmm0_4 = 0x3f800000
                    var_1b8[2] = _mm_bsrli_si128(zmm13, 8)[0]
                    *(arg4 + 0x4c) = 0
                else
                    zmm4_2 = var_1dc_1
                    rdi.b = 0
                    zmm0_4 = var_1f8_1
                    zmm2_1 = var_1a8_1
                    zmm3_1 = var_1a4_1
                    zmm0_4[0] = zmm0_4[0] * zmm4_2[0]
                    zmm8[0] = zmm8[0] * zmm6[0]
                    zmm0_4[0] = zmm0_4[0] * zmm1[0]
                    zmm2_1[0] = zmm2_1[0] * zmm4_2[0]
                    zmm0_4[0] = zmm0_4[0] + var_138_1
                    zmm14[0] = zmm14[0] * zmm6[0]
                    zmm7[0] = zmm7[0] * zmm6[0]
                    float var_200_2 = zmm0_4[0]
                    zmm3_1[0] = zmm3_1[0] * zmm4_2[0]
                    var_1b8[2] = var_200_2
                    zmm2_1[0] = zmm2_1[0] * zmm1[0]
                    zmm3_1[0] = zmm3_1[0] * zmm1[0]
                    zmm2_1[0] = zmm2_1[0] + zmm13[0]
                    zmm3_1[0] = zmm3_1[0] f+ var_1c8_1.d
                    var_1b8[0].q = (_mm_unpacklo_ps(zmm2_1, zmm3_1[0].q)).q
                    zmm0_4 = var_1d8_1
                    zmm8[0] = zmm8[0] * zmm0_4[0]
                    zmm14[0] = zmm14[0] * zmm0_4[0]
                    zmm7[0] = zmm7[0] * zmm0_4[0]
                    zmm8[0] = zmm8[0] * zmm1[0]
                    zmm14[0] = zmm14[0] * zmm1[0]
                    zmm8[0] = zmm8[0] + var_148[0]
                    zmm7[0] = zmm7[0] * zmm1[0]
                    zmm14[0] = zmm14[0] f+ var_e8_1.d
                    zmm7[0] = zmm7[0] f+ var_e8_1:4.d
                    var_1c8_1.q = (_mm_unpacklo_ps(zmm8, zmm14[0].q)).q
                    zmm0_4 = var_1d4_1
                    rax_3 = zmm7[0]
                
                zmm13[0] = zmm13[0] * zmm0_4[0]
                var_1c8_1:8.d = rax_3
                temp0_6[0] = temp0_6[0] * zmm0_4[0]
                temp0_7[0] = temp0_7[0] * zmm0_4[0]
                zmm13[0] = zmm13[0] f+ var_198.d
                temp0_6[0] = temp0_6[0] f+ var_198:4.d
                temp0_7[0] = temp0_7[0] f+ var_190_1
                
                if (rdi.b == 0)
                    zmm15 = var_1d0_1
                
                float (* rax_4)[0x4]
                int64_t zmm9_1
                float zmm10_1[0x4]
                rax_4, zmm9_1, zmm10_1 = sub_140ae0e60(&var_148, &var_188, &var_128, zmm15)
                bool cond:17_1 = data_143f526f8 != 0
                float zmm6_1[0x4] = data_143f522f0
                float zmm5_3[0x4] = *rax_4
                float temp0_60[0x4] = _mm_mul_ps(zmm5_3, zmm5_3)
                float temp0_62[0x4] = _mm_add_ps(temp0_60, _mm_shuffle_ps(temp0_60, temp0_60, 0x4e))
                float temp0_64[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x39), temp0_62)
                float temp0_65[0x4] = _mm_rsqrt_ps(temp0_64)
                float temp0_66[0x4] = _mm_mul_ps(temp0_64, zmm6_1)
                float temp0_71[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_65, temp0_65), temp0_66)), 
                        temp0_65), 
                    temp0_65)
                float temp0_74[0x4] =
                    _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_71, temp0_71), temp0_66))
                uint32_t zmm0_5[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_64, 2)
                zmm6_1 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_74, temp0_71), temp0_71), zmm5_3)
                        ^ data_143f522e0, 
                    zmm0_5) ^ data_143f522e0
                char r8_1
                
                if (not(cond:17_1))
                    r8_1 = 1
                
                if (cond:17_1 || rdi.b != 0)
                    r8_1 = 2
                
                zmm0_5 = data_14399f670
                var_118 = zmm6_1
                float temp0_81[0x4] = _mm_unpacklo_ps(temp0_6, zmm9_1)
                float var_108_1[0x4] =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm10_1, temp0_7[0].q), temp0_81[0].q)
                float var_f8_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0_5[0].q), 
                    _mm_unpacklo_ps(data_14399f66c, zmm9_1)[0].q)
                sub_1422214a0(arg3, &var_118, r8_1)
                sub_142221c60(arg3, &var_1b8, 0)
                zmm0_4 = var_1c8_1.d
                zmm0_4[0] = zmm0_4[0] * 0.0174532924f
                var_208 = zmm0_4[0]
                zmm0_4 = var_1c8_1:4.d
                zmm0_4[0] = zmm0_4[0] * 0.0174532924f
                float var_200_4 = var_1c8_1:8.d * 0.0174532924f
                float var_204_2 = zmm0_4[0]
                sub_142221460(arg3, &var_208, 0)
            else
                *(arg4 + 0x4c) = 0
            
            if ((var_e8_1:8.b & 1) != 0)
                sub_14221e790(arg3)
            
            result = zx.q(r14.b)
            arg4[5].q = var_158_1.q
            zmm0_4 = zx.o(var_198)
            *(arg4 + 0x58) = var_150_1
            *(arg4 + 0x5c) = zmm0_4.q
            *(arg4 + 0x64) = var_190_1

__security_check_cookie(var_d8 ^ &var_248)
return result
