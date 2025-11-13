// 函数: sub_141f60a30
// 地址: 0x141f60a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 0x350)
float zmm6[0x4] = zx.o(0)

if (not(zmm0[0] < 0f))
    zmm6 = __minss_xmmss_memss(zmm0[0], 0x42b20000)

zmm6[0] = zmm6[0] * 0.0174532924f
float zmm1[0x4] = *(arg1 + 0x354)
zmm1[0] = zmm1[0] * 0.0174532924f
zmm6[0] = zmm6[0] + 0.00100000005f

if (not(zmm1[0] < zmm6[0]))
    zmm6 = __minss_xmmss_memss(zmm1[0], 0x3fc6f4b7)

int128_t zmm0_1 = cosf(zmm6[0])
int128_t zmm8 = *(arg1 + 0x328)
int96_t var_48 = (*(arg1 + 0x1d0)).12
float var_58
float* rax
float zmm6_1[0x4]
rax, zmm6_1 = sub_141f133e0(arg1, &var_58)
float zmm1_1[0x4] = *rax
int64_t zmm3 = rax[1]
float zmm4 = rax[2]

if (zmm0_1.d f>= 0.707106769f)
    float zmm2_1 = 0.5f f/ zmm0_1.d f* zmm8.d
    zmm1_1[0] = zmm1_1[0] * zmm2_1
    zmm3.d = zmm3.d f* zmm2_1
    zmm1_1[0] = zmm1_1[0] f+ var_48.d
    zmm3.d = zmm3.d f+ var_48:4.d
    *arg2 = (_mm_unpacklo_ps(zmm1_1, zmm3)).q
    arg2[1].d = zmm4 * zmm2_1 f+ var_48:8.d
    *(arg2 + 0xc) = zmm2_1
else
    zmm1_1[0] = zmm1_1[0] f* zmm8.d
    zmm3.d = zmm3.d f* zmm8.d
    zmm1_1[0] = zmm1_1[0] f* zmm0_1.d
    zmm3.d = zmm3.d f* zmm0_1.d
    zmm1_1[0] = zmm1_1[0] f+ var_48.d
    zmm3.d = zmm3.d f+ var_48:4.d
    *arg2 = (_mm_unpacklo_ps(zmm1_1, zmm3)).q
    arg2[1].d = zmm4 f* zmm8.d f* zmm0_1.d f+ var_48:8.d
    *(arg2 + 0xc) = sinf(zmm6_1[0]) f* zmm8.d

return arg2
