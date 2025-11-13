// 函数: sub_142507bd0
// 地址: 0x142507bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
uint32_t zmm0[0x4] = var_18
int32_t var_14
uint32_t temp0[0x4] = _mm_and_ps(var_14, 0x7fffffff)
uint32_t result[0x4] = _mm_and_ps(zmm0, 0x7fffffff)
uint32_t zmm3[0x4] = _mm_min_ss(temp0[0], result[0])
int32_t var_10
uint32_t temp0_2[0x4] = _mm_and_ps(var_10, 0x7fffffff)
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
*arg3 = _mm_min_ss(zmm3[0], temp0_2[0])[0]
return result
