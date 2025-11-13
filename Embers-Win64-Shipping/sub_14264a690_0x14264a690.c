// 函数: sub_14264a690
// 地址: 0x14264a690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
float zmm6[0x4] = *arg2
float zmm8[0x4] = *(arg3 + 8)
zmm8[0] = zmm8[0] f- *(arg2 + 8)
float zmm9[0x4] = *(arg3 + 4)
zmm9[0] = zmm9[0] f- *(arg2 + 4)
uint128_t zmm10
zmm10.d = (*arg3).d f- zmm6[0]
float zmm1 = zmm8[0] * zmm8[0]
zmm9[0] = zmm9[0] * zmm9[0]
float zmm0[0x4] = zmm10
zmm0[0] = zmm0[0] f* zmm10.d
zmm9[0] = zmm9[0] + zmm0[0]
zmm9[0] = zmm9[0] + zmm1
float arg_20

if (not(zmm9[0] <= 9.99999994e-09f))
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
    float zmm2[0x4] = 0x3f000000
    zmm9[0] = zmm9[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm9[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm9[0] = zmm9[0] * temp0_1[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f - zmm9[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    arg_20 = temp0_1[0]
    zmm10.d = zmm10.d f* temp0_1[0]
    zmm9[0] = zmm9[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]

zmm8[0] = zmm8[0] * arg4[0]
arg3.b = 1
uint128_t zmm11
zmm11.d = zmm10.d f* arg4[0]
zmm9[0] = zmm9[0] * arg4[0]
zmm8[0] = zmm8[0] f+ *(arg2 + 8)
arg4[0] = arg4[0] f* zmm10.d
uint128_t zmm7
zmm7.d = zmm11.d f+ zmm6[0]
zmm8[0] = zmm8[0] * 0.333333343f
zmm9[0] = zmm9[0] f+ *(arg2 + 4)
arg4[0] = arg4[0] * -0.333333343f
zmm7.d = zmm7.d f+ zmm8[0]
zmm8[0] = zmm8[0] + arg4[0]
float var_b0 = zmm8[0]
char* rax
int64_t zmm6_1
uint128_t zmm7_1
float zmm8_1
float zmm9_1
rax, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_140ae16d0(arg5, &arg_20, arg3.b)
int64_t rsi = sx.q(arg1[1].d)
uint64_t var_ac = *rdi
int32_t var_94 = *rax
int32_t rax_2 = (rsi + 1).d
int32_t var_a4 = rdi[1].d
uint64_t var_a0 = (_mm_unpacklo_ps(zmm7_1, zmm6_1)).q
float var_98 = var_b0
int32_t var_90 = 0
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405c4e40(arg1)

int64_t rax_3 = *arg1
int64_t rcx_5 = rsi << 5
*(rcx_5 + rax_3) = var_ac.o
*(rcx_5 + rax_3 + 0x10) = var_a0:4.o
zmm11.d = zmm11.d f+ *rdi
*(rdi + 4)
zmm8_1 = zmm8_1 f+ rdi[1].d - arg4[0]
zmm11.d = zmm11.d f- zmm8[0]
char* rax_4
int64_t zmm9_2
rax_4, zmm9_2 = sub_140ae16d0(arg5, &arg_20, 1)
int64_t rdi_1 = sx.q(arg1[1].d)
uint64_t var_ac_1 = *rdi
int32_t var_94_1 = *rax_4
int32_t rax_6 = (rdi_1 + 1).d
int32_t var_a4_1 = rdi[1].d
uint64_t var_a0_1 = (_mm_unpacklo_ps(zmm11, zmm9_2)).q
float var_98_1 = zmm8_1
int32_t var_90_1 = 0
arg1[1].d = rax_6

if (rax_6 s> *(arg1 + 0xc))
    sub_1405c4e40(arg1)

int64_t result = *arg1
int64_t rcx_11 = rdi_1 << 5
*(rcx_11 + result) = var_ac_1.o
*(rcx_11 + result + 0x10) = var_a0_1:4.o
return result
