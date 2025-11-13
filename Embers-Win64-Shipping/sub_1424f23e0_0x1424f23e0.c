// 函数: sub_1424f23e0
// 地址: 0x1424f23e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_10 = (zx.o(0)).d

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
int32_t zmm2 = arg_10
float zmm6[0x4] = var_38
zmm6[0] = zmm6[0] f- var_28
int64_t rcx_3
rcx_3.b = result != 0
zmm6[0] = zmm6[0] f* zmm2
*(arg2 + 0x20) = rcx_3 + result
zmm6[0] = zmm6[0] f+ var_28
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
float var_34
float var_24
temp0[0] = (var_34 - var_24) f* zmm2 + var_24
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float var_30
float var_20
temp0_1[0] = (var_30 - var_20) f* zmm2 + var_20
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
float var_2c
float var_1c
temp0_2[0] = (var_2c - var_1c) f* zmm2 + var_1c
*arg3 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
return result
