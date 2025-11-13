// 函数: sub_1403421b0
// 地址: 0x1403421b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = arg8[0].o
int128_t var_28 = arg7[0].o
int128_t var_38 = arg6[0].o
int128_t var_48 = arg5[0].o
float zmm0[0x8] = *arg9
uint64_t result = zx.q(_mm256_movemask_ps(zmm0))
float zmm1[0x8]
float zmm2[0x8]
float zmm3[0x8]
float zmm4[0x8]
float zmm5[0x8]

if (result.d != 0xff)
    if (arg4 s> 0)
        zmm1[0].o = zmm0[0].o
        int64_t i = 0
        zmm2 = data_1434432a0
        zmm3 = data_1434432c0
        int32_t temp0_8 = _mm256_movemask_ps(zmm1)
        zmm4 = data_1434432e0
        zmm5 = data_143443300
        
        do
            result = zx.q(*(arg3 + (i << 1))) << 6
            arg5 = _mm256_maskload_ps(zmm0, *(arg2 + result))
            arg6 = _mm256_maskload_ps(zmm0, *(arg2 + result + 0x20))
            float temp0_11[0x8] = _mm256_permutevar8x32_ps(zmm2, arg6)
            arg8 = _mm256_permutevar8x32_ps(zmm3, arg5)
            arg7 = _mm256_blend_ps(arg8, temp0_11, 0xcc)
            *arg1 = _mm256_maskstore_ps(zmm0, arg7)
            
            if (temp0_8 != 0)
                arg6 = _mm256_permutevar8x32_ps(zmm4, arg6)
                arg5 = _mm256_blend_ps(_mm256_permutevar8x32_ps(zmm5, arg5), arg6, 0xcc)
                *(arg1 + 0x20) = _mm256_maskstore_ps(zmm1, arg5)
            
            i += 1
            arg1 += 0x30
        while (zx.q(arg4) != i)
else if (arg4 s> 0)
    void* rcx = arg1 + 0x20
    int64_t i_1 = 0
    zmm0 = data_1434432a0
    zmm1 = data_1434432c0
    zmm2 = data_1434432e0
    zmm3 = data_143443300
    zmm4 = data_143443320
    
    do
        result = zx.q(*(arg3 + (i_1 << 1))) << 6
        zmm5 = *(arg2 + result)
        arg5 = *(arg2 + result + 0x20)
        float temp0_1[0x8] = _mm256_permutevar8x32_ps(zmm0, arg5)
        arg7 = _mm256_permutevar8x32_ps(zmm1, zmm5)
        arg6 = _mm256_blend_ps(arg7, temp0_1, 0xcc)
        *(rcx - 0x20) = arg6
        arg5 = _mm256_permutevar8x32_ps(zmm2, arg5)
        *rcx = _mm256_maskstore_ps(zmm4, 
            _mm256_blend_ps(_mm256_permutevar8x32_ps(zmm3, zmm5), arg5, 0xcc))
        i_1 += 1
        rcx += 0x30
    while (zx.q(arg4) != i_1)
arg5[0].o = var_48
arg6[0].o = var_38
arg7[0].o = var_28
arg8[0].o = var_18
_mm256_zeroupper()
return result
