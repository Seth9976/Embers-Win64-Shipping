// 函数: sub_140820920
// 地址: 0x140820920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x30)
uint128_t zmm3

if (rax s<= 1)
    zmm3 = 0x3f800000
else
    zmm3.d = _mm_cvtepi32_ps(zx.o(arg3)).d f/ _mm_cvtepi32_ps(zx.o(rax - 1)).d

uint128_t zmm6
zmm6.d = (*(arg1 + 0x44)).d f- *(arg1 + 0x38)
int128_t zmm7
zmm7.d = (*(arg1 + 0x48)).d f- *(arg1 + 0x3c)
int128_t zmm8
zmm8.d = (*(arg1 + 0x4c)).d f- *(arg1 + 0x40)
int64_t rdx = *(arg1 + 0x28)
zmm6.d = zmm6.d f* zmm3.d
zmm7.d = zmm7.d f* zmm3.d
zmm6.d = zmm6.d f+ *(arg1 + 0x38)
zmm8.d = zmm8.d f* zmm3.d
zmm7.d = zmm7.d f+ *(arg1 + 0x3c)
zmm8.d = zmm8.d f+ *(arg1 + 0x40)
uint64_t var_58 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
int32_t var_40 = zmm8.d
int32_t var_50 = var_40
sub_140777de0(arg2, rdx, &var_58)
int64_t* rax_3
float zmm6_1[0x2]
rax_3, zmm6_1 = sub_140b63b70(arg1 + 0x28, &var_58)
int16_t* const r8_1

if (rax_3[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_3

int64_t temp0_4 = _mm_cvtps_pd(zmm8.q)
_mm_cvtps_pd(zmm6_1)
int64_t var_60 = temp0_4
int64_t var_68 = _mm_cvtps_pd(zmm7.q)
int64_t var_48
sub_140a2e390(&var_48, u"%s = {%g, %g, %g}", r8_1)
int32_t result = &var_48

if (arg4 == &var_48)
    int64_t rcx_4 = var_48
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
else
    int64_t rcx_3 = *arg4
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *arg4 = var_48
    arg4[1].d = var_40
    int32_t result_1
    result = result_1
    *(arg4 + 0xc) = result
    var_40.q = 0
    var_48 = 0

uint64_t rcx_5 = var_58

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
