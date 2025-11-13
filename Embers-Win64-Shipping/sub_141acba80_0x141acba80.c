// 函数: sub_141acba80
// 地址: 0x141acba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6
uint32_t zmm13[0x4] = 0x7fffffff
float zmm14[0x4] = arg13
zmm14[0] = zmm14[0] f- arg12
float zmm15[0x4]
float var_a8[0x4] = zmm15
uint32_t var_d8[0x4] = zmm5
arg13 = zmm14[0]
uint32_t temp0[0x4] = _mm_and_ps(zmm14, 0x7fffffff)
uint32_t temp0_1[0x4]

if (not(temp0[0] f<= 9.99999994e-09f))
    zmm6 = arg15
    zmm15 = arg14
    zmm6[0] = zmm6[0] f- zmm15[0]
    temp0_1 = _mm_and_ps(zmm6, 0x7fffffff)

if (temp0[0] f<= 9.99999994e-09f || temp0_1[0] f<= 9.99999994e-09f)
    *arg1 = zmm5
else
    float zmm2[0x4] = *arg3
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x1b)
    uint64_t rdi_1 = zx.q(arg9)
    uint32_t zmm0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float zmm7[0x4] = 0x3f800000
    float zmm8[0x4] = 0xbf800000
    int128_t zmm9 = zx.o(0)
    int128_t zmm10 = 0x3f000000
    float zmm12[0x4] = 0x80000000
    float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float zmm3[0x4] = zmm2 ^ 0x80000000
    float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_6[0] = (zmm0 ^ 0x80000000)[0]
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
    temp0_7[0] = (temp0_4 ^ 0x80000000)[0]
    float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
    temp0_9[0] = temp0_5[0]
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
    float var_b8[0x4] = temp0_10
    float temp0_12[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_10, temp0_10, 0))
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xff), zmm5)
    float temp0_15[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
    float temp0_17[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_12, data_143f2b850), zmm0)
    float temp0_19[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(temp0_10, temp0_10, 0x55))
    float temp0_21[0x4] = _mm_mul_ps(temp0_15, _mm_shuffle_ps(temp0_10, temp0_10, 0xaa))
    float temp0_22[0x4] = __mulps_xmmps_memps(temp0_19, data_143f2b840)
    float temp0_23[0x4] = __mulps_xmmps_memps(temp0_21, data_143f2b830)
    float temp0_25[0x4] = _mm_add_ps(_mm_add_ps(temp0_17, temp0_22), temp0_23)
    var_d8[0] = temp0_25[0]
    zmm0 = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xff)
    var_d8[1] = zmm0[0]
    zmm0 = zx.o(0)
    var_d8[3] = temp0_28[0]
    var_d8[2] = temp0_27[0]
    int64_t var_f8
    void var_e8
    int32_t var_c8
    float var_bc
    float zmm4[0x4]
    
    switch (rdi_1.d)
        case 0
            int32_t* rax_2
            rax_2, zmm6, zmm7, zmm8, zmm9 = sub_140ad3d90(&var_d8, &var_e8)
            var_f8 = *rax_2
            zmm0 = var_f8.d
            int32_t var_f0_1 = rax_2[2]
        case 1
            int32_t* rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9 = sub_140ad3d90(&var_d8, &var_e8)
            var_f8 = *rax_4
            zmm0 = var_f8:4.d
            int32_t var_f0_2 = rax_4[2]
        case 2
            int32_t* rax_6
            rax_6, zmm6, zmm7, zmm8, zmm9 = sub_140ad3d90(&var_d8, &var_e8)
            var_f8 = *rax_6
            zmm0 = rax_6[2]
        case 3
            if (temp0_28[0] >= -1f)
                zmm0 = acosf(_mm_min_ss(temp0_28[0], 0x3f800000)[0])
            else
                zmm0 = acosf(0xbf800000[0])
            
            zmm0[0] = zmm0[0] f* 114.591553f
        case 4, 5
            zmm13 = *(arg10 + 4)
            zmm12 = *arg10
            zmm14 = *(arg10 + 8)
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm13[0] = zmm13[0] f* zmm13[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm12[0] = zmm12[0] f+ zmm13[0]
            zmm12[0] = zmm12[0] + zmm14[0]
            
            if (not(__andps_xmmxud_memxud(zmm12, data_142d3f770)[0] f> 9.99999994e-09f))
                int32_t var_f0_4 = 0
                *arg10 = (_mm_unpacklo_ps(0x3f800000, 0)).q
                *(arg10 + 8) = 0
            else if (not(zmm12[0] <= 9.99999994e-09f))
                zmm4 = 0x3f000000
                zmm0 = zmm12
                zmm3 = zmm0
                float temp0_32[0x4] = _mm_rsqrt_ss(zmm0[0], zmm3[0])
                zmm2 = 0x3f000000
                zmm3[0] = zmm3[0] * 0.5f
                zmm0 = temp0_32
                zmm0[0] = zmm0[0] f* temp0_32[0]
                zmm3[0] = zmm3[0] f* zmm0[0]
                zmm0 = temp0_32
                zmm2[0] = 0.5f - zmm3[0]
                zmm0[0] = zmm0[0] f* zmm2[0]
                temp0_32[0] = temp0_32[0] f+ zmm0[0]
                zmm0 = temp0_32
                temp0_32[0] = temp0_32[0] * temp0_32[0]
                zmm3[0] = zmm3[0] * temp0_32[0]
                zmm4[0] = 0.5f - zmm3[0]
                zmm0[0] = zmm0[0] f* zmm4[0]
                temp0_32[0] = temp0_32[0] f+ zmm0[0]
                zmm12[0] = zmm12[0] * temp0_32[0]
                zmm13[0] = zmm13[0] f* temp0_32[0]
                zmm14[0] = zmm14[0] * temp0_32[0]
                *arg10 = zmm12[0]
                *(arg10 + 4) = zmm13[0]
                *(arg10 + 8) = zmm14[0]
            
            zmm6 = sub_140ae2000(&var_d8, arg10, &var_b8, &var_c8)
            float _X
            
            if (arg9 != 4)
                if (var_bc >= -1f)
                    _X = _mm_min_ss(var_bc, 0x3f800000)
                else
                    _X = -1f
            else if (var_b8[3] >= -1f)
                _X = _mm_min_ss(var_b8[3], 0x3f800000)
            else
                _X = -1f
            
            zmm0 = acosf(_X)
            zmm12 = 0x80000000
            zmm14 = arg13
            zmm13 = 0x7fffffff
            zmm0[0] = zmm0[0] f* 114.591553f
    
    uint32_t zmm11[0x4]
    
    if (rdi_1.d u> 5 || zmm0[0] f>= zmm9.d)
        zmm11 = zmm6
        zmm12 = zmm15
    else
        zmm11 = zmm6 ^ zmm12
        zmm12 = zmm15 ^ data_142d3f780
    
    if (arg11 != 0)
        zmm0 = _mm_and_ps(zmm0, zmm13)
    
    zmm0[0] = zmm0[0] f- arg12
    zmm0[0] = zmm0[0] f/ zmm14[0]
    
    if (arg6 != 0)
        zmm0, zmm6, zmm7, zmm8, zmm9, zmm10 = sub_141accbc0(zmm0, arg5, arg6, arg7, arg8[0])
    
    zmm6[0] = zmm6[0] f* zmm0[0]
    zmm6[0] = zmm6[0] f+ zmm15[0]
    
    if (arg11 != 0)
        zmm6 = zmm11
        zmm6[0] = zmm6[0] f* zmm0[0]
        zmm6[0] = zmm6[0] f+ zmm12[0]
    
    float zmm1[0x4]
    
    if (rdi_1.d u> 5)
        zmm6 = var_d8
    else
        switch (rdi_1)
            case 0
                var_f8.d = zmm6[0]
                zmm6 = *sub_140ada080(&var_e8, &var_f8)
            case 1
                var_f8:4.d = zmm6[0]
                zmm6 = *sub_140ada080(&var_e8, &var_f8)
            case 2
                uint32_t var_f0_5 = zmm6[0]
                zmm6 = *sub_140ada080(&var_e8, &var_f8)
            case 3
                zmm0 = var_d8[3]
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm7[0] = zmm7[0] f- zmm0[0]
                float temp0_35[0x4] = _mm_max_ss(zmm7[0], zmm9.d)
                float temp0_36[0x4] = _mm_sqrt_ss(zx.o(0)[0], temp0_35[0])
                
                if (temp0_36[0] < 9.99999975e-05f)
                    zmm3 = zmm7
                    zmm4 = zx.o(0)
                    zmm5 = zx.o(0)
                else
                    zmm3 = var_d8[0]
                    zmm0 = zmm7
                    zmm4 = var_d8[1]
                    zmm5 = var_d8[2]
                    zmm0[0] = zmm0[0] f/ temp0_36[0]
                    zmm3[0] = zmm3[0] f* zmm0[0]
                    zmm4[0] = zmm4[0] f* zmm0[0]
                    zmm5[0] = zmm5[0] f* zmm0[0]
                
                zmm6[0] = zmm6[0] f* 0.00872664619f
                bool cond:1_1 = zmm6[0] f< zmm9.d
                zmm6[0] = zmm6[0] f* 0.159154937f
                
                if (cond:1_1)
                    zmm6[0] = zmm6[0] f- zmm10.d
                else
                    zmm6[0] = zmm6[0] f+ zmm10.d
                
                zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm6[0])))
                zmm0[0] = zmm0[0] f* 6.28318548f
                zmm6[0] = zmm6[0] f- zmm0[0]
                
                if (not(zmm6[0] f<= 1.57079637f))
                    zmm0 = 0x40490fdb
                    zmm0[0] = 3.14159274f f- zmm6[0]
                    zmm6 = zmm0
                else if (zmm6[0] f>= -1.57079637f)
                    zmm8 = zmm7
                else
                    zmm0 = 0xc0490fdb
                    zmm0[0] = -3.14159274f f- zmm6[0]
                    zmm6 = zmm0
                
                zmm1 = 0x3638b88e
                zmm2 = zmm6
                zmm2[0] = zmm2[0] f* zmm6[0]
                zmm0 = zmm2
                zmm0[0] = zmm0[0] f* 2.3889859e-08f
                zmm1[0] = 2.75255616e-06f f- zmm0[0]
                zmm0 = zmm2
                zmm0[0] = zmm0[0] f* 2.60516146e-07f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] - 0.000198408743f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] + 0.00833333097f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] - 0.166666672f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] + zmm7[0]
                zmm1[0] = zmm1[0] f* zmm6[0]
                zmm3[0] = zmm3[0] * zmm1[0]
                zmm4[0] = zmm4[0] * zmm1[0]
                zmm5[0] = zmm5[0] * zmm1[0]
                zmm6 = zmm3
                zmm1 = 0x37cfb4c2
                zmm1[0] = 2.47604949e-05f f- zmm0[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
                zmm6[0] = zmm4[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
                zmm6[0] = zmm5[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] - 0.00138883782f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] + 0.0416666381f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] f- zmm10.d
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] + zmm7[0]
                zmm1[0] = zmm1[0] * zmm8[0]
                zmm6[0] = zmm1[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
            case 4
                zmm0 = var_b8[3]
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm7[0] = zmm7[0] f- zmm0[0]
                float temp0_42[0x4] = _mm_max_ss(zmm7[0], zmm9.d)
                float temp0_43[0x4] = _mm_sqrt_ss(zx.o(0)[0], temp0_42[0])
                
                if (temp0_43[0] < 9.99999975e-05f)
                    zmm4 = zmm7
                    zmm3 = zx.o(0)
                    zmm5 = zx.o(0)
                else
                    zmm4 = var_b8[0]
                    zmm0 = zmm7
                    zmm3 = var_b8[1]
                    zmm5 = var_b8[2]
                    zmm0[0] = zmm0[0] f/ temp0_43[0]
                    zmm4[0] = zmm4[0] f* zmm0[0]
                    zmm3[0] = zmm3[0] f* zmm0[0]
                    zmm5[0] = zmm5[0] f* zmm0[0]
                
                zmm6[0] = zmm6[0] f* 0.00872664619f
                bool cond:2_1 = zmm6[0] f< zmm9.d
                zmm6[0] = zmm6[0] f* 0.159154937f
                
                if (cond:2_1)
                    zmm6[0] = zmm6[0] f- zmm10.d
                else
                    zmm6[0] = zmm6[0] f+ zmm10.d
                
                zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm6[0])))
                zmm0[0] = zmm0[0] f* 6.28318548f
                zmm6[0] = zmm6[0] f- zmm0[0]
                
                if (not(zmm6[0] f<= 1.57079637f))
                    zmm0 = 0x40490fdb
                    zmm0[0] = 3.14159274f f- zmm6[0]
                    zmm6 = zmm0
                else if (zmm6[0] f>= -1.57079637f)
                    zmm8 = zmm7
                else
                    zmm0 = 0xc0490fdb
                    zmm0[0] = -3.14159274f f- zmm6[0]
                    zmm6 = zmm0
                
                zmm1 = 0x3638b88e
                zmm2 = zmm6
                zmm2[0] = zmm2[0] f* zmm6[0]
                zmm0 = zmm2
                zmm0[0] = zmm0[0] f* 2.3889859e-08f
                zmm1[0] = 2.75255616e-06f f- zmm0[0]
                zmm0 = zmm2
                zmm0[0] = zmm0[0] f* 2.60516146e-07f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] - 0.000198408743f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] + 0.00833333097f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] - 0.166666672f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] + zmm7[0]
                zmm1[0] = zmm1[0] f* zmm6[0]
                zmm4[0] = zmm4[0] * zmm1[0]
                zmm3[0] = zmm3[0] * zmm1[0]
                zmm5[0] = zmm5[0] * zmm1[0]
                zmm1 = 0x37cfb4c2
                zmm1[0] = 2.47604949e-05f f- zmm0[0]
                float temp0_45[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
                temp0_45[0] = zmm3[0]
                float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc6)
                temp0_46[0] = zmm5[0]
                float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0x27)
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] - 0.00138883782f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] + 0.0416666381f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] f- zmm10.d
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm2 = var_c8.o
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm1[0] = zmm1[0] + zmm7[0]
                zmm1[0] = zmm1[0] * zmm8[0]
                temp0_47[0] = zmm1[0]
                float temp0_49[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0x39)
                float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_49, temp0_49, 0x1b), zmm0)
                float temp0_52[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0x4e)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_49)
                float temp0_55[0x4] = __mulps_xmmps_memps(temp0_51, data_143f2b850)
                float temp0_56[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xb1)
                float temp0_57[0x4] = _mm_add_ps(temp0_55, zmm0)
                float temp0_59[0x4] = _mm_mul_ps(temp0_52, _mm_shuffle_ps(zmm2, zmm2, 0x55))
                float temp0_61[0x4] = _mm_mul_ps(temp0_56, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
                float temp0_62[0x4] = __mulps_xmmps_memps(temp0_59, data_143f2b840)
                float temp0_63[0x4] = __mulps_xmmps_memps(temp0_61, data_143f2b830)
                zmm3 = _mm_add_ps(_mm_add_ps(temp0_57, temp0_62), temp0_63)
            label_141acc294:
                zmm6 = zmm3
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
                zmm6[0] = _mm_shuffle_ps(zmm3, zmm3, 0x55)[0]
                float temp0_68[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
                zmm6[0] = temp0_68[0]
                float temp0_70[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
                zmm6[0] = temp0_70[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
            case 5
                zmm0 = var_bc
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm7[0] = zmm7[0] f- zmm0[0]
                float temp0_73[0x4] = _mm_max_ss(zmm7[0], zmm9.d)
                float temp0_74[0x4] = _mm_sqrt_ss(zx.o(0)[0], temp0_73[0])
                
                if (temp0_74[0] < 9.99999975e-05f)
                    zmm4 = zmm7
                    zmm5 = zx.o(0)
                    zmm11 = zx.o(0)
                else
                    zmm4 = var_c8
                    zmm0 = zmm7
                    int32_t var_c4
                    zmm5 = var_c4
                    int32_t var_c0
                    zmm11 = var_c0
                    zmm0[0] = zmm0[0] f/ temp0_74[0]
                    zmm4[0] = zmm4[0] f* zmm0[0]
                    zmm5[0] = zmm5[0] f* zmm0[0]
                    zmm11[0] = zmm11[0] f* zmm0[0]
                
                zmm6[0] = zmm6[0] f* 0.00872664619f
                bool cond:3_1 = zmm6[0] f< zmm9.d
                zmm6[0] = zmm6[0] f* 0.159154937f
                
                if (cond:3_1)
                    zmm6[0] = zmm6[0] f- zmm10.d
                else
                    zmm6[0] = zmm6[0] f+ zmm10.d
                
                zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm6[0])))
                zmm0[0] = zmm0[0] f* 6.28318548f
                zmm6[0] = zmm6[0] f- zmm0[0]
                
                if (not(zmm6[0] f<= 1.57079637f))
                    zmm0 = 0x40490fdb
                    zmm0[0] = 3.14159274f f- zmm6[0]
                    zmm6 = zmm0
                else if (zmm6[0] f>= -1.57079637f)
                    zmm8 = zmm7
                else
                    zmm0 = 0xc0490fdb
                    zmm0[0] = -3.14159274f f- zmm6[0]
                    zmm6 = zmm0
                
                zmm1 = 0x3638b88e
                zmm2 = zmm6
                zmm2[0] = zmm2[0] f* zmm6[0]
                zmm0 = zmm2
                zmm0[0] = zmm0[0] f* 2.3889859e-08f
                zmm1[0] = 2.75255616e-06f f- zmm0[0]
                zmm0 = zmm2
                zmm0[0] = zmm0[0] f* 2.60516146e-07f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] - 0.000198408743f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] + 0.00833333097f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] - 0.166666672f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] + zmm7[0]
                zmm1[0] = zmm1[0] f* zmm6[0]
                zmm4[0] = zmm4[0] * zmm1[0]
                zmm5[0] = zmm5[0] * zmm1[0]
                zmm11[0] = zmm11[0] f* zmm1[0]
                zmm1 = 0x37cfb4c2
                zmm1[0] = 2.47604949e-05f f- zmm0[0]
                float temp0_76[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
                temp0_76[0] = zmm5[0]
                float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xc6)
                temp0_77[0] = zmm11[0]
                float temp0_78[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0x27)
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] - 0.00138883782f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] + 0.0416666381f
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] f- zmm10.d
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm2 = var_b8
                float temp0_79[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
                zmm1[0] = zmm1[0] + zmm7[0]
                zmm1[0] = zmm1[0] * zmm8[0]
                temp0_78[0] = zmm1[0]
                float temp0_80[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x39)
                float temp0_81[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                float temp0_83[0x4] = _mm_mul_ps(temp0_79, _mm_shuffle_ps(temp0_80, temp0_80, 0))
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0xff), zmm2)
                float temp0_86[0x4] = __mulps_xmmps_memps(temp0_83, data_143f2b850)
                float temp0_87[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                float temp0_88[0x4] = _mm_add_ps(temp0_86, zmm0)
                float temp0_90[0x4] = _mm_mul_ps(temp0_81, _mm_shuffle_ps(temp0_80, temp0_80, 0x55))
                float temp0_92[0x4] = _mm_mul_ps(temp0_87, _mm_shuffle_ps(temp0_80, temp0_80, 0xaa))
                float temp0_93[0x4] = __mulps_xmmps_memps(temp0_90, data_143f2b840)
                float temp0_94[0x4] = __mulps_xmmps_memps(temp0_92, data_143f2b830)
                zmm3 = _mm_add_ps(_mm_add_ps(temp0_88, temp0_93), temp0_94)
                goto label_141acc294
    zmm5 = data_143f2b8b0
    float temp0_97[0x4] = _mm_mul_ps(zmm6, zmm6)
    float temp0_99[0x4] = _mm_add_ps(temp0_97, _mm_shuffle_ps(temp0_97, temp0_97, 0x4e))
    float temp0_101[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0x39), temp0_99)
    float temp0_102[0x4] = _mm_rsqrt_ps(temp0_101)
    float temp0_103[0x4] = _mm_mul_ps(temp0_101, zmm5)
    float temp0_108[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_102, temp0_102), temp0_103)), 
            temp0_102), 
        temp0_102)
    float temp0_111[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_108, temp0_108), temp0_103))
    zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_101, 2)
    float temp0_115[0x4] = _mm_add_ps(_mm_mul_ps(temp0_111, temp0_108), temp0_108)
    zmm2 = *arg4
    float temp0_116[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_117[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm5 = _mm_and_ps(_mm_mul_ps(temp0_115, zmm6) ^ data_143f2b8a0, zmm0) ^ data_143f2b8a0
    float temp0_121[0x4] = _mm_mul_ps(temp0_116, _mm_shuffle_ps(zmm5, zmm5, 0x1b))
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm5)
    float temp0_124[0x4] = __mulps_xmmps_memps(temp0_121, data_143f2b850)
    float temp0_125[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_126[0x4] = _mm_add_ps(temp0_124, zmm0)
    float temp0_128[0x4] = _mm_mul_ps(temp0_117, _mm_shuffle_ps(zmm5, zmm5, 0x4e))
    float temp0_130[0x4] = _mm_mul_ps(temp0_125, _mm_shuffle_ps(zmm5, zmm5, 0xb1))
    float temp0_131[0x4] = __mulps_xmmps_memps(temp0_128, data_143f2b840)
    float temp0_132[0x4] = __mulps_xmmps_memps(temp0_130, data_143f2b830)
    *arg1 = _mm_add_ps(_mm_add_ps(temp0_126, temp0_131), temp0_132)

return arg1
