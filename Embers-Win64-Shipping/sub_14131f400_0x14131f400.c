// 函数: sub_14131f400
// 地址: 0x14131f400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = zx.o(0)
float zmm6[0x4] = *arg5

if (zmm6[0] >= 0f)
    _mm_min_ss(zmm6[0], 0x3f800000)

float zmm8[0x4] = *(arg5 + 4)

if (zmm8[0] >= 0f)
    zmm8 = _mm_min_ss(zmm8[0], 0x3f800000)
else
    zmm8 = zx.o(0)

float zmm6_1[0x4] = sub_1410e0370(arg1)
int128_t** rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int128_t* rax_1 = *arg8
void* rcx = &rbx_2[1]

if (rcx u> *(arg1 + 0x38))
    zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x10)
    rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rbx_2[1]

*(arg1 + 0x30) = rcx
*rbx_2 = rax_1
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_4[6]

if (rax_2 u> *(arg1 + 0x38))
    zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_4[6]

*(arg1 + 0x30) = rax_2
void**** rax_3 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_3 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
rcx_4[5] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = 1
rcx_4[3] = rbx_2
rcx_4[4] = 2
float var_d8[0x4]
sub_1419a2ec0(*(arg2 + 0x5150), &var_d8, &data_143eb4560, 0)
uint128_t var_c8 = var_d8

if (arg10 == 0)
    zmm7 = 0x3f800000

int64_t var_b8 = *arg3
int64_t var_b0 = data_14396ee58
int128_t* var_a8 = *arg8
int32_t var_a0 = *arg7
int32_t var_9c = arg7[1]
int32_t var_98 = *arg4
int32_t r9 = arg9[1]
int32_t rax_11 = arg4[1]
float temp0_3[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
int32_t var_94 = rax_11
temp0_3[0] = zmm8[0]
int32_t rax_12 = *arg9
int32_t var_78 = rax_12
int32_t temp0_4
int32_t temp1
temp0_4:temp1 = sx.q(rax_12)
int32_t rdx_2 = temp0_4 & 0x1f
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
int32_t rax_14 = temp1 + rdx_2
int32_t var_74 = r9
temp0_5[0] = arg6.d
int32_t r8_1 = rax_14 s>> 5
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_6[0] = zmm7.d
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
var_d8 = temp0_7

if ((rax_14 & 0x1f) != rdx_2)
    r8_1 += 1

var_d8[1] = r9
var_d8[0] = r8_1
var_d8[0].q = var_d8[0].q
float var_88[0x4] = temp0_7
var_d8[2] = 1
return sub_1412ee2d0(arg1, &var_c8, &var_b8, &var_d8)
