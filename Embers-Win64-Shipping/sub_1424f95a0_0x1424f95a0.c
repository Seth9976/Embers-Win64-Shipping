// 函数: sub_1424f95a0
// 地址: 0x1424f95a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t result = *(arg2 + 0x20)
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(arg_10))
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
zmm0_1.d = zmm0_1.d f* arg_18
*arg3 = zmm0_1.d
return result
