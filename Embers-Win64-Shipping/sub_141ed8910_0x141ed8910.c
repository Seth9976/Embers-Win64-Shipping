// 函数: sub_141ed8910
// 地址: 0x141ed8910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x408)
uint128_t zmm1

if (rcx == 0)
    zmm1 = 0x3f800000
else
    int32_t* rcx_1 = *(rcx + 0xd0)
    
    if (rcx_1 == 0)
        zmm1 = _mm_cvtepi32_ps(0)
    else
        int32_t rax_1 = rcx_1[1]
        int32_t r9_1 = *rcx_1
        
        if (r9_1 s>= rax_1)
            rax_1 = r9_1
        
        zmm1 = _mm_cvtepi32_ps(zx.o(rax_1))

float zmm2[0x4] = *(arg3 + 0x10)
float zmm0[0x4] = *(arg3 + 0x20)
float temp0_4[0x4] = _mm_max_ss(_mm_shuffle_ps(zmm0, zmm0, 0x55)[0], zmm0[0])
float temp0_5[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
float temp0_6[0x4] = _mm_max_ss(temp0_4[0], temp0_5[0])
float var_20 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
temp0_6[0] = temp0_6[0] f* zmm1.d
*arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
float temp0_10[0x4] = _mm_unpacklo_ps(temp0_6, temp0_6[0].q)
float var_14 = temp0_6[0]
*(arg2 + 0xc) = temp0_10.q
temp0_6[0] = temp0_6[0] * temp0_6[0]
arg2[1].d = var_20
*(arg2 + 0x14) = var_14
temp0_6[0] = temp0_6[0] * 3f
arg2[3].d = _mm_sqrt_ss(0, temp0_6[0])[0]
return arg2
