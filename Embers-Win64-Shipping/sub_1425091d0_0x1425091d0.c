// 函数: sub_1425091d0
// 地址: 0x1425091d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float _X_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &_X_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &_X_1)

int32_t var_20
float zmm3[0x4] = var_20
float _X = _X_1
int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
zmm3[0] = zmm3[0] * zmm3[0]
*(arg2 + 0x20) = rcx_1 + rax_2
float var_24
float temp0 = _mm_sqrt_ss(0, var_24 * var_24 + _X * _X + zmm3[0])
zmm3[0] = zmm3[0] / temp0
_X = -1f

if (not(zmm3[0] < -1f))
    _X = __minss_xmmss_memss(zmm3[0], 0x3f800000)[0]

acosf(_X)
int64_t result
int64_t zmm0_1
float zmm6_1[0x4]
zmm0_1, result, zmm6_1 = sub_140a3f4a0(var_24, _X_1)
*arg3 = (_mm_unpacklo_ps(zmm6_1, zmm0_1)).q
return result
