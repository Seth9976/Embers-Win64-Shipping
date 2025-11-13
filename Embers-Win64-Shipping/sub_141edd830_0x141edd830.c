// 函数: sub_141edd830
// 地址: 0x141edd830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4] = *(arg4 + 0x3c)
int64_t var_68 = *(arg4 + 0x34)
int64_t var_58 = *(arg4 + 0x28)

if (zmm9[0] >= 0.999899983f || zmm9[0] <= 9.99999975e-05f)
label_141edda65:
    int32_t rax_6 = *(arg3 + 8)
    *arg2 = *arg3
    arg2[1].d = rax_6
else
    int64_t zmm0 = *(arg4 + 0x30)
    
    if (zmm0.d f<= 9.99999975e-05f || arg5 != 0)
        goto label_141edda65
    
    if ((*(*arg1 + 0x820))(zmm0, arg4) == 0)
        goto label_141edda65
    
    float zmm2 = *(arg3 + 8)
    int128_t zmm7 = *arg3
    int128_t zmm6
    zmm6.d = zmm7.d f* var_68.d
    int128_t zmm8 = *(arg3 + 4)
    zmm0.d = zmm8.q.d f* var_68:4.d
    var_58.d = zmm7.d
    var_58:4.d = zmm8.d
    zmm6.d = zmm6.d f+ zmm0.d
    zmm6.d = zmm6.d f+ zmm2 * zmm9[0]
    zmm6.d = zmm6.d f/ zmm9[0]
    zmm6 ^= data_142d3f780
    
    if ((*(arg1 + 0x387) & 1) == 0)
        zmm0.d = zmm7.q.d f* zmm7.d
        int64_t zmm3
        zmm3.d = zmm6.q.d f* zmm6.d
        float zmm1 = zmm8.d f* zmm8.d f+ zmm0.d
        zmm3.d = zmm3.d f+ zmm1
        float temp0_1[0x4] = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1)
        
        if (not(zmm3.d f== 1f))
            if (zmm3.d f>= 9.99999994e-09f)
                zmm3.d = zmm3.d
                int64_t temp0_2 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = temp0_2.d f* temp0_2.d
                zmm0.d = temp0_2.d f* (0.5f - zmm3.d f* zmm0.d)
                int64_t zmm5_1
                zmm5_1.d = temp0_2.d f+ zmm0.d
                zmm3.d = zmm3.d f* zmm5_1.d f* zmm5_1.d
                zmm0.d = zmm5_1.d f* (0.5f f- zmm3.d)
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm7.d = zmm7.d f* zmm5_1.d
                zmm8.d = zmm8.d f* zmm5_1.d
                zmm6.d = zmm6.d f* zmm5_1.d
            else
                zmm7 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                zmm6 = data_143dbb200
        
        zmm7.d = zmm7.d f* temp0_1[0]
        zmm8.d = zmm8.d f* temp0_1[0]
        zmm6.d = zmm6.d f* temp0_1[0]
        *arg2 = zmm7.d
        *(arg2 + 4) = zmm8.d
        arg2[1].d = zmm6.d
    else
        *arg2 = var_58
        arg2[1].d = zmm6.d

return arg2
