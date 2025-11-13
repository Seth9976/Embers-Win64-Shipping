// 函数: sub_142027220
// 地址: 0x142027220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = arg3
int32_t* rax
int32_t arg_8

if (*(arg1 + 0x98) != 1)
    arg_8 = *(arg1 + 0x80)
    int32_t arg_c = *(arg1 + 0x84)
    rax = &arg_8
else
    rax, result = sub_142029700(arg1, &arg_8)
int64_t rax_3 = *rax
uint32_t rcx_1 = (rax_3 u>> 0x20).d
uint128_t zmm7
zmm7.d = arg2.d f/ result.d
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rcx_1))
arg2.d = _mm_cvtepi32_ps(zx.o(rax_3.d)).d f/ zmm0.d
zmm0.d = arg2.d f- zmm7.d

if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770).d f<= 9.99999994e-09f))
    zmm0.d = 1f f/ arg2.d
    
    if (arg2.d f>= zmm7.d)
        result.d = result.d f* result.d
        result.d = result.d f* zmm7.d
        result.d = result.d f* zmm0.d
        result = _mm_sqrt_ss(result.d, result.d)
    else
        zmm7.d = zmm7.d f* result.d
        result.d = zmm7.d f* zmm0.d

zmm0 = _mm_cvtepi32_ps(zx.o(rcx_1))

if (result.d f>= zmm0.d)
    return 0x42c80000

result.d = result.d f/ zmm0.d
result.d = result.d f* 100f
return result
