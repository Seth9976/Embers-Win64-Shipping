// 函数: sub_14104bd40
// 地址: 0x14104bd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = (*(arg1 + 0x18) != 2) + 1
int32_t r8 = *(arg1 + 0x1c)
bool rax

if (r8 == 2)
    rax = true
else if (r8 == 3)
    rax = true
else
    rax = false

arg2[1] = rax
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x24))).d f* 5.96046448e-08f
*(arg2 + 4) = zmm0.d
*(arg2 + 8) = *(arg1 + 0x2c)
bool cond:0 = *(arg1 + 0x34) != 0
arg2[0xd] = 0
int32_t result
result.b = cond:0
arg2[0xc] = result.b
result.b = 1
return result
