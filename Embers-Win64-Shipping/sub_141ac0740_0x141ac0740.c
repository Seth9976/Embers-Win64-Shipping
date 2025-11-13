// 函数: sub_141ac0740
// 地址: 0x141ac0740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(*(arg1 + 0x20) + (sx.q(arg3) << 3))
*arg2 = r9
arg2[3].d = arg4
float zmm1 = *(r9 + 0x14)
float zmm2 = *(r9 + 0x18) - zmm1
int32_t rax_1 = *(arg1 + 0x6c) * 0xbb38435 + 0x3619636b
*(arg1 + 0x6c) = rax_1
uint128_t zmm0
zmm0.d = (rax_1 u>> 9 | 0x3f800000).d f- 1f
*(arg2 + 0x14) = zmm2 f* zmm0.d + zmm1
int32_t r10 = *(r9 + 0xc)
int32_t r8_3 = *(r9 + 0x10) - r10 + 1
int32_t rax_8

if (r8_3 s<= 0)
    rax_8 = 0
else
    int32_t rax_4 = *(arg1 + 0x6c) * 0xbb38435
    zmm0 = _mm_cvtepi32_ps(zx.o(r8_3))
    *(arg1 + 0x6c) = rax_4 + 0x3619636b
    rax_8 = int.d((((rax_4 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)

int32_t result_1 = rax_8 + r10
int32_t result

if (result_1 s>= 0)
    result = 0x7fffffff
    
    if (result_1 s< 0x7fffffff)
        result = result_1
else
    result = 0

*(arg2 + 0x1c) = result
arg2[1] = 0
arg2[2].d = 0
arg2[4].d = 0xfffffffe
arg2[5].d = 0xfffffffe
return result
