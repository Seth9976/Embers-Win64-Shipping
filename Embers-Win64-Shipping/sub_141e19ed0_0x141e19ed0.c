// 函数: sub_141e19ed0
// 地址: 0x141e19ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg3[0x6b].b == 0
float zmm4[0x4] = data_142d4cc30
float zmm5[0x4] = *arg4
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float zmm7[0x4] = arg4[1]
float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_3[0x4] = _mm_mul_ps(temp0, temp0_2)
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_7[0x4] = _mm_sub_ps(temp0_3, _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_1))
float temp0_8[0x4] = _mm_add_ps(temp0_7, temp0_7)
float temp0_9[0x4] = _mm_mul_ps(temp0_4, temp0_8)
float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xc9), temp0_1)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xd2)
float temp0_13[0x4] = _mm_add_ps(temp0_9, zmm4)
float temp0_14[0x4] = _mm_mul_ps(temp0_12, temp0_2)
float temp0_15[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float temp0_17[0x4] = _mm_add_ps(_mm_sub_ps(temp0_14, temp0_11), temp0_13)
temp0_17[0] = temp0_17[0] f* *arg3
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
temp0_18[0] = temp0_18[0] f* arg3[1]
temp0_18[0] = temp0_18[0] * temp0_15[0]
temp0_18[0] = temp0_18[0] + temp0_17[0]
temp0_19[0] = temp0_19[0] f* arg3[2]
temp0_18[0] = temp0_18[0] + temp0_19[0]
temp0_17[0] = temp0_17[0] * zmm7[0]
temp0_18[0] = temp0_18[0] + temp0_17[0]
float temp0_20[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
temp0_19[0] = temp0_19[0] * temp0_20[0]
temp0_18[0] = temp0_18[0] + temp0_19[0]
temp0_18[0] = temp0_18[0] - temp0_18[0]

if (not(cond:0))
    temp0_18[0] = temp0_18[0] f- arg3[0x6c]

int32_t rcx = data_143dbb200
float var_e4 = _mm_shuffle_ps(zmm7, zmm7, 0x55)[0]
temp0_18[0] = temp0_18[0] * temp0_18[0]
float var_e8 = zmm7[0]
float temp0_22[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
temp0_17[0] = temp0_17[0] * temp0_17[0]
temp0_19[0] = temp0_19[0] * temp0_19[0]
temp0_18[0] = temp0_18[0] + temp0_17[0]
float var_e0 = temp0_22[0]
zmm7 = zx.o(data_143dbb1f8.q)
temp0_18[0] = temp0_18[0] / arg1[0]
temp0_18[0] = temp0_18[0] + temp0_19[0]

if (temp0_18[0] == 1f)
    goto label_141e1a0e2

float var_f8
float var_f0

if (temp0_18[0] >= 9.99999994e-09f)
    zmm4 = 0x3f000000
    float zmm3[0x4] = zx.o(0)
    float zmm2[0x4] = 0x3f000000
    zmm3[0] = temp0_18[0]
    float temp0_23[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_23[0] = temp0_23[0] * temp0_23[0]
    zmm3[0] = zmm3[0] * temp0_23[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_23[0] = temp0_23[0] * zmm2[0]
    temp0_23[0] = temp0_23[0] + temp0_23[0]
    temp0_23[0] = temp0_23[0] * temp0_23[0]
    zmm3[0] = zmm3[0] * temp0_23[0]
    zmm4[0] = 0.5f - zmm3[0]
    temp0_23[0] = temp0_23[0] * zmm4[0]
    temp0_23[0] = temp0_23[0] + temp0_23[0]
    temp0_17[0] = temp0_17[0] * temp0_23[0]
    temp0_18[0] = temp0_18[0] * temp0_23[0]
    temp0_19[0] = temp0_19[0] * temp0_23[0]
label_141e1a0e2:
    var_f0 = temp0_19[0]
    float var_f4_1 = temp0_18[0]
    var_f8 = temp0_17[0]
else
    var_f8 = data_143dbb1f8[0]
    var_f0 = data_143dbb200[0]
    float var_f4 = data_143dbb1fc[0]

int64_t var_c8 = var_e8.q
float var_c0 = var_e0
int32_t var_b4 = rcx
int64_t var_b0 = var_f8.q
float var_a4 = temp0_18[0]
float var_a0 = temp0_18[0]
int32_t var_98 = 0x7f7fffff
int64_t var_d8 = 0
int32_t* var_d0 = arg3
int64_t var_bc = zmm7.q
int32_t var_9c = 0
int32_t var_94 = 0
sub_141e328d0(&var_d8)
int64_t rdi = sx.q(arg2[1].d)
int32_t rax_2 = (rdi + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405fde00(arg2)

int64_t result = *arg2
int128_t* rcx_3 = rdi * 0x68
*(rcx_3 + result) = var_d8.o
*(rcx_3 + result + 0x10) = var_c8.o
*(rcx_3 + result + 0x20) = var_bc:4.o
*(rcx_3 + result + 0x30) = var_f0.o
*(rcx_3 + result + 0x40) = var_98.o
int128_t var_88
*(rcx_3 + result + 0x50) = var_88
int64_t var_78
*(rcx_3 + result + 0x60) = var_78
return result
