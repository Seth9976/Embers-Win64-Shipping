// 函数: sub_1408203e0
// 地址: 0x1408203e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x30)
uint128_t zmm2

if (rax s<= 1)
    zmm2 = 0x3f800000
else
    zmm2.d = _mm_cvtepi32_ps(zx.o(arg3)).d f/ _mm_cvtepi32_ps(zx.o(rax - 1)).d

int32_t rcx = *(arg1 + 0x38)
int64_t rdx = *(arg1 + 0x28)
int32_t rax_3 = *(arg1 + 0x3c) - rcx
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rcx))
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f* zmm2.d
zmm1.d = zmm1.d f+ zmm0.d
sub_140777850(arg2, rdx, _mm_cvtepi32_ps(zx.o(int.d(zmm1.d))).d)
int64_t var_18
int64_t* rax_4 = sub_140b63b70(arg1 + 0x28, &var_18)
int16_t* const r8

if (rax_4[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_4

int64_t var_28
sub_140a2e390(&var_28, u"%s = %d", r8)
int32_t result = &var_28

if (arg4 == &var_28)
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)
else
    int64_t rcx_4 = *arg4
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *arg4 = var_28
    int32_t var_20
    arg4[1].d = var_20
    int32_t result_1
    result = result_1
    *(arg4 + 0xc) = result
    var_20.q = 0
    var_28 = 0

int64_t rcx_6 = var_18

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
