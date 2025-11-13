// 函数: sub_142263a60
// 地址: 0x142263a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x2b8)

if (rcx == 0)
    return 

if (arg2 == 0)
    jump(*(*rcx + 0x7c0))

int512_t zmm3
zmm3.o = 0x3b808081
int64_t rdx = *rcx
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o((arg3 u>> 0x10).b))
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o((arg3 u>> 8).b)).d f* 0.00392156886f
zmm4.d = zmm4.d f* 0.00392156886f
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(arg3.b)).d f* 0.00392156886f
int32_t var_10 = zmm1.d
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(arg3 u>> 0x18)).d f* 0.00392156886f
zmm3.o = arg5
int32_t var_14 = zmm2.d
int32_t var_18 = zmm4.d
int32_t var_c = zmm0.d
(*(rdx + 0x7b8))(zmm0, arg4.d, arg4:4.d, zmm3, &var_18, arg6, 0)
