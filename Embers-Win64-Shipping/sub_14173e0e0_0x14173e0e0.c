// 函数: sub_14173e0e0
// 地址: 0x14173e0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x60)
int32_t rdx_1

if (arg2.d s< rdx)
    rdx_1 = arg2.d
    
    if (arg2.d s< 0)
        rdx_1 = 0
else
    rdx_1 = rdx - 1

int32_t rax = *(arg1 + 0x64)
float result_1 = arg2:4.d
float result

if (result_1 s< rax)
    result = result_1
    
    if (result_1 s< 0)
        result = 0f
else
    result = rax - 1

if (arg2.d != rdx_1 || result_1 != result)
    result.b = 0
else
    int64_t var_48 = 0
    int32_t var_40_1 = 0
    int32_t var_38
    int32_t var_28[0x4]
    sub_1417337a0(arg1, arg2, &var_28, &var_38, &var_48)
    float var_40_2 = (*(arg1 + 0x3c))[0]
    int32_t var_30
    float var_30_1 = var_30[0]
    *arg3 = (_mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(arg2.d)), _mm_cvtepi32_ps(zx.o(result_1)).q)).q
    arg3[1].d = var_40_2
    *arg4 = (_mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o((arg2 + 1).d)), 
        _mm_cvtepi32_ps(zx.o(result_1 i+ 1)).q)).q
    arg4[1].d = var_30_1
    uint128_t zmm2_1
    zmm2_1.d = (*arg3).d f* *(arg1 + 0x30)
    float zmm0_1[0x4] = *(arg1 + 0x38)
    zmm0_1[0] = zmm0_1[0] f* arg3[1].d
    zmm2_1.d = zmm2_1.d f- *arg5
    uint128_t zmm1_1 = *(arg1 + 0x34)
    zmm0_1[0] = zmm0_1[0] f- arg5[2]
    zmm1_1.d = zmm1_1.d f* *(arg3 + 4)
    zmm1_1.d = zmm1_1.d f- arg5[1]
    float var_30_2 = zmm0_1[0]
    *arg3 = (_mm_unpacklo_ps(zmm2_1, zmm1_1.q)).q
    arg3[1].d = var_30_2
    zmm0_1 = *(arg1 + 0x38)
    zmm0_1[0] = zmm0_1[0] f* arg4[1].d
    zmm2_1.d = (*arg4).d f* *(arg1 + 0x30)
    zmm0_1[0] = zmm0_1[0] f+ arg5[2]
    zmm1_1.d = (*(arg1 + 0x34)).d f* *(arg4 + 4)
    zmm2_1.d = zmm2_1.d f+ *arg5
    float var_30_3 = zmm0_1[0]
    zmm1_1.d = zmm1_1.d f+ arg5[1]
    *arg4 = (_mm_unpacklo_ps(zmm2_1, zmm1_1.q)).q
    arg4[1].d = var_30_3
    result.b = 1

return result
