// 函数: sub_141edda80
// 地址: 0x141edda80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = *(arg1 + 0x22c)
uint128_t zmm7 = *(arg1 + 0x230)
uint128_t zmm2
zmm2.d = zmm6.d f* zmm6.d
uint128_t zmm0
zmm0.d = zmm7.d f* zmm7.d
int128_t zmm8 = *(arg1 + 0x234)
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
uint64_t var_48

if (not(zmm2.d f>= 9.99999975e-05f))
    if ((*(arg1 + 0x38a) & 2) != 0)
        zmm7 = *(arg1 + 0x3a4)
        zmm6 = *(arg1 + 0x3a0)
        zmm8 = *(arg1 + 0x3a8)
        zmm2.d = zmm6.d f* zmm6.d
        zmm0.d = zmm7.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
    
    if ((*(arg1 + 0x38a) & 2) == 0 || zmm2.d f<= 9.99999975e-05f)
        *arg2 = *arg3
        arg2[2] = arg3[1].d
    else
        if (zmm2.d f!= 1f)
            goto label_141eddb89
        
        int32_t rax_1 = *(arg1 + 0x3a8)
        var_48 = *(arg1 + 0x3a0)
        int32_t var_40_1 = rax_1
        sub_140adf3c0(&var_48, arg2)
else if (zmm2.d f!= 1f)
label_141eddb89:
    
    if (zmm2.d f>= 9.99999994e-09f)
        float zmm3 = zmm2.d
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3)
        zmm3 = zmm3 * 0.5f
        zmm0.d = temp0_1.d f* temp0_1[0]
        zmm2.d = 0.5f - zmm3 f* zmm0.d
        zmm0.d = temp0_1.d f* zmm2.d
        temp0_1[0] = temp0_1[0] f+ zmm0.d
        zmm0.d = temp0_1.d f* (0.5f - zmm3 * temp0_1[0] * temp0_1[0])
        temp0_1[0] = temp0_1[0] f+ zmm0.d
        zmm6.d = zmm6.d f* temp0_1[0]
        zmm8.d = zmm8.d f* temp0_1[0]
        zmm7.d = zmm7.d f* temp0_1[0]
        var_48.d = zmm6.d
        int32_t var_40_4 = zmm8.d
        var_48:4.d = zmm7.d
        sub_140adf3c0(&var_48, arg2)
    else
        var_48.d = data_143dbb1f8.d
        int32_t var_40_3 = data_143dbb200.d
        var_48:4.d = data_143dbb1fc
        sub_140adf3c0(&var_48, arg2)
else
    int32_t rax_3 = *(arg1 + 0x234)
    var_48 = *(arg1 + 0x22c)
    int32_t var_40_2 = rax_3
    sub_140adf3c0(&var_48, arg2)
return arg2
