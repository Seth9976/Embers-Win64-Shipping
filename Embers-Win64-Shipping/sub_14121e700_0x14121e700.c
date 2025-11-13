// 函数: sub_14121e700
// 地址: 0x14121e700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
zmm0.d = float.s(*(arg1 + 0x14))
uint128_t zmm10
zmm10.d = float.s(*arg2)
uint128_t zmm7
zmm7.d = float.s(arg2[1])
uint128_t zmm8
zmm8.d = float.s(arg2[2])
uint128_t zmm2
zmm2.d = 1f f/ zmm0.d
zmm10.d = zmm10.d f* zmm2.d
zmm7.d = zmm7.d f* zmm2.d
zmm8.d = zmm8.d f* zmm2.d
zmm2.d = zmm2.d f* 0.5f
uint128_t zmm1
zmm1.d = zmm2.d f+ zmm7.d
zmm0.d = zmm2.d f+ zmm10.d
zmm2.d = zmm2.d f+ zmm8.d
*arg8 = (_mm_unpacklo_ps(zmm0, zmm1.q)).q
arg8[1].d = zmm2.d
int32_t result
uint64_t* rcx_2
uint128_t zmm6

if (arg3 s<= 2)
    int32_t var_70_4 = 0
    *arg6 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg6[1].d = 0
    zmm6.d = 0.5f f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14))).d
    zmm0.d = zmm6.d f+ zmm10.d
    zmm1.d = zmm6.d f+ zmm7.d
    zmm6.d = zmm6.d f+ zmm8.d
    *arg7 = (_mm_unpacklo_ps(zmm0, zmm1.q)).q
    arg7[1].d = zmm6.d
    rcx_2 = arg9
    *rcx_2 = *arg8
    result = arg8[1].d
else
    zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14)))
    uint128_t zmm5 = *arg5
    uint128_t zmm9
    zmm9.d = _mm_cvtepi32_ps(zx.o(arg3)).d f/ zmm0.d
    
    if (not(zmm5.d f!= 0f))
        *arg5 = 0x3c23d70a
        zmm5 = 0x3c23d70a
    
    zmm2 = *(arg5 + 4)
    
    if (not(zmm2.d f!= 0f))
        *(arg5 + 4) = 0x3c23d70a
        zmm2 = 0x3c23d70a
    
    uint128_t zmm4 = *(arg5 + 8)
    
    if (not(zmm4.d f!= 0f))
        *(arg5 + 8) = 0x3c23d70a
        zmm4 = 0x3c23d70a
    
    uint128_t zmm3
    zmm3.d = 1f f/ zmm5.d
    zmm5.d = 1f f/ zmm2.d
    uint128_t zmm11
    zmm11.d = 1f f/ zmm4.d
    zmm1.d = zmm3.d f* zmm9.d
    zmm0.d = zmm11.d f* zmm9.d
    zmm2.d = zmm5.d f* zmm9.d
    int32_t var_70_1 = zmm0.d
    zmm0.d = zmm9.d f* *arg4
    zmm1 = _mm_unpacklo_ps(zmm1, zmm2.q)
    zmm2.d = zmm9.d f* arg4[2]
    *arg6 = zmm1.q
    zmm1.d = zmm9.d f* arg4[1]
    arg6[1].d = var_70_1
    zmm0.d = zmm0.d f* zmm3.d
    zmm3 = zmm7
    zmm1.d = zmm1.d f* zmm5.d
    zmm7.d = zmm7.d f+ zmm9.d
    zmm4.d = zmm10.d f- zmm0.d
    zmm2.d = zmm2.d f* zmm11.d
    zmm0 = zmm8
    zmm3.d = zmm3.d f- zmm1.d
    zmm8.d = zmm8.d f+ zmm9.d
    zmm0.d = zmm0.d f- zmm2.d
    *arg7 = (_mm_unpacklo_ps(zmm4, zmm3.q)).q
    arg7[1].d = zmm0.d
    rcx_2 = arg9
    zmm6.d = 0.5f f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14))).d
    zmm0.d = zmm9.d f+ zmm10.d
    zmm7.d = zmm7.d f- zmm6.d
    zmm8.d = zmm8.d f- zmm6.d
    zmm0.d = zmm0.d f- zmm6.d
    result = zmm8.d
    *rcx_2 = (_mm_unpacklo_ps(zmm0, zmm7.q)).q
rcx_2[1].d = result
return result
