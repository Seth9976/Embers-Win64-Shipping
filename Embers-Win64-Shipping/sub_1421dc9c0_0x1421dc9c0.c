// 函数: sub_1421dc9c0
// 地址: 0x1421dc9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result_27 = arg4[0]
float result_33[0x4]
float result_47[0x4] = result_33
float result_13[0x4]
float result_26[0x4] = result_13
float result_34[0x4] = 0x3f800000
uint128_t result_14 = arg4
int32_t result_49 = data_143dbb1f8.d
char rax = *(arg1 + 0x168)
float result_53[0x4] = 0xbf800000
int32_t result_63 = data_143dbb1fc.d
int32_t result_48 = data_143dbb200.d
float result_66[0x4]

if (rax == 0 || zx.d(rax) - 1 u> 0xb)
    result_66 = zx.o(0)
else
    switch (rax)
        case 1, 5, 9
            result_66 = zx.o(0)
            result_48 = 0x3f800000
            result_49 = 0
            result_63 = 0
        case 2, 6, 0xa
            result_66 = zx.o(0)
            result_48 = 0xbf800000
            result_49 = 0
            result_63 = 0
        case 3, 7, 0xb
            result_66 = zx.o(0)
            result_63 = 0x3f800000
            result_49 = 0
            result_48 = 0
        case 4, 8, 0xc
            result_66 = zx.o(0)
            result_63 = 0xbf800000
            result_49 = 0
            result_48 = 0

float result_1[0x4]
float result_40
float result_19[0x4]

if ((*(arg1 + 0x164) & 2) != 0)
    result_1[0].q = 0x3f800000
    result_1[2] = 0
    float (* rax_4)[0x4]
    rax_4, result_66 = sub_140ad6660(&result_19, &result_1, arg1 + 0x120)
    result_40.o = *rax_4

uint128_t* rsi = arg13
float result_51[0x4] = data_142d3f660
int32_t var_11c = 0x3f800000
*rsi = data_14399f6e0
rsi[1] = data_14399f6f0
rsi[2] = data_14399f700
rsi[3] = data_14399f710
float result_32[0x4] = arg2[1]
float result_35[0x4] = arg2[2]
uint128_t result_52 = arg2[3]
float result_36[0x4] = arg3[1]
result_36[0] = result_36[0] f+ *(arg9 + 4)
arg4 = arg3[2]
arg4[0] = arg4[0] f+ *(arg9 + 8)
result_33 = *arg9
uint128_t result = data_14399f720
float result_11[0x4] = *(arg1 + 0x6c)
float result_31[0x4] = data_14399f710
uint128_t result_12
result_12.d = (*arg6).d f* *(arg1 + 0x68)
int64_t var_194 = 0
result_11[0] = result_11[0] f* *(arg6 + 4)
int64_t var_18c = 0
result_33[0] = result_33[0] f+ *arg3
float result_9[0x4] = result
result.d = (*(arg1 + 0x70)).d f* *(arg6 + 8)
int64_t var_180 = 0
float result_43[0x4] = result_31
result_31 = *arg2
char rbx_1 = (*(arg1 + 0x164)).b
int32_t var_170 = result.d
uint128_t result_62 = data_14399f6f0
int32_t result_42 = result_40.d
int32_t result_3
result = result_3
float result_18 = result.d
int32_t var_2b4 = result.d
int32_t result_4
result = result_4
int32_t result_17 = result.d
int32_t var_2b0 = result.d
int32_t result_5
result = result_5
int32_t var_198 = result_12.d
result_12 = data_14399f6e0
float var_184 = result_11[0]
result_11 = data_14399f700
int32_t result_7 = result.d
int32_t var_2ac = result.d
float var_128 = result_33[0]
float var_124 = result_36[0]
float var_120 = arg4[0]
int64_t var_178 = 0
int32_t var_16c = 0
float result_2[0x4] = result_36
result_1 = arg4
uint128_t result_24 = result_12
float result_25[0x4] = result_11
float result_10[0x4] = result_31
float result_8[0x4] = result_31
float result_46[0x4] = result_32
float result_21[0x4] = result_32
float result_20[0x4] = result_35
float result_22[0x4] = result_35
uint128_t result_44 = result_52
uint128_t result_61 = result_52
float result_16[0x4]
void var_108
float result_37
uint64_t var_2c8

if ((rbx_1 & 4) == 0)
    if ((rbx_1 & 2) != 0)
        result = zx.o(*(arg1 + 0x120))
        result_14.d = result_14.d f* 0.5f
        result_1[2] = *(arg1 + 0x128)
        result_1[0].q = result.q
        result.d = result_14.d f* 0.159154937f
        
        if (result_14.d f< result_66[0])
            result.d = result.d f- 0.5f
        else
            result.d = result.d f+ 0.5f
        
        result.d = _mm_cvtepi32_ps(zx.o(int.d(result.d))).d f* 6.28318548f
        result_14.d = result_14.d f- result.d
        
        if (not(result_14.d f<= 1.57079637f))
            result.d = 3.14159274f f- result_14.d
            result_14 = result
        else if (result_14.d f>= -1.57079637f)
            result_53 = 0x3f800000
        else
            result.d = -3.14159274f f- result_14.d
            result_14 = result
        
        result_11 = 0x3638b88e
        result_31 = result_14
        result_66 = result_1[0]
        result_12 = result_1[1]
        arg4 = result_1[2]
        result_31[0] = result_31[0] f* result_14.d
        result.d = result_31.d f* 2.3889859e-08f
        result_11[0] = 2.75255616e-06f f- result.d
        result.d = result_31.d f* 2.60516146e-07f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] - 0.000198408743f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] + 0.00833333097f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] - 0.166666672f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] + 1f
        result_11[0] = result_11[0] f* result_14.d
        result_66[0] = result_66[0] * result_11[0]
        result_12.d = result_12.d f* result_11[0]
        arg4[0] = arg4[0] * result_11[0]
        result_11 = 0x37cfb4c2
        result_11[0] = 2.47604949e-05f f- result.d
        float temp0_306[0x4] = _mm_shuffle_ps(result_66, result_66, 0xe1)
        temp0_306[0] = result_12.d
        float temp0_307[0x4] = _mm_shuffle_ps(temp0_306, temp0_306, 0xc6)
        temp0_307[0] = arg4[0]
        float temp0_308[0x4] = _mm_shuffle_ps(temp0_307, temp0_307, 0x27)
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] - 0.00138883782f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] + 0.0416666381f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] - 0.5f
        result_11[0] = result_11[0] * result_31[0]
        result_31 = result_42.o
        float temp0_309[0x4] = _mm_shuffle_ps(result_31, result_31, 0x1b)
        result_11[0] = result_11[0] + 1f
        result_11[0] = result_11[0] * result_53[0]
        temp0_308[0] = result_11[0]
        float temp0_310[0x4] = _mm_shuffle_ps(temp0_308, temp0_308, 0x39)
        float temp0_311[0x4] = _mm_shuffle_ps(result_31, result_31, 0x4e)
        float temp0_313[0x4] = _mm_mul_ps(temp0_309, _mm_shuffle_ps(temp0_310, temp0_310, 0))
        result = _mm_mul_ps(_mm_shuffle_ps(temp0_310, temp0_310, 0xff), result_31)
        float temp0_316[0x4] = __mulps_xmmps_memps(temp0_313, data_143f505c0)
        float temp0_317[0x4] = _mm_shuffle_ps(result_31, result_31, 0xb1)
        float temp0_318[0x4] = _mm_add_ps(temp0_316, result)
        float temp0_320[0x4] = _mm_mul_ps(temp0_311, _mm_shuffle_ps(temp0_310, temp0_310, 0x55))
        float temp0_322[0x4] = _mm_mul_ps(temp0_317, _mm_shuffle_ps(temp0_310, temp0_310, 0xaa))
        float temp0_323[0x4] = __mulps_xmmps_memps(temp0_320, data_143f505b0)
        float temp0_324[0x4] = __mulps_xmmps_memps(temp0_322, data_143f505a0)
        result_9 = _mm_add_ps(_mm_add_ps(temp0_318, temp0_323), temp0_324)
        goto label_1421dda6a
    
    if (*(arg1 + 0xe2) != 5)
        result_14.d = result_14.d f* 57.2957764f
        result_40 = result_14.d
        int32_t var_2e4_2 = result_14.d
        int32_t var_2e0_9 = result_14.d
        sub_140ada0c0(&result_1, &result_40)
        int32_t* rax_32 = sub_140ada0c0(&var_2c8, arg8)
        result_11 = result_1[1]
        result.d = result_1[0].d f+ *rax_32
        result_1[0] = result.d
        result_11[0] = result_11[0] f+ rax_32[1]
        result = result_1[2]
        result_1[1] = result_11[0]
        result.d = result.d f+ rax_32[2]
        result_1[2] = result.d
        float* rax_33
        rax_33, result_51 = sub_14077e760(&var_108, &result_1)
        result_34 = *(rax_33 + 0x30)
        result_14 = *rax_33
        result_52 = *(rax_33 + 0x10)
        result_53 = *(rax_33 + 0x20)
        result_43 = result_34
    else
        if (*(arg1 + 0xe0) != 0)
            result_16[3] = 0x3f800000
            result_12.d = result_33[0]
            result_2[0].q = 0
            _mm_shuffle_ps(result_12, result_12, 0xe1)
            result_12.d = result_36[0]
            result_2[2] = 0
            _mm_shuffle_ps(result_12, result_12, 0xc6)
            result_12.d = arg4[0]
            result_12 = _mm_shuffle_ps(result_12, result_12, 0xc9)
            result_16 = result_12
            float temp0_330[0x4] = _mm_shuffle_ps(result_12, result_12, 0xff)
            result = _mm_shuffle_ps(result_12, result_12, 0xaa)
            float temp0_332[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
            result = _mm_mul_ps(result, result_35)
            result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0), result_31)
            float temp0_336[0x4] = _mm_mul_ps(temp0_330, result_52)
            float temp0_337[0x4] = _mm_mul_ps(temp0_332, result_32)
            __builtin_memcpy(&result_20, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            float result_58[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_336, result), _mm_add_ps(temp0_337, result_12))
            var_128 = result_58[0]
            result = _mm_shuffle_ps(result_58, result_58, 0xaa)
            float result_59[0x4] = _mm_shuffle_ps(result_58, result_58, 0x55)
            result_33 = result_58
            result_1 = result
            result_36 = result_59
            arg4 = result_1
            int32_t var_120_2 = result.d
            __builtin_memcpy(&result_10, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00", 
                0x20)
            float var_124_2 = result_59[0]
        
        result_13 = *arg11
        result_51 = (*arg11)[2]
        result_13[0] = result_13[0] - result_33[0]
        result_33 = (*arg11)[1]
        result_51[0] = result_51[0] - arg4[0]
        result_33[0] = result_33[0] - result_36[0]
        result_37 = result_13[0]
        result.d = result_13.d f* result_13[0]
        result_51[0] = result_51[0] * result_51[0]
        result_12.d = result_33.d f* result_33[0]
        float var_314_1 = result_33[0]
        float result_15 = result_51[0]
        result_12.d = result_12.d f+ result.d
        result_12.d = result_12.d f+ result_51[0]
        
        if (not(result_12.d f<= 9.99999994e-09f))
            result_31 = 0x3f000000
            arg4 = result_12
            float temp0_341[0x4] = _mm_rsqrt_ss(result_12[0], arg4[0])
            arg4[0] = arg4[0] * 0.5f
            result.d = temp0_341.d f* temp0_341[0]
            arg4[0] = arg4[0] f* result.d
            result_12.d = 0.5f - arg4[0]
            result.d = temp0_341.d f* result_12.d
            temp0_341[0] = temp0_341[0] f+ result.d
            temp0_341[0] = temp0_341[0] * temp0_341[0]
            arg4[0] = arg4[0] * temp0_341[0]
            result_31[0] = 0.5f - arg4[0]
            result.d = temp0_341.d f* result_31[0]
            temp0_341[0] = temp0_341[0] f+ result.d
            result_13[0] = result_13[0] * temp0_341[0]
            result_33[0] = result_33[0] * temp0_341[0]
            result_51[0] = result_51[0] * temp0_341[0]
            result_37 = result_13[0]
            var_314_1 = result_33[0]
            result_15 = result_51[0]
        
        result_33[0] = result_33[0] * result_33[0]
        result_13[0] = result_13[0] * result_13[0]
        result_51[0] = result_51[0] * result_51[0]
        result_33[0] = result_33[0] + result_13[0]
        result_33[0] = result_33[0] + result_51[0]
        
        if (not(result_33[0] >= 0.5f))
            result_37.q = 0x3f800000
            result_15 = 0f
        
        int32_t var_2e0_4 = 0
        int32_t result_45 = 0
        uint64_t var_218 = (_mm_unpacklo_ps(0x3f800000, result_66[0].q)).q
        int32_t var_2e0_5 = 0x3f800000
        int32_t var_110_1 = 0x3f800000
        char rax_24 = *(arg1 + 0x11c)
        uint64_t var_118 = (_mm_unpacklo_ps(zx.o(0), result_66[0].q)).q
        int128_t* rdx_10
        
        if (rax_24 != 2)
            float* r8_7 = &result_37
            int128_t* rdx_11 = &var_218
            float (* rcx_13)[0x4] = &result_19
            
            if (rax_24 != 1)
                result_14.d = result_14.d f* 0.5f
                int32_t var_2e0_8 = 0
                uint128_t result_29
                result_29.d = result_14.d f* 0.159154937f
                
                if (result_14.d f< sub_140acd070(&result_40, sub_140ad6660(rcx_13, rdx_11, r8_7)))
                    result_29.d = result_29.d f- 0.5f
                else
                    result_29.d = result_29.d f+ 0.5f
                
                result_29.d = _mm_cvtepi32_ps(zx.o(int.d(result_29.d))).d f* 6.28318548f
                result_14.d = result_14.d f- result_29.d
                
                if (not(result_14.d f<= 1.57079637f))
                    result_29.d = 3.14159274f f- result_14.d
                    result_14 = result_29
                else if (result_14.d f>= -1.57079637f)
                    result_53 = 0x3f800000
                else
                    result_29.d = -3.14159274f f- result_14.d
                    result_14 = result_29
                
                float zmm8_2[0x4] = 0x3638b88e
                uint128_t zmm1_3
                zmm1_3.d = result_14.d f* result_14.d
                result_29.d = zmm1_3.d f* 2.3889859e-08f
                zmm8_2[0] = 2.75255616e-06f f- result_29.d
                result_29.d = zmm1_3.d f* 2.60516146e-07f
                zmm8_2[0] = zmm8_2[0] f* zmm1_3.d
                zmm8_2[0] = zmm8_2[0] - 0.000198408743f
                zmm8_2[0] = zmm8_2[0] f* zmm1_3.d
                zmm8_2[0] = zmm8_2[0] + 0.00833333097f
                zmm8_2[0] = zmm8_2[0] f* zmm1_3.d
                zmm8_2[0] = zmm8_2[0] - 0.166666672f
                zmm8_2[0] = zmm8_2[0] f* zmm1_3.d
                zmm8_2[0] = zmm8_2[0] + 1f
                zmm8_2[0] = zmm8_2[0] f* result_14.d
                zmm8_2[0]
                zmm8_2[0] = zmm8_2[0] * result_37
                zmm8_2[0] = zmm8_2[0] * result_15
                result_53[0]
                float (* rax_30)[0x4]
                int32_t zmm6_3
                int32_t zmm7_3
                int32_t zmm8_3
                rax_30, zmm6_3, zmm7_3, zmm8_3 = sub_140ade170(&result_40, &result_19)
                float temp0_383[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xe1)
                temp0_383[0] = zmm6_3
                float temp0_384[0x4] = _mm_shuffle_ps(temp0_383, temp0_383, 0xc6)
                float zmm2_3[0x4] = *rax_30
                temp0_384[0] = zmm8_3
                float temp0_385[0x4] = _mm_shuffle_ps(temp0_384, temp0_384, 0x27)
                float temp0_386[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x1b)
                float temp0_387[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x4e)
                temp0_385[0] = zmm7_3
                float temp0_388[0x4] = _mm_shuffle_ps(temp0_385, temp0_385, 0x39)
                float temp0_390[0x4] =
                    _mm_mul_ps(temp0_386, _mm_shuffle_ps(temp0_388, temp0_388, 0))
                float temp0_392[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_388, temp0_388, 0xff), zmm2_3)
                float temp0_393[0x4] = __mulps_xmmps_memps(temp0_390, data_143f505c0)
                float temp0_394[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xb1)
                float temp0_395[0x4] = _mm_add_ps(temp0_393, temp0_392)
                float temp0_397[0x4] =
                    _mm_mul_ps(temp0_387, _mm_shuffle_ps(temp0_388, temp0_388, 0x55))
                float temp0_399[0x4] =
                    _mm_mul_ps(temp0_394, _mm_shuffle_ps(temp0_388, temp0_388, 0xaa))
                float temp0_400[0x4] = __mulps_xmmps_memps(temp0_397, data_143f505b0)
                float temp0_401[0x4] = __mulps_xmmps_memps(temp0_399, data_143f505a0)
                result_19 = _mm_add_ps(_mm_add_ps(temp0_395, temp0_400), temp0_401)
            else
                float zmm6 = sub_140acd070(&result_40, sub_140ad6660(rcx_13, rdx_11, r8_7))
                float result_72[0x4] = var_314_1 ^ data_142d3f780
                float result_68[0x4] = result_37
                result_72[0] = result_72[0] * result_72[0]
                int32_t var_2e0_7 = 0
                result_68[0] = result_68[0] * result_68[0]
                result_68[0] = result_68[0] + result_72[0]
                
                if (not(result_68[0] <= 9.99999994e-09f))
                    float result_71[0x4] = _mm_rsqrt_ss(result_68[0], result_68[0])
                    result_68[0] = result_68[0] * 0.5f
                    result_71[0] = result_71[0] * result_71[0]
                    result_68[0] = result_68[0] * result_71[0]
                    result_71[0] = result_71[0] * (0.5f - result_68[0])
                    result_71[0] = result_71[0] + result_71[0]
                    result_71[0] = result_71[0] * result_71[0]
                    result_68[0] = result_68[0] * result_71[0]
                    result_71[0] = result_71[0] * (0.5f - result_68[0])
                    result_71[0] = result_71[0] + result_71[0]
                    result_71[0] = result_71[0] * result_68[0]
                    result_71[0] = result_71[0] * result_72[0]
                    result_68 = result_71
                    result_72 = result_71
                
                result_68[0] = result_68[0] * result_68[0]
                result_72[0] = result_72[0] * result_72[0]
                result_68[0] = result_68[0] + result_72[0]
                
                if (not(result_68[0] >= 0.5f))
                    result_72 = 0x3f800000
                    result_68 = zx.o(0)
                
                result_14.d = result_14.d f* 0.5f
                float result_28[0x4] = result_14
                result_28[0] = result_28[0] * 0.159154937f
                
                if (result_14.d f< zmm6)
                    result_28[0] = result_28[0] - 0.5f
                else
                    result_28[0] = result_28[0] + 0.5f
                
                float temp0_362[0x4] = _mm_cvtepi32_ps(zx.o(int.d(result_28[0])))
                temp0_362[0] = temp0_362[0] * 6.28318548f
                result_14.d = result_14.d f- temp0_362[0]
                
                if (not(result_14.d f<= 1.57079637f))
                    result_28 = 0x40490fdb
                    result_28[0] = 3.14159274f f- result_14.d
                    result_14 = result_28
                else if (result_14.d f>= -1.57079637f)
                    result_53 = 0x3f800000
                else
                    result_28 = 0xc0490fdb
                    result_28[0] = -3.14159274f f- result_14.d
                    result_14 = result_28
                
                float result_30[0x4] = result_14
                result_16[2] = 0
                result_30[0] = result_30[0] f* result_14.d
                result_30[0] = result_30[0] * 2.3889859e-08f
                float zmm8 = 2.75255616e-06f - result_30[0]
                result_30[0] = result_30[0] * 2.60516146e-07f
                (((zmm8 * result_30[0] - 0.000198408743f) * result_30[0] + 0.00833333097f)
                    * result_30[0] - 0.166666672f) * result_30[0]
                result_68[0]
                result_72[0]
                result_72 = 0x37cfb4c2
                result_72[0] = 2.47604949e-05f - result_30[0]
                result_72[0] = result_72[0] * result_30[0]
                result_72[0] = result_72[0] - 0.00138883782f
                result_72[0] = result_72[0] * result_30[0]
                result_72[0] = result_72[0] + 0.0416666381f
                result_72[0] = result_72[0] * result_30[0]
                result_72[0] = result_72[0] - 0.5f
                result_72[0] = result_72[0] * result_30[0]
                result_72[0] = result_72[0] + 1f
                result_72[0] = result_72[0] * result_53[0]
                float (* rax_27)[0x4]
                int32_t zmm6_1
                int32_t zmm7_1
                int32_t zmm8_1
                rax_27, zmm6_1, zmm7_1, zmm8_1 = sub_140ade170(&result_40, &result_19)
                result_16[0] = zmm6_1
                float temp0_363[0x4] = _mm_shuffle_ps(result_16, result_16, 0xe1)
                float zmm3_2[0x4] = *rax_27
                temp0_363[0] = zmm8_1
                float temp0_364[0x4] = _mm_shuffle_ps(temp0_363, temp0_363, 0x87)
                float temp0_365[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x1b)
                temp0_364[0] = zmm7_1
                float result_60[0x4] = _mm_shuffle_ps(temp0_364, temp0_364, 0x39)
                result_16 = result_60
                float temp0_367[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(result_60, result_60, 0), temp0_365)
                float temp0_368[0x4] = _mm_shuffle_ps(result_60, result_60, 0xff)
                float temp0_369[0x4] = _mm_shuffle_ps(result_60, result_60, 0x55)
                float temp0_370[0x4] = _mm_mul_ps(temp0_368, zmm3_2)
                float temp0_371[0x4] = __mulps_xmmps_memps(temp0_367, data_143f505c0)
                float temp0_372[0x4] = _mm_shuffle_ps(result_60, result_60, 0xaa)
                float temp0_373[0x4] = _mm_add_ps(temp0_371, temp0_370)
                float temp0_375[0x4] = _mm_mul_ps(temp0_369, _mm_shuffle_ps(zmm3_2, zmm3_2, 0x4e))
                float temp0_377[0x4] = _mm_mul_ps(temp0_372, _mm_shuffle_ps(zmm3_2, zmm3_2, 0xb1))
                float temp0_378[0x4] = __mulps_xmmps_memps(temp0_375, data_143f505b0)
                float temp0_379[0x4] = __mulps_xmmps_memps(temp0_377, data_143f505a0)
                result_19 = _mm_add_ps(_mm_add_ps(temp0_373, temp0_378), temp0_379)
            
            rdx_10 = &result_19
        else
            sub_140ad6660(&result_43, &var_118, arg1 + 0x120)
            float zmm2[0x4] = *(arg1 + 0x120)
            float result_67[0x4] = result_37
            float zmm7[0x4] = var_314_1
            result_13 = result_15
            float zmm3[0x4] = *(arg1 + 0x124)
            float zmm4[0x4] = *(arg1 + 0x128)
            zmm3[0] = zmm3[0] * zmm7[0]
            float zmm1 = zmm4[0]
            zmm2[0] = zmm2[0] * result_67[0]
            zmm1 = zmm1 * result_13[0]
            zmm2[0] = zmm2[0] + zmm3[0]
            zmm2[0] = zmm2[0] + zmm1
            zmm2[0] = zmm2[0] * zmm2[0]
            result_67[0] = result_67[0] - zmm2[0]
            zmm2[0] = zmm2[0] * zmm3[0]
            zmm2[0] = zmm2[0] * zmm4[0]
            zmm7[0] = zmm7[0] - zmm2[0]
            result_1[0] = result_67[0]
            result_13[0] = result_13[0] - zmm2[0]
            result_67[0] = result_67[0] * result_67[0]
            result_1[1] = zmm7[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm1 = result_13[0]
            result_1[2] = result_13[0]
            zmm1 = zmm1 * result_13[0]
            zmm7[0] = zmm7[0] + result_67[0]
            zmm7[0] = zmm7[0] + zmm1
            
            if (not(zmm7[0] <= 9.99999994e-09f))
                zmm4 = 0x3f000000
                float temp0_344[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                zmm2 = 0x3f000000
                zmm7[0] = zmm7[0] * 0.5f
                temp0_344[0] = temp0_344[0] * temp0_344[0]
                zmm2[0] = 0.5f - zmm7[0] * temp0_344[0]
                temp0_344[0] = temp0_344[0] * zmm2[0]
                temp0_344[0] = temp0_344[0] + temp0_344[0]
                zmm7[0] = zmm7[0] * temp0_344[0] * temp0_344[0]
                zmm4[0] = 0.5f - zmm7[0]
                temp0_344[0] = temp0_344[0] * zmm4[0]
                temp0_344[0] = temp0_344[0] + temp0_344[0]
                zmm1 = temp0_344[0]
                temp0_344[0] = temp0_344[0] * result_67[0]
                zmm1 = zmm1 * zmm7[0]
                temp0_344[0] = temp0_344[0] * result_13[0]
                result_1[0] = temp0_344[0]
                result_1[1] = zmm1
                result_1[2] = temp0_344[0]
            
            result_35 = result_43[1]
            result_13 = result_43[2]
            result_51 = result_43[0]
            result_36 = result_45
            zmm7 = var_218:4.d
            zmm4 = var_218.d
            zmm3 = result_43[3]
            zmm7[0] = zmm7[0] * result_13[0]
            zmm1 = zmm3[0]
            zmm4[0] = zmm4[0] * result_13[0]
            zmm7[0] = zmm7[0] * result_51[0]
            result_36[0] = result_36[0] * result_35[0]
            result_36[0] = result_36[0] - zmm7[0]
            result_36[0] = result_36[0] * result_51[0]
            zmm4[0] = zmm4[0] - result_36[0]
            zmm4[0] = zmm4[0] * result_35[0]
            result_36[0] = result_36[0] + result_36[0]
            zmm7[0] = zmm7[0] - zmm4[0]
            zmm1 = zmm1 * result_36[0]
            zmm4[0] = zmm4[0] + zmm4[0]
            result_13[0] = result_13[0] * result_36[0]
            zmm1 = zmm1 + zmm4[0]
            result_35[0] = result_35[0] * result_36[0]
            zmm7[0] = zmm7[0] + zmm7[0]
            result_13[0] = result_13[0] * zmm4[0]
            result_35[0] = result_35[0] * zmm7[0]
            result_35[0] = result_35[0] - result_13[0]
            result_51[0] = result_51[0] * zmm7[0]
            result_51[0] = result_51[0] * zmm4[0]
            result_35[0] = result_35[0] + zmm1
            zmm1 = zmm3[0] * zmm4[0]
            result_13[0] = result_13[0] - result_51[0]
            zmm3[0] = zmm3[0] * zmm7[0]
            result_51[0] = result_51[0] - result_35[0]
            zmm1 = zmm1 + zmm7[0]
            result_40 = result_35[0]
            zmm3[0] = zmm3[0] + result_36[0]
            result_13[0] = result_13[0] + zmm1
            result_51[0] = result_51[0] + zmm3[0]
            float var_2e4_1 = result_13[0]
            float var_2e0_6 = result_51[0]
            sub_140ad6660(&result_19, &result_40, &result_1)
            float result_50[0x4] = result_19
            rdx_10 = &result_2
            float result_65[0x4] = result_43
            float temp0_345[0x4] = _mm_shuffle_ps(result_50, result_50, 0)
            float temp0_347[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_65, result_65, 0x1b), temp0_345)
            float temp0_348[0x4] = _mm_shuffle_ps(result_65, result_65, 0x4e)
            float temp0_350[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_50, result_50, 0xff), result_65)
            float temp0_351[0x4] = __mulps_xmmps_memps(temp0_347, data_143f505c0)
            float temp0_352[0x4] = _mm_shuffle_ps(result_65, result_65, 0xb1)
            float temp0_353[0x4] = _mm_add_ps(temp0_351, temp0_350)
            float temp0_355[0x4] = _mm_mul_ps(temp0_348, _mm_shuffle_ps(result_50, result_50, 0x55))
            float temp0_357[0x4] = _mm_mul_ps(temp0_352, _mm_shuffle_ps(result_50, result_50, 0xaa))
            float temp0_358[0x4] = __mulps_xmmps_memps(temp0_355, data_143f505b0)
            float temp0_359[0x4] = __mulps_xmmps_memps(temp0_357, data_143f505a0)
            result_2 = _mm_add_ps(_mm_add_ps(temp0_353, temp0_358), temp0_359)
        
        float* rax_31 = sub_140626b90(&var_108, rdx_10)
        result_35 = result_20
        result_51 = data_142d3f660
        result_34 = *(rax_31 + 0x30)
        result_14 = *rax_31
        result_52 = *(rax_31 + 0x10)
        result_53 = *(rax_31 + 0x20)
        result_43 = result_34
else
    char r14_1 = *(arg1 + 0xe0)
    float result_64 = arg5[1].d
    var_2c8 = *arg5
    float result_41 = result_64
    
    if (r14_1 == 0)
    label_1421dd017:
        result_51 = result_41
        result_13 = var_2c8:4.d
        result_66 = var_2c8.d
    else
        char rax_8 = *(arg1 + 0x168)
        result_1[3] = 0x3f800000
        result_2[0].q = 0
        result_12.d = result_33[0]
        _mm_shuffle_ps(result_12, result_12, 0xe1)
        result_2[2] = 0
        result_12.d = result_36[0]
        _mm_shuffle_ps(result_12, result_12, 0xc6)
        result_12.d = arg4[0]
        result_12 = _mm_shuffle_ps(result_12, result_12, 0xc9)
        result_1 = result_12
        float temp0_4[0x4] = _mm_shuffle_ps(result_12, result_12, 0xff)
        result = _mm_shuffle_ps(result_12, result_12, 0xaa)
        float temp0_6[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
        float temp0_7[0x4] = _mm_mul_ps(temp0_4, result_52)
        result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0), result_31)
        result = _mm_mul_ps(result, result_35)
        float temp0_11[0x4] = _mm_mul_ps(temp0_6, result_32)
        result_33 = _mm_add_ps(_mm_add_ps(temp0_7, result), _mm_add_ps(temp0_11, result_12))
        result_19 = result_33
        result_36 = _mm_shuffle_ps(result_33, result_33, 0x55)
        arg4 = _mm_shuffle_ps(result_33, result_33, 0xaa)
        result_2 = result_36
        result_1 = arg4
        
        if (rax_8 u<= 4)
            result_51 = result_41
            result_13 = var_2c8:4.d
            result_66 = var_2c8.d
        else
            if (rax_8 u< 9)
                goto label_1421dd017
            
            float (* rax_9)[0x4] = sub_1408041d0(&result_8, &var_108)
            result_11 = var_2c8:4.d
            result_44:0xc.d = 0
            result_53 = result_44
            result_66 = (*rax_9)[3]
            arg4 = (*rax_9)[7]
            result_31 = (*rax_9)[0xb]
            result_32 = (*rax_9)[0xf]
            result_34 = (*rax_9)[2]
            result_33 = (*rax_9)[6]
            result_13 = (*rax_9)[0xa]
            result_51 = (*rax_9)[0xe]
            result_52 = (*rax_9)[1]
            result_35 = (*rax_9)[5]
            result_36 = (*rax_9)[9]
            result_14 = (*rax_9)[0xd]
            uint128_t var_1d8_1 = *rax_9
            result_53[0] = var_2c8.d.d
            float temp0_17[0x4] = _mm_shuffle_ps(result_66, result_66, 0xe1)
            temp0_17[0] = arg4[0]
            float temp0_18[0x4] = _mm_shuffle_ps(result_53, result_53, 0xe1)
            temp0_18[0] = result_11[0]
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
            float temp0_20[0x4] = _mm_shuffle_ps(result_34, result_34, 0xe1)
            temp0_19[0] = result_31[0]
            _mm_shuffle_ps(result_52, result_52, 0xe1)
            temp0_20[0] = result_33[0]
            result_52.d = result_35[0]
            float temp0_22[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
            temp0_22[0] = result_41.d
            float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x27)
            temp0_23[0] = result_32[0]
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
            _mm_shuffle_ps(var_1d8_1, var_1d8_1, 0xe1)
            result = _mm_shuffle_ps(temp0_24, temp0_24, 0xff)
            float result_69[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x39)
            result = _mm_mul_ps(result, result_69)
            result_16[0].q = 0
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc6)
            _mm_shuffle_ps(result_52, result_52, 0xc6)
            temp0_28[0] = result_13[0]
            result_52.d = result_36[0]
            float temp0_30[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
            float temp0_31[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x27)
            result_61 = result_69
            temp0_31[0] = result_51[0]
            float result_54[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x39)
            _mm_shuffle_ps(result_52, result_52, 0x27)
            float var_268[0x4] = temp0_24
            result_52.d = result_14.d
            result_52 = _mm_shuffle_ps(result_52, result_52, 0x39)
            result_16[2] = 0
            uint128_t result_6 = result
            result = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xaa), result_54)
            float temp0_36[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0)
            result_22 = result_54
            result_21 = result_52
            float temp0_37[0x4] = _mm_add_ps(result_6, result)
            float temp0_38[0x4] = _mm_mul_ps(temp0_30, result_52)
            result_12.d = rax_9[1][0].d
            result = rax_9[2][0]
            _mm_shuffle_ps(result_12, result_12, 0xc6)
            result_12.d = result.d
            result = rax_9[3][0]
            _mm_shuffle_ps(result_12, result_12, 0x27)
            result_12.d = result.d
            result_12 = _mm_shuffle_ps(result_12, result_12, 0x39)
            result_8 = result_12
            result_14 = result_27
            float temp0_43[0x4] = _mm_add_ps(temp0_38, _mm_mul_ps(temp0_36, result_12))
            result_53 = 0xbf800000
            result_34 = 0x3f800000
            result_33 = result_19
            result_36 = result_2
            arg4 = result_1
            result_66 = _mm_add_ps(temp0_37, temp0_43)
            var_2c8.d = result_66[0]
            result_13 = _mm_shuffle_ps(result_66, result_66, 0x55)
            result_51 = _mm_shuffle_ps(result_66, result_66, 0xaa)
            var_2c8:4.d = result_13[0]
            result_41 = result_51[0]
        
        var_128 = result_33[0]
        float var_124_1 = result_36[0]
        float var_120_1 = arg4[0]
        __builtin_memcpy(&result_10, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        __builtin_memcpy(&result_20, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x20)
    
    arg4 = 0x322bcc77
    result_36 = 0x3f000000
    result_12.d = result_66.d f* result_66[0]
    result.d = result_13.d f* result_13[0]
    result_51[0] = result_51[0] * result_51[0]
    result_12.d = result_12.d f+ result.d
    float result_23[0x4] = result_13
    result_16 = result_51
    result_12.d = result_12.d f+ result_51[0]
    
    if (not(result_12.d f<= 9.99999994e-09f))
        arg4 = zx.o(0)
        result_31 = 0x3f000000
        arg4[0] = result_12.d
        float temp0_47[0x4] = _mm_rsqrt_ss(arg4[0], arg4[0])
        arg4[0] = arg4[0] * 0.5f
        result.d = temp0_47.d f* temp0_47[0]
        arg4[0] = arg4[0] f* result.d
        result_12.d = 0.5f - arg4[0]
        result.d = temp0_47.d f* result_12.d
        temp0_47[0] = temp0_47[0] f+ result.d
        temp0_47[0] = temp0_47[0] * temp0_47[0]
        arg4[0] = arg4[0] * temp0_47[0]
        result_31[0] = 0.5f - arg4[0]
        arg4 = 0x322bcc77
        result.d = temp0_47.d f* result_31[0]
        temp0_47[0] = temp0_47[0] f+ result.d
        result_13[0] = result_13[0] * temp0_47[0]
        result_51[0] = result_51[0] * temp0_47[0]
        result_66[0] = result_66[0] * temp0_47[0]
        var_2c8:4.d = result_13[0]
        result_41 = result_51[0]
        var_2c8.d = result_66[0]
        result_23 = result_13
        result_16 = result_51
        arg13.d = temp0_47[0]
    
    if ((rbx_1 & 0x10) == 0)
        result_12 = result_1
        result_13 = *arg11
        result_51 = (*arg11)[1]
        result_13[0] = result_13[0] - result_33[0]
        result_35 = (*arg11)[2]
        result_51[0] = result_51[0] - result_2[0]
        result_35[0] = result_35[0] f- result_12.d
    else
        result_13 = *arg12 ^ 0x80000000
        result_51 = (*arg12)[1] ^ 0x80000000
        result_35 = (*arg12)[2] ^ 0x80000000
    
    float result_39 = result_35[0]
    result_12.d = result_51.d f* result_51[0]
    result.d = result_13.d f* result_13[0]
    result_35[0] = result_35[0] * result_35[0]
    result_12.d = result_12.d f+ result.d
    arg6.d = result_35[0]
    float result_38 = result_51[0]
    arg9.d = result_51[0]
    result_37 = result_13[0]
    arg13.d = result_13[0]
    result_12.d = result_12.d f+ result_35[0]
    
    if (not(result_12.d f<= arg4[0]))
        arg4 = zx.o(0)
        result_31 = 0x3f000000
        arg4[0] = result_12.d
        float temp0_48[0x4] = _mm_rsqrt_ss(arg4[0], arg4[0])
        arg4[0] = arg4[0] * 0.5f
        result.d = temp0_48.d f* temp0_48[0]
        arg4[0] = arg4[0] f* result.d
        result_12.d = 0.5f - arg4[0]
        result.d = temp0_48.d f* result_12.d
        temp0_48[0] = temp0_48[0] f+ result.d
        temp0_48[0] = temp0_48[0] * temp0_48[0]
        arg4[0] = arg4[0] * temp0_48[0]
        result_31[0] = 0.5f - arg4[0]
        result.d = temp0_48.d f* result_31[0]
        temp0_48[0] = temp0_48[0] f+ result.d
        result_13[0] = result_13[0] * temp0_48[0]
        result_51[0] = result_51[0] * temp0_48[0]
        result_35[0] = result_35[0] * temp0_48[0]
        arg13.d = temp0_48[0]
        arg13.d = result_13[0]
        result_37 = result_13[0]
        arg9.d = result_51[0]
        result_38 = result_51[0]
        arg6.d = result_35[0]
        result_39 = result_35[0]
    
    result_12.d = result_51.d f* result_51[0]
    result.d = result_13.d f* result_13[0]
    result_52 = zx.o(0)
    result_35[0] = result_35[0] * result_35[0]
    result_12.d = result_12.d f+ result.d
    result_12.d = result_12.d f+ result_35[0]
    
    if (not(result_12.d f>= 0.5f))
        result_51 = zx.o(0)
        arg13.d = result_34[0]
        result_35 = zx.o(0)
        arg9.d = 0
        result_38 = 0f
        result_13 = result_34
        arg6.d = 0
        result_39 = 0f
        result_37 = result_34[0]
    
    char rcx_4 = *(arg1 + 0x168)
    rbx_1 = 1
    
    if (rcx_4 == 0)
        result_40.q = 0x3f800000
        int32_t var_2e0_3 = 0
        result_14.d = result_14.d f* 0.5f
        result_66 = *sub_140ad6660(&result_19, &result_40, &result_37)
        result.d = result_14.d f* 0.159154937f
        
        if (result_14.d f< result_52.d)
            result.d = result.d f- 0.5f
        else
            result.d = result.d f+ 0.5f
        
        result.d = _mm_cvtepi32_ps(zx.o(int.d(result.d))).d f* 6.28318548f
        result_14.d = result_14.d f- result.d
        
        if (not(result_14.d f<= 1.57079637f))
            result.d = 3.14159274f f- result_14.d
            result_14 = result
        else if (result_14.d f>= -1.57079637f)
            result_53 = result_34
        else
            result.d = -3.14159274f f- result_14.d
            result_14 = result
        
        result_11 = 0x3638b88e
        result_31 = result_14
        result_32 = result_37
        arg4 = result_39
        result_31[0] = result_31[0] f* result_14.d
        result.d = result_31.d f* 2.3889859e-08f
        result_11[0] = 2.75255616e-06f f- result.d
        result.d = result_31.d f* 2.60516146e-07f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] - 0.000198408743f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] + 0.00833333097f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] - 0.166666672f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] + result_34[0]
        result_11[0] = result_11[0] f* result_14.d
        result_32[0] = result_32[0] * result_11[0]
        result_12.d = result_38.d f* result_11[0]
        arg4[0] = arg4[0] * result_11[0]
        result_11 = 0x37cfb4c2
        result_11[0] = 2.47604949e-05f f- result.d
        float temp0_284[0x4] = _mm_shuffle_ps(result_32, result_32, 0xe1)
        temp0_284[0] = result_12.d
        float temp0_285[0x4] = _mm_shuffle_ps(temp0_284, temp0_284, 0xc6)
        temp0_285[0] = arg4[0]
        float temp0_286[0x4] = _mm_shuffle_ps(temp0_285, temp0_285, 0x27)
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] - 0.00138883782f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] + 0.0416666381f
        result_11[0] = result_11[0] * result_31[0]
        result_11[0] = result_11[0] - 0.5f
        result_11[0] = result_11[0] * result_31[0]
        float temp0_287[0x4] = _mm_shuffle_ps(result_66, result_66, 0x1b)
        result_11[0] = result_11[0] + result_34[0]
        result_11[0] = result_11[0] * result_53[0]
        temp0_286[0] = result_11[0]
        float temp0_288[0x4] = _mm_shuffle_ps(temp0_286, temp0_286, 0x39)
        float temp0_289[0x4] = _mm_shuffle_ps(result_66, result_66, 0x4e)
        float temp0_291[0x4] = _mm_mul_ps(temp0_287, _mm_shuffle_ps(temp0_288, temp0_288, 0))
        result = _mm_mul_ps(_mm_shuffle_ps(temp0_288, temp0_288, 0xff), result_66)
        float temp0_294[0x4] = __mulps_xmmps_memps(temp0_291, data_143f505c0)
        float temp0_295[0x4] = _mm_shuffle_ps(result_66, result_66, 0xb1)
        float temp0_296[0x4] = _mm_add_ps(temp0_294, result)
        float temp0_298[0x4] = _mm_mul_ps(temp0_289, _mm_shuffle_ps(temp0_288, temp0_288, 0x55))
        float temp0_300[0x4] = _mm_mul_ps(temp0_295, _mm_shuffle_ps(temp0_288, temp0_288, 0xaa))
        float temp0_301[0x4] = __mulps_xmmps_memps(temp0_298, data_143f505b0)
        float temp0_302[0x4] = __mulps_xmmps_memps(temp0_300, data_143f505a0)
        result_9 = _mm_add_ps(_mm_add_ps(temp0_296, temp0_301), temp0_302)
    else
        if (rcx_4 - 9 u<= 3)
            if (_mm_and_ps(result_66, 0x7fffffff)[0] > 9.99999975e-05f)
                rbx_1 = 1
            else if (_mm_and_ps(result_23, 0x7fffffff).d f> 9.99999975e-05f)
                rbx_1 = 1
            else if (_mm_and_ps(result_16, 0x7fffffff).d f> 9.99999975e-05f)
                rbx_1 = 1
            else
                rbx_1 = 0
            
            result_40.q = 0x3f800000
            int32_t var_2e0 = 0
            float (* rax_13)[0x4] = sub_140ad6660(&result_2, &result_40, &var_2c8)
            result_66 = var_2c8.d
            result_31 = var_2c8:4.d
            result_32 = result_41
            result_13 = *rax_13
            result_33 = result_37
            result = result_13
            result_51 = result_38
            result_34 = result_39
            result_7 = _mm_shuffle_ps(result, result, 0xff).d
            goto label_1421dd376
        
        if (rcx_4 u> 4)
            result_1[0].q = *(arg1 + 0x120)
            result_1[2] = *(arg1 + 0x128)
            
            if (r14_1 == 0)
                result_33 = result_13
                result_34 = result_35
            else
                result = result_10
                result_12 = result_20
                result_35 = result_44
                float temp0_54[0x4] = _mm_shuffle_ps(result, result, 0xaa)
                float temp0_55[0x4] = _mm_shuffle_ps(result, result, 0x55)
                float temp0_56[0x4] = _mm_shuffle_ps(result, result, 0xff)
                float temp0_57[0x4] = _mm_shuffle_ps(result_35, result_35, 0x55)
                result = _mm_shuffle_ps(result_46, result_46, 0xff)
                float temp0_59[0x4] = _mm_shuffle_ps(result_35, result_35, 0xaa)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xe1)
                float temp0_61[0x4] = _mm_shuffle_ps(result_46, result_46, 0x55)
                temp0_60[0] = _mm_shuffle_ps(result_46, result_46, 0xaa)[0]
                float temp0_63[0x4] = _mm_shuffle_ps(result_12, result_12, 0xff)
                float temp0_64[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xe1)
                temp0_64[0] = result.d
                float temp0_65[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc6)
                float temp0_66[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xe1)
                temp0_66[0] = temp0_61[0]
                float temp0_67[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xc6)
                temp0_67[0] = temp0_63[0]
                float temp0_68[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xc6)
                float temp0_69[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
                float temp0_70[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
                temp0_68[0] = temp0_69[0]
                result_16[3] = 0
                result_12 = _mm_shuffle_ps(result_35, result_35, 0xff)
                temp0_65[0] = temp0_70[0]
                result_16[0] = arg13.d.d
                float temp0_72[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x27)
                temp0_72[0] = temp0_59[0]
                float temp0_73[0x4] = _mm_shuffle_ps(result_16, result_16, 0xe1)
                temp0_73[0] = arg9.d.d
                float result_55[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x39)
                float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xc6)
                temp0_74[0] = arg6.d.d
                float temp0_75[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x27)
                float result_56[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xc9)
                temp0_75[0] = result_12.d
                float result_70[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0x39)
                result_14 = _mm_shuffle_ps(result_56, result_56, 0xff)
                float temp0_77[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x27)
                result = _mm_mul_ps(result_14, result_70)
                temp0_77[0] = temp0_57[0]
                result_2[0].q = 0
                result_22 = result_55
                float temp0_79[0x4] = _mm_shuffle_ps(result_56, result_56, 0x55)
                float result_57[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0x39)
                result_2[2] = 0
                result_2 = result_14
                result_2 = result
                result = _mm_mul_ps(_mm_shuffle_ps(result_56, result_56, 0xaa), result_55)
                result_16 = result_56
                result_61 = result_70
                float temp0_82[0x4] = _mm_add_ps(result_2, result)
                result_21 = result_57
                float temp0_83[0x4] = _mm_mul_ps(temp0_79, result_57)
                float temp0_84[0x4] = _mm_shuffle_ps(result_56, result_56, 0)
                result = result_10
                result_31 = result_20
                result_14 = result_27
                result_36 = 0x3f000000
                _mm_shuffle_ps(result, result, 0xe1)
                result.d = result_46.d
                _mm_shuffle_ps(result, result, 0xc6)
                result.d = result_31[0]
                _mm_shuffle_ps(result, result, 0x27)
                result.d = result_44.d
                result = _mm_shuffle_ps(result, result, 0x39)
                float temp0_89[0x4] = _mm_mul_ps(temp0_84, result)
                result_8 = result
                result_33 = _mm_add_ps(temp0_82, _mm_add_ps(temp0_83, temp0_89))
                result_51 = _mm_shuffle_ps(result_33, result_33, 0x55)
                result_34 = _mm_shuffle_ps(result_33, result_33, 0xaa)
            
            result_35 = result_40
            result_66 = result_1[0]
            result_31 = result_1[1]
            result_32 = result_1[2]
            result_13 = result_42.o
        else
            result_40.q = 0x3f800000
            int32_t var_2e0_1 = 0
            float (* rax_14)[0x4] = sub_140ad6660(&result_2, &result_40, &result_37)
            result_66 = result_37
            result_33 = zx.o(0)
            result_31 = result_38
            result_51 = zx.o(0)
            result_32 = result_39
            result_13 = *rax_14
            result = result_13
            result_7 = _mm_shuffle_ps(result, result, 0xff).d
        label_1421dd376:
            result_42.o = result_13
            result_35 = result_42
            result_17 = var_2b0.d
            result_18 = var_2b4[0]
        
        arg13.d = result_31[0]
        result_12.d = result_31.d f* result_51[0]
        result.d = result_66.d f* result_33[0]
        result_32[0] = result_32[0] * result_34[0]
        result_12.d = result_12.d f+ result.d
        arg9.d = result_32[0]
        result_12.d = result_12.d f+ result_32[0]
        result.d = result_12.d f* result_66[0]
        result_33[0] = result_33[0] f- result.d
        result = result_12
        result_12.d = result_12.d f* result_32[0]
        result.d = result.d f* result_31[0]
        result_34[0] = result_34[0] f- result_12.d
        result_1[0] = result_33[0]
        result_51[0] = result_51[0] f- result.d
        result.d = result_33.d f* result_33[0]
        result_1[2] = result_34[0]
        result_34[0] = result_34[0] * result_34[0]
        result_1[1] = result_51[0]
        result_12.d = result_51.d f* result_51[0]
        result_12.d = result_12.d f+ result.d
        result_12.d = result_12.d f+ result_34[0]
        
        if (not(result_12.d f<= 9.99999994e-09f))
            arg4 = zx.o(0)
            arg4[0] = result_12.d
            float temp0_94[0x4] = _mm_rsqrt_ss(arg4[0], arg4[0])
            arg4[0] = arg4[0] * result_36[0]
            result.d = temp0_94.d f* temp0_94[0]
            arg4[0] = arg4[0] f* result.d
            result_12.d = result_36.d f- arg4[0]
            result.d = temp0_94.d f* result_12.d
            temp0_94[0] = temp0_94[0] f+ result.d
            temp0_94[0] = temp0_94[0] * temp0_94[0]
            arg4[0] = arg4[0] * temp0_94[0]
            result_36[0] = result_36[0] - arg4[0]
            result.d = temp0_94.d f* result_36[0]
            temp0_94[0] = temp0_94[0] f+ result.d
            result_33[0] = result_33[0] * temp0_94[0]
            result_51[0] = result_51[0] * temp0_94[0]
            result_34[0] = result_34[0] * temp0_94[0]
            result_1[0] = result_33[0]
            result_1[1] = result_51[0]
            result_1[2] = result_34[0]
        
        result_12 = result_18
        result_11 = result_17
        result_34 = result_48
        result_51 = result_63
        result_33 = result_49
        result_31 = result_11
        result.d = result_11.d f* result_51[0]
        result_32 = result_12
        result_32[0] = result_32[0] * result_34[0]
        result_31[0] = result_31[0] * result_33[0]
        result_32[0] = result_32[0] f- result.d
        result_35[0] = result_35[0] * result_51[0]
        result.d = result_35.d f* result_34[0]
        result_32[0] = result_32[0] + result_32[0]
        result_31[0] = result_31[0] f- result.d
        result.d = result_12.d f* result_33[0]
        result_35[0] = result_35[0] f- result.d
        result = result_11
        result_11 = result_7
        result_31[0] = result_31[0] + result_31[0]
        result_11[0] = result_11[0] * result_32[0]
        result_35[0] = result_35[0] + result_35[0]
        result.d = result.d f* result_31[0]
        result_11[0] = result_11[0] + result_33[0]
        result_12.d = result_12.d f* result_35[0]
        result_12.d = result_12.d f- result.d
        result.d = result_35.d f* result_35[0]
        result_35[0] = result_35[0] * result_31[0]
        result_12.d = result_12.d f+ result_11[0]
        result_40 = result_12.d
        result_12.d = result_17.d f* result_32[0]
        result_12.d = result_12.d f- result.d
        result = result_7
        result_11 = result
        result.d = result.d f* result_35[0]
        result_11[0] = result_11[0] * result_31[0]
        result.d = result.d f+ result_34[0]
        result_11[0] = result_11[0] + result_51[0]
        result_12.d = result_12.d f+ result_11[0]
        result_11 = result_18
        result_11[0] = result_11[0] * result_32[0]
        result_35[0] = result_35[0] - result_11[0]
        int32_t var_2e4 = result_12.d
        result_35[0] = result_35[0] f+ result.d
        float var_2e0_2 = result_35[0]
        result_66 = sub_140ad6660(&result_19, &result_40, &result_1)
        result_12 = result_19
        result_33 = data_143f505c0
        result_51 = data_143f505b0
        result_34 = data_143f505a0
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_13, result_13, 0x1b), 
            _mm_shuffle_ps(result_12, result_12, 0))
        float temp0_98[0x4] = _mm_shuffle_ps(result_13, result_13, 0x4e)
        result = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_13)
        float temp0_101[0x4] = _mm_mul_ps(temp0_97, result_33)
        float temp0_102[0x4] = _mm_shuffle_ps(result_13, result_13, 0xb1)
        float temp0_103[0x4] = _mm_add_ps(temp0_101, result)
        float temp0_105[0x4] = _mm_mul_ps(temp0_98, _mm_shuffle_ps(result_12, result_12, 0x55))
        float temp0_107[0x4] = _mm_mul_ps(temp0_102, _mm_shuffle_ps(result_12, result_12, 0xaa))
        float temp0_108[0x4] = _mm_mul_ps(temp0_105, result_51)
        float temp0_109[0x4] = _mm_mul_ps(temp0_107, result_34)
        float temp0_111[0x4] = _mm_add_ps(_mm_add_ps(temp0_103, temp0_108), temp0_109)
        bool cond:6_1 = (*(arg1 + 0x164) & 8) == 0
        result = _mm_shuffle_ps(temp0_111, temp0_111, 0x55)
        float temp0_113[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0xaa)
        float var_2b8 = temp0_111[0]
        float var_2ac_1 = _mm_shuffle_ps(temp0_111, temp0_111, 0xff)[0]
        int32_t var_2b4_1 = result.d
        float var_2b0_1 = temp0_113[0]
        
        if (cond:6_1)
            result_14.d = result_14.d f* result_36[0]
            result.d = result_14.d f* 0.159154937f
            
            if (result_14.d f< result_52.d)
                result.d = result.d f- result_36[0]
            else
                result.d = result.d f+ result_36[0]
            
            result.d = _mm_cvtepi32_ps(zx.o(int.d(result.d))).d f* 6.28318548f
            result_14.d = result_14.d f- result.d
            
            if (not(result_14.d f<= 1.57079637f))
                result.d = 3.14159274f f- result_14.d
                result_14 = result
            else if (result_14.d f>= -1.57079637f)
                result_53 = 0x3f800000
            else
                result.d = -3.14159274f f- result_14.d
                result_14 = result
            
            result_11 = 0x3638b88e
            result_31 = result_14
            result_66 = result_37
            arg4 = result_39
            result_31[0] = result_31[0] f* result_14.d
            result.d = result_31.d f* 2.3889859e-08f
            result_11[0] = 2.75255616e-06f f- result.d
            result.d = result_31.d f* 2.60516146e-07f
            result_11[0] = result_11[0] * result_31[0]
            result_11[0] = result_11[0] - 0.000198408743f
            result_11[0] = result_11[0] * result_31[0]
            result_11[0] = result_11[0] + 0.00833333097f
            result_11[0] = result_11[0] * result_31[0]
            result_11[0] = result_11[0] - 0.166666672f
            result_11[0] = result_11[0] * result_31[0]
            result_11[0] = result_11[0] + 1f
            result_11[0] = result_11[0] f* result_14.d
            result_66[0] = result_66[0] * result_11[0]
            result_12.d = result_38.d f* result_11[0]
            arg4[0] = arg4[0] * result_11[0]
            result_11 = 0x37cfb4c2
            result_11[0] = 2.47604949e-05f f- result.d
            float temp0_262[0x4] = _mm_shuffle_ps(result_66, result_66, 0xe1)
            temp0_262[0] = result_12.d
            float temp0_263[0x4] = _mm_shuffle_ps(temp0_262, temp0_262, 0xc6)
            temp0_263[0] = arg4[0]
            float temp0_264[0x4] = _mm_shuffle_ps(temp0_263, temp0_263, 0x27)
            result_11[0] = result_11[0] * result_31[0]
            result_11[0] = result_11[0] - 0.00138883782f
            result_11[0] = result_11[0] * result_31[0]
            result_11[0] = result_11[0] + 0.0416666381f
            result_11[0] = result_11[0] * result_31[0]
            result_11[0] = result_11[0] - result_36[0]
            result_11[0] = result_11[0] * result_31[0]
            result_31 = var_2b8.o
            result_11[0] = result_11[0] + 1f
            float temp0_265[0x4] = _mm_shuffle_ps(result_31, result_31, 0x1b)
            result_11[0] = result_11[0] * result_53[0]
            temp0_264[0] = result_11[0]
            float temp0_266[0x4] = _mm_shuffle_ps(temp0_264, temp0_264, 0x39)
            float temp0_267[0x4] = _mm_shuffle_ps(result_31, result_31, 0x4e)
            float temp0_269[0x4] = _mm_mul_ps(temp0_265, _mm_shuffle_ps(temp0_266, temp0_266, 0))
            result = _mm_mul_ps(_mm_shuffle_ps(temp0_266, temp0_266, 0xff), result_31)
            float temp0_272[0x4] = _mm_mul_ps(temp0_269, result_33)
            float temp0_273[0x4] = _mm_shuffle_ps(result_31, result_31, 0xb1)
            float temp0_274[0x4] = _mm_add_ps(temp0_272, result)
            float temp0_276[0x4] = _mm_mul_ps(temp0_267, _mm_shuffle_ps(temp0_266, temp0_266, 0x55))
            float temp0_278[0x4] = _mm_mul_ps(temp0_273, _mm_shuffle_ps(temp0_266, temp0_266, 0xaa))
            float temp0_279[0x4] = _mm_mul_ps(temp0_276, result_51)
            float temp0_280[0x4] = _mm_mul_ps(temp0_278, result_34)
            result_9 = _mm_add_ps(_mm_add_ps(temp0_274, temp0_279), temp0_280)
        else if (rbx_1 != 0)
            result_14.d = result_14.d f* result_36[0]
            result.d = result_14.d f* 0.159154937f
            
            if (result_14.d f< result_52.d)
                result.d = result.d f- result_36[0]
            else
                result.d = result.d f+ result_36[0]
            
            result.d = _mm_cvtepi32_ps(zx.o(int.d(result.d))).d f* 6.28318548f
            result_14.d = result_14.d f- result.d
            
            if (not(result_14.d f<= 1.57079637f))
                result.d = 3.14159274f f- result_14.d
                result_14 = result
            else if (result_14.d f>= -1.57079637f)
                result_53 = 0x3f800000
            else
                result.d = -3.14159274f f- result_14.d
                result_14 = result
            
            result_11 = 0x3638b88e
            arg4 = arg13.d
            result_31 = arg9.d
            result_12.d = result_14.d f* result_14.d
            result.d = result_12.d f* 2.3889859e-08f
            result_11[0] = 2.75255616e-06f f- result.d
            result.d = result_12.d f* 2.60516146e-07f
            result_11[0] = result_11[0] f* result_12.d
            result_11[0] = result_11[0] - 0.000198408743f
            result_11[0] = result_11[0] f* result_12.d
            result_11[0] = result_11[0] + 0.00833333097f
            result_11[0] = result_11[0] f* result_12.d
            result_11[0] = result_11[0] - 0.166666672f
            result_11[0] = result_11[0] f* result_12.d
            result_11[0] = result_11[0] + 1f
            result_11[0] = result_11[0] f* result_14.d
            result_66[0] = result_66[0] * result_11[0]
            arg4[0] = arg4[0] * result_11[0]
            result_31[0] = result_31[0] * result_11[0]
            result_11 = 0x37cfb4c2
            result_11[0] = 2.47604949e-05f f- result.d
            float temp0_116[0x4] = _mm_shuffle_ps(result_66, result_66, 0xe1)
            temp0_116[0] = arg4[0]
            float temp0_117[0x4] = _mm_shuffle_ps(temp0_116, temp0_116, 0xc6)
            temp0_117[0] = result_31[0]
            float temp0_118[0x4] = _mm_shuffle_ps(temp0_117, temp0_117, 0x27)
            result_11[0] = result_11[0] f* result_12.d
            result_11[0] = result_11[0] - 0.00138883782f
            result_11[0] = result_11[0] f* result_12.d
            result_11[0] = result_11[0] + 0.0416666381f
            result_11[0] = result_11[0] f* result_12.d
            result_11[0] = result_11[0] - result_36[0]
            result_11[0] = result_11[0] f* result_12.d
            result_12 = var_2b8.o
            result = _mm_shuffle_ps(result_12, result_12, 0x1b)
            result_11[0] = result_11[0] + 1f
            result_11[0] = result_11[0] * result_53[0]
            temp0_118[0] = result_11[0]
            float temp0_120[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0x39)
            float temp0_122[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_120, temp0_120, 0), result)
            result = _mm_shuffle_ps(temp0_120, temp0_120, 0xff)
            float temp0_124[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0x55)
            result = _mm_mul_ps(result, result_12)
            float temp0_126[0x4] = _mm_mul_ps(temp0_122, result_33)
            float temp0_127[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xaa)
            float temp0_128[0x4] = _mm_add_ps(temp0_126, result)
            float temp0_130[0x4] = _mm_mul_ps(temp0_124, _mm_shuffle_ps(result_12, result_12, 0x4e))
            float temp0_132[0x4] = _mm_mul_ps(temp0_127, _mm_shuffle_ps(result_12, result_12, 0xb1))
            float temp0_133[0x4] = _mm_mul_ps(temp0_130, result_51)
            float temp0_134[0x4] = _mm_mul_ps(temp0_132, result_34)
            result_9 = _mm_add_ps(_mm_add_ps(temp0_128, temp0_133), temp0_134)
    
    result_51 = data_142d3f660
    result_35 = result_20
label_1421dda6a:
    result_14 = result_24
    result_52 = result_62
    result_53 = result_25
    result_34 = result_43
char rax_17 = (*(arg1 + 0x164)).b

if ((rax_17 & 1) != 0)
    sub_140ada0c0(&result_40, arg7)
    result_51 = sub_14077e760(&result_8, &result_40)
    bool cond:1_1 = (*(arg1 + 0x164) & 6) != 0
    result_12 = result_8
    result_31 = var_198.o
    arg4 = var_178.o
    result_32 = var_18c:4.o
    result = _mm_shuffle_ps(result_12, result_12, 0)
    float temp0_138[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
    result = _mm_mul_ps(result, result_31)
    float temp0_140[0x4] = _mm_mul_ps(temp0_138, arg4)
    
    if (not(cond:1_1))
        result_36 = data_142d3f660
        float temp0_141[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
        result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_36)
        float temp0_147[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_141, result_32), result), temp0_140), result_12)
        result_12 = result_21
        result = _mm_shuffle_ps(result_12, result_12, 0)
        float temp0_149[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
        float temp0_150[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
        float temp0_151[0x4] = _mm_mul_ps(temp0_149, arg4)
        result = _mm_mul_ps(result, result_31)
        result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_36)
        float temp0_158[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_150, result_32), result), temp0_151), result_12)
        result_12 = result_22
        result = _mm_shuffle_ps(result_12, result_12, 0)
        float temp0_160[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
        float temp0_161[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
        float temp0_162[0x4] = _mm_mul_ps(temp0_160, arg4)
        result = _mm_mul_ps(result, result_31)
        result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_36)
        float temp0_169[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_161, result_32), result), temp0_162), result_12)
        result = _mm_shuffle_ps(result_61, result_61, 0)
        float temp0_171[0x4] = _mm_shuffle_ps(result_61, result_61, 0xaa)
        float temp0_172[0x4] = _mm_shuffle_ps(result_61, result_61, 0x55)
        float temp0_173[0x4] = _mm_mul_ps(temp0_171, arg4)
        result = _mm_mul_ps(result, result_31)
        result_12 = _mm_mul_ps(_mm_shuffle_ps(result_61, result_61, 0xff), result_36)
        float temp0_177[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0x55)
        float temp0_178[0x4] = _mm_mul_ps(temp0_172, result_32)
        float temp0_179[0x4] = _mm_mul_ps(temp0_177, result_52)
        float temp0_180[0x4] = _mm_add_ps(temp0_178, result)
        result = _mm_mul_ps(_mm_shuffle_ps(temp0_147, temp0_147, 0x55), result_52)
        float temp0_183[0x4] = _mm_add_ps(temp0_180, temp0_173)
        float temp0_185[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_147, temp0_147, 0xaa), result_53)
        float temp0_186[0x4] = _mm_add_ps(temp0_183, result_12)
        result_12 = _mm_mul_ps(_mm_shuffle_ps(temp0_147, temp0_147, 0), result_14)
        float temp0_190[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_147, temp0_147, 0xff), result_34)
        result_12 = _mm_add_ps(result_12, result)
        result = _mm_mul_ps(_mm_shuffle_ps(temp0_158, temp0_158, 0), result_14)
        result_12 = _mm_add_ps(result_12, temp0_185)
        float temp0_195[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xaa)
        float temp0_196[0x4] = _mm_add_ps(temp0_179, result)
        float temp0_197[0x4] = _mm_mul_ps(temp0_195, result_53)
        float temp0_198[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xff)
        result_12 = _mm_add_ps(result_12, temp0_190)
        float temp0_200[0x4] = _mm_mul_ps(temp0_198, result_34)
        float temp0_201[0x4] = _mm_add_ps(temp0_196, temp0_197)
        result_51 = data_142d4cc00
        float temp0_202[0x4] = _mm_add_ps(temp0_201, temp0_200)
        result_36 = data_142d4cc30
        result_31 = var_128.o
        result = _mm_shuffle_ps(temp0_169, temp0_169, 0)
        float temp0_204[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0xaa)
        result = _mm_mul_ps(result, result_14)
        float temp0_206[0x4] = _mm_mul_ps(temp0_204, result_53)
        float temp0_207[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0x55)
        float temp0_208[0x4] = _mm_shuffle_ps(temp0_202, temp0_202, 0x55)
        float temp0_210[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_169, temp0_169, 0xff), result_34)
        float temp0_212[0x4] = _mm_add_ps(_mm_mul_ps(temp0_207, result_52), result)
        result = _mm_mul_ps(_mm_shuffle_ps(temp0_186, temp0_186, 0), result_14)
        float temp0_215[0x4] = _mm_add_ps(temp0_212, temp0_206)
        float temp0_217[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_186, temp0_186, 0xaa), result_53)
        result_13 = _mm_add_ps(temp0_215, temp0_210)
        float temp0_219[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0x55)
        float temp0_221[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_186, temp0_186, 0xff), result_34)
        result_34 = data_142d4cc20
        float temp0_222[0x4] = _mm_mul_ps(temp0_219, result_52)
        float temp0_223[0x4] = _mm_mul_ps(temp0_208, result_34)
        float temp0_224[0x4] = _mm_add_ps(temp0_222, result)
        result = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0), result_51)
        float temp0_227[0x4] = _mm_add_ps(temp0_224, temp0_217)
        float temp0_229[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xaa), result_36)
        result_33 = _mm_add_ps(temp0_227, temp0_221)
        float temp0_232[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0x55), result_34)
        result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_31)
        float temp0_235[0x4] = _mm_add_ps(temp0_232, result)
        result = _mm_mul_ps(_mm_shuffle_ps(temp0_202, temp0_202, 0), result_51)
        float temp0_238[0x4] = _mm_add_ps(temp0_235, temp0_229)
        float temp0_239[0x4] = _mm_shuffle_ps(temp0_202, temp0_202, 0xaa)
        float temp0_240[0x4] = _mm_add_ps(temp0_223, result)
        float temp0_241[0x4] = _mm_mul_ps(temp0_239, result_36)
        float temp0_243[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_202, temp0_202, 0xff), result_31)
        result_66 = _mm_add_ps(temp0_238, result_12)
        float temp0_245[0x4] = _mm_add_ps(temp0_240, temp0_241)
        result = _mm_mul_ps(_mm_shuffle_ps(result_13, result_13, 0), result_51)
        result_12 = _mm_shuffle_ps(result_33, result_33, 0x55)
        float temp0_249[0x4] = _mm_shuffle_ps(result_13, result_13, 0xaa)
        result_32 = _mm_add_ps(temp0_245, temp0_243)
        float temp0_251[0x4] = _mm_mul_ps(temp0_249, result_36)
        result_12 = _mm_mul_ps(result_12, result_34)
        float temp0_255[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_13, result_13, 0x55), result_34), result)
        result = _mm_mul_ps(_mm_shuffle_ps(result_33, result_33, 0), result_51)
        arg4 = _mm_add_ps(temp0_255, temp0_251)
        result_11 = _mm_mul_ps(_mm_shuffle_ps(result_33, result_33, 0xaa), result_36)
        goto label_1421df487
    
    float temp0_404[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
    result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_51)
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_404, result_32), result), temp0_140), 
        result_12)
    result_12 = result_21
    result = _mm_shuffle_ps(result_12, result_12, 0)
    float temp0_412[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
    float temp0_413[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
    result = _mm_mul_ps(result, result_31)
    float temp0_415[0x4] = _mm_mul_ps(temp0_412, arg4)
    result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_51)
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_413, result_32), result), temp0_415), 
        result_12)
    result_12 = result_22
    float temp0_422[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
    result = _mm_shuffle_ps(result_12, result_12, 0)
    float temp0_424[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
    result = _mm_mul_ps(result, result_31)
    float temp0_426[0x4] = _mm_mul_ps(temp0_424, arg4)
    result_12 = __mulps_xmmps_memps(_mm_shuffle_ps(result_12, result_12, 0xff), data_142d3f660)
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_422, result_32), result), temp0_426), 
        result_12)
    float temp0_433[0x4] = _mm_shuffle_ps(result_61, result_61, 0x55)
    result = _mm_shuffle_ps(result_61, result_61, 0)
    float temp0_435[0x4] = _mm_mul_ps(temp0_433, result_32)
    float temp0_436[0x4] = _mm_shuffle_ps(result_61, result_61, 0xaa)
    result = _mm_mul_ps(result, result_31)
    float temp0_438[0x4] = _mm_mul_ps(temp0_436, arg4)
    result_12 = __mulps_xmmps_memps(_mm_shuffle_ps(result_61, result_61, 0xff), data_142d3f660)
    _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_435, result), temp0_438), result_12)
    float* rax_34
    rax_34, result_33, result_13, result_51, result_34, result_35 =
        sub_140626b90(&var_108, &result_9)
    float temp0_444[0x4] = _mm_shuffle_ps(result_33, result_33, 0x55)
    result = _mm_shuffle_ps(result_33, result_33, 0)
    arg4 = *(rax_34 + 0x10)
    result_12 = *rax_34
    result_31 = *(rax_34 + 0x20)
    result_32 = *(rax_34 + 0x30)
    float temp0_446[0x4] = _mm_shuffle_ps(result_33, result_33, 0xaa)
    float temp0_448[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_33, result_33, 0xff), result_32)
    result = _mm_mul_ps(result, result_12)
    float temp0_450[0x4] = _mm_mul_ps(temp0_444, arg4)
    float temp0_451[0x4] = _mm_mul_ps(temp0_446, result_31)
    float temp0_452[0x4] = _mm_add_ps(temp0_450, result)
    result = _mm_mul_ps(_mm_shuffle_ps(result_13, result_13, 0x55), arg4)
    float temp0_456[0x4] = _mm_add_ps(_mm_add_ps(temp0_452, temp0_451), temp0_448)
    float temp0_459[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_13, result_13, 0), result_12), result)
    float temp0_460[0x4] = _mm_shuffle_ps(result_13, result_13, 0xaa)
    result = _mm_mul_ps(_mm_shuffle_ps(result_51, result_51, 0x55), arg4)
    float temp0_463[0x4] = _mm_mul_ps(temp0_460, result_31)
    float temp0_465[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_13, result_13, 0xff), result_32)
    float temp0_466[0x4] = _mm_add_ps(temp0_459, temp0_463)
    float temp0_468[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_51, result_51, 0xaa), result_31)
    float temp0_469[0x4] = _mm_add_ps(temp0_466, temp0_465)
    float temp0_471[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_51, result_51, 0), result_12)
    float temp0_473[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_51, result_51, 0xff), result_32)
    float temp0_474[0x4] = _mm_add_ps(temp0_471, result)
    result = _mm_mul_ps(_mm_shuffle_ps(result_34, result_34, 0x55), arg4)
    float temp0_477[0x4] = _mm_shuffle_ps(temp0_469, temp0_469, 0x55)
    float temp0_478[0x4] = _mm_add_ps(temp0_474, temp0_468)
    float temp0_479[0x4] = _mm_mul_ps(temp0_477, result_52)
    float temp0_481[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_34, result_34, 0xaa), result_31)
    result_31 = result_43
    float temp0_482[0x4] = _mm_add_ps(temp0_478, temp0_473)
    float temp0_484[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_34, result_34, 0), result_12)
    result_12 = _mm_mul_ps(_mm_shuffle_ps(temp0_456, temp0_456, 0x55), result_52)
    float temp0_487[0x4] = _mm_add_ps(temp0_484, result)
    float temp0_489[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_34, result_34, 0xff), result_32)
    result = _mm_mul_ps(_mm_shuffle_ps(temp0_456, temp0_456, 0), result_14)
    float temp0_492[0x4] = _mm_add_ps(temp0_487, temp0_481)
    float temp0_494[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_456, temp0_456, 0xaa), result_53)
    result_12 = _mm_add_ps(result_12, result)
    float temp0_497[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_456, temp0_456, 0xff), result_31)
    result = _mm_shuffle_ps(temp0_469, temp0_469, 0)
    float temp0_499[0x4] = _mm_add_ps(temp0_492, temp0_489)
    result = _mm_mul_ps(result, result_14)
    result_12 = _mm_add_ps(result_12, temp0_494)
    float temp0_502[0x4] = _mm_shuffle_ps(temp0_469, temp0_469, 0xaa)
    float temp0_504[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_469, temp0_469, 0xff), result_31)
    float temp0_505[0x4] = _mm_add_ps(temp0_479, result)
    float temp0_506[0x4] = _mm_mul_ps(temp0_502, result_53)
    result = _mm_shuffle_ps(temp0_482, temp0_482, 0)
    result_12 = _mm_add_ps(result_12, temp0_497)
    result = _mm_mul_ps(result, result_14)
    float temp0_510[0x4] = _mm_add_ps(temp0_505, temp0_506)
    float temp0_512[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_482, temp0_482, 0xaa), result_53)
    arg4 = _mm_add_ps(temp0_510, temp0_504)
    float temp0_514[0x4] = _mm_shuffle_ps(temp0_482, temp0_482, 0x55)
    float temp0_516[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_482, temp0_482, 0xff), result_31)
    result_33 = _mm_add_ps(
        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_514, result_52), result), temp0_512), temp0_516)
    float temp0_522[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_499, temp0_499, 0), result_14)
    result_34 = data_142d4cc20
    result_36 = data_142d4cc30
    result = _mm_shuffle_ps(temp0_499, temp0_499, 0x55)
    float temp0_524[0x4] = _mm_shuffle_ps(temp0_499, temp0_499, 0xaa)
    float temp0_525[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
    result = _mm_mul_ps(result, result_52)
    float temp0_527[0x4] = _mm_mul_ps(temp0_524, result_53)
    float temp0_528[0x4] = _mm_mul_ps(temp0_525, result_34)
    float temp0_529[0x4] = _mm_add_ps(temp0_522, result)
    float temp0_531[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_499, temp0_499, 0xff), result_31)
    result_31 = var_128.o
    result = _mm_shuffle_ps(result_12, result_12, 0)
    float temp0_533[0x4] = _mm_add_ps(temp0_529, temp0_527)
    float temp0_535[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xaa), result_36)
    result_12 = _mm_shuffle_ps(result_12, result_12, 0xff)
    result_13 = _mm_add_ps(temp0_533, temp0_531)
    result_12 = _mm_mul_ps(result_12, result_31)
    result_51 = data_142d4cc00
    result_66 = _mm_add_ps(
        _mm_add_ps(_mm_add_ps(temp0_528, _mm_mul_ps(result, result_51)), temp0_535), result_12)
    goto label_1421defe8

if ((rax_17 & 6) != 0)
    float* rax_35
    rax_35, result_34, result_35 = sub_140626b90(&var_108, &result_9)
    result_12 = var_198.o
    result_36 = data_142d3f660
    float temp0_631[0x4] = _mm_shuffle_ps(result_12, result_12, 0)
    arg4 = *rax_35
    result_31 = *(rax_35 + 0x10)
    result_32 = *(rax_35 + 0x20)
    result_66 = *(rax_35 + 0x30)
    result = _mm_shuffle_ps(result_12, result_12, 0x55)
    float temp0_633[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
    result = _mm_mul_ps(result, result_31)
    float temp0_635[0x4] = _mm_mul_ps(temp0_633, result_32)
    result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_66)
    float temp0_641[0x4] = _mm_add_ps(
        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_631, arg4), result), temp0_635), result_12)
    result_12 = var_18c:4.o
    result = _mm_shuffle_ps(result_12, result_12, 0x55)
    float temp0_643[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
    float temp0_644[0x4] = _mm_shuffle_ps(result_12, result_12, 0)
    result = _mm_mul_ps(result, result_31)
    float temp0_646[0x4] = _mm_mul_ps(temp0_643, result_32)
    result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_66)
    float temp0_652[0x4] = _mm_add_ps(
        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_644, arg4), result), temp0_646), result_12)
    result_12 = var_178.o
    result = _mm_shuffle_ps(result_12, result_12, 0x55)
    float temp0_654[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
    float temp0_656[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0), arg4)
    result = _mm_mul_ps(result, result_31)
    float temp0_658[0x4] = _mm_mul_ps(temp0_654, result_32)
    result_12 = _mm_shuffle_ps(result_12, result_12, 0xff)
    float temp0_660[0x4] = _mm_add_ps(temp0_656, result)
    result_12 = _mm_mul_ps(result_12, result_66)
    result = _mm_mul_ps(_mm_shuffle_ps(result_36, result_36, 0x55), result_31)
    float temp0_664[0x4] = _mm_add_ps(temp0_660, temp0_658)
    float temp0_666[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_36, result_36, 0xaa), result_32)
    float temp0_667[0x4] = _mm_add_ps(temp0_664, result_12)
    result_12 = _mm_mul_ps(_mm_shuffle_ps(result_36, result_36, 0), arg4)
    float temp0_671[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_641, temp0_641, 0x55), result_52)
    result_12 = _mm_add_ps(result_12, result)
    float temp0_674[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_36, result_36, 0xff), result_66)
    result = _mm_mul_ps(_mm_shuffle_ps(temp0_641, temp0_641, 0), result_14)
    result_12 = _mm_add_ps(result_12, temp0_666)
    float temp0_679[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_641, temp0_641, 0xaa), result_53)
    float temp0_680[0x4] = _mm_add_ps(temp0_671, result)
    float temp0_682[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_641, temp0_641, 0xff), result_34)
    result_12 = _mm_add_ps(result_12, temp0_674)
    float temp0_685[0x4] = _mm_add_ps(_mm_add_ps(temp0_680, temp0_679), temp0_682)
    result_36 = data_142d4cc20
    result_31 = var_128.o
    result = _mm_shuffle_ps(temp0_652, temp0_652, 0)
    float temp0_687[0x4] = _mm_shuffle_ps(temp0_652, temp0_652, 0xaa)
    result = _mm_mul_ps(result, result_14)
    float temp0_689[0x4] = _mm_shuffle_ps(temp0_652, temp0_652, 0x55)
    float temp0_690[0x4] = _mm_mul_ps(temp0_687, result_53)
    float temp0_691[0x4] = _mm_shuffle_ps(temp0_685, temp0_685, 0x55)
    float temp0_693[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_652, temp0_652, 0xff), result_34)
    float temp0_694[0x4] = _mm_mul_ps(temp0_689, result_52)
    float temp0_695[0x4] = _mm_mul_ps(temp0_691, result_36)
    float temp0_696[0x4] = _mm_add_ps(temp0_694, result)
    result = _mm_mul_ps(_mm_shuffle_ps(temp0_667, temp0_667, 0), result_14)
    float temp0_699[0x4] = _mm_add_ps(temp0_696, temp0_690)
    float temp0_701[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_667, temp0_667, 0xaa), result_53)
    float temp0_702[0x4] = _mm_add_ps(temp0_699, temp0_693)
    float temp0_703[0x4] = _mm_shuffle_ps(temp0_667, temp0_667, 0x55)
    float temp0_705[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_667, temp0_667, 0xff), result_34)
    float temp0_706[0x4] = _mm_mul_ps(temp0_703, result_52)
    float temp0_708[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_702, temp0_702, 0x55), result_36)
    float temp0_709[0x4] = _mm_add_ps(temp0_706, result)
    result = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0), result_14)
    result_14 = data_142d4cc30
    float temp0_712[0x4] = _mm_add_ps(temp0_709, temp0_701)
    float temp0_714[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xaa), result_53)
    result_13 = _mm_add_ps(temp0_712, temp0_705)
    float temp0_717[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0x55), result_52)
    result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_34)
    result_34 = data_142d4cc00
    float temp0_720[0x4] = _mm_add_ps(temp0_717, result)
    result = _mm_mul_ps(_mm_shuffle_ps(temp0_685, temp0_685, 0), result_34)
    float temp0_723[0x4] = _mm_add_ps(temp0_720, temp0_714)
    float temp0_724[0x4] = _mm_shuffle_ps(temp0_685, temp0_685, 0xaa)
    float temp0_725[0x4] = _mm_shuffle_ps(temp0_685, temp0_685, 0xff)
    float temp0_726[0x4] = _mm_add_ps(temp0_695, result)
    float temp0_727[0x4] = _mm_mul_ps(temp0_725, result_31)
    float temp0_728[0x4] = _mm_mul_ps(temp0_724, result_14)
    result = _mm_shuffle_ps(temp0_702, temp0_702, 0)
    result_33 = _mm_add_ps(temp0_723, result_12)
    result = _mm_mul_ps(result, result_34)
    float temp0_732[0x4] = _mm_add_ps(temp0_726, temp0_728)
    float temp0_734[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_702, temp0_702, 0xaa), result_14)
    float temp0_735[0x4] = _mm_add_ps(temp0_708, result)
    float temp0_736[0x4] = _mm_shuffle_ps(temp0_702, temp0_702, 0xff)
    result_66 = _mm_add_ps(temp0_732, temp0_727)
    float temp0_738[0x4] = _mm_mul_ps(temp0_736, result_31)
    float temp0_739[0x4] = _mm_shuffle_ps(result_13, result_13, 0x55)
    result = _mm_shuffle_ps(result_13, result_13, 0)
    float temp0_741[0x4] = _mm_add_ps(temp0_735, temp0_734)
    float temp0_742[0x4] = _mm_mul_ps(temp0_739, result_36)
    result = _mm_mul_ps(result, result_34)
    result_32 = _mm_add_ps(temp0_741, temp0_738)
    float temp0_745[0x4] = _mm_add_ps(temp0_742, result)
    float temp0_747[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_13, result_13, 0xaa), result_14)
    result_12 = _mm_shuffle_ps(result_33, result_33, 0x55)
    result = _mm_shuffle_ps(result_33, result_33, 0)
    result_12 = _mm_mul_ps(result_12, result_36)
    arg4 = _mm_add_ps(temp0_745, temp0_747)
    result = _mm_mul_ps(result, result_34)
    result_11 = _mm_mul_ps(_mm_shuffle_ps(result_33, result_33, 0xaa), result_14)
label_1421df487:
    result_12 = _mm_add_ps(result_12, result)
    float temp0_756[0x4] = _mm_shuffle_ps(result_13, result_13, 0xff)
    float temp0_757[0x4] = _mm_shuffle_ps(result_33, result_33, 0xff)
    float temp0_758[0x4] = _mm_mul_ps(temp0_756, result_31)
    float temp0_759[0x4] = _mm_mul_ps(temp0_757, result_31)
    result_12 = _mm_add_ps(result_12, result_11)
    arg4 = _mm_add_ps(arg4, temp0_758)
    result_12 = _mm_add_ps(result_12, temp0_759)
else
    result_12 = var_198.o
    result_36 = data_142d4cc30
    result_31 = var_128.o
    result = _mm_shuffle_ps(result_12, result_12, 0)
    float temp0_577[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
    float temp0_578[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
    result = _mm_mul_ps(result, result_14)
    float temp0_580[0x4] = _mm_mul_ps(temp0_577, result_53)
    result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_34)
    float temp0_583[0x4] = _mm_shuffle_ps(result_51, result_51, 0x55)
    float temp0_584[0x4] = _mm_mul_ps(temp0_578, result_52)
    float temp0_585[0x4] = _mm_mul_ps(temp0_583, result_52)
    float temp0_588[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_584, result), temp0_580), result_12)
    result_12 = var_18c:4.o
    result = _mm_shuffle_ps(result_12, result_12, 0)
    float temp0_590[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
    result = _mm_mul_ps(result, result_14)
    float temp0_592[0x4] = _mm_mul_ps(temp0_590, result_53)
    float temp0_593[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
    float temp0_594[0x4] = _mm_shuffle_ps(temp0_588, temp0_588, 0)
    result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_34)
    arg4 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_593, result_52), result), temp0_592), 
        result_12)
    result_12 = var_178.o
    result = _mm_shuffle_ps(result_12, result_12, 0)
    float temp0_602[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
    result = _mm_mul_ps(result, result_14)
    float temp0_604[0x4] = _mm_mul_ps(temp0_602, result_53)
    float temp0_606[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0x55), result_52)
    result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), result_34)
    float temp0_609[0x4] = _mm_add_ps(temp0_606, result)
    result = _mm_mul_ps(_mm_shuffle_ps(result_51, result_51, 0), result_14)
    float temp0_612[0x4] = _mm_add_ps(temp0_609, temp0_604)
    float temp0_613[0x4] = _mm_shuffle_ps(result_51, result_51, 0xaa)
    float temp0_614[0x4] = _mm_add_ps(temp0_585, result)
    float temp0_615[0x4] = _mm_mul_ps(temp0_613, result_53)
    float temp0_617[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_51, result_51, 0xff), result_34)
    result_33 = _mm_add_ps(temp0_612, result_12)
    result_34 = data_142d4cc20
    float temp0_619[0x4] = _mm_add_ps(temp0_614, temp0_615)
    result = _mm_shuffle_ps(temp0_588, temp0_588, 0x55)
    float temp0_621[0x4] = _mm_shuffle_ps(temp0_588, temp0_588, 0xaa)
    result = _mm_mul_ps(result, result_34)
    result_13 = _mm_add_ps(temp0_619, temp0_617)
    float temp0_624[0x4] = _mm_mul_ps(temp0_621, result_36)
    result_51 = data_142d4cc00
    float temp0_625[0x4] = _mm_mul_ps(temp0_594, result_51)
    float temp0_627[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_588, temp0_588, 0xff), result_31)
    result_66 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_625, result), temp0_624), temp0_627)
label_1421defe8:
    result = _mm_shuffle_ps(arg4, arg4, 0)
    float temp0_544[0x4] = _mm_shuffle_ps(arg4, arg4, 0xaa)
    float temp0_545[0x4] = _mm_shuffle_ps(arg4, arg4, 0x55)
    result = _mm_mul_ps(result, result_51)
    float temp0_547[0x4] = _mm_mul_ps(temp0_544, result_36)
    float temp0_549[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xff), result_31)
    result_12 = _mm_shuffle_ps(result_13, result_13, 0x55)
    float temp0_551[0x4] = _mm_mul_ps(temp0_545, result_34)
    result_12 = _mm_mul_ps(result_12, result_34)
    float temp0_553[0x4] = _mm_add_ps(temp0_551, result)
    result = _mm_mul_ps(_mm_shuffle_ps(result_33, result_33, 0), result_51)
    float temp0_556[0x4] = _mm_add_ps(temp0_553, temp0_547)
    float temp0_558[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_33, result_33, 0xaa), result_36)
    result_32 = _mm_add_ps(temp0_556, temp0_549)
    float temp0_561[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_33, result_33, 0x55), result_34)
    float temp0_563[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_33, result_33, 0xff), result_31)
    float temp0_564[0x4] = _mm_add_ps(temp0_561, result)
    result = _mm_mul_ps(_mm_shuffle_ps(result_13, result_13, 0), result_51)
    float temp0_567[0x4] = _mm_add_ps(temp0_564, temp0_558)
    float temp0_568[0x4] = _mm_shuffle_ps(result_13, result_13, 0xaa)
    result_12 = _mm_add_ps(result_12, result)
    float temp0_570[0x4] = _mm_mul_ps(temp0_568, result_36)
    float temp0_572[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_13, result_13, 0xff), result_31)
    arg4 = _mm_add_ps(temp0_567, temp0_563)
    result_12 = _mm_add_ps(_mm_add_ps(result_12, temp0_570), temp0_572)

*rsi = result_66
rsi[1] = result_32
rsi[2] = arg4
rsi[3] = result_12
bool cond:2 = *(arg1 + 0xe0) != 0
result_1[0].q = *arg10
result_1[2] = arg10[1].d

if (cond:2)
    result_34 = result_1[2]
    result_51 = result_1[1]
    result_13 = result_1[0]
    result_35 = result_10
else
    result = result_1[0]
    result_11 = result_1[1]
    result_12 = result_1[2]
    result_16[3] = 0
    result_16[0] = result.d
    result_2[0].q = 0
    float temp0_763[0x4] = _mm_shuffle_ps(result_16, result_16, 0xe1)
    temp0_763[0] = result_11[0]
    result_2[2] = 0
    float temp0_764[0x4] = _mm_shuffle_ps(temp0_763, temp0_763, 0xc6)
    temp0_764[0] = result_12.d
    float temp0_765[0x4] = _mm_shuffle_ps(temp0_764, temp0_764, 0xc9)
    float temp0_766[0x4] = _mm_shuffle_ps(temp0_765, temp0_765, 0xff)
    float temp0_767[0x4] = _mm_shuffle_ps(temp0_765, temp0_765, 0x55)
    result = _mm_mul_ps(_mm_shuffle_ps(temp0_765, temp0_765, 0xaa), result_35)
    result_35 = result_10
    float temp0_770[0x4] = _mm_mul_ps(temp0_766, result_44)
    float temp0_772[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_765, temp0_765, 0), result_35)
    float temp0_773[0x4] = _mm_mul_ps(temp0_767, result_46)
    result_13 = _mm_add_ps(_mm_add_ps(temp0_770, result), _mm_add_ps(temp0_773, temp0_772))
    result_51 = _mm_shuffle_ps(result_13, result_13, 0x55)
    result_34 = _mm_shuffle_ps(result_13, result_13, 0xaa)

result_12 = rsi[1]
result_32 = data_142d4cc00
result_31 = data_142d4cc20
result_66 = data_142d4cc30
result = _mm_shuffle_ps(result_12, result_12, 0)
float temp0_780[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
float temp0_781[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
result = _mm_mul_ps(result, result_32)
int32_t var_11c_1 = 0x3f800000
arg4 = var_128.o
arg4[0] = result_13[0]
float temp0_783[0x4] = _mm_mul_ps(temp0_780, result_66)
result_12 = _mm_shuffle_ps(result_12, result_12, 0xff)
float temp0_785[0x4] = _mm_shuffle_ps(arg4, arg4, 0xe1)
temp0_785[0] = result_51[0]
float temp0_786[0x4] = _mm_mul_ps(temp0_781, result_31)
float temp0_787[0x4] = _mm_shuffle_ps(temp0_785, temp0_785, 0xc6)
temp0_787[0] = result_34[0]
float temp0_788[0x4] = _mm_shuffle_ps(temp0_787, temp0_787, 0xc9)
float temp0_789[0x4] = _mm_add_ps(temp0_786, result)
result_12 = _mm_mul_ps(result_12, temp0_788)
float temp0_792[0x4] = _mm_add_ps(_mm_add_ps(temp0_789, temp0_783), result_12)
result_12 = rsi[2]
result = _mm_shuffle_ps(result_12, result_12, 0)
float temp0_794[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
float temp0_795[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
result = _mm_mul_ps(result, result_32)
float temp0_797[0x4] = _mm_mul_ps(temp0_794, result_66)
result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), temp0_788)
float temp0_800[0x4] = _mm_mul_ps(temp0_795, result_31)
rsi[1] = temp0_792
float temp0_803[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_800, result), temp0_797), result_12)
result_12 = rsi[3]
float temp0_804[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
result = _mm_shuffle_ps(result_12, result_12, 0)
float temp0_806[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
result = _mm_mul_ps(result, result_32)
float temp0_808[0x4] = _mm_mul_ps(temp0_806, result_66)
result_12 = _mm_mul_ps(_mm_shuffle_ps(result_12, result_12, 0xff), temp0_788)
float temp0_811[0x4] = _mm_mul_ps(temp0_804, result_31)
rsi[2] = temp0_803
float temp0_814[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_811, result), temp0_808), result_12)
result_12 = *rsi
float temp0_815[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
result = _mm_shuffle_ps(result_12, result_12, 0)
float temp0_817[0x4] = _mm_mul_ps(temp0_815, result_31)
float temp0_818[0x4] = _mm_shuffle_ps(result_12, result_12, 0xaa)
result = _mm_mul_ps(result, result_32)
float temp0_820[0x4] = _mm_mul_ps(temp0_818, result_66)
result_12 = _mm_shuffle_ps(result_12, result_12, 0xff)
float temp0_822[0x4] = _mm_add_ps(temp0_817, result)
result_12 = _mm_mul_ps(result_12, temp0_788)
rsi[3] = temp0_814
float temp0_825[0x4] = _mm_add_ps(_mm_add_ps(temp0_822, temp0_820), result_12)
*rsi = temp0_825

if (*(arg1 + 0xe0) != 0)
    result_31 = result_20
    result_12 = _mm_shuffle_ps(temp0_825, temp0_825, 0)
    result = _mm_shuffle_ps(temp0_825, temp0_825, 0x55)
    float temp0_828[0x4] = _mm_shuffle_ps(temp0_825, temp0_825, 0xaa)
    float temp0_829[0x4] = _mm_shuffle_ps(temp0_792, temp0_792, 0x55)
    result = _mm_mul_ps(result, result_46)
    float temp0_831[0x4] = _mm_mul_ps(temp0_828, result_31)
    result_12 = _mm_mul_ps(result_12, result_35)
    float temp0_833[0x4] = _mm_mul_ps(temp0_829, result_46)
    float temp0_834[0x4] = _mm_shuffle_ps(temp0_825, temp0_825, 0xff)
    result_12 = _mm_add_ps(result_12, result)
    float temp0_836[0x4] = _mm_mul_ps(temp0_834, result_44)
    result = _mm_mul_ps(_mm_shuffle_ps(temp0_792, temp0_792, 0), result_35)
    result_12 = _mm_add_ps(result_12, temp0_831)
    float temp0_841[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_792, temp0_792, 0xaa), result_31)
    float temp0_842[0x4] = _mm_add_ps(temp0_833, result)
    float temp0_843[0x4] = _mm_shuffle_ps(temp0_792, temp0_792, 0xff)
    result_12 = _mm_add_ps(result_12, temp0_836)
    float temp0_845[0x4] = _mm_mul_ps(temp0_843, result_44)
    result = _mm_shuffle_ps(temp0_803, temp0_803, 0)
    float temp0_847[0x4] = _mm_add_ps(temp0_842, temp0_841)
    result = _mm_mul_ps(result, result_35)
    *rsi = result_12
    float temp0_849[0x4] = _mm_shuffle_ps(temp0_803, temp0_803, 0xaa)
    result_12 = _mm_shuffle_ps(temp0_803, temp0_803, 0x55)
    float temp0_851[0x4] = _mm_add_ps(temp0_847, temp0_845)
    float temp0_852[0x4] = _mm_mul_ps(temp0_849, result_31)
    result_12 = _mm_mul_ps(result_12, result_46)
    float temp0_854[0x4] = _mm_shuffle_ps(temp0_803, temp0_803, 0xff)
    rsi[1] = temp0_851
    float temp0_855[0x4] = _mm_shuffle_ps(temp0_814, temp0_814, 0x55)
    result_12 = _mm_add_ps(result_12, result)
    float temp0_857[0x4] = _mm_mul_ps(temp0_855, result_46)
    float temp0_858[0x4] = _mm_mul_ps(temp0_854, result_44)
    result = _mm_shuffle_ps(temp0_814, temp0_814, 0)
    result_12 = _mm_add_ps(result_12, temp0_852)
    result = _mm_mul_ps(result, result_35)
    float temp0_863[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_814, temp0_814, 0xaa), result_31)
    float temp0_864[0x4] = _mm_add_ps(temp0_857, result)
    float temp0_866[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_814, temp0_814, 0xff), result_44)
    result_12 = _mm_add_ps(result_12, temp0_858)
    float temp0_868[0x4] = _mm_add_ps(temp0_864, temp0_863)
    rsi[2] = result_12
    rsi[3] = _mm_add_ps(temp0_868, temp0_866)

return result
