// 函数: sub_141fad420
// 地址: 0x141fad420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x260)

if (*(rax + 0x94) == 0)
    *(rax + 0xa4)

int128_t zmm9 = arg1[6].d
int128_t zmm7 = *(arg1 + 0x34)
int32_t arg_20 = zmm9.d
int32_t arg_24 = zmm7.d
int32_t arg_1c = zmm7.d
int32_t arg_18 = arg1[7].d.d
int32_t var_a4 = (*(arg1 + 0x3c)).d
void* rax_1

if ((arg1[0x14].b & 2) == 0)
    rax_1 = sub_1423de050()
else
    rax_1 = sub_1423de320()

int16_t* var_a0
sub_140a2e390(&var_a0, u"%.2f", _mm_cvtps_pd(arg1[9].d))
int16_t* const rbp = &data_142d40450
int16_t* const r9 = &data_142d40450
int32_t var_98

if (var_98 != 0)
    r9 = var_a0

int32_t arg_8
int32_t arg_10
float zmm8
int32_t zmm9_1
float zmm10_1[0x2]
int64_t zmm11_1
zmm8, zmm9_1, zmm10_1, zmm11_1 = sub_1424235b0(rax_1, &arg_8, &arg_10, r9)
int16_t* rcx_2 = var_a0

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

uint128_t zmm0 = zx.o(*(arg2 + 0x40))
zmm10_1[0] = zmm10_1[0] f- zmm9_1
zmm0 = _mm_cvtepi32_ps(zmm0)
char var_b0 = 0
zmm10_1[0] = zmm10_1[0] f* zmm0.d
zmm0 = _mm_cvtepi32_pd(zx.q(arg_8))
zmm10_1[0] = zmm10_1[0] * zmm8 f/ zmm11_1.d
double zmm1[0x2] = _mm_cvtps_pd(zmm10_1)
zmm1[0] = zmm1[0] f* 0x3fe6666666666666
zmm1[0] = zmm1[0] f/ zmm0.q
zmm1 = _mm_cvtpd_ps(zmm1)
zmm1[0].d = zmm1[0].d f+ zmm1[0].d
zmm0.d = -0.5f f- zmm1[0].d
int32_t rax_4 = neg.d(int.d(zmm0.d) s>> 1)
arg1[0x10].d = rax_4
int32_t var_b8 = _mm_cvtepi32_ps(zx.o(rax_4)).d
sub_141fad6c0(arg1, arg2, arg_20.q, arg_18.q)
sub_140a2e390(&var_a0, u"%.2f", _mm_cvtps_pd(*(arg1 + 0x4c)))

if (var_98 != 0)
    rbp = var_a0

float zmm6_1[0x2]
int32_t zmm7_1
int32_t zmm8_1
float zmm9_2
int64_t zmm10_2
int64_t zmm11_2
zmm6_1, zmm7_1, zmm8_1, zmm9_2, zmm10_2, zmm11_2 = sub_1424235b0(rax_1, &arg_8, &arg_10, rbp)
int16_t* rcx_6 = var_a0

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

zmm6_1[0] = zmm6_1[0] f- zmm7_1
char var_b0_1 = 1
int64_t zmm0_1
zmm0_1.d = float.s(*(arg2 + 0x44))
zmm6_1[0] = zmm6_1[0] f* zmm0_1.d
zmm0_1 = float.d(arg_10)
zmm6_1[0] = zmm6_1[0] f* zmm8_1
double zmm1_1[0x2] = _mm_cvtps_pd(zmm6_1)
zmm1_1[0] = zmm1_1[0] f* zmm10_2
zmm1_1[0] = zmm1_1[0] f/ zmm0_1
zmm1_1 = _mm_cvtpd_ps(zmm1_1)
zmm1_1[0].d = zmm1_1[0].d f+ zmm1_1[0].d
int32_t rax_7 = neg.d(int.d(zmm9_2 f- zmm1_1[0].d) s>> 1)
*(arg1 + 0x84) = rax_7
zmm0_1.d = float.s(rax_7)
int32_t var_b8_1 = zmm0_1.d
return sub_141fad6c0(arg1, arg2, zmm11_2, zmm9.d.q)
