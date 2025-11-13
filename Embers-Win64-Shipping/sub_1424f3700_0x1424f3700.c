// 函数: sub_1424f3700
// 地址: 0x1424f3700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
uint128_t zmm2 = zx.o(arg_18)
int32_t zmm0 = arg_10
int64_t rcx_2
rcx_2.b = rax_3 != 0
_mm_shuffle_ps(zmm2, zmm2, 0xd2)
zmm2.d = zmm0
*(arg2 + 0x20) = rcx_2 + rax_3
_mm_shuffle_ps(zmm2, zmm2, 0x27)
zmm2.d = arg4
int32_t result = 1.d
*arg3 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
arg3[1].d = result
return result
