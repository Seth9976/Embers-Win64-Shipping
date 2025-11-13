// 函数: sub_141e1a820
// 地址: 0x141e1a820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg3 + 0x1ac) == 0
float zmm4 = arg1[0]
float zmm2[0x4] = *(arg4 + 0x10)
float zmm7[0x4] = *arg3
zmm7[0] = zmm7[0] - zmm2[0]
float zmm8[0x4] = *(arg3 + 4)
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm8[0] = zmm8[0] - temp0[0]
float zmm9[0x4] = *(arg3 + 8)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm9[0] = zmm9[0] - temp0_1[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm8[0] = zmm8[0] + zmm7[0]
zmm8[0] = zmm8[0] + zmm9[0]
float temp0_2[0x4] = _mm_sqrt_ss(0, zmm8[0])
temp0_2[0] = temp0_2[0] f- arg5

if (not(cond:0))
    temp0_2[0] = temp0_2[0] f- arg3[0x1b].d

bool cond:1 = zmm8[0] == 1f
int32_t rcx = data_143dbb200
uint128_t zmm10 = zx.o(data_143dbb1f8.q)
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float var_d8 = zmm2[0]
float var_d0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
float var_d4 = temp0_3[0]
temp0_2[0] = temp0_2[0] / zmm4

if (cond:1)
    goto label_141e1a99a

float var_e8
float var_e0

if (zmm8[0] >= 9.99999994e-09f)
    float temp0_5[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
    zmm2 = 0x3f000000
    zmm8[0] = zmm8[0] * 0.5f
    temp0_5[0] = temp0_5[0] * temp0_5[0]
    zmm8[0] = zmm8[0] * temp0_5[0]
    zmm2[0] = 0.5f - zmm8[0]
    temp0_5[0] = temp0_5[0] * zmm2[0]
    temp0_5[0] = temp0_5[0] + temp0_5[0]
    temp0_5[0] = temp0_5[0] * temp0_5[0]
    zmm8[0] = zmm8[0] * temp0_5[0]
    temp0_5[0] = temp0_5[0] * (0.5f - zmm8[0])
    temp0_5[0] = temp0_5[0] + temp0_5[0]
    zmm7[0] = zmm7[0] * temp0_5[0]
    zmm8[0] = zmm8[0] * temp0_5[0]
    zmm9[0] = zmm9[0] * temp0_5[0]
label_141e1a99a:
    var_e0 = zmm9[0]
    float var_e4_1 = zmm8[0]
    var_e8 = zmm7[0]
else
    var_e8 = data_143dbb1f8[0]
    var_e0 = data_143dbb200[0]
    float var_e4 = data_143dbb1fc[0]

int64_t var_b8 = var_d8.q
float var_b0 = var_d0
int32_t var_a4 = rcx
int64_t var_a0 = var_e8.q
float var_94 = temp0_2[0]
float var_90 = temp0_2[0]
int32_t var_88 = 0x7f7fffff
int64_t var_c8 = 0
int128_t* var_c0 = arg3
uint64_t var_ac = zmm10.q
int32_t var_8c = 0
int32_t var_84 = 0
sub_141e328d0(&var_c8)
int64_t rdi = sx.q(arg2[1].d)
int32_t rax_2 = (rdi + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405fde00(arg2)

int64_t result = *arg2
int128_t* rcx_3 = rdi * 0x68
*(rcx_3 + result) = var_c8.o
*(rcx_3 + result + 0x10) = var_b8.o
*(rcx_3 + result + 0x20) = var_ac:4.o
*(rcx_3 + result + 0x30) = var_e0.o
*(rcx_3 + result + 0x40) = var_88.o
int128_t var_78
*(rcx_3 + result + 0x50) = var_78
int64_t var_68
*(rcx_3 + result + 0x60) = var_68
return result
