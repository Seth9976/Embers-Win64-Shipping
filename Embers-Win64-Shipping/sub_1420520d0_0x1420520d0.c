// 函数: sub_1420520d0
// 地址: 0x1420520d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x580) != 0 || *(arg1 + 0x59c) != 0)
    int32_t rax_1 = *(arg1 + 0x580)
    uint64_t var_58_1 = *(arg1 + 0x578)
    int32_t var_50_1 = rax_1
    float var_68[0x4] = *(arg1 + 0x568)
    int32_t var_5c
    uint128_t zmm1
    float zmm4[0x4]
    float zmm5[0x4]
    float zmm6[0x4]
    float zmm7[0x4]
    float zmm8[0x4]
    float zmm9[0x4]
    
    if (rax_1.b == 0)
        if (*(arg1 + 0x59c) == 0)
        label_1420521e0:
            zmm6 = var_58_1:4.d
            zmm5 = var_5c
        else
            zmm1 = zx.o(*(arg1 + 0x594))
            float zmm2[0x4] = *(arg1 + 0x584)
            float zmm0[0x4] = zmm1
            int32_t var_50_2 = *(arg1 + 0x59c)
            zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            var_58_1 = zmm1.q
            zmm5 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            var_68 = zmm2
        
        zmm7 = var_68[0]
        zmm8 = var_68[1]
        zmm9 = var_68[2]
        zmm4 = var_58_1.d
    else
        if (*(arg1 + 0x59c) == 0)
            goto label_1420521e0
        
        zmm8 = *(arg1 + 0x588)
        zmm9 = *(arg1 + 0x58c)
        zmm5 = *(arg1 + 0x590)
        zmm4 = *(arg1 + 0x594)
        zmm6 = *(arg1 + 0x598)
        zmm7 = __minss_xmmss_memss(var_68[0][0], *(arg1 + 0x584))
        zmm8 = __minss_xmmss_memss(zmm8[0], var_68[1])
        zmm9 = __minss_xmmss_memss(zmm9[0], var_68[2])
        zmm5 = __maxss_xmmss_memss(zmm5[0], var_5c)
        zmm4 = __maxss_xmmss_memss(zmm4[0], var_58_1.d)
        zmm6 = __maxss_xmmss_memss(zmm6[0], var_58_1:4.d)
    
    zmm4[0] = zmm4[0] - zmm8[0]
    zmm5[0] = zmm5[0] - zmm7[0]
    zmm6[0] = zmm6[0] - zmm9[0]
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm4[0] = zmm4[0] * 0.5f
    zmm5[0] = zmm5[0] * 0.5f
    zmm1.d = zmm6.d f* 0.5f
    zmm5[0] = zmm5[0] * zmm5[0]
    float temp0_9[0x4] = _mm_unpacklo_ps(zmm5, zmm4[0].q)
    zmm5[0] = zmm5[0] + zmm7[0]
    var_5c.q = temp0_9.q
    zmm4[0] = zmm4[0] + zmm8[0]
    zmm4[0] = zmm4[0] + zmm5[0]
    int32_t var_70_1 = zmm1.d
    zmm1.d = zmm1.d f+ zmm9[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    var_58_1:4.d = var_70_1
    var_68[0].q = (_mm_unpacklo_ps(zmm5, zmm4[0].q)).q
    zmm4[0] = zmm4[0] + zmm6[0]
    var_68[2] = zmm1.d
    zmm4[0] = zmm4[0] * 0.25f
    float var_50_3 = _mm_sqrt_ss(0, zmm4[0])[0]
    sub_140ae2e90(&var_68, arg2, arg3)
else
    sub_142081c50(arg1, arg2, arg3)

return arg2
