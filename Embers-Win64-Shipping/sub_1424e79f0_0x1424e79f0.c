// 函数: sub_1424e79f0
// 地址: 0x1424e79f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_28

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
uint64_t var_18 = *rcx_1
uint128_t zmm0 = zx.o(*(rcx_1 + 8))
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(var_18.d))
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o((var_18 u>> 0x20).d))
zmm0 = _mm_cvtepi32_ps(zmm0)
*arg3 = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
int32_t result = zmm0.d
arg3[1].d = result
return result
