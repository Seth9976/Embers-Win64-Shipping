// 函数: sub_1424f5230
// 地址: 0x1424f5230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t result_1 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &result_1, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t var_28 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_28, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_5 = *(arg2 + 0x20)
float zmm3[0x4] = arg_10
int32_t result = result_1
int32_t zmm1 = arg_20
int64_t rcx_4
rcx_4.b = rax_5 != 0
int32_t zmm2 = var_28
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = result
*(arg2 + 0x20) = rcx_4 + rax_5
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm2
*arg3 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
return result
