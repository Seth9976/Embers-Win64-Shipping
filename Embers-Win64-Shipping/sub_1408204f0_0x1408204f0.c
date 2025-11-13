// 函数: sub_1408204f0
// 地址: 0x1408204f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x30)
uint128_t zmm5

if (rax s<= 1)
    zmm5 = 0x3f800000
else
    zmm5.d = _mm_cvtepi32_ps(zx.o(arg3)).d f/ _mm_cvtepi32_ps(zx.o(rax - 1)).d

uint128_t zmm0
zmm0.d = (*(arg1 + 0x48)).d f- *(arg1 + 0x38)
int64_t rdx = *(arg1 + 0x28)
zmm0.d = zmm0.d f* zmm5.d
zmm0.d = zmm0.d f+ *(arg1 + 0x38)
float zmm1 = (*(arg1 + 0x4c) f- *(arg1 + 0x3c)) f* zmm5.d f+ *(arg1 + 0x3c)
int32_t var_38 = zmm0.d
zmm0.d = (*(arg1 + 0x50)).d f- *(arg1 + 0x40)
float var_34 = zmm1
zmm0.d = zmm0.d f* zmm5.d
zmm0.d = zmm0.d f+ *(arg1 + 0x40)
zmm1 = (*(arg1 + 0x54) f- *(arg1 + 0x44)) f* zmm5.d f+ *(arg1 + 0x44)
int32_t var_30 = zmm0.d
sub_140777a00(arg2, rdx, &var_38)
int64_t var_18
int64_t* rax_2 = sub_140b63b70(arg1 + 0x28, &var_18)
int16_t* const r8_1

if (rax_2[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_2

float zmm3[0x2] = var_38
float temp0_3[0x2] = _mm_cvtps_pd(zmm1)
float temp0_4[0x2] = _mm_cvtps_pd(var_30)
float var_48[0x2] = temp0_3
_mm_cvtps_pd(zmm3)
float var_50[0x2] = temp0_4
float var_58[0x2] = _mm_cvtps_pd(var_34)
int64_t var_28
sub_140a2e390(&var_28, u"%s = {%g, %g, %g, %g}", r8_1)
int32_t result = &var_28

if (arg4 == &var_28)
    int64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
else
    int64_t rcx_3 = *arg4
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *arg4 = var_28
    int32_t var_20
    arg4[1].d = var_20
    int32_t result_1
    result = result_1
    *(arg4 + 0xc) = result
    var_20.q = 0
    var_28 = 0

int64_t rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
