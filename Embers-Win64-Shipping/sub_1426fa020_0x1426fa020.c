// 函数: sub_1426fa020
// 地址: 0x1426fa020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x4f].b != 0)
    sub_1426fa2f0(arg1)
else if ((*(arg1 + 0x274) & 4) != 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    uint32_t zmm7[0x4]
    uint32_t var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    int64_t var_88
    int64_t* rax_5
    
    if (sub_140d3e110(&arg1[0x27]) == 0)
        int64_t var_4c[0x2]
        sub_141e912d0(&arg1[0x29], &var_4c)
        rax_5 = &var_4c
    else
        void* rcx_2 = *(sub_140d3c6e0(&arg1[0x27]) + 0x130)
        float var_80_1
        
        if (rcx_2 == 0)
            float rax_3 = data_143dbb200
            var_88 = data_143dbb1f8.q
            var_80_1 = rax_3
        else
            float zmm1[0x4] = *(rcx_2 + 0x1d0)
            var_88.d = zmm1[0]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_80_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            var_88:4.d = temp0_1[0]
        
        float var_50_1 = var_80_1
        int64_t var_58
        rax_5 = &var_58
        var_58 = var_88
    
    int32_t rax_6 = rax_5[1].d
    int64_t rax_7 = arg1[0x4b]
    int64_t var_78 = *rax_5
    int32_t var_68
    (*(rax_7 + 0x10))(&arg1[0x4b], &var_68)
    zmm8 = var_78.d
    zmm7 = var_78:4.d
    zmm8[0] = zmm8[0] f- var_68
    int32_t var_64
    zmm7[0] = zmm7[0] f- var_64
    zmm6 = rax_6
    int32_t var_60
    zmm6[0] = zmm6[0] f- var_60
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm7[0] = zmm7[0] f* zmm7[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm7[0] = zmm7[0] f+ zmm8[0]
    zmm7[0] = zmm7[0] f+ zmm6[0]
    
    if (not(zmm7[0] f== 1f))
        if (zmm7[0] f>= 9.99999994e-09f)
            float zmm0[0x4] = zmm7
            float temp0_3[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0[0])
            uint32_t zmm2[0x4] = 0x3f000000
            zmm0[0] = zmm0[0] * 0.5f
            temp0_3[0] = temp0_3[0] * temp0_3[0]
            zmm0[0] = zmm0[0] * temp0_3[0]
            zmm2[0] = 0.5f - zmm0[0]
            temp0_3[0] = temp0_3[0] f* zmm2[0]
            temp0_3[0] = temp0_3[0] + temp0_3[0]
            temp0_3[0] = temp0_3[0] * temp0_3[0]
            zmm0[0] = zmm0[0] * temp0_3[0]
            temp0_3[0] = temp0_3[0] * (0.5f - zmm0[0])
            temp0_3[0] = temp0_3[0] + temp0_3[0]
            zmm8[0] = zmm8[0] * temp0_3[0]
            zmm7[0] = zmm7[0] f* temp0_3[0]
            zmm6[0] = zmm6[0] * temp0_3[0]
        else
            zmm8 = data_143dbb1f8
            zmm7 = data_143dbb1fc
            zmm6 = data_143dbb200
    
    var_88.d = zmm8[0]
    zmm8[0] = zmm8[0] f- arg1[0x4d].d
    var_88:4.d = zmm7[0]
    float var_80_2 = zmm6[0]
    
    if (_mm_and_ps(zmm8, 0x7fffffff)[0] > 9.99999975e-05f)
    label_1426fa273:
        sub_141ead1f0(&arg1[0x29], sub_140d3c6e0(arg1[0x20] + 0x38), &var_78)
        int64_t zmm1_1 = var_88
        arg1[0x4d] = zmm1_1
        arg1[0x3f] = zmm1_1
        arg1[0x4e].d = var_80_2
        arg1[0x40].d = var_80_2
        void* rax_10 = arg1[0x15]
        
        if (rax_10 == 0)
            rax_10 = sub_141ee69e0(arg1)
        
        sub_142712900(sub_1426fbe40(rax_10), arg1, &var_88)
    else
        zmm7[0] = zmm7[0] f- *(arg1 + 0x26c)
        
        if (_mm_and_ps(zmm7, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_1426fa273
        
        zmm6[0] = zmm6[0] f- arg1[0x4e].d
        
        if (not(_mm_and_ps(zmm6, 0x7fffffff)[0] <= 9.99999975e-05f))
            goto label_1426fa273

return sub_142717810(arg1) __tailcall
