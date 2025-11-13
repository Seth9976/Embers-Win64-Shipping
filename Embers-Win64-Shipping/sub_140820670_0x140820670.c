// 函数: sub_140820670
// 地址: 0x140820670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x30)
uint128_t zmm2

if (rax s<= 1)
    zmm2 = 0x3f800000
else
    zmm2.d = _mm_cvtepi32_ps(zx.o(arg3)).d f/ _mm_cvtepi32_ps(zx.o(rax - 1)).d

uint128_t zmm6
zmm6.d = (*(arg1 + 0x40)).d f- *(arg1 + 0x38)
int128_t zmm7
zmm7.d = (*(arg1 + 0x44)).d f- *(arg1 + 0x3c)
zmm6.d = zmm6.d f* zmm2.d
zmm7.d = zmm7.d f* zmm2.d
zmm6.d = zmm6.d f+ *(arg1 + 0x38)
zmm7.d = zmm7.d f+ *(arg1 + 0x3c)
sub_140777d00(arg2, *(arg1 + 0x28), _mm_unpacklo_ps(zmm6, zmm7.q).q)
int64_t var_38
int64_t* rax_2
float zmm6_1[0x2]
rax_2, zmm6_1 = sub_140b63b70(arg1 + 0x28, &var_38)
int16_t* const r8_1

if (rax_2[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_2

_mm_cvtps_pd(zmm6_1)
int64_t var_58 = _mm_cvtps_pd(zmm7.q)
int64_t var_48
sub_140a2e390(&var_48, u"%s = {%g, %g}", r8_1)
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
    int32_t var_40
    arg4[1].d = var_40
    int32_t result_1
    result = result_1
    *(arg4 + 0xc) = result
    var_40.q = 0
    var_48 = 0

int64_t rcx_5 = var_38

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
