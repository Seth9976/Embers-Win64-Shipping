// 函数: sub_1427a7dd0
// 地址: 0x1427a7dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
void* r14 = arg5
void* var_1a8 = r14
int32_t rsi = arg4
char* result
uint32_t r8_1
int32_t r9
result, r8_1, r9 = sub_1427a6ad0(arg2, arg3, arg4)

if (result != 0)
    bool cond:0_1 = *(arg1 + 0x1c0) == 0
    float zmm1[0x4] = data_143dbb1fc
    float zmm2[0x4] = data_143dbb200
    float zmm6[0x4] = 0x3f800000
    int32_t var_24c_1 = 0x3f800000
    float var_258[0x4]
    var_258[0] = data_143dbb1f8[0]
    float temp0_1[0x4] = _mm_shuffle_ps(var_258, var_258, 0xe1)
    temp0_1[0] = zmm1[0]
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm2[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    float var_258_1[0x4] = temp0_3
    float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(arg1 + 0xa0))
    int64_t var_228_1 = 0
    float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(arg1 + 0xb0))
    int32_t var_220_1 = 0
    float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(arg1 + 0x80))
    float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_5, temp0_7), 
        _mm_add_ps(temp0_9, 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(arg1 + 0x90))))
    float var_218 = temp0_14[0]
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
    float var_210_1 = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)[0]
    float var_214_1 = temp0_15[0]
    float zmm0_1[0x4]
    
    if (not(cond:0_1))
        zmm0_1, r8_1 = sub_1427a22c0(result, &var_218, r8_1, r9)
        zmm6 = zmm0_1
        **(arg1 + 0x1c0) = zmm0_1[0]
    
    float zmm12[0x4] = var_218
    zmm12[0] = zmm12[0] f- *(result + 0x630)
    float zmm13[0x4] = var_214_1
    zmm13[0] = zmm13[0] f- *(result + 0x634)
    float zmm14[0x4] = var_210_1
    zmm14[0] = zmm14[0] f- *(result + 0x638)
    zmm12[0] = zmm12[0] * zmm12[0]
    float var_204_1 = zmm12[0]
    zmm13[0] = zmm13[0] * zmm13[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm13[0] = zmm13[0] + zmm12[0]
    float var_200_1 = zmm13[0]
    float var_1fc_1 = zmm14[0]
    zmm13[0] = zmm13[0] + zmm14[0]
    float zmm4[0x4]
    
    if (not(zmm13[0] <= 9.99999994e-09f))
        zmm4 = 0x3f000000
        float temp0_17[0x4] = _mm_rsqrt_ss(zmm13[0], zmm13[0])
        zmm2 = 0x3f000000
        zmm13[0] = zmm13[0] * 0.5f
        temp0_17[0] = temp0_17[0] * temp0_17[0]
        zmm13[0] = zmm13[0] * temp0_17[0]
        zmm2[0] = 0.5f - zmm13[0]
        temp0_17[0] = temp0_17[0] * zmm2[0]
        temp0_17[0] = temp0_17[0] + temp0_17[0]
        temp0_17[0] = temp0_17[0] * temp0_17[0]
        zmm13[0] = zmm13[0] * temp0_17[0]
        zmm4[0] = 0.5f - zmm13[0]
        temp0_17[0] = temp0_17[0] * zmm4[0]
        temp0_17[0] = temp0_17[0] + temp0_17[0]
        zmm12[0] = zmm12[0] * temp0_17[0]
        zmm13[0] = zmm13[0] * temp0_17[0]
        zmm14[0] = zmm14[0] * temp0_17[0]
        var_204_1 = zmm12[0]
        var_200_1 = zmm13[0]
        var_1fc_1 = zmm14[0]
        float var_1e8_1 = temp0_17[0]
    
    char* rax_4 = *(arg1 + 0x1d0)
    
    if (rax_4 == 0)
        r8_1.b = 0
    else
        r8_1 = zx.d(*rax_4)
    
    float var_298
    float var_294
    float var_290_1
    
    if (r8_1.b == 0)
        zmm1 = *(arg1 + 0x170)
        zmm2 = *(arg1 + 0x174)
        int32_t var_24c_2 = 0
        var_258_1[0] = (*(arg1 + 0x16c))[0]
        int64_t var_228_2 = 0
        float temp0_18[0x4] = _mm_shuffle_ps(var_258_1, var_258_1, 0xe1)
        temp0_18[0] = zmm1[0]
        int32_t var_220_2 = 0
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
        temp0_19[0] = zmm2[0]
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
        var_258_1 = temp0_20
        float temp0_22[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0xff), *(arg1 + 0xb0))
        float temp0_24[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0xaa), *(arg1 + 0xa0))
        float temp0_26[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0x55), *(arg1 + 0x90))
        float temp0_31[0x4] = _mm_add_ps(_mm_add_ps(temp0_22, temp0_24), 
            _mm_add_ps(temp0_26, 
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0), *(arg1 + 0x80))))
        var_298 = temp0_31[0]
        float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
        var_290_1 = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)[0]
        var_294 = temp0_32[0]
    else
        var_298.q = *(arg1 + 0x16c)
        var_290_1 = *(arg1 + 0x174)
    
    char rdx_2 = *(arg1 + 0x1a4)
    zmm0_1 = zx.o(var_298.q)
    zmm4 = zx.o(0)
    float zmm7[0x4] = zmm0_1.d
    float temp0_34[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    zmm7[0] = zmm7[0] * zmm12[0]
    temp0_34[0] = temp0_34[0] * zmm13[0]
    temp0_34[0] = temp0_34[0] + zmm7[0]
    zmm0_1 = var_290_1
    zmm0_1[0] = zmm0_1[0] * zmm14[0]
    temp0_34[0] = temp0_34[0] + zmm0_1[0]
    r9.b = temp0_34[0] > zmm4[0]
    int64_t var_288
    int32_t* rax_7
    
    if (rdx_2 == 0 || r9.b == 0)
        float var_280_1 = var_290_1
        rax_7 = &var_288
        var_288 = var_298.q
    else
        rax_7 = &var_298
        var_298 = (zmm7 ^ 0x80000000)[0]
        var_294 = (temp0_34 ^ 0x80000000)[0]
        float var_290_2 = (zmm0_1 ^ 0x80000000)[0]
    
    int32_t rax_8 = rax_7[2]
    char* rax_9 = *(arg1 + 0x1a8)
    int64_t var_268_2 = *rax_7
    
    if (rax_9 != 0)
        *rax_9 = r9.b
        rdx_2 = *(arg1 + 0x1a4)
    
    float var_290_3
    
    if (r8_1.b == 0)
        zmm1 = *(arg1 + 0x17c)
        zmm2 = *(arg1 + 0x180)
        int32_t var_24c_3 = 0
        var_258_1[0] = (*(arg1 + 0x178))[0]
        int64_t var_228_3 = 0
        float temp0_35[0x4] = _mm_shuffle_ps(var_258_1, var_258_1, 0xe1)
        temp0_35[0] = zmm1[0]
        int32_t var_220_3 = 0
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc6)
        temp0_36[0] = zmm2[0]
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc9)
        var_258_1 = temp0_37
        float temp0_39[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0x55), *(arg1 + 0x90))
        float temp0_41[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0), *(arg1 + 0x80))
        float temp0_43[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0xaa), *(arg1 + 0xa0))
        float temp0_48[0x4] = _mm_add_ps(_mm_add_ps(temp0_39, temp0_41), 
            _mm_add_ps(temp0_43, 
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0xff), *(arg1 + 0xb0))))
        var_298 = temp0_48[0]
        float temp0_49[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0x55)
        var_290_3 = _mm_shuffle_ps(temp0_48, temp0_48, 0xaa)[0]
        var_294 = temp0_49[0]
    else
        var_298.q = *(arg1 + 0x178)
        var_290_3 = *(arg1 + 0x180)
    
    zmm0_1 = zx.o(var_298.q)
    var_288 = zmm0_1.q
    zmm7 = var_288.d
    float temp0_51[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    zmm7[0] = zmm7[0] * zmm12[0]
    temp0_51[0] = temp0_51[0] * zmm13[0]
    temp0_51[0] = temp0_51[0] + zmm7[0]
    zmm0_1 = var_290_3
    zmm0_1[0] = zmm0_1[0] * zmm14[0]
    temp0_51[0] = temp0_51[0] + zmm0_1[0]
    r9.b = temp0_51[0] > zmm4[0]
    int64_t var_278
    float* rax_12
    
    if (rdx_2 == 0 || r9.b == 0)
        float var_270_1 = var_290_3
        rax_12 = &var_278
        var_278 = var_298.q
    else
        rax_12 = &var_298
        var_298 = (zmm7 ^ 0x80000000)[0]
        var_294 = (temp0_51 ^ 0x80000000)[0]
        float var_290_4 = (zmm0_1 ^ 0x80000000)[0]
    
    int32_t rax_13 = rax_12[2]
    char* rax_14 = *(arg1 + 0x1b0)
    var_288 = *rax_12
    
    if (rax_14 != 0)
        *rax_14 = r9.b
        rdx_2 = *(arg1 + 0x1a4)
    
    float var_270_2
    
    if (r8_1.b == 0)
        zmm1 = *(arg1 + 0x188)
        zmm2 = *(arg1 + 0x18c)
        int32_t var_24c_4 = 0
        var_258_1[0] = (*(arg1 + 0x184))[0]
        int64_t var_228_4 = 0
        float temp0_52[0x4] = _mm_shuffle_ps(var_258_1, var_258_1, 0xe1)
        temp0_52[0] = zmm1[0]
        int32_t var_220_4 = 0
        float temp0_53[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xc6)
        temp0_53[0] = zmm2[0]
        float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xc9)
        var_258_1 = temp0_54
        float temp0_56[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), *(arg1 + 0xa0))
        float temp0_58[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), *(arg1 + 0xb0))
        float temp0_60[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_54, temp0_54, 0), *(arg1 + 0x80))
        float temp0_65[0x4] = _mm_add_ps(_mm_add_ps(temp0_56, temp0_58), 
            _mm_add_ps(temp0_60, 
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_54, temp0_54, 0x55), *(arg1 + 0x90))))
        var_278.d = temp0_65[0]
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
        var_270_2 = _mm_shuffle_ps(temp0_65, temp0_65, 0xaa)[0]
        var_278:4.d = temp0_66[0]
    else
        float rax_15 = *(arg1 + 0x18c)
        var_278 = *(arg1 + 0x184)
        var_270_2 = rax_15
    
    zmm0_1 = zx.o(var_278)
    var_298.q = zmm0_1.q
    zmm7 = var_298
    float temp0_68[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    zmm7[0] = zmm7[0] * zmm12[0]
    temp0_68[0] = temp0_68[0] * zmm13[0]
    temp0_68[0] = temp0_68[0] + zmm7[0]
    zmm0_1 = var_270_2
    zmm0_1[0] = zmm0_1[0] * zmm14[0]
    temp0_68[0] = temp0_68[0] + zmm0_1[0]
    r8_1.b = temp0_68[0] > zmm4[0]
    int64_t var_1c8
    int64_t* rax_17
    
    if (rdx_2 == 0 || r8_1.b == 0)
        float var_1c0_1 = var_270_2
        rax_17 = &var_1c8
        var_1c8 = var_278
    else
        rax_17 = &var_278
        var_278.d = (zmm7 ^ 0x80000000)[0]
        var_278:4.d = (temp0_68 ^ 0x80000000)[0]
        float var_270_3 = (zmm0_1 ^ 0x80000000)[0]
    
    int32_t rax_18 = rax_17[1].d
    char* rax_19 = *(arg1 + 0x1b8)
    var_298.q = *rax_17
    
    if (rax_19 != 0)
        *rax_19 = r8_1.b
    
    float zmm9[0x4] = var_268_2.d
    zmm6[0] = zmm6[0] f* *(arg1 + 0x160)
    result = *(arg1 + 0x1c8)
    float zmm11[0x4] = var_288.d
    zmm6[0] = zmm6[0] f* *(arg1 + 0x164)
    zmm12 = var_298
    zmm6[0] = zmm6[0] f* *(arg1 + 0x168)
    zmm7 = var_268_2:4.d
    zmm13 = var_288:4.d
    zmm14 = var_294
    float zmm10[0x4] = rax_8
    zmm9[0] = zmm9[0] * zmm6[0]
    zmm11[0] = zmm11[0] * zmm6[0]
    zmm12[0] = zmm12[0] * zmm6[0]
    zmm9[0] = zmm9[0] + var_218
    zmm9[0] = zmm9[0] + zmm11[0]
    zmm13[0] = zmm13[0] * zmm6[0]
    zmm9[0] = zmm9[0] + zmm12[0]
    zmm14[0] = zmm14[0] * zmm6[0]
    float var_1f8_1 = zmm9[0]
    zmm7[0] = zmm7[0] * zmm6[0]
    zmm7[0] = zmm7[0] + var_214_1
    zmm7[0] = zmm7[0] + zmm13[0]
    zmm7[0] = zmm7[0] + zmm14[0]
    zmm1 = rax_18
    zmm1[0] = zmm1[0] * zmm6[0]
    float var_1f4_1 = zmm7[0]
    zmm10[0] = zmm10[0] * zmm6[0]
    zmm2 = rax_13
    zmm2[0] = zmm2[0] * zmm6[0]
    zmm10[0] = zmm10[0] + var_210_1
    zmm10[0] = zmm10[0] + zmm2[0]
    zmm10[0] = zmm10[0] + zmm1[0]
    float var_1f0_1 = zmm10[0]
    float var_238_1
    
    if (result == 0 || *result != 1)
        var_238_1 = (*(arg1 + 0x19c))[0]
    else
        zmm2 = *(arg1 + 0x1a0)
        zmm2[0] = zmm2[0] f* *(arg1 + 0x19c)
        var_238_1 = zmm2[0]
        zmm2 = rax_13
    
    zmm1 = zmm6
    zmm1[0] = zmm1[0] f* *(arg1 + 0x194)
    zmm4 = zx.o(0)
    int32_t i = 0
    zmm6[0] = zmm6[0] f* *(arg1 + 0x190)
    float zmm3[0x4] = zx.o(0)
    zmm6[0] = zmm6[0] f* *(arg1 + 0x198)
    zmm6[0] = zmm6[0] * 0.5f
    zmm1[0] = zmm1[0] * 0.5f
    zmm6[0] = zmm6[0] * 0.5f
    zmm4[0].q = fconvert.d(zmm6[0])
    zmm1[0].q = fconvert.d(zmm1[0])
    zmm3[0].q = fconvert.d(zmm6[0])
    int64_t var_1b0_1 = zmm4.q
    var_1c8 = zmm1.q
    var_278 = zmm3.q
    
    if (*(arg2 + 8) s> 0)
        result = arg2
        int64_t r15_1 = 0
        int32_t r12_1 = 1
        int64_t var_1d0_1 = 0
        float zmm15[0x4]
        float var_e8_1[0x4] = zmm15
        
        do
            if ((r12_1 & rsi) != 0)
                void* rax_20 = *(r14 + 0x60)
                void* rcx_2 = r14 + 0x50
                float zmm8[0x4] = rax_8
                zmm0_1 = zx.o(0)
                zmm0_1[0] = fconvert.s(zmm3[0].q)
                
                if (rax_20 != 0)
                    rcx_2 = rax_20
                
                zmm3 = zmm14
                zmm14 = rax_18
                zmm6 = zmm11
                int64_t* rsi_1 = *(rcx_2 + r15_1)
                zmm11 = zmm2
                zmm3[0] = zmm3[0] * zmm0_1[0]
                zmm12[0] = zmm12[0] * zmm0_1[0]
                zmm14[0] = zmm14[0] * zmm0_1[0]
                zmm0_1 = zx.o(0)
                zmm0_1[0] = fconvert.s(zmm1[0].q)
                zmm1 = zx.o(0)
                float var_208_1 = zmm3[0]
                zmm13[0] = zmm13[0] * zmm0_1[0]
                zmm11[0] = zmm11[0] * zmm0_1[0]
                zmm6[0] = zmm6[0] * zmm0_1[0]
                zmm1[0] = fconvert.s((zmm4 ^ data_142d8e3c0)[0].q)
                zmm9[0] = zmm9[0] * zmm1[0]
                zmm10[0] = zmm10[0] * zmm1[0]
                float var_240_1 = zmm9[0]
                zmm9[0] = zmm9[0] - zmm6[0]
                zmm7[0] = zmm7[0] * zmm1[0]
                zmm10[0] = zmm10[0] - zmm11[0]
                float var_248_1 = zmm9[0]
                zmm9[0] = zmm9[0] - zmm12[0]
                zmm7[0] = zmm7[0] - zmm13[0]
                zmm10[0] = zmm10[0] - zmm14[0]
                float var_1b8_1 = zmm9[0]
                zmm7[0] = zmm7[0] - zmm3[0]
                float var_198_1 = zmm10[0]
                zmm0_1 = zx.o(0)
                zmm0_1[0] = fconvert.s(zmm4[0].q)
                float var_150 = var_198_1
                float temp0_69[0x4] = _mm_unpacklo_ps(zmm9, zmm7[0].q)
                zmm8[0] = zmm8[0] * zmm0_1[0]
                int64_t var_158 = temp0_69.q
                zmm1 = zmm9
                zmm9 = var_268_2:4.d
                zmm1[0] = zmm1[0] * zmm0_1[0]
                zmm9[0] = zmm9[0] * zmm0_1[0]
                float var_244_1 = zmm1[0]
                zmm1[0] = zmm1[0] - zmm6[0]
                zmm9[0] = zmm9[0] - zmm13[0]
                float var_23c_1 = zmm1[0]
                zmm1[0] = zmm1[0] - zmm12[0]
                zmm9[0] = zmm9[0] - zmm3[0]
                zmm8[0] = zmm8[0] - zmm11[0]
                float var_1e4_1 = zmm1[0]
                int64_t var_14c_1 = (_mm_unpacklo_ps(zmm1, zmm9[0].q)).q
                zmm8[0] = zmm8[0] - zmm14[0]
                float var_18c_1 = zmm8[0]
                zmm0_1 = var_244_1
                zmm0_1[0] = zmm0_1[0] + zmm6[0]
                float var_244_2 = zmm0_1[0]
                bool cond:1_1 = *(arg1 + 0x1a5) == 0
                zmm8[0] = zmm8[0] + zmm11[0]
                zmm1 = zmm0_1
                zmm9[0] = zmm9[0] + zmm13[0]
                zmm1[0] = zmm1[0] - zmm12[0]
                zmm8[0] = zmm8[0] + zmm14[0]
                zmm10[0] = zmm10[0] + zmm14[0]
                zmm8[0] = zmm8[0] + zmm14[0]
                zmm8[0] = zmm8[0] - zmm14[0]
                zmm9[0] = zmm9[0] - var_208_1
                float var_1e0_1 = zmm1[0]
                float var_15c_1 = zmm8[0]
                zmm3 = var_244_2
                float var_180_1 = zmm8[0]
                zmm3[0] = zmm3[0] + zmm12[0]
                zmm0_1 = var_240_1
                zmm0_1[0] = zmm0_1[0] + zmm6[0]
                float temp0_71[0x4] = _mm_unpacklo_ps(zmm1, zmm9[0].q)
                zmm2 = var_208_1
                zmm9[0] = zmm9[0] + zmm2[0]
                int64_t var_140_1 = temp0_71.q
                zmm7[0] = zmm7[0] + zmm2[0]
                float var_240_2 = zmm0_1[0]
                zmm9[0] = zmm9[0] + zmm2[0]
                float var_168_1 = zmm10[0]
                float var_220_5 = zmm8[0]
                zmm11[0] = zmm11[0] + zmm10[0]
                zmm13[0] = zmm13[0] + zmm7[0]
                zmm0_1[0] = zmm0_1[0] - zmm12[0]
                zmm7[0] = zmm7[0] + zmm13[0]
                zmm10[0] = zmm10[0] + zmm11[0]
                zmm11[0] = zmm11[0] - zmm14[0]
                zmm13[0] = zmm13[0] - zmm2[0]
                float var_1e8_2 = zmm0_1[0]
                zmm7[0] = zmm7[0] + zmm2[0]
                zmm10[0] = zmm10[0] + zmm14[0]
                float var_174_1 = zmm11[0]
                int64_t var_134_1 = (_mm_unpacklo_ps(zmm0_1, zmm13[0].q)).q
                zmm0_1 = var_248_1
                zmm0_1[0] = zmm0_1[0] + zmm12[0]
                float zmm5[0x4] = zmm0_1
                float var_248_2 = zmm0_1[0]
                int64_t var_128_1 = (_mm_unpacklo_ps(zmm5, zmm7[0].q)).q
                zmm0_1 = var_23c_1
                zmm0_1[0] = zmm0_1[0] + zmm12[0]
                var_258_1[2] = zmm10[0]
                float rax_28 = var_258_1[2]
                float var_23c_2 = zmm0_1[0]
                zmm4 = var_240_2
                int64_t var_11c_1 = (_mm_unpacklo_ps(zmm0_1, zmm9[0].q)).q
                zmm4[0] = zmm4[0] + zmm12[0]
                int64_t var_110_1 = (_mm_unpacklo_ps(zmm3, zmm9[0].q)).q
                int64_t var_104_1 = (_mm_unpacklo_ps(zmm4, zmm7[0].q)).q
                
                if (cond:1_1)
                    zmm6 = var_1f8_1
                    void* const j = &data_1434b5e90
                    zmm8 = var_1f0_1
                    zmm5[0] = zmm5[0] + zmm6[0]
                    zmm7 = var_1f4_1
                    zmm3[0] = zmm3[0] + zmm6[0]
                    zmm1 = var_158:4.d
                    zmm4[0] = zmm4[0] + zmm6[0]
                    zmm1[0] = zmm1[0] + zmm7[0]
                    zmm6[0] = zmm6[0] + var_1b8_1
                    var_128_1.d = zmm5[0]
                    var_110_1.d = zmm3[0]
                    var_104_1.d = zmm4[0]
                    var_158:4.d = zmm1[0]
                    zmm1 = var_14c_1:4.d
                    var_158.d = zmm6[0]
                    zmm1[0] = zmm1[0] + zmm7[0]
                    zmm0_1 = var_150
                    zmm0_1[0] = zmm0_1[0] + zmm8[0]
                    var_14c_1:4.d = zmm1[0]
                    zmm1 = var_140_1:4.d
                    var_150 = zmm0_1[0]
                    zmm1[0] = zmm1[0] + zmm7[0]
                    zmm6[0] = zmm6[0] + var_1e4_1
                    var_140_1:4.d = zmm1[0]
                    zmm1 = var_134_1:4.d
                    var_14c_1.d = zmm6[0]
                    zmm1[0] = zmm1[0] + zmm7[0]
                    zmm0_1 = var_18c_1
                    zmm0_1[0] = zmm0_1[0] + zmm8[0]
                    var_134_1:4.d = zmm1[0]
                    zmm1 = var_168_1
                    float var_144_2 = zmm0_1[0]
                    zmm1[0] = zmm1[0] + zmm8[0]
                    zmm6[0] = zmm6[0] + var_1e0_1
                    float var_120_2 = zmm1[0]
                    zmm1 = var_15c_1
                    var_140_1.d = zmm6[0]
                    zmm1[0] = zmm1[0] + zmm8[0]
                    zmm0_1 = var_180_1
                    zmm0_1[0] = zmm0_1[0] + zmm8[0]
                    float var_114_2 = zmm1[0]
                    zmm1 = var_220_5
                    float var_138_2 = zmm0_1[0]
                    zmm1[0] = zmm1[0] + zmm8[0]
                    zmm6[0] = zmm6[0] + var_1e8_2
                    float var_108_2 = zmm1[0]
                    zmm1 = rax_28
                    var_134_1.d = zmm6[0]
                    zmm1[0] = zmm1[0] + zmm8[0]
                    zmm0_1 = var_174_1
                    zmm0_1[0] = zmm0_1[0] + zmm8[0]
                    float var_fc_2 = zmm1[0]
                    float var_12c_2 = zmm0_1[0]
                    zmm0_1 = var_128_1:4.d
                    zmm0_1[0] = zmm0_1[0] + zmm7[0]
                    var_128_1:4.d = zmm0_1[0]
                    zmm0_1 = var_23c_2
                    zmm0_1[0] = zmm0_1[0] + zmm6[0]
                    var_11c_1.d = zmm0_1[0]
                    zmm0_1 = var_11c_1:4.d
                    zmm0_1[0] = zmm0_1[0] + zmm7[0]
                    var_11c_1:4.d = zmm0_1[0]
                    zmm0_1 = var_110_1:4.d
                    zmm0_1[0] = zmm0_1[0] + zmm7[0]
                    var_110_1:4.d = zmm0_1[0]
                    zmm0_1 = var_104_1:4.d
                    zmm0_1[0] = zmm0_1[0] + zmm7[0]
                    var_104_1:4.d = zmm0_1[0]
                    
                    do
                        (*(*rsi_1 + 0x30))(rsi_1, &var_158 + sx.q(*j) * 0xc, 
                            &var_158 + sx.q(*(j + 4)) * 0xc, arg1 + 0x150, 1, var_238_1[0], 0, 1)
                        j += 8
                    while (j s< &data_1434b5ef0)
                else
                    zmm11 = 0xc97423f0
                    void* rdx_3 = &var_150
                    zmm8 = var_1f8_1
                    int32_t j_6 = -1
                    zmm9 = var_1f4_1
                    int32_t j_1 = 0
                    zmm10 = var_1f0_1
                    zmm12 = var_204_1
                    zmm13 = var_200_1
                    zmm14 = var_1fc_1
                    
                    do
                        int32_t j_5 = j_1 + 1
                        zmm12[0] = zmm12[0] f* *(rdx_3 - 8)
                        int32_t j_3 = j_1
                        zmm14[0] = zmm14[0] f* *rdx_3
                        zmm13[0] = zmm13[0] f* *(rdx_3 - 4)
                        zmm13[0] = zmm13[0] + zmm12[0]
                        zmm8[0] = zmm8[0] f+ *(rdx_3 - 8)
                        zmm13[0] = zmm13[0] + zmm14[0]
                        *(rdx_3 - 8) = zmm8[0]
                        zmm10[0] = zmm10[0] f+ *rdx_3
                        zmm9[0] = zmm9[0] f+ *(rdx_3 - 4)
                        bool cond:2_1 = zmm13[0] <= zmm11[0]
                        *rdx_3 = zmm10[0]
                        float temp0_77[0x4] = _mm_max_ss(zmm11[0], zmm13[0])
                        *(rdx_3 - 4) = zmm9[0]
                        zmm12[0] = zmm12[0] f* *(rdx_3 + 4)
                        
                        if (cond:2_1)
                            j_3 = j_6
                        
                        zmm13[0] = zmm13[0] f* *(rdx_3 + 8)
                        zmm14[0] = zmm14[0] f* *(rdx_3 + 0xc)
                        zmm13[0] = zmm13[0] + zmm12[0]
                        zmm8[0] = zmm8[0] f+ *(rdx_3 + 4)
                        zmm13[0] = zmm13[0] + zmm14[0]
                        *(rdx_3 + 4) = zmm8[0]
                        zmm9[0] = zmm9[0] f+ *(rdx_3 + 8)
                        bool cond:3_1 = zmm13[0] <= temp0_77[0]
                        *(rdx_3 + 8) = zmm9[0]
                        float temp0_78[0x4] = _mm_max_ss(zmm13[0], temp0_77[0])
                        zmm10[0] = zmm10[0] f+ *(rdx_3 + 0xc)
                        
                        if (cond:3_1)
                            j_5 = j_3
                        
                        int32_t j_7 = j_1 + 2
                        *(rdx_3 + 0xc) = zmm10[0]
                        zmm12[0] = zmm12[0] f* *(rdx_3 + 0x10)
                        zmm14[0] = zmm14[0] f* *(rdx_3 + 0x18)
                        zmm13[0] = zmm13[0] f* *(rdx_3 + 0x14)
                        zmm13[0] = zmm13[0] + zmm12[0]
                        zmm8[0] = zmm8[0] f+ *(rdx_3 + 0x10)
                        zmm13[0] = zmm13[0] + zmm14[0]
                        *(rdx_3 + 0x10) = zmm8[0]
                        zmm9[0] = zmm9[0] f+ *(rdx_3 + 0x14)
                        bool cond:4_1 = zmm13[0] <= temp0_78[0]
                        *(rdx_3 + 0x14) = zmm9[0]
                        float temp0_79[0x4] = _mm_max_ss(temp0_78[0], zmm13[0])
                        zmm10[0] = zmm10[0] f+ *(rdx_3 + 0x18)
                        
                        if (cond:4_1)
                            j_7 = j_5
                        
                        *(rdx_3 + 0x18) = zmm10[0]
                        zmm12[0] = zmm12[0] f* *(rdx_3 + 0x1c)
                        zmm13[0] = zmm13[0] f* *(rdx_3 + 0x20)
                        zmm14[0] = zmm14[0] f* *(rdx_3 + 0x24)
                        zmm13[0] = zmm13[0] + zmm12[0]
                        zmm8[0] = zmm8[0] f+ *(rdx_3 + 0x1c)
                        zmm13[0] = zmm13[0] + zmm14[0]
                        *(rdx_3 + 0x1c) = zmm8[0]
                        zmm9[0] = zmm9[0] f+ *(rdx_3 + 0x20)
                        float temp0_80[0x4] = _mm_max_ss(zmm13[0], temp0_79[0])
                        *(rdx_3 + 0x20) = zmm9[0]
                        bool cond:5_1 = zmm13[0] <= temp0_79[0]
                        int32_t j_9 = j_1 + 3
                        j_6 = j_1 + 7
                        zmm10[0] = zmm10[0] f+ *(rdx_3 + 0x24)
                        
                        if (cond:5_1)
                            j_9 = j_7
                        
                        int32_t j_11 = j_1 + 4
                        *(rdx_3 + 0x24) = zmm10[0]
                        zmm12[0] = zmm12[0] f* *(rdx_3 + 0x28)
                        zmm14[0] = zmm14[0] f* *(rdx_3 + 0x30)
                        zmm13[0] = zmm13[0] f* *(rdx_3 + 0x2c)
                        zmm13[0] = zmm13[0] + zmm12[0]
                        zmm8[0] = zmm8[0] f+ *(rdx_3 + 0x28)
                        zmm13[0] = zmm13[0] + zmm14[0]
                        *(rdx_3 + 0x28) = zmm8[0]
                        zmm9[0] = zmm9[0] f+ *(rdx_3 + 0x2c)
                        bool cond:6_1 = zmm13[0] <= temp0_80[0]
                        *(rdx_3 + 0x2c) = zmm9[0]
                        float temp0_81[0x4] = _mm_max_ss(temp0_80[0], zmm13[0])
                        zmm10[0] = zmm10[0] f+ *(rdx_3 + 0x30)
                        
                        if (cond:6_1)
                            j_11 = j_9
                        
                        int32_t j_10 = j_1 + 5
                        *(rdx_3 + 0x30) = zmm10[0]
                        zmm12[0] = zmm12[0] f* *(rdx_3 + 0x34)
                        zmm14[0] = zmm14[0] f* *(rdx_3 + 0x3c)
                        zmm13[0] = zmm13[0] f* *(rdx_3 + 0x38)
                        zmm13[0] = zmm13[0] + zmm12[0]
                        zmm8[0] = zmm8[0] f+ *(rdx_3 + 0x34)
                        zmm13[0] = zmm13[0] + zmm14[0]
                        *(rdx_3 + 0x34) = zmm8[0]
                        zmm9[0] = zmm9[0] f+ *(rdx_3 + 0x38)
                        bool cond:7_1 = zmm13[0] <= temp0_81[0]
                        *(rdx_3 + 0x38) = zmm9[0]
                        zmm10[0] = zmm10[0] f+ *(rdx_3 + 0x3c)
                        
                        if (cond:7_1)
                            j_10 = j_11
                        
                        float temp0_82[0x4] = _mm_max_ss(zmm13[0], temp0_81[0])
                        int32_t j_8 = j_1 + 6
                        *(rdx_3 + 0x3c) = zmm10[0]
                        zmm12[0] = zmm12[0] f* *(rdx_3 + 0x40)
                        zmm14[0] = zmm14[0] f* *(rdx_3 + 0x48)
                        zmm13[0] = zmm13[0] f* *(rdx_3 + 0x44)
                        zmm13[0] = zmm13[0] + zmm12[0]
                        zmm8[0] = zmm8[0] f+ *(rdx_3 + 0x40)
                        zmm13[0] = zmm13[0] + zmm14[0]
                        *(rdx_3 + 0x40) = zmm8[0]
                        zmm9[0] = zmm9[0] f+ *(rdx_3 + 0x44)
                        bool cond:8_1 = zmm13[0] <= temp0_82[0]
                        *(rdx_3 + 0x44) = zmm9[0]
                        float temp0_83[0x4] = _mm_max_ss(temp0_82[0], zmm13[0])
                        zmm10[0] = zmm10[0] f+ *(rdx_3 + 0x48)
                        
                        if (cond:8_1)
                            j_8 = j_10
                        
                        *(rdx_3 + 0x48) = zmm10[0]
                        zmm13[0] = zmm13[0] f* *(rdx_3 + 0x50)
                        zmm12[0] = zmm12[0] f* *(rdx_3 + 0x4c)
                        zmm14[0] = zmm14[0] f* *(rdx_3 + 0x54)
                        zmm13[0] = zmm13[0] + zmm12[0]
                        zmm13[0] = zmm13[0] + zmm14[0]
                        
                        if (zmm13[0] <= temp0_83[0])
                            j_6 = j_8
                        
                        zmm11 = _mm_max_ss(zmm13[0], temp0_83[0])
                        zmm8[0] = zmm8[0] f+ *(rdx_3 + 0x4c)
                        j_1 += 8
                        *(rdx_3 + 0x4c) = zmm8[0]
                        zmm9[0] = zmm9[0] f+ *(rdx_3 + 0x50)
                        *(rdx_3 + 0x50) = zmm9[0]
                        zmm10[0] = zmm10[0] f+ *(rdx_3 + 0x54)
                        *(rdx_3 + 0x54) = zmm10[0]
                        rdx_3 += 0x60
                    while (j_1 s< 8)
                    
                    void* const rbx_1 = &data_1434b5e94
                    int64_t j_4 = 0xc
                    int64_t j_2
                    
                    do
                        int64_t rdx_4 = sx.q(*(rbx_1 - 4))
                        
                        if (rdx_4.d != j_6)
                            int64_t rax_29 = sx.q(*rbx_1)
                            
                            if (rax_29.d != j_6)
                                (*(*rsi_1 + 0x30))(rsi_1, &var_158 + rdx_4 * 0xc, 
                                    &var_158 + rax_29 * 0xc, arg1 + 0x150, 1, var_238_1[0], 0, 1)
                        
                        rbx_1 += 8
                        j_2 = j_4
                        j_4 -= 1
                    while (j_2 != 1)
                
                r14 = var_1a8
                rsi = arg4
                result = arg2
                r15_1 = var_1d0_1
                zmm3 = zx.o(var_278)
                zmm1 = zx.o(var_1c8)
                zmm4 = zx.o(var_1b0_1)
                zmm14 = var_294
                zmm13 = var_288:4.d
                zmm12 = var_298
                zmm11 = var_288.d
                zmm10 = rax_8
                zmm7 = var_268_2:4.d
                zmm9 = var_268_2.d
            
            zmm2 = rax_13
            r15_1 += 8
            i += 1
            r12_1 = rol.d(r12_1, 1)
            var_1d0_1 = r15_1
        while (i s< *(result + 8))

__security_check_cookie(rax_1 ^ &var_2d8)
return result
