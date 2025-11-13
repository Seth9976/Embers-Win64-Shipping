// 函数: sub_1424faae0
// 地址: 0x1424faae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
float zmm7[0x4] = arg4
float zmm6[0x4] = arg_10
int64_t rcx_1
rcx_1.b = result != 0
zmm7[0] = zmm7[0] * zmm7[0]
*(arg2 + 0x20) = rcx_1 + result
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] + zmm6[0]
float zmm0[0x4]

if (zmm7[0] <= 9.99999994e-09f)
    zmm0 = _mm_unpacklo_ps(zx.o(0), zx.o(0)[0].q)
else
    float temp0[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
    zmm7[0] = zmm7[0] * 0.5f
    temp0[0] = temp0[0] * temp0[0]
    zmm7[0] = zmm7[0] * temp0[0]
    temp0[0] = temp0[0] * (0.5f - zmm7[0])
    temp0[0] = temp0[0] + temp0[0]
    temp0[0] = temp0[0] * temp0[0]
    zmm7[0] = zmm7[0] * temp0[0]
    temp0[0] = temp0[0] * (0.5f - zmm7[0])
    temp0[0] = temp0[0] + temp0[0]
    zmm6[0] = zmm6[0] * temp0[0]
    zmm7[0] = zmm7[0] * temp0[0]
    zmm0 = _mm_unpacklo_ps(zmm6, zmm7[0].q)

*arg3 = zmm0.q
return result
