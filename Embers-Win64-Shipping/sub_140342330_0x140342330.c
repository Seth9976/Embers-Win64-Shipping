// 函数: sub_140342330
// 地址: 0x140342330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = arg7[0].o
int128_t var_28 = arg6[0].o
int128_t var_38 = arg5[0].o

if (arg4 s> 0)
    float (* rcx)[0x8] = arg1 + 0x20
    int64_t i = 0
    float zmm0[0x8] = data_1434432a0
    float zmm1[0x8] = data_1434432c0
    float zmm2[0x8] = data_1434432e0
    float zmm3[0x8] = data_143443300
    int32_t zmm4[0x8] = data_143443320
    
    do
        uint64_t rax = zx.q(*(arg3 + (i << 1))) << 6
        float zmm5[0x8] = *(arg2 + rax)
        arg5 = *(arg2 + rax + 0x20)
        float temp0_1[0x8] = _mm256_permutevar8x32_ps(zmm0, arg5)
        arg7 = _mm256_permutevar8x32_ps(zmm1, zmm5)
        arg6 = _mm256_blend_ps(arg7, temp0_1, 0xcc)
        rcx[-1] = arg6
        arg5 = _mm256_permutevar8x32_ps(zmm2, arg5)
        *rcx = _mm256_maskstore_ps(zmm4, 
            _mm256_blend_ps(_mm256_permutevar8x32_ps(zmm3, zmm5), arg5, 0xcc))
        i += 1
        rcx = &(*rcx)[0xc]
    while (zx.q(arg4) != i)

arg5[0].o = var_38
arg6[0].o = var_28
arg7[0].o = var_18
_mm256_zeroupper()
