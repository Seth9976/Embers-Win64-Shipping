// 函数: sub_1424eec60
// 地址: 0x1424eec60
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

int64_t rax_3 = *(arg2 + 0x20)
uint128_t zmm2
zmm2.d = arg_10.d f* 0.0174532924f
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
uint128_t zmm0
zmm0.d = zmm2.d f* 0.159154937f

if (zmm2.d f< 0f)
    zmm0.d = zmm0.d f- 0.5f
else
    zmm0.d = zmm0.d f+ 0.5f

int32_t result = int.d(zmm0.d)
zmm0.d = _mm_cvtepi32_ps(zx.o(result)).d f* 6.28318548f
zmm2.d = zmm2.d f- zmm0.d
int128_t zmm6

if (not(zmm2.d f<= 1.57079637f))
    zmm6 = 0xbf800000
    zmm0.d = 3.14159274f f- zmm2.d
    zmm2 = zmm0
else if (zmm2.d f>= -1.57079637f)
    zmm6 = 0x3f800000
else
    zmm6 = 0xbf800000
    zmm0.d = -3.14159274f f- zmm2.d
    zmm2 = zmm0

uint128_t zmm1
zmm1.d = zmm2.d f* zmm2.d
zmm0.d = zmm1.d f* 2.3889859e-08f
float zmm5 = 2.75255616e-06f f- zmm0.d
zmm0.d = zmm1.d f* 2.60516146e-07f
uint128_t zmm3 = arg_18
zmm5 = (((zmm5 f* zmm1.d - 0.000198408743f) f* zmm1.d + 0.00833333097f) f* zmm1.d - 0.166666672f)
    f* zmm1.d + 1f
float zmm4 = (
    (((2.47604949e-05f f- zmm0.d) f* zmm1.d - 0.00138883782f) f* zmm1.d + 0.0416666381f) f* zmm1.d
    - 0.5f) f* zmm1.d
zmm1 = arg4
zmm5 = zmm5 f* zmm2.d
zmm4 = (zmm4 + 1f) f* zmm6.d
zmm0.d = zmm1.d f* zmm5
zmm2.d = zmm3.d f* zmm4
zmm3.d = zmm3.d f* zmm5
zmm2.d = zmm2.d f- zmm0.d
zmm1.d = zmm1.d f* zmm4
zmm3.d = zmm3.d f+ zmm1.d
*arg3 = (_mm_unpacklo_ps(zmm2, zmm3.q)).q
return result
