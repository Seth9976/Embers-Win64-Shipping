// 函数: sub_140b21100
// 地址: 0x140b21100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg1
uint32_t rcx_1 = (rdx u>> 0x20).d
int32_t arg_8
arg_8.q = 0x7fffffff.q
uint128_t result
result.d = _mm_cvtepi32_ps(zx.o(rcx_1)).d f* 0f
uint64_t temp0_1 = _mm_cvtepi32_pd(zx.q(rdx.d))
result.q = _mm_cvtps_pd(result.q).q f+ float.d(sx.q(rcx_1) * 0x7fffffff)
result.q = result.q f/ temp0_1
return result
