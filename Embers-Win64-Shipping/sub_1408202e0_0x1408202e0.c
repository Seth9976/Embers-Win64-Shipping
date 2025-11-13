// 函数: sub_1408202e0
// 地址: 0x1408202e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x30)
uint128_t zmm1

if (rax s<= 1)
    zmm1 = 0x3f800000
else
    zmm1.d = _mm_cvtepi32_ps(zx.o(arg3)).d f/ _mm_cvtepi32_ps(zx.o(rax - 1)).d

int128_t zmm6
zmm6.d = (*(arg1 + 0x3c)).d f- *(arg1 + 0x38)
zmm6.d = zmm6.d f* zmm1.d
zmm6.d = zmm6.d f+ *(arg1 + 0x38)
sub_140777850(arg2, *(arg1 + 0x28), zmm6.d)
int64_t var_28
int64_t* rax_2
float zmm6_1[0x2]
rax_2, zmm6_1 = sub_140b63b70(arg1 + 0x28, &var_28)
int16_t* const r8

if (rax_2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_2

_mm_cvtps_pd(zmm6_1)
int64_t var_38
sub_140a2e390(&var_38, u"%s = %g", r8)
int32_t result = &var_38

if (arg4 == &var_38)
    int64_t rcx_4 = var_38
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
else
    int64_t rcx_3 = *arg4
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *arg4 = var_38
    int32_t var_30
    arg4[1].d = var_30
    int32_t result_1
    result = result_1
    *(arg4 + 0xc) = result
    var_30.q = 0
    var_38 = 0

int64_t rcx_5 = var_28

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
