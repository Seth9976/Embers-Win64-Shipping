// 函数: sub_1424e85d0
// 地址: 0x1424e85d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
int32_t result_1
int64_t result = result_1
int64_t rcx_1
rcx_1.b = rax_2 != 0
float temp0[0x4] = _mm_unpacklo_ps(var_18, result)
*(arg2 + 0x20) = rcx_1 + rax_2
*arg3 = temp0.q
return result
