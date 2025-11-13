// 函数: sub_142502170
// 地址: 0x142502170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float _X_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &_X_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &_X_1)

int64_t rax_2 = *(arg2 + 0x20)
float _X = _X_1
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
float zmm6[0x4] = arg4
float zmm7[0x4] = sinf(_X)
float zmm8[0x4] = cosf(zmm6[0])
zmm8[0] = zmm8[0] * zmm7[0]
zmm6 = sinf(zmm6[0])
float _X_2[0x4] = _X_1
zmm6[0] = zmm6[0] * zmm7[0]
float result = cosf(_X_2[0])
*arg3 = (_mm_unpacklo_ps(zmm8, zmm6[0].q)).q
arg3[1].d = result
return result
