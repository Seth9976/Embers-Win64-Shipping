// 函数: sub_141fcf360
// 地址: 0x141fcf360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_14226e260(arg1)
int64_t* result_1 = result

if ((arg1[0xae].b & 4) != 0 && result != 0)
    int64_t r8_1 = *arg1
    float zmm10[0x4]
    float var_58_1[0x4] = zmm10
    int128_t zmm11
    int128_t var_68_1 = zmm11
    int128_t zmm12
    int128_t var_78_1 = zmm12
    int128_t zmm13
    int128_t var_88_1 = zmm13
    float zmm14[0x4]
    float var_98_1[0x4] = zmm14
    float zmm15[0x4]
    float var_a8_1[0x4] = zmm15
    int64_t var_158
    (*(r8_1 + 0x660))(arg1, &var_158, r8_1)
    int64_t var_168
    int64_t* rax = sub_142217740(result_1, &var_168)
    float var_150
    float var_148[0x4]
    float var_138[0x4]
    float zmm6_4[0x4]
    
    if (0f f!= *rax || 0f f!= *(rax + 4) || 0f f!= rax[1].d)
        float var_128
        sub_14077e760(&var_128, &var_158)
        void* rax_3 = result_1[0x26]
        float var_160_2
        float zmm1_4[0x4]
        
        if (rax_3 == 0)
            float rax_4 = data_143dbb200
            var_168 = data_143dbb1f8.q
            var_160_2 = rax_4
        else
            zmm1_4 = *(rax_3 + 0x1d0)
            var_168.d = zmm1_4[0]
            float temp0_6[0x4] = _mm_shuffle_ps(zmm1_4, zmm1_4, 0x55)
            var_160_2 = _mm_shuffle_ps(zmm1_4, zmm1_4, 0xaa)[0]
            var_168:4.d = temp0_6[0]
        
        float zmm0_5[0x4] = zx.o(var_168)
        zmm0_5[0] = zmm0_5[0] f- arg1[0xc8].d
        int32_t var_120
        zmm10 = var_120
        int32_t var_11c
        zmm6_4 = var_11c
        int32_t var_124
        zmm14 = var_124
        var_168 = zmm0_5.q
        var_138 = var_128
        float temp0_8[0x4] = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xe1)
        int32_t var_10c
        temp0_8[0] = var_10c[0]
        float temp0_9[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe1)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xe1)
        int32_t var_110
        temp0_9[0] = var_110
        int32_t var_114
        temp0_10[0] = var_114.d
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
        int32_t var_fc
        temp0_11[0] = var_fc[0]
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
        float zmm2_3[0x4] = var_138
        int32_t var_100
        temp0_12[0] = var_100
        float temp0_13[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xe1)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
        int32_t var_13c_1 = 0
        int32_t var_104
        temp0_14[0] = var_104.d
        zmm15 = var_148
        zmm15[0] = zmm0_5[0]
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x27)
        float temp0_16[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xe1)
        int32_t var_ec
        temp0_15[0] = var_ec
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x27)
        float temp0_18[0x4] = _mm_shuffle_ps(zmm0_5, zmm0_5, 0x55)
        int32_t var_f0
        temp0_17[0] = var_f0
        temp0_18[0] = temp0_18[0] f- *(arg1 + 0x644)
        zmm1_4 = var_160_2
        zmm1_4[0] = zmm1_4[0] f- arg1[0xc9].d
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
        temp0_16[0] = temp0_18[0]
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc6)
        int32_t var_f4
        temp0_19[0] = var_f4.d
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x39)
        temp0_21[0] = zmm1_4[0]
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc9)
        var_148 = temp0_24
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xff)
        float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xaa), temp0_22)
        var_168 = 0
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
        float temp0_29[0x4] = _mm_mul_ps(temp0_25, temp0_20)
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0)
        float temp0_31[0x4] = _mm_mul_ps(temp0_28, temp0_23)
        float temp0_32[0x4] = _mm_add_ps(temp0_29, temp0_27)
        int32_t var_118
        temp0_13[0] = var_118[0]
        float temp0_33[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
        int32_t var_108
        temp0_33[0] = var_108[0]
        float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x27)
        int32_t var_f8
        temp0_34[0] = var_f8[0]
        float temp0_38[0x4] = _mm_add_ps(temp0_32, 
            _mm_add_ps(temp0_31, _mm_mul_ps(temp0_30, _mm_shuffle_ps(temp0_34, temp0_34, 0x39))))
        var_168.o = temp0_38
        float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x55)
        
        if (not(__andps_xmmxud_memxud(temp0_39, data_142d3f770)[0] > 0.00999999978f))
            zmm1_4 = arg1[0xcb].d
            float zmm3_2[0x4] = 0x41f00000
            zmm2_3 = var_168.d
            zmm1_4[0] = zmm1_4[0] - 30f
            zmm2_3[0] = zmm2_3[0] * 3f
            
            if (not(zmm2_3[0] > zmm1_4[0]))
                zmm1_4[0] = zmm1_4[0] - zmm2_3[0]
                zmm3_2 = zmm1_4
            
            arg1[0xcb].d = zmm3_2[0]
            goto label_141fcfb39
        
        temp0_39[0] = temp0_39[0] + temp0_39[0]
        var_148[0] = 0
        var_148[2].q = 0
        zmm2_3 = var_148
        float temp0_41[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xe1)
        var_168 = 0
        temp0_41[0] = temp0_39[0]
        int32_t var_160_4 = 0
        float temp0_42[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xe1)
        var_148 = temp0_42
        float temp0_44[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_42, temp0_42, 0xff), var_f8.o)
        float temp0_46[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_42, temp0_42, 0xaa), var_108.o)
        float temp0_48[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_42, temp0_42, 0x55), var_118.o)
        float temp0_49[0x4] = _mm_add_ps(temp0_44, temp0_46)
        float temp0_51[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_42, temp0_42, 0), var_128.o)
        zmm0_5 = *(arg1 + 0x64c)
        zmm0_5[0] = zmm0_5[0] f- arg1[0xc8].d
        float temp0_52[0x4] = _mm_add_ps(temp0_48, temp0_51)
        zmm2_3 = *(arg1 + 0x654)
        zmm2_3[0] = zmm2_3[0] f- arg1[0xc9].d
        float temp0_53[0x4] = _mm_add_ps(temp0_49, temp0_52)
        zmm1_4 = arg1[0xca].d
        zmm1_4[0] = zmm1_4[0] f- *(arg1 + 0x644)
        zmm0_5[0] = zmm0_5[0] - temp0_53[0]
        var_168.d = zmm0_5[0]
        float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xaa)
        zmm1_4[0] = zmm1_4[0] - temp0_54[0]
        zmm2_3[0] = zmm2_3[0] - temp0_55[0]
        var_168:4.d = zmm1_4[0]
        float var_160_5 = zmm2_3[0]
    label_141fcfb23:
        int32_t* rax_6 = sub_140adf3c0(&var_168, &var_148)
        var_158 = *rax_6
        var_150 = rax_6[2]
    label_141fcfb39:
        arg1[0xcb].d
        int32_t* rax_8
        float zmm6_5[0x4]
        rax_8, zmm6_5 = sub_140ae4210(&var_158, &var_148)
        float zmm3_3[0x4] = *(arg1 + 0x64c)
        int64_t zmm2_4 = arg1[0xca].d
        float zmm1_5 = zmm6_5[0]
        zmm6_5[0] = zmm6_5[0] f* *rax_8
        zmm6_5[0] = zmm6_5[0] f* rax_8[2]
        zmm1_5 = zmm1_5 f* rax_8[1]
        zmm3_3[0] = zmm3_3[0] - zmm6_5[0]
        float zmm0_7[0x4] = *(arg1 + 0x654)
        zmm0_7[0] = zmm0_7[0] - zmm6_5[0]
        zmm2_4.d = zmm2_4.d f- zmm1_5
        float var_160_6 = zmm0_7[0]
        arg1[0xc8] = (_mm_unpacklo_ps(zmm3_3, zmm2_4)).q
        arg1[0xc9].d = var_160_6
        sub_141dd67f0(result_1, &arg1[0xc8], 0, nullptr, 0)
        (*(*arg1 + 0x668))(arg1, &var_158)
        int512_t zmm2_5
        zmm2_5.o = zx.o(0)
        float var_160_7 = var_150
        int64_t rax_12 = *result_1
        var_168 = var_158
        result = (*(rax_12 + 0x6f0))(result_1, &var_168, zmm2_5)
    else
        float zmm0_2[0x4]
        int32_t zmm6_1
        float zmm7_1[0x4]
        zmm0_2, zmm6_1, zmm7_1 = sub_140a454f0(arg1[0x84].d, 0x43b40000)
        
        if (not(zmm0_2[0] f>= zmm6_1))
            zmm0_2[0] = zmm0_2[0] + zmm7_1[0]
        
        if (zmm0_2[0] f!= zmm6_1)
        label_141fcf498:
            zmm0_2 = var_158.d
            zmm0_2[0] = zmm0_2[0] f+ arg1[0x84].d
            float zmm1_1[0x4] = var_158:4.d
            zmm1_1[0] = zmm1_1[0] f+ *(arg1 + 0x424)
            var_158.d = zmm0_2[0]
            zmm0_2 = var_150
            zmm0_2[0] = zmm0_2[0] f+ arg1[0x85].d
            var_158:4.d = zmm1_1[0]
            var_150 = zmm0_2[0]
            int32_t* rax_1 = sub_140ae4210(&var_158, &var_168)
            int128_t zmm2_1 = rax_1[2] ^ 0x80000000
            int128_t zmm0_3 = *rax_1 ^ 0x80000000
            var_138[1] = (rax_1[1] ^ 0x80000000).d
            var_138[0] = zmm0_3.d
            var_138[2] = zmm2_1.d
            zmm6_4 = sub_140ad6800(&var_148, &data_14399f678, &var_138)
            float zmm9_1 = -1f
            float var_13c
            float _X
            
            if (var_13c >= -1f)
                _X = _mm_min_ss(var_13c, 0x3f800000)
            else
                _X = -1f
            
            float zmm3_1[0x4] = acosf(_X)
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            float temp0_3[0x4] = _mm_sqrt_ss(0, _mm_max_ss(1f - var_13c * var_13c, zmm6_4[0]))
            float zmm0_4[0x4]
            float zmm11_1
            
            if (temp0_3[0] < 9.99999975e-05f)
                zmm10 = 0x3f800000
                zmm11_1 = (zx.o(0)).d
                zmm12 = zx.o(0)
            else
                zmm10 = var_148[0]
                zmm0_4 = 0x3f800000
                zmm11_1 = var_148[1]
                zmm12 = var_148[2]
                zmm0_4[0] = 1f / temp0_3[0]
                zmm10[0] = zmm10[0] * zmm0_4[0]
                zmm11_1 = zmm11_1 * zmm0_4[0]
                zmm12.d = zmm12.d f* zmm0_4[0]
            
            if (zmm3_1[0] < 0.174532935f)
                zmm3_1 = 0x3e32b8c3
            else
                if (zmm3_1[0] <= 2.96705985f)
                    goto label_141fcfb39
                
                if (zmm3_1[0] < 0.174532935f)
                    zmm3_1 = 0x3e32b8c3
                else
                    zmm3_1 = _mm_min_ss(zmm3_1[0], 0x403de44f)
            
            float zmm14_1[0x4] = data_14399f678.d
            zmm15 = data_14399f678:4.d
            zmm3_1[0] = zmm3_1[0] * 0.5f
            bool cond:2_1 = zmm3_1[0] < zmm6_4[0]
            zmm3_1[0] = zmm3_1[0] * 0.159154937f
            
            if (cond:2_1)
                zmm3_1[0] = zmm3_1[0] - 0.5f
            else
                zmm3_1[0] = zmm3_1[0] + 0.5f
            
            float temp0_5[0x4] = _mm_cvtepi32_ps(zx.o(int.d(zmm3_1[0])))
            temp0_5[0] = temp0_5[0] * 6.28318548f
            zmm3_1[0] = zmm3_1[0] - temp0_5[0]
            
            if (not(zmm3_1[0] <= 1.57079637f))
                zmm0_4 = 0x40490fdb
                zmm0_4[0] = 3.14159274f - zmm3_1[0]
                zmm3_1 = zmm0_4
            else if (zmm3_1[0] >= -1.57079637f)
                zmm9_1 = 1f
            else
                zmm0_4 = 0xc0490fdb
                zmm0_4[0] = -3.14159274f - zmm3_1[0]
                zmm3_1 = zmm0_4
            
            float zmm5_1[0x4] = data_14399f680
            zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] * 2.3889859e-08f
            float zmm1_3 = 2.75255616e-06f - zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] * 2.60516146e-07f
            zmm1_3 = ((
                ((zmm1_3 * zmm3_1[0] - 0.000198408743f) * zmm3_1[0] + 0.00833333097f) * zmm3_1[0]
                - 0.166666672f) * zmm3_1[0] + 1f) * zmm3_1[0]
            float zmm7_4 = ((
                ((2.47604949e-05f - zmm3_1[0]) * zmm3_1[0] - 0.00138883782f) * zmm3_1[0]
                + 0.0416666381f) * zmm3_1[0] - 0.5f) * zmm3_1[0] + 1f
            float zmm8_1[0x4] = data_14399f680
            zmm11_1 = zmm11_1 * zmm1_3
            zmm12.d = zmm12.d f* zmm1_3
            zmm10[0] = zmm10[0] * zmm1_3
            zmm15[0] = zmm15[0] f* zmm12.d
            zmm14_1[0] = zmm14_1[0] f* zmm12.d
            zmm15[0] = zmm15[0] * zmm10[0]
            zmm5_1[0] = zmm5_1[0] * zmm11_1
            zmm7_4 = zmm7_4 * zmm9_1
            zmm5_1[0] = zmm5_1[0] - zmm15[0]
            zmm8_1[0] = zmm8_1[0] * zmm10[0]
            zmm14_1[0] = zmm14_1[0] - zmm8_1[0]
            zmm14_1[0] = zmm14_1[0] * zmm11_1
            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
            zmm15[0] = zmm15[0] - zmm14_1[0]
            zmm14_1[0] = zmm14_1[0] + zmm14_1[0]
            zmm1_3 = zmm5_1[0] * zmm7_4
            zmm5_1[0] = zmm5_1[0] f* zmm12.d
            zmm15[0] = zmm15[0] + zmm15[0]
            zmm5_1[0] = zmm5_1[0] * zmm11_1
            zmm1_3 = zmm1_3 + zmm14_1[0]
            zmm14_1[0] = zmm14_1[0] f* zmm12.d
            zmm15[0] = zmm15[0] * zmm11_1
            zmm15[0] = zmm15[0] - zmm14_1[0]
            zmm15[0] = zmm15[0] * zmm10[0]
            zmm15[0] = zmm15[0] * zmm7_4
            zmm15[0] = zmm15[0] + zmm1_3
            zmm1_3 = zmm14_1[0]
            zmm14_1[0] = zmm14_1[0] * zmm10[0]
            zmm5_1[0] = zmm5_1[0] - zmm15[0]
            zmm15[0] = zmm15[0] + zmm8_1[0]
            zmm14_1[0] = zmm14_1[0] - zmm5_1[0]
            var_138[0] = zmm15[0]
            zmm1_3 = zmm1_3 * zmm7_4 + zmm15[0]
            var_168.d = (zmm15 ^ 0x80000000)[0]
            zmm14_1[0] = zmm14_1[0] + zmm15[0]
            zmm5_1[0] = zmm5_1[0] + zmm1_3
            var_138[2] = zmm14_1[0]
            var_138[1] = zmm5_1[0]
            var_168:4.d = (zmm5_1 ^ 0x80000000)[0]
            float var_160_1 = (zmm14_1 ^ 0x80000000)[0]
            goto label_141fcfb23
        
        int32_t zmm6_2
        float zmm7_2[0x4]
        zmm0_2, zmm6_2, zmm7_2 = sub_140a454f0(*(arg1 + 0x424), zmm7_1)
        
        if (not(zmm0_2[0] f>= zmm6_2))
            zmm0_2[0] = zmm0_2[0] + zmm7_2[0]
        
        if (zmm0_2[0] f!= zmm6_2)
            goto label_141fcf498
        
        int32_t zmm6_3
        int32_t zmm7_3
        zmm0_2, result, zmm6_3, zmm7_3 = sub_140a454f0(arg1[0x85].d, zmm7_2)
        
        if (not(zmm0_2[0] f>= zmm6_3))
            zmm0_2[0] = zmm0_2[0] f+ zmm7_3
        
        if (not(zmm0_2[0] f== zmm6_3))
            goto label_141fcf498

return result
