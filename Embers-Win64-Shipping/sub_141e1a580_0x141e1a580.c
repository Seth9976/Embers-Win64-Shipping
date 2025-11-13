// 函数: sub_141e1a580
// 地址: 0x141e1a580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4] = *(arg4 + 0x10)
float zmm8[0x4] = *arg3
zmm8[0] = zmm8[0] - zmm7[0]
float zmm9[0x4] = *(arg3 + 4)
float temp0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
zmm9[0] = zmm9[0] - temp0[0]
float zmm10[0x4] = *(arg3 + 8)
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
zmm10[0] = zmm10[0] - temp0_1[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm9[0] = zmm9[0] + zmm8[0]
zmm9[0] = zmm9[0] + zmm10[0]

if (zmm9[0] == 1f)
    goto label_141e1a6b7

float var_f8
float var_f0

if (zmm9[0] >= 9.99999994e-09f)
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
    float zmm2[0x4] = 0x3f000000
    zmm9[0] = zmm9[0] * 0.5f
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm9[0] = zmm9[0] * temp0_2[0]
    zmm2[0] = 0.5f - zmm9[0]
    temp0_2[0] = temp0_2[0] * zmm2[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm9[0] = zmm9[0] * temp0_2[0]
    temp0_2[0] = temp0_2[0] * (0.5f - zmm9[0])
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    zmm8[0] = zmm8[0] * temp0_2[0]
    zmm9[0] = zmm9[0] * temp0_2[0]
    zmm10[0] = zmm10[0] * temp0_2[0]
label_141e1a6b7:
    var_f0 = zmm10[0]
    float var_f4_1 = zmm9[0]
    var_f8 = zmm8[0]
else
    var_f8 = data_143dbb1f8[0]
    var_f0 = data_143dbb200[0]
    float var_f4 = data_143dbb1fc[0]

bool cond:0 = *(arg3 + 0x1ac) == 0
float temp0_3[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm9[0])
temp0_3[0] = temp0_3[0] f- arg5

if (not(cond:0))
    temp0_3[0] = temp0_3[0] f+ arg3[0x1b].d

int32_t rcx = data_143dbb200
float zmm1[0x4] = zx.o(data_143dbb1f8.q)
float var_78 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)[0]
temp0_3[0] = temp0_3[0] / arg1[0]
float var_d0 = var_78
int32_t var_c4 = rcx
int64_t var_e8 = 0
int128_t* var_e0 = arg3
int64_t var_a8 = 0
int64_t var_d8 = (_mm_unpacklo_ps(zmm7, _mm_shuffle_ps(zmm7, zmm7, 0x55)[0].q)).q
int64_t var_c0 = var_f8.q
float var_b4 = temp0_3[0]
float var_b0 = temp0_3[0]
int32_t var_ac = 0xff7fffff
int64_t var_cc = zmm1.q
sub_141e328d0(&var_e8)
int64_t rdi = sx.q(arg2[1].d)
int32_t rax_2 = (rdi + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405fde00(arg2)

int64_t result = *arg2
int128_t* rcx_3 = rdi * 0x68
*(rcx_3 + result) = var_e8.o
*(rcx_3 + result + 0x10) = var_d8.o
*(rcx_3 + result + 0x20) = var_cc:4.o
*(rcx_3 + result + 0x30) = var_f0.o
*(rcx_3 + result + 0x40) = var_a8.o
int128_t var_98
*(rcx_3 + result + 0x50) = var_98
int64_t var_88
*(rcx_3 + result + 0x60) = var_88
return result
