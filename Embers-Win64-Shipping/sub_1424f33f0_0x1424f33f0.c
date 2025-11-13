// 函数: sub_1424f33f0
// 地址: 0x1424f33f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
float zmm3[0x4] = var_18
int64_t rcx_2
rcx_2.b = rax_3 != 0
int32_t zmm2 = arg_10
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t result
temp0[0] = result
*(arg2 + 0x20) = rcx_2 + rax_3
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
int32_t var_10
temp0_1[0] = var_10
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm2
*arg3 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
return result
