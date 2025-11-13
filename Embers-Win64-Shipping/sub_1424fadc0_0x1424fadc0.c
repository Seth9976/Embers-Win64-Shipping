// 函数: sub_1424fadc0
// 地址: 0x1424fadc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
float zmm8[0x4] = arg4
float zmm7[0x4] = arg_18
int64_t rcx_2
rcx_2.b = result != 0
zmm8[0] = zmm8[0] * zmm8[0]
*(arg2 + 0x20) = rcx_2 + result
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] + zmm7[0]
float zmm0[0x4]

if (zmm8[0] f<= arg_10)
    zmm0 = _mm_unpacklo_ps(zx.o(0), 0)
else
    float temp0[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
    zmm8[0] = zmm8[0] * 0.5f
    temp0[0] = temp0[0] * temp0[0]
    zmm8[0] = zmm8[0] * temp0[0]
    temp0[0] = temp0[0] * (0.5f - zmm8[0])
    temp0[0] = temp0[0] + temp0[0]
    temp0[0] = temp0[0] * temp0[0]
    zmm8[0] = zmm8[0] * temp0[0]
    temp0[0] = temp0[0] * (0.5f - zmm8[0])
    temp0[0] = temp0[0] + temp0[0]
    zmm7[0] = zmm7[0] * temp0[0]
    zmm8[0] = zmm8[0] * temp0[0]
    zmm0 = _mm_unpacklo_ps(zmm7, zmm8[0].q)

*arg3 = zmm0.q
return result
