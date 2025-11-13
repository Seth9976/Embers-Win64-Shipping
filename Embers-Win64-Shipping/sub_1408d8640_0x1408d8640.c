// 函数: sub_1408d8640
// 地址: 0x1408d8640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm2
zmm2.o = 0x3b808081
uint32_t rax_1 = zx.d(arg2[1])
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(arg2[2])).d f* 0.00392156886f
int32_t var_18 = zmm0.d
uint32_t rax_2 = zx.d(*arg2)
zmm0 = _mm_cvtepi32_ps(zx.o(rax_1))
uint32_t rax_3 = zx.d(arg2[3])
zmm0.d = zmm0.d f* 0.00392156886f
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_2))
int32_t var_14 = zmm0.d
int64_t rax_4 = *arg1
zmm1.d = zmm1.d f* 0.00392156886f
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f* 0.00392156886f
int32_t var_10 = zmm1.d
int32_t var_c = zmm0.d
return (*(rax_4 + 0x20))(zmm0, &var_18, zmm2)
