// 函数: sub_1424e7530
// 地址: 0x1424e7530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
float zmm0[0x4] = arg_10
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
int64_t rcx_1
rcx_1.b = result != 0
temp0[0] = zmm0[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm0[0]
*(arg2 + 0x20) = rcx_1 + result
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = 0x3f800000
*arg3 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
return result
