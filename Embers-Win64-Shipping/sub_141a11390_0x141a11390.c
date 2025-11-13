// 函数: sub_141a11390
// 地址: 0x141a11390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x4a0)
char rbx = *(arg1 + 0x44b)
void* r12 = nullptr
int32_t r9 = *(arg1 + 0x4a8)
uint128_t zmm0 = *(arg1 + 0x4b0)
int32_t rax_1 = (rsi + 1) * *(arg1 + 0x49c)
int32_t arg_8 = 0
int32_t arg_10 = 0
int32_t arg_18 = 1
uint128_t zmm0_1 = sub_141a0f440(zmm0, &arg_8, &arg_10, r9, rax_1, &arg_18, rbx)
uint128_t zmm6 = zmm0_1
uint64_t r15 = zx.q(arg_8)
uint128_t zmm7 = zmm0_1
uint64_t r14 = zx.q(arg_10)
int32_t rdx_2 = *(arg1 + 0x4ac) s>> rbx
zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4a8)))
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rdx_2 + (r15 << 1).d))
_mm_cvtepi32_ps(zx.o(rsi))
zmm6.d = zmm6.d f/ zmm1.d
zmm7.d = zmm7.d f/ _mm_cvtepi32_ps(zx.o(rdx_2 + (r14 << 1).d)).d
zmm1.d = 1f f/ zmm0_1.d
zmm0_1 = *(arg1 + 0x80)
uint128_t zmm11 = _mm_cvtepi32_ps(zx.o(rdx_2 - 1))
uint128_t var_118 = zmm0_1
uint128_t zmm9 = zmm11
zmm11.d = zmm11.d f* zmm7.d
zmm9.d = zmm9.d f* zmm6.d
zmm11.d = zmm11.d f* zmm1.d
zmm9.d = zmm9.d f* zmm1.d
uint128_t var_108 = *(arg1 + 0x90)
uint128_t var_e8 = *(arg1 + 0xb0)
uint128_t var_f8 = *(arg1 + 0xa0)
uint32_t var_d8[0x4][0x4]
uint32_t (* rax_5)[0x4] = sub_140631b10(&var_118, &var_d8)
*(arg1 + 0x660) = *rax_5
*(arg1 + 0x670) = rax_5[1]
*(arg1 + 0x680) = rax_5[2]
float zmm1_1[0x4] = rax_5[3]
*(arg1 + 0x4d0) = *(arg1 + 0x80)
uint32_t zmm0_2[0x4] = *(arg1 + 0xa0)
*(arg1 + 0x690) = zmm1_1
*(arg1 + 0x4e0) = *(arg1 + 0x90)
zmm1_1 = *(arg1 + 0xb0)
*(arg1 + 0x4f0) = zmm0_2
*(arg1 + 0x500) = zmm1_1
float zmm6_1[0x4]
int32_t zmm7_1
float zmm8
float zmm9_1[0x4]
uint128_t zmm10_1
int32_t zmm11_1
zmm6_1, zmm7_1, zmm8, zmm9_1, zmm10_1, zmm11_1 = sub_1407740e0(arg1 + 0x4d0, 0x322bcc77)
uint128_t zmm0_3 = *(arg1 + 0x570)
int32_t rcx_3 = *(arg1 + 0x4a4)
uint128_t zmm1_2 = *(arg1 + 0x530)
int32_t rax_6 = *(arg1 + 0x178)
uint128_t zmm4 = zx.o(*(arg1 + 0x4a0))
float temp0_5[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xe1)
temp0_5[0] = zmm11_1
uint128_t var_1e8 = zmm1_2
zmm1_2 = *(arg1 + 0x4e0)
int32_t var_218 = rax_6
int32_t rax_7 = *(arg1 + 0x17c)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
uint128_t var_178 = zmm1_2
int32_t var_214 = rax_7
uint128_t var_1f8 = zmm0_3
int32_t var_20c = *(arg1 + 0x49c)
int32_t rax_9 = *(arg1 + 0x464)
uint128_t var_158 = *(arg1 + 0x500)
uint128_t var_188 = *(arg1 + 0x4d0)
zmm0_3 = *(arg1 + 0x4f0)
int32_t var_210 = rcx_3
zmm4 = _mm_cvtepi32_ps(zmm4)
int32_t var_208 = rax_9
uint128_t var_168 = zmm0_3
zmm0_3.d = _mm_cvtepi32_ps(zx.o(r14.d)).d f* zmm7_1
zmm1_2.d = _mm_cvtepi32_ps(zx.o(r15.d)).d f* zmm6_1[0]
temp0_6[0] = zmm0_3.d
zmm0_3 = zx.o(*(arg1 + 0x4b4))
float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_10[0] = zmm1_2.d
zmm1_2 = zx.o(*(arg1 + 0x4b8))
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
float var_228[0x4] = temp0_11
float var_1d8[0x4] = temp0_11
float zmm2[0x4] = *(arg1 + 0x580)
float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rcx_3))
zmm1_2 = _mm_cvtepi32_ps(zmm1_2)
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm3.d = zmm8 f/ zmm4.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = _mm_cvtepi32_ps(zmm0_3).d
temp0_12[0] = (*(arg1 + 0x584)).d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
zmm3.d = zmm1_2.d
temp0_19[0] = (*(arg1 + 0x44c)).d
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
float temp0_21[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x27)
temp0_21[0] = zmm4.d
uint128_t var_228_1 = zmm3
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x39)
float var_1b8[0x4] = temp0_22
zmm1_2.d = zmm10_1.d f* zmm9_1[0]
temp0_22[2].q = 0
zmm10_1.d = zmm10_1.d f* zmm11_1
temp0_22[0] = zmm1_2.d
uint128_t var_1c8 = zmm3
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xe1)
temp0_23[0] = zmm10_1.d
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xe1)
uint8_t rcx_4 = *(arg1 + 0x590)
int64_t rdx_4 = data_14395fa10
float var_1a8[0x4] = temp0_24
temp0_24[3] = 0
temp0_24[0] = _mm_cvtepi32_ps(zx.o(rcx_4) & 1).d
void* rcx_5 = data_143f10e68
float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xe1)
uint8_t rax_12
zmm1_2 = _mm_cvtepi32_ps(zx.o(rax_12))
void* rax_15 = *(arg1 + 0x158)
temp0_26[0] = zmm1_2.d
float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc6)
temp0_28[0] = _mm_cvtepi32_ps(zx.o(rcx_4 u>> 2) & 1).d
float var_198[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)

if (rax_15 == 0)
    int64_t var_148_1 = *(rcx_5 + 0x10)
    int64_t var_140_1 = *(rcx_5 + 0x18)
else
    int64_t var_148 = *(rax_15 + 0x90)
    int64_t var_140 = rdx_4

void* rax_19 = *(arg1 + 0x588)

if (rax_19 == 0)
    int64_t var_128_1 = *(rcx_5 + 0x10)
    int64_t var_120_1 = *(rcx_5 + 0x18)
else
    int64_t var_128 = *(rax_19 + 0x90)
    int64_t var_120 = rdx_4

void* rdx_5 = *(arg1 + 0x560)

if (rdx_5 == 0)
    int64_t var_138_1 = *(rcx_5 + 0x10)
    int64_t var_130_1 = *(rcx_5 + 0x18)
else
    int64_t var_138 = *(rdx_5 + 0x90)
    int64_t var_130 = *(*(rdx_5 + 0x78) + 0x18)

void* rax_27 = *(arg1 + 0x648)

if (rax_27 == 0)
    rax_27 = sub_140a82f30(0x100, zx.q((rax_27 + 0x10).d))
    *(arg1 + 0x648) = rax_27

int32_t* rdx_7 = &var_218
int64_t i_1 = 2
int64_t i

do
    rax_27 += 0x80
    zmm0_3 = *rdx_7
    zmm1_2 = *(rdx_7 + 0x10)
    rdx_7 = &rdx_7[0x20]
    *(rax_27 - 0x80) = zmm0_3
    zmm0_3 = *(rdx_7 - 0x60)
    *(rax_27 - 0x70) = zmm1_2
    zmm1_2 = *(rdx_7 - 0x50)
    *(rax_27 - 0x60) = zmm0_3
    zmm0_3 = *(rdx_7 - 0x40)
    *(rax_27 - 0x50) = zmm1_2
    zmm1_2 = *(rdx_7 - 0x30)
    *(rax_27 - 0x40) = zmm0_3
    zmm0_3 = *(rdx_7 - 0x20)
    *(rax_27 - 0x30) = zmm1_2
    zmm1_2 = *(rdx_7 - 0x10)
    *(rax_27 - 0x20) = zmm0_3
    *(rax_27 - 0x10) = zmm1_2
    i = i_1
    i_1 -= 1
while (i != 1)
sub_1419ba620(arg1 + 0x628)

if (*(arg1 + 0x1a2) != 0)
    zmm6_1 = *(arg1 + 0xc0)
    zmm7_1 = *(arg1 + 0xc4)
    zmm8 = *(arg1 + 0xc8)
    zmm9_1 = *(arg1 + 0xd8)
    sub_141a0a410(&data_1439cc030, &arg_8, arg1 + 0x160)
    int64_t rax_28 = sx.q(arg_8)
    
    if (rax_28.d != 0xffffffff)
        r12 = data_1439cc030 + rax_28 * 0x28
    
    void* rdx_10 = *(r12 + 0x18)
    int64_t rax_30 = *(arg1 + 0x178)
    float temp0_31[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
    temp0_31[0] = zmm7_1
    int32_t rcx_11 = ((rax_30 u>> 0x20).d - *(rdx_10 + 0xc)) * *(rdx_10 + 0x10)
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
    temp0_32[0] = zmm8
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x27)
    temp0_33[0] = zmm9_1[0]
    *(*(rdx_10 + 0xb8) + sx.q(rcx_11 - *(rdx_10 + 8) + rax_30.d) * 0x10) =
        _mm_shuffle_ps(temp0_33, temp0_33, 0x39)

jump(*(**(arg1 + 0x108) + 0x180))
