// 函数: sub_142507a90
// 地址: 0x142507a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
uint32_t temp0[0x4] = _mm_and_ps(var_18, 0x7fffffff)
int32_t var_10
uint32_t temp0_1[0x4] = _mm_and_ps(var_10, 0x7fffffff)
int32_t var_14
uint32_t temp0_2[0x4] = _mm_and_ps(var_14, 0x7fffffff)
uint32_t result = temp0_1[0]
int64_t rcx_1
rcx_1.b = rax_2 != 0
uint32_t zmm1[0x4] = _mm_unpacklo_ps(temp0, temp0_2[0].q)
*(arg2 + 0x20) = rcx_1 + rax_2
*arg3 = zmm1.q
arg3[1].d = result
return result
