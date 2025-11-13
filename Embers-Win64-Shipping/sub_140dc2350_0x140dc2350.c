// 函数: sub_140dc2350
// 地址: 0x140dc2350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg2
int32_t r12 = 1
int64_t* r14 = *(r15 + 0x40)
float zmm9[0x4] = arg2[9].d
char arg_8 = *(arg2 + 0x4d)
int32_t rax_1 = arg2[6].d
int32_t rax_2 = 1

if (r14 != 0)
    r14 = r14[2]

float zmm2[0x4] = zmm9

if (r14 != 0)
    int32_t rax_4 = (**r14)(r14, arg3, zmm2)
    int64_t rdx = *r14
    r12 = rax_4
    rax_2 = (*(rdx + 8))(r14, rdx)
    zmm2 = arg2[9].d

uint128_t zmm11 = 0x3f800000
float zmm0[0x4] = zx.o(0)
float zmm13[0x4] = *(arg1 + 0x24)
arg3 = zx.o(0)
float zmm6[0x4] = *(arg2 + 0x2c)
float zmm5[0x4] = 0x3f800000
float zmm4[0x4] = *(r15 + 0x18)
float zmm12[0x4] = arg2[5].d
float zmm8[0x4] = zmm4
float zmm15[0x4] = *(r15 + 0x1c)
float zmm10[0x4] = zmm12
float zmm14[0x4] = *(r15 + 0x20)
float zmm7[0x4] = zmm15
zmm5[0] = 1f / zmm2[0]
float var_130 = zmm6[0]
zmm0[0] = float.s(zx.q(r12))
arg3[0] = float.s(zx.q(rax_2))
float var_124 = zmm12[0]
zmm5[0] = zmm5[0] * zmm0[0]
zmm13[0] = zmm13[0] / zmm0[0]
zmm13[0] = zmm13[0] / arg3[0]
zmm5[0] = zmm5[0] * arg3[0]
arg3 = *(r15 + 0x24)
zmm13[0] = zmm13[0] + 1f
zmm8[0] = zmm8[0] * zmm5[0]
float var_118 = zmm5[0]
arg3[0] = arg3[0] * zmm5[0]
float arg_18 = zmm13[0]
zmm13[0] = zmm13[0] + 1f
float var_138 = zmm13[0]
float var_11c = zmm4[0]
float var_114 = zmm15[0]
zmm7[0] = zmm7[0] * zmm5[0]
float arg_20 = zmm13[0]
zmm14[0] = zmm14[0] * zmm5[0]
float zmm3[0x4] = zmm6
zmm3[0] = zmm3[0] - arg3[0]
zmm10[0] = zmm10[0] - zmm14[0]
float var_128 = zmm3[0]

if (not(zmm10[0] >= zmm8[0]))
    zmm8 = zmm12
    zmm8[0] = zmm8[0] * 0.5f
    zmm10 = zmm8

if (not(zmm3[0] >= zmm7[0]))
    zmm7 = var_130
    zmm7[0] = zmm7[0] * 0.5f
    zmm3 = zmm7
    var_128 = zmm3[0]

zmm0 = 0x3f800000
bool cond:0 = zmm14[0] <= 0f
float temp0[0x4] = _mm_max_ss(zmm4[0], 0)
float temp0_1[0x4] = _mm_max_ss(zmm15[0], 0)

if (not(cond:0))
    zmm0[0] = 1f - zmm14[0]

arg3 = *(r15 + 0x24)
zmm14 = 0x3f800000

if (not(arg3[0] <= 0f))
    zmm14[0] = 1f - arg3[0]

zmm0[0] = zmm0[0] + zmm13[0]
float var_12c = 1f
arg3 = 0x3f800000
zmm14[0] = zmm14[0] + zmm13[0]
temp0[0] = temp0[0] + zmm13[0]
temp0_1[0] = temp0_1[0] + zmm13[0]
float var_134 = zmm0[0]
zmm0 = *(r15 + 0x20)
zmm0[0] = zmm0[0] + var_11c
float var_120 = zmm14[0]
zmm14 = 0x3f800000
float var_158[0x4] = temp0
arg3[0] = 1f - zmm0[0]
arg3[0] = arg3[0] * var_118

if (not(_mm_and_ps(arg3, 0x7fffffff)[0] <= 9.99999994e-09f))
    zmm14 = zmm10
    zmm14[0] = zmm14[0] - zmm8[0]
    zmm14[0] = zmm14[0] / arg3[0]

zmm0 = *(r15 + 0x24)
arg3 = 0x3f800000
zmm0[0] = zmm0[0] + var_114
arg3[0] = 1f - zmm0[0]
arg3[0] = arg3[0] * zmm5[0]

if (not(_mm_and_ps(arg3, 0x7fffffff)[0] <= 9.99999994e-09f))
    zmm3[0] = zmm3[0] - zmm7[0]
    zmm3[0] = zmm3[0] / arg3[0]
    var_12c = zmm3[0]

arg3 = data_142d3f660
char r8 = arg1[5].b
float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xe1)
temp0_4[0] = var_134[0]
float var_f8[0x4] = arg3
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
temp0_5[0] = temp0_1[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_6[0] = var_120[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
float var_148[0x4] = temp0_7
float var_108[0x4] = temp0_7
var_148 = *(r15 + 8)
int32_t arg_10
float zmm6_1
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]
zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_140ae16d0(&var_148, &arg_10, r8)
char var_1b0 = 1
char var_1b8 = 2
int128_t* rax_7 = sub_140e0db30(arg1, rax_1, &var_108, r14, 2, 1, arg_8, 0x60, arg2)

if (not(zmm14[0] >= 1f))
    zmm14 = 0x3f800000

uint128_t zmm0_1 = var_12c

if (not(zmm0_1.d f< 1f))
    zmm11 = zmm0_1

int32_t r15_1 = *(rax_7 + 0x64)
float zmm1[0x4] = arg2[3].d
float zmm2_1[0x4] = *(arg2 + 0x1c)
zmm1[0] = zmm1[0] + zmm1[0]
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
int64_t* rcx_5 = rax_7[4].q
float var_188 = var_138.d
float var_184 = zmm13[0]
zmm1[0] = zmm1[0] + zmm6_1
int32_t var_178 = 0
int64_t r14_1 = sx.q(rcx_5[1].d)
zmm2_1[0] = zmm2_1[0] + zmm6_1
int32_t var_174 = 0
int64_t var_180 = 0
int32_t rax_8 = int.d(zmm1[0])
zmm9_1[0] = zmm9_1[0] f* arg2[5].d
zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_8 s>> 1))
zmm9_1[0] = zmm9_1[0] + zmm6_1
int32_t var_170 = zmm0_1.d
zmm0_1 = zx.o(int.d(zmm2_1[0]) s>> 1)
int32_t rax_12 = arg_10
int32_t rax_13 = int.d(zmm9_1[0])
zmm9_1[0] = zmm9_1[0] f* *(arg2 + 0x2c)
int16_t var_164 = (rax_13 s>> 1).w
zmm0_1 = _mm_cvtepi32_ps(zmm0_1)
zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
int32_t var_16c = zmm0_1.d
zmm9_1[0] = zmm9_1[0] + zmm6_1
int16_t var_162 = (int.d(zmm9_1[0]) s>> 1).w
int32_t rax_17 = (r14_1 + 1).d
rcx_5[1].d = rax_17

if (rax_17 s> *(rcx_5 + 0xc))
    sub_1405c4ec0(rcx_5)

int64_t rdx_4 = r14_1 * 5
int64_t rcx_6 = *rax_7[4].q
float var_184_1 = temp0_1[0]
int32_t var_178_1 = 0
int64_t var_180_1 = 0
*(rcx_6 + (rdx_4 << 3)) = var_188.o
*(rcx_6 + (rdx_4 << 3) + 0x10) = var_178.o
*(rcx_6 + (rdx_4 << 3) + 0x20) = rax_12.q
*(rax_7 + 0x64) += 1
zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
zmm2_1 = *(arg2 + 0x2c)
int64_t* rcx_7 = rax_7[4].q
var_188 = var_138.d
zmm7_1[0] = zmm7_1[0] f* arg2[2].d
int64_t r14_2 = sx.q(rcx_7[1].d)
zmm7_1[0] = zmm7_1[0] f+ arg2[3].d
zmm7_1[0] = zmm7_1[0] f+ arg2[3].d
zmm7_1[0] = zmm7_1[0] + zmm6_1
int32_t rax_19 = int.d(zmm7_1[0])
zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
zmm7_1[0] = zmm7_1[0] f* *(arg2 + 0x14)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_19 s>> 1))
zmm7_1[0] = zmm7_1[0] f+ *(arg2 + 0x1c)
int32_t var_170_1 = zmm0_1.d
zmm7_1[0] = zmm7_1[0] f+ *(arg2 + 0x1c)
zmm7_1[0] = zmm7_1[0] + zmm6_1
int32_t rax_21 = int.d(zmm7_1[0])
zmm9_1[0] = zmm9_1[0] f* arg2[5].d
zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
int32_t rax_23 = arg_10
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_21 s>> 1))
zmm9_1[0] = zmm9_1[0] + zmm6_1
int32_t var_16c_1 = zmm0_1.d
zmm0_1.d = zmm7_1.d f/ zmm2_1[0]
int32_t var_174_1 = zmm0_1.d
int16_t rax_25 = (int.d(zmm9_1[0]) s>> 1).w
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int16_t var_164_1 = rax_25
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm2_1[0] = zmm2_1[0] + zmm6_1
int16_t var_162_1 = (int.d(zmm2_1[0]) s>> 1).w
int32_t rax_28 = (r14_2 + 1).d
rcx_7[1].d = rax_28

if (rax_28 s> *(rcx_7 + 0xc))
    sub_1405c4ec0(rcx_7)

int64_t rdx_6 = r14_2 * 5
int64_t rcx_8 = *rax_7[4].q
float var_184_2 = zmm13[0]
int32_t var_174_2 = 0
int64_t var_180_2 = 0
*(rcx_8 + (rdx_6 << 3)) = var_188.o
*(rcx_8 + (rdx_6 << 3) + 0x10) = var_178_1.o
var_188 = var_158[0]
*(rcx_8 + (rdx_6 << 3) + 0x20) = rax_23.q
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
*(rax_7 + 0x64) += 1
zmm2_1 = arg2[5].d
int64_t* rcx_9 = rax_7[4].q
zmm8_1[0] = zmm8_1[0] f* arg2[1].d
int64_t r14_3 = sx.q(rcx_9[1].d)
zmm8_1[0] = zmm8_1[0] f+ arg2[3].d
zmm8_1[0] = zmm8_1[0] f+ arg2[3].d
zmm8_1[0] = zmm8_1[0] + zmm6_1
int32_t rax_30 = int.d(zmm8_1[0])
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_30 s>> 1))
zmm8_1[0] = zmm8_1[0] f+ *(arg2 + 0x1c)
int32_t var_170_2 = zmm0_1.d
zmm8_1[0] = zmm8_1[0] f+ *(arg2 + 0x1c)
zmm8_1[0] = zmm8_1[0] + zmm6_1
int32_t rax_33 = int.d(zmm8_1[0]) s>> 1
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int32_t rax_34 = arg_10
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_33))
zmm2_1[0] = zmm2_1[0] + zmm6_1
int32_t var_16c_2 = zmm0_1.d
zmm0_1.d = zmm8_1.d f/ zmm2_1[0]
int32_t rax_35 = int.d(zmm2_1[0])
int32_t var_178_2 = zmm0_1.d
zmm9_1[0] = zmm9_1[0] f* *(arg2 + 0x2c)
int16_t var_164_2 = (rax_35 s>> 1).w
zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
zmm9_1[0] = zmm9_1[0] + zmm6_1
int16_t var_162_2 = (int.d(zmm9_1[0]) s>> 1).w
int32_t rax_39 = (r14_3 + 1).d
rcx_9[1].d = rax_39

if (rax_39 s> *(rcx_9 + 0xc))
    sub_1405c4ec0(rcx_9)

int64_t rdx_8 = r14_3 * 5
int64_t rcx_10 = *rax_7[4].q
float var_184_3 = temp0_1[0]
float zmm4_1 = zmm7_1[0]
int64_t var_180_3 = 0
*(rcx_10 + (rdx_8 << 3)) = var_188.o
*(rcx_10 + (rdx_8 << 3) + 0x10) = var_178_2.o
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
*(rcx_10 + (rdx_8 << 3) + 0x20) = rax_34.q
*(rax_7 + 0x64) += 1
zmm7_1[0] = zmm7_1[0] f* arg2[2].d
int64_t* rcx_11 = rax_7[4].q
zmm4_1 = zmm4_1 f* *(arg2 + 0x14)
zmm8_1[0] = zmm8_1[0] f* arg2[1].d
int64_t r14_4 = sx.q(rcx_11[1].d)
zmm3 = arg2[5].d
zmm0_1 = var_158
zmm8_1[0] = zmm8_1[0] + zmm7_1[0]
var_188 = zmm0_1.d
zmm8_1[0] = zmm8_1[0] f+ arg2[3].d
zmm8_1[0] = zmm8_1[0] + zmm7_1[0]
zmm2_1 = *(arg2 + 0x2c)
zmm8_1[0] = zmm8_1[0] f+ arg2[3].d
zmm8_1[0] = zmm8_1[0] + zmm6_1
int32_t rax_41 = int.d(zmm8_1[0])
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_41 s>> 1))
zmm8_1[0] = zmm8_1[0] + zmm4_1
int32_t var_170_3 = zmm0_1.d
zmm8_1[0] = zmm8_1[0] f+ *(arg2 + 0x1c)
zmm8_1[0] = zmm8_1[0] + zmm4_1
zmm8_1[0] = zmm8_1[0] f+ *(arg2 + 0x1c)
zmm8_1[0] = zmm8_1[0] + zmm6_1
int32_t rax_43 = int.d(zmm8_1[0])
zmm3[0] = zmm3[0] * zmm9_1[0]
zmm3[0] = zmm3[0] + zmm3[0]
int32_t rax_45 = arg_10
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_43 s>> 1))
zmm3[0] = zmm3[0] + zmm6_1
int32_t var_16c_3 = zmm0_1.d
zmm0_1.d = zmm7_1.d f/ zmm2_1[0]
int32_t rax_46 = int.d(zmm3[0])
int32_t var_174_3 = zmm0_1.d
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int16_t var_164_3 = (rax_46 s>> 1).w
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm2_1[0] = zmm2_1[0] + zmm6_1
int16_t rax_49 = (int.d(zmm2_1[0]) s>> 1).w
zmm8_1[0] = zmm8_1[0] / zmm3[0]
int16_t var_162_3 = rax_49
int32_t rax_50 = (r14_4 + 1).d
rcx_11[1].d = rax_50
float var_178_3 = zmm8_1[0]

if (rax_50 s> *(rcx_11 + 0xc))
    sub_1405c4ec0(rcx_11)

int64_t rdx_10 = r14_4 * 5
var_180_3:4.d = 0
int64_t rcx_12 = *rax_7[4].q
float var_184_4 = zmm13[0]
var_180_3.d = zmm14[0]
int32_t var_174_4 = 0
*(rcx_12 + (rdx_10 << 3)) = var_188.o
*(rcx_12 + (rdx_10 << 3) + 0x10) = var_178_3.o
*(rcx_12 + (rdx_10 << 3) + 0x20) = rax_45.q
*(rax_7 + 0x64) += 1
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm2_1 = arg2[5].d
int64_t* rcx_13 = rax_7[4].q
var_188 = var_138.d
zmm8_1[0] = zmm8_1[0] f* arg2[1].d
int64_t r14_5 = sx.q(rcx_13[1].d)
zmm8_1[0] = zmm8_1[0] f+ arg2[3].d
zmm8_1[0] = zmm8_1[0] f+ arg2[3].d
zmm8_1[0] = zmm8_1[0] + zmm6_1
int32_t rax_52 = int.d(zmm8_1[0])
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_52 s>> 1))
zmm8_1[0] = zmm8_1[0] f+ *(arg2 + 0x1c)
int32_t var_170_4 = zmm0_1.d
zmm8_1[0] = zmm8_1[0] f+ *(arg2 + 0x1c)
zmm8_1[0] = zmm8_1[0] + zmm6_1
int32_t rax_55 = int.d(zmm8_1[0]) s>> 1
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int32_t rax_56 = arg_10
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_55))
zmm2_1[0] = zmm2_1[0] + zmm6_1
int32_t var_16c_4 = zmm0_1.d
zmm0_1.d = zmm8_1.d f/ zmm2_1[0]
int32_t rax_57 = int.d(zmm2_1[0])
int32_t var_178_4 = zmm0_1.d
zmm9_1[0] = zmm9_1[0] f* *(arg2 + 0x2c)
int16_t var_164_4 = (rax_57 s>> 1).w
zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
zmm9_1[0] = zmm9_1[0] + zmm6_1
int16_t var_162_4 = (int.d(zmm9_1[0]) s>> 1).w
int32_t rax_61 = (r14_5 + 1).d
rcx_13[1].d = rax_61

if (rax_61 s> *(rcx_13 + 0xc))
    sub_1405c4ec0(rcx_13)

int64_t rdx_12 = r14_5 * 5
var_180_3:4.d = 0
int64_t rcx_14 = *rax_7[4].q
float var_184_5 = temp0_1[0]
zmm4_1 = zmm7_1[0]
var_180_3.d = zmm14[0]
*(rcx_14 + (rdx_12 << 3)) = var_188.o
*(rcx_14 + (rdx_12 << 3) + 0x10) = var_178_4.o
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
*(rcx_14 + (rdx_12 << 3) + 0x20) = rax_56.q
*(rax_7 + 0x64) += 1
zmm7_1[0] = zmm7_1[0] f* arg2[2].d
int64_t* rcx_15 = rax_7[4].q
zmm4_1 = zmm4_1 f* *(arg2 + 0x14)
zmm8_1[0] = zmm8_1[0] f* arg2[1].d
int64_t r14_6 = sx.q(rcx_15[1].d)
zmm3 = arg2[5].d
zmm8_1[0] = zmm8_1[0] + zmm7_1[0]
var_188 = var_138.d
zmm8_1[0] = zmm8_1[0] f+ arg2[3].d
zmm8_1[0] = zmm8_1[0] + zmm7_1[0]
zmm2_1 = *(arg2 + 0x2c)
zmm8_1[0] = zmm8_1[0] f+ arg2[3].d
zmm8_1[0] = zmm8_1[0] + zmm6_1
int32_t rax_63 = int.d(zmm8_1[0])
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_63 s>> 1))
zmm8_1[0] = zmm8_1[0] + zmm4_1
int32_t var_170_5 = zmm0_1.d
zmm8_1[0] = zmm8_1[0] f+ *(arg2 + 0x1c)
zmm8_1[0] = zmm8_1[0] + zmm4_1
zmm8_1[0] = zmm8_1[0] f+ *(arg2 + 0x1c)
zmm8_1[0] = zmm8_1[0] + zmm6_1
int32_t rax_65 = int.d(zmm8_1[0])
zmm3[0] = zmm3[0] * zmm9_1[0]
zmm3[0] = zmm3[0] + zmm3[0]
int32_t rax_67 = arg_10
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_65 s>> 1))
zmm3[0] = zmm3[0] + zmm6_1
int32_t var_16c_5 = zmm0_1.d
zmm0_1.d = zmm7_1.d f/ zmm2_1[0]
int32_t rax_68 = int.d(zmm3[0])
int32_t var_174_5 = zmm0_1.d
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int16_t var_164_5 = (rax_68 s>> 1).w
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm2_1[0] = zmm2_1[0] + zmm6_1
int16_t rax_71 = (int.d(zmm2_1[0]) s>> 1).w
zmm8_1[0] = zmm8_1[0] / zmm3[0]
int16_t var_162_5 = rax_71
int32_t rax_72 = (r14_6 + 1).d
rcx_15[1].d = rax_72
float var_178_5 = zmm8_1[0]

if (rax_72 s> *(rcx_15 + 0xc))
    sub_1405c4ec0(rcx_15)

int64_t rdx_14 = r14_6 * 5
var_180_3:4.d = 0
int64_t rcx_16 = *rax_7[4].q
float var_184_6 = zmm13[0]
var_180_3.d = zmm14[0]
int32_t var_174_6 = 0
*(rcx_16 + (rdx_14 << 3)) = var_188.o
*(rcx_16 + (rdx_14 << 3) + 0x10) = var_178_5.o
var_188 = arg_18[0]
*(rcx_16 + (rdx_14 << 3) + 0x20) = rax_67.q
zmm10[0] = zmm10[0] + zmm10[0]
*(rax_7 + 0x64) += 1
zmm2_1 = arg2[5].d
int64_t* rcx_17 = rax_7[4].q
zmm10[0] = zmm10[0] f* arg2[1].d
int64_t r14_7 = sx.q(rcx_17[1].d)
zmm10[0] = zmm10[0] f+ arg2[3].d
zmm10[0] = zmm10[0] f+ arg2[3].d
zmm10[0] = zmm10[0] + zmm6_1
int32_t rax_74 = int.d(zmm10[0])
zmm10[0] = zmm10[0] + zmm10[0]
zmm10[0] = zmm10[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_74 s>> 1))
zmm10[0] = zmm10[0] f+ *(arg2 + 0x1c)
int32_t var_170_6 = zmm0_1.d
zmm10[0] = zmm10[0] f+ *(arg2 + 0x1c)
zmm10[0] = zmm10[0] + zmm6_1
int32_t rax_77 = int.d(zmm10[0]) s>> 1
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int32_t rax_78 = arg_10
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_77))
zmm2_1[0] = zmm2_1[0] + zmm6_1
int32_t var_16c_6 = zmm0_1.d
zmm0_1.d = zmm10.d f/ zmm2_1[0]
int32_t rax_79 = int.d(zmm2_1[0])
int32_t var_178_6 = zmm0_1.d
zmm9_1[0] = zmm9_1[0] f* *(arg2 + 0x2c)
int16_t var_164_6 = (rax_79 s>> 1).w
zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
zmm9_1[0] = zmm9_1[0] + zmm6_1
int16_t var_162_6 = (int.d(zmm9_1[0]) s>> 1).w
int32_t rax_83 = (r14_7 + 1).d
rcx_17[1].d = rax_83

if (rax_83 s> *(rcx_17 + 0xc))
    sub_1405c4ec0(rcx_17)

int64_t rdx_16 = r14_7 * 5
var_180_3:4.d = 0
int64_t rcx_18 = *rax_7[4].q
float var_184_7 = temp0_1[0]
zmm4_1 = zmm7_1[0]
var_180_3.d = zmm14[0]
*(rcx_18 + (rdx_16 << 3)) = var_188.o
*(rcx_18 + (rdx_16 << 3) + 0x10) = var_178_6.o
zmm10[0] = zmm10[0] + zmm10[0]
*(rcx_18 + (rdx_16 << 3) + 0x20) = rax_78.q
*(rax_7 + 0x64) += 1
zmm7_1[0] = zmm7_1[0] f* arg2[2].d
int64_t* rcx_19 = rax_7[4].q
zmm4_1 = zmm4_1 f* *(arg2 + 0x14)
zmm10[0] = zmm10[0] f* arg2[1].d
int64_t r14_8 = sx.q(rcx_19[1].d)
zmm3 = arg2[5].d
zmm10[0] = zmm10[0] + zmm7_1[0]
var_188 = arg_18.d
zmm10[0] = zmm10[0] f+ arg2[3].d
zmm10[0] = zmm10[0] + zmm7_1[0]
zmm2_1 = *(arg2 + 0x2c)
zmm10[0] = zmm10[0] f+ arg2[3].d
zmm10[0] = zmm10[0] + zmm6_1
int32_t rax_85 = int.d(zmm10[0])
zmm10[0] = zmm10[0] + zmm10[0]
zmm10[0] = zmm10[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_85 s>> 1))
zmm10[0] = zmm10[0] + zmm4_1
int32_t var_170_7 = zmm0_1.d
zmm10[0] = zmm10[0] f+ *(arg2 + 0x1c)
zmm10[0] = zmm10[0] + zmm4_1
zmm10[0] = zmm10[0] f+ *(arg2 + 0x1c)
zmm10[0] = zmm10[0] + zmm6_1
int32_t rax_87 = int.d(zmm10[0])
zmm3[0] = zmm3[0] * zmm9_1[0]
zmm3[0] = zmm3[0] + zmm3[0]
int32_t rax_89 = arg_10
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_87 s>> 1))
zmm3[0] = zmm3[0] + zmm6_1
int32_t var_16c_7 = zmm0_1.d
zmm0_1.d = zmm7_1.d f/ zmm2_1[0]
int32_t rax_90 = int.d(zmm3[0])
int32_t var_174_7 = zmm0_1.d
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int16_t var_164_7 = (rax_90 s>> 1).w
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm2_1[0] = zmm2_1[0] + zmm6_1
int16_t rax_93 = (int.d(zmm2_1[0]) s>> 1).w
zmm10[0] = zmm10[0] / zmm3[0]
int16_t var_162_7 = rax_93
int32_t rax_94 = (r14_8 + 1).d
rcx_19[1].d = rax_94
float var_178_7 = zmm10[0]

if (rax_94 s> *(rcx_19 + 0xc))
    sub_1405c4ec0(rcx_19)

int64_t rdx_18 = r14_8 * 5
int64_t rcx_20 = *rax_7[4].q
float var_184_8 = zmm13[0]
int32_t var_174_8 = 0
int64_t var_180_4 = 0
*(rcx_20 + (rdx_18 << 3)) = var_188.o
*(rcx_20 + (rdx_18 << 3) + 0x10) = var_178_7.o
*(rcx_20 + (rdx_18 << 3) + 0x20) = rax_89.q
*(rax_7 + 0x64) += 1
zmm10[0] = zmm10[0] + zmm10[0]
zmm2_1 = arg2[5].d
int64_t* rcx_21 = rax_7[4].q
var_188 = var_134.d
zmm10[0] = zmm10[0] f* arg2[1].d
int64_t r14_9 = sx.q(rcx_21[1].d)
zmm10[0] = zmm10[0] f+ arg2[3].d
zmm10[0] = zmm10[0] f+ arg2[3].d
zmm10[0] = zmm10[0] + zmm6_1
int32_t rax_96 = int.d(zmm10[0])
zmm10[0] = zmm10[0] + zmm10[0]
zmm10[0] = zmm10[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_96 s>> 1))
zmm10[0] = zmm10[0] f+ *(arg2 + 0x1c)
int32_t var_170_8 = zmm0_1.d
zmm10[0] = zmm10[0] f+ *(arg2 + 0x1c)
zmm10[0] = zmm10[0] + zmm6_1
int32_t rax_99 = int.d(zmm10[0]) s>> 1
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int32_t rax_100 = arg_10
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_99))
zmm2_1[0] = zmm2_1[0] + zmm6_1
int32_t var_16c_8 = zmm0_1.d
zmm0_1.d = zmm10.d f/ zmm2_1[0]
int32_t rax_101 = int.d(zmm2_1[0])
int32_t var_178_8 = zmm0_1.d
zmm9_1[0] = zmm9_1[0] f* *(arg2 + 0x2c)
int16_t var_164_8 = (rax_101 s>> 1).w
zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
zmm9_1[0] = zmm9_1[0] + zmm6_1
int16_t var_162_8 = (int.d(zmm9_1[0]) s>> 1).w
int32_t rax_105 = (r14_9 + 1).d
rcx_21[1].d = rax_105

if (rax_105 s> *(rcx_21 + 0xc))
    sub_1405c4ec0(rcx_21)

int64_t rdx_20 = r14_9 * 5
int64_t rcx_22 = *rax_7[4].q
float var_184_9 = temp0_1[0]
zmm4_1 = zmm7_1[0]
int64_t var_180_5 = 0
*(rcx_22 + (rdx_20 << 3)) = var_188.o
*(rcx_22 + (rdx_20 << 3) + 0x10) = var_178_8.o
zmm10[0] = zmm10[0] + zmm10[0]
*(rcx_22 + (rdx_20 << 3) + 0x20) = rax_100.q
*(rax_7 + 0x64) += 1
zmm7_1[0] = zmm7_1[0] f* arg2[2].d
int64_t* rcx_23 = rax_7[4].q
zmm4_1 = zmm4_1 f* *(arg2 + 0x14)
zmm10[0] = zmm10[0] f* arg2[1].d
int64_t r14_10 = sx.q(rcx_23[1].d)
zmm3 = arg2[5].d
zmm10[0] = zmm10[0] + zmm7_1[0]
var_188 = var_134.d
zmm10[0] = zmm10[0] f+ arg2[3].d
zmm10[0] = zmm10[0] + zmm7_1[0]
zmm2_1 = *(arg2 + 0x2c)
zmm10[0] = zmm10[0] f+ arg2[3].d
zmm10[0] = zmm10[0] + zmm6_1
int32_t rax_107 = int.d(zmm10[0])
zmm10[0] = zmm10[0] + zmm10[0]
zmm10[0] = zmm10[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_107 s>> 1))
zmm10[0] = zmm10[0] + zmm4_1
int32_t var_170_9 = zmm0_1.d
zmm10[0] = zmm10[0] f+ *(arg2 + 0x1c)
zmm10[0] = zmm10[0] + zmm4_1
zmm10[0] = zmm10[0] f+ *(arg2 + 0x1c)
zmm10[0] = zmm10[0] + zmm6_1
int32_t rax_109 = int.d(zmm10[0])
zmm3[0] = zmm3[0] * zmm9_1[0]
zmm3[0] = zmm3[0] + zmm3[0]
int32_t rax_111 = arg_10
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_109 s>> 1))
zmm3[0] = zmm3[0] + zmm6_1
int32_t var_16c_9 = zmm0_1.d
zmm0_1.d = zmm7_1.d f/ zmm2_1[0]
int32_t rax_112 = int.d(zmm3[0])
int32_t var_174_9 = zmm0_1.d
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int16_t var_164_9 = (rax_112 s>> 1).w
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm2_1[0] = zmm2_1[0] + zmm6_1
int16_t rax_115 = (int.d(zmm2_1[0]) s>> 1).w
zmm10[0] = zmm10[0] / zmm3[0]
int16_t var_162_9 = rax_115
int32_t rax_116 = (r14_10 + 1).d
rcx_23[1].d = rax_116
float var_178_9 = zmm10[0]

if (rax_116 s> *(rcx_23 + 0xc))
    sub_1405c4ec0(rcx_23)

int64_t rdx_22 = r14_10 * 5
int64_t rcx_24 = *rax_7[4].q
float zmm5_1[0x4] = var_124
float var_184_10 = zmm13[0]
int32_t var_174_10 = 0
*(rcx_24 + (rdx_22 << 3)) = var_188.o
int64_t var_180_6 = 0
*(rcx_24 + (rdx_22 << 3) + 0x10) = var_178_9.o
*(rcx_24 + (rdx_22 << 3) + 0x20) = rax_111.q
*(rax_7 + 0x64) += 1
zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
zmm2_1 = arg2[5].d
int64_t* rcx_25 = rax_7[4].q
var_188 = arg_18.d
zmm5_1[0] = zmm5_1[0] f* arg2[1].d
int64_t r14_11 = sx.q(rcx_25[1].d)
zmm5_1[0] = zmm5_1[0] f+ arg2[3].d
zmm5_1[0] = zmm5_1[0] f+ arg2[3].d
zmm5_1[0] = zmm5_1[0] + zmm6_1
int32_t rax_118 = int.d(zmm5_1[0])
zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
zmm5_1[0] = zmm5_1[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_118 s>> 1))
zmm5_1[0] = zmm5_1[0] f+ *(arg2 + 0x1c)
int32_t var_170_10 = zmm0_1.d
zmm5_1[0] = zmm5_1[0] f+ *(arg2 + 0x1c)
zmm5_1[0] = zmm5_1[0] + zmm6_1
int32_t rax_121 = int.d(zmm5_1[0]) s>> 1
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int32_t rax_122 = arg_10
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_121))
zmm2_1[0] = zmm2_1[0] + zmm6_1
int32_t var_16c_10 = zmm0_1.d
zmm0_1.d = zmm5_1.d f/ zmm2_1[0]
int32_t rax_123 = int.d(zmm2_1[0])
int32_t var_178_10 = zmm0_1.d
zmm9_1[0] = zmm9_1[0] f* *(arg2 + 0x2c)
int16_t var_164_10 = (rax_123 s>> 1).w
zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
zmm9_1[0] = zmm9_1[0] + zmm6_1
int16_t var_162_10 = (int.d(zmm9_1[0]) s>> 1).w
int32_t rax_127 = (r14_11 + 1).d
rcx_25[1].d = rax_127

if (rax_127 s> *(rcx_25 + 0xc))
    sub_1405c4ec0(rcx_25)
    zmm5_1 = var_124

int64_t rdx_24 = r14_11 * 5
int64_t rcx_26 = *rax_7[4].q
float var_184_11 = temp0_1[0]
zmm4_1 = zmm7_1[0]
int64_t var_180_7 = 0
*(rcx_26 + (rdx_24 << 3)) = var_188.o
*(rcx_26 + (rdx_24 << 3) + 0x10) = var_178_10.o
zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
*(rcx_26 + (rdx_24 << 3) + 0x20) = rax_122.q
*(rax_7 + 0x64) += 1
zmm7_1[0] = zmm7_1[0] f* arg2[2].d
int64_t* rcx_27 = rax_7[4].q
zmm4_1 = zmm4_1 f* *(arg2 + 0x14)
zmm5_1[0] = zmm5_1[0] f* arg2[1].d
int64_t r14_12 = sx.q(rcx_27[1].d)
zmm3 = arg2[5].d
zmm5_1[0] = zmm5_1[0] + zmm7_1[0]
var_188 = arg_18.d
zmm5_1[0] = zmm5_1[0] f+ arg2[3].d
zmm5_1[0] = zmm5_1[0] + zmm7_1[0]
zmm2_1 = *(arg2 + 0x2c)
zmm5_1[0] = zmm5_1[0] f+ arg2[3].d
zmm5_1[0] = zmm5_1[0] + zmm6_1
int32_t rax_129 = int.d(zmm5_1[0])
zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
zmm5_1[0] = zmm5_1[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_129 s>> 1))
zmm5_1[0] = zmm5_1[0] + zmm4_1
int32_t var_170_11 = zmm0_1.d
zmm5_1[0] = zmm5_1[0] f+ *(arg2 + 0x1c)
zmm5_1[0] = zmm5_1[0] + zmm4_1
zmm5_1[0] = zmm5_1[0] f+ *(arg2 + 0x1c)
zmm5_1[0] = zmm5_1[0] + zmm6_1
int32_t rax_131 = int.d(zmm5_1[0])
zmm3[0] = zmm3[0] * zmm9_1[0]
zmm3[0] = zmm3[0] + zmm3[0]
int32_t rax_133 = arg_10
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_131 s>> 1))
zmm3[0] = zmm3[0] + zmm6_1
int32_t var_16c_11 = zmm0_1.d
zmm0_1.d = zmm7_1.d f/ zmm2_1[0]
int32_t rax_134 = int.d(zmm3[0])
int32_t var_174_11 = zmm0_1.d
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int16_t var_164_11 = (rax_134 s>> 1).w
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm2_1[0] = zmm2_1[0] + zmm6_1
int16_t rax_137 = (int.d(zmm2_1[0]) s>> 1).w
zmm5_1[0] = zmm5_1[0] / zmm3[0]
int16_t var_162_11 = rax_137
int32_t rax_138 = (r14_12 + 1).d
rcx_27[1].d = rax_138
float var_178_11 = zmm5_1[0]

if (rax_138 s> *(rcx_27 + 0xc))
    sub_1405c4ec0(rcx_27)

int64_t rdx_26 = r14_12 * 5
zmm0_1 = var_188.o
var_180_7.d = 0
int64_t rcx_28 = *rax_7[4].q
zmm15 = var_138
var_188 = zmm15[0]
float var_184_12 = zmm13[0]
*(rcx_28 + (rdx_26 << 3)) = zmm0_1
*(rcx_28 + (rdx_26 << 3) + 0x10) = var_178_11.o
*(rcx_28 + (rdx_26 << 3) + 0x20) = rax_133.q
*(rax_7 + 0x64) += 1
zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
zmm2_1 = *(arg2 + 0x2c)
int64_t* rcx_29 = rax_7[4].q
var_180_7:4.d = zmm11.d
int32_t var_178_12 = 0
zmm7_1[0] = zmm7_1[0] f* arg2[2].d
int64_t r14_13 = sx.q(rcx_29[1].d)
zmm7_1[0] = zmm7_1[0] f+ arg2[3].d
zmm7_1[0] = zmm7_1[0] f+ arg2[3].d
zmm7_1[0] = zmm7_1[0] + zmm6_1
int32_t rax_140 = int.d(zmm7_1[0])
zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
zmm7_1[0] = zmm7_1[0] f* *(arg2 + 0x14)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_140 s>> 1))
zmm7_1[0] = zmm7_1[0] f+ *(arg2 + 0x1c)
int32_t var_170_12 = zmm0_1.d
zmm7_1[0] = zmm7_1[0] f+ *(arg2 + 0x1c)
zmm7_1[0] = zmm7_1[0] + zmm6_1
int32_t rax_142 = int.d(zmm7_1[0])
zmm9_1[0] = zmm9_1[0] f* arg2[5].d
zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
int32_t rax_144 = arg_10
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_142 s>> 1))
zmm9_1[0] = zmm9_1[0] + zmm6_1
int32_t var_16c_12 = zmm0_1.d
zmm0_1.d = zmm7_1.d f/ zmm2_1[0]
int32_t var_174_12 = zmm0_1.d
int16_t rax_146 = (int.d(zmm9_1[0]) s>> 1).w
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int16_t var_164_12 = rax_146
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm2_1[0] = zmm2_1[0] + zmm6_1
int16_t var_162_12 = (int.d(zmm2_1[0]) s>> 1).w
int32_t rax_149 = (r14_13 + 1).d
rcx_29[1].d = rax_149

if (rax_149 s> *(rcx_29 + 0xc))
    sub_1405c4ec0(rcx_29)

int64_t rdx_28 = r14_13 * 5
zmm0_1 = var_188.o
var_180_7.d = 0
int64_t rcx_30 = *rax_7[4].q
zmm3 = var_128
var_188 = zmm15[0]
var_180_7:4.d = zmm11.d
*(rcx_30 + (rdx_28 << 3)) = zmm0_1
*(rcx_30 + (rdx_28 << 3) + 0x10) = var_178_12.o
*(rcx_30 + (rdx_28 << 3) + 0x20) = rax_144.q
*(rax_7 + 0x64) += 1
zmm3[0] = zmm3[0] + zmm3[0]
zmm2_1 = *(arg2 + 0x2c)
int64_t* rcx_31 = rax_7[4].q
int32_t var_184_13 = arg_20.d
zmm3[0] = zmm3[0] f* arg2[2].d
int64_t r14_14 = sx.q(rcx_31[1].d)
int32_t var_178_13 = 0
zmm3[0] = zmm3[0] f+ arg2[3].d
zmm3[0] = zmm3[0] f+ arg2[3].d
zmm3[0] = zmm3[0] + zmm6_1
int32_t rax_151 = int.d(zmm3[0])
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] f* *(arg2 + 0x14)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_151 s>> 1))
zmm3[0] = zmm3[0] f+ *(arg2 + 0x1c)
int32_t var_170_13 = zmm0_1.d
zmm3[0] = zmm3[0] f+ *(arg2 + 0x1c)
zmm3[0] = zmm3[0] + zmm6_1
int32_t rax_153 = int.d(zmm3[0])
zmm9_1[0] = zmm9_1[0] f* arg2[5].d
zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
int32_t rax_155 = arg_10
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_153 s>> 1))
zmm9_1[0] = zmm9_1[0] + zmm6_1
int32_t var_16c_13 = zmm0_1.d
zmm0_1.d = zmm3.d f/ zmm2_1[0]
int32_t var_174_13 = zmm0_1.d
int16_t rax_157 = (int.d(zmm9_1[0]) s>> 1).w
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int16_t var_164_13 = rax_157
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm2_1[0] = zmm2_1[0] + zmm6_1
int16_t var_162_13 = (int.d(zmm2_1[0]) s>> 1).w
int32_t rax_160 = (r14_14 + 1).d
rcx_31[1].d = rax_160

if (rax_160 s> *(rcx_31 + 0xc))
    sub_1405c4ec0(rcx_31)

int64_t rdx_30 = r14_14 * 5
zmm0_1 = var_188.o
var_180_7.d = 0
int64_t rcx_32 = *rax_7[4].q
zmm12 = var_158
zmm4_1 = zmm7_1[0]
var_188 = zmm12[0]
float var_184_14 = zmm13[0]
*(rcx_32 + (rdx_30 << 3)) = zmm0_1
*(rcx_32 + (rdx_30 << 3) + 0x10) = var_178_13.o
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
*(rcx_32 + (rdx_30 << 3) + 0x20) = rax_155.q
*(rax_7 + 0x64) += 1
zmm7_1[0] = zmm7_1[0] f* arg2[2].d
int64_t* rcx_33 = rax_7[4].q
zmm4_1 = zmm4_1 f* *(arg2 + 0x14)
zmm8_1[0] = zmm8_1[0] f* arg2[1].d
int64_t r14_15 = sx.q(rcx_33[1].d)
zmm3 = arg2[5].d
var_180_7:4.d = zmm11.d
zmm8_1[0] = zmm8_1[0] + zmm7_1[0]
zmm8_1[0] = zmm8_1[0] f+ arg2[3].d
zmm8_1[0] = zmm8_1[0] + zmm7_1[0]
zmm2_1 = *(arg2 + 0x2c)
zmm8_1[0] = zmm8_1[0] f+ arg2[3].d
zmm8_1[0] = zmm8_1[0] + zmm6_1
int32_t rax_162 = int.d(zmm8_1[0])
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_162 s>> 1))
zmm8_1[0] = zmm8_1[0] + zmm4_1
int32_t var_170_14 = zmm0_1.d
zmm8_1[0] = zmm8_1[0] f+ *(arg2 + 0x1c)
zmm8_1[0] = zmm8_1[0] + zmm4_1
zmm8_1[0] = zmm8_1[0] f+ *(arg2 + 0x1c)
zmm8_1[0] = zmm8_1[0] + zmm6_1
int32_t rax_164 = int.d(zmm8_1[0])
zmm3[0] = zmm3[0] * zmm9_1[0]
zmm3[0] = zmm3[0] + zmm3[0]
int32_t rax_166 = arg_10
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_164 s>> 1))
zmm3[0] = zmm3[0] + zmm6_1
int32_t var_16c_14 = zmm0_1.d
zmm0_1.d = zmm7_1.d f/ zmm2_1[0]
int32_t rax_167 = int.d(zmm3[0])
int32_t var_174_14 = zmm0_1.d
zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
int16_t var_164_14 = (rax_167 s>> 1).w
zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
zmm2_1[0] = zmm2_1[0] + zmm6_1
int16_t rax_170 = (int.d(zmm2_1[0]) s>> 1).w
zmm8_1[0] = zmm8_1[0] / zmm3[0]
int16_t var_162_14 = rax_170
int32_t rax_171 = (r14_15 + 1).d
rcx_33[1].d = rax_171
float var_178_14 = zmm8_1[0]

if (rax_171 s> *(rcx_33 + 0xc))
    sub_1405c4ec0(rcx_33)

int64_t rdx_32 = r14_15 * 5
int64_t rcx_34 = *rax_7[4].q
char var_1a8
var_1a8.q = &arg_10
var_1b0.q = &var_148
*(rcx_34 + (rdx_32 << 3)) = var_188.o
var_148[2] = 0
*(rcx_34 + (rdx_32 << 3) + 0x10) = var_178_14.o
*(rcx_34 + (rdx_32 << 3) + 0x20) = rax_166.q
*(rax_7 + 0x64) += 1
var_148[1] = arg_20.d
var_148[0] = zmm12[0]
var_148[3] = zmm11.d
arg_8.d = zmm8_1[0]
float arg_c = var_128
var_1b8.d = zmm9_1[0]
int32_t* rax_173
float zmm7_2
rax_173, zmm7_2 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_173)
zmm12 = var_134
var_1a8.q = &arg_10
var_148[0] = zmm12[0]
var_1b0.q = &var_148
var_1b8.d = zmm9_1[0]
var_148[1] = zmm13[0]
var_148[3] = zmm11.d
arg_8.d = zmm10[0]
arg_c = zmm7_2
var_148[2] = 0
int128_t* rax_174
float zmm6_2
rax_174, zmm6_2 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_174)
var_1a8.q = &arg_10
var_148[0] = zmm12[0]
var_1b0.q = &var_148
var_1b8.d = zmm9_1[0]
var_148[1] = arg_20
var_148[3] = zmm11.d
arg_8.d = zmm10[0]
arg_c = zmm6_2
var_148[2] = 0
int32_t* rax_175
float zmm7_3
rax_175, zmm7_3 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_175)
zmm12 = var_124
var_148[0] = arg_18
var_1a8.q = &arg_10
var_148[1] = zmm13[0]
var_148[3] = zmm11.d
arg_8.d = zmm12[0]
arg_c = zmm7_3
var_148[2] = 0
var_1b0.q = &var_148
var_1b8.d = zmm9_1[0]
int32_t* rax_176
float zmm6_3
rax_176, zmm6_3 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_176)
zmm13 = arg_18
var_1a8.q = &arg_10
var_148[0] = zmm13[0]
var_1b0.q = &var_148
var_1b8.d = zmm9_1[0]
var_148[1] = arg_20
var_148[3] = zmm11.d
arg_8.d = zmm12[0]
arg_c = zmm6_3
var_148[2] = 0
int32_t* rax_177
float zmm6_4
rax_177, zmm6_4 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_177)
zmm11 = var_120
var_1a8.q = &arg_10
var_148[0] = zmm15[0]
var_1b0.q = &var_148
var_1b8.d = zmm9_1[0]
var_148[1] = zmm11.d
arg_c = zmm6_4
var_148[2].q = 0
arg_8.d = 0
int128_t* rax_178
int32_t zmm7_5
rax_178, zmm7_5 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_178)
var_1a8.q = &arg_10
var_148[0] = zmm15[0]
var_1b0.q = &var_148
var_1b8.d = zmm9_1[0]
var_148[1] = zmm7_5
arg_c = var_130
var_148[2].q = 0
arg_8.d = 0
int32_t* rax_179
float zmm6_5
rax_179, zmm6_5 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_179)
var_1a8.q = &arg_10
var_1b0.q = &var_158
var_1b8.d = zmm9_1[0]
var_158[0] = var_158.d
var_158[1] = zmm11.d
arg_8.d = zmm8_1[0]
arg_c = zmm6_5
var_158[2].q = 0
int128_t* rax_180
int32_t zmm7_7
rax_180, zmm7_7 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_180)
var_1a8.q = &arg_10
var_158[1] = arg_20
var_1b0.q = &var_158
var_1b8.d = zmm9_1[0]
var_158[0] = zmm7_7
arg_8.d = zmm8_1[0]
arg_c = var_130
var_158[2].q = 0
int32_t* rax_181
float zmm6_6
rax_181, zmm6_6 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_181)
var_158[0] = zmm15[0]
var_1a8.q = &arg_10
var_158[1] = zmm11.d
var_1b0.q = &var_158
var_1b8.d = zmm9_1[0]
var_158[2] = zmm14[0]
arg_8.d = zmm8_1[0]
arg_c = zmm6_6
var_158[3] = 0
sub_140de7940(rax_7, sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8))
var_158[0] = zmm15[0]
zmm15 = arg_20
var_1a8.q = &arg_10
arg_8.d = zmm8_1[0]
zmm8_1 = var_130
var_1b0.q = &var_158
var_1b8.d = zmm9_1[0]
var_158[1] = zmm15[0]
var_158[2] = zmm14[0]
arg_c = zmm8_1[0]
var_158[3] = 0
int32_t* rax_183
float zmm6_7
rax_183, zmm6_7 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_183)
var_158[0] = zmm13[0]
var_1a8.q = &arg_10
var_158[1] = zmm11.d
var_1b0.q = &var_158
var_1b8.d = zmm9_1[0]
var_158[2] = zmm14[0]
arg_8.d = zmm10[0]
arg_c = zmm6_7
var_158[3] = 0
sub_140de7940(rax_7, sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8))
var_158[0] = zmm13[0]
var_1a8.q = &arg_10
var_158[1] = zmm15[0]
var_1b0.q = &var_158
var_1b8.d = zmm9_1[0]
var_158[2] = zmm14[0]
arg_8.d = zmm10[0]
arg_c = zmm8_1[0]
var_158[3] = 0
int32_t* rax_185
float zmm6_8
rax_185, zmm6_8 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_185)
var_1a8.q = &arg_10
var_158[0] = var_134
var_1b0.q = &var_158
var_1b8.d = zmm9_1[0]
var_158[1] = zmm11.d
arg_8.d = zmm10[0]
arg_c = zmm6_8
var_158[2].q = 0
int32_t* rax_186
int32_t zmm7_9
rax_186, zmm7_9 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_186)
var_158[0] = zmm7_9
var_1a8.q = &arg_10
var_158[1] = zmm15[0]
var_1b0.q = &var_158
var_1b8.d = zmm9_1[0]
arg_8.d = zmm10[0]
arg_c = zmm8_1[0]
var_158[2].q = 0
int32_t* rax_187
float zmm6_9
rax_187, zmm6_9 = sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_187)
var_158[0] = zmm13[0]
var_1a8.q = &arg_10
var_158[1] = zmm11.d
var_1b0.q = &var_158
var_1b8.d = zmm9_1[0]
arg_8.d = zmm12[0]
arg_c = zmm6_9
var_158[2].q = 0
sub_140de7940(rax_7, sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8))
var_158[0] = zmm13[0]
var_158[1] = zmm15[0]
var_1a8.q = &arg_10
arg_8.d = zmm12[0]
var_1b0.q = &var_158
var_1b8.d = zmm9_1[0]
arg_c = zmm8_1[0]
var_158[2].q = 0
sub_140de7940(rax_7, sub_140dd3500(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8))
sub_140de7260(rax_7, r15_1)
sub_140de7260(rax_7, r15_1 + 1)
sub_140de7260(rax_7, r15_1 + 2)
sub_140de7260(rax_7, r15_1 + 2)
sub_140de7260(rax_7, r15_1 + 1)
sub_140de7260(rax_7, r15_1 + 3)
sub_140de7260(rax_7, r15_1 + 4)
sub_140de7260(rax_7, r15_1 + 5)
sub_140de7260(rax_7, r15_1 + 6)
sub_140de7260(rax_7, r15_1 + 6)
sub_140de7260(rax_7, r15_1 + 5)
sub_140de7260(rax_7, r15_1 + 7)
sub_140de7260(rax_7, r15_1 + 8)
sub_140de7260(rax_7, r15_1 + 9)
sub_140de7260(rax_7, r15_1 + 0xa)
sub_140de7260(rax_7, r15_1 + 0xa)
sub_140de7260(rax_7, r15_1 + 9)
sub_140de7260(rax_7, r15_1 + 0xb)
sub_140de7260(rax_7, r15_1 + 0xc)
sub_140de7260(rax_7, r15_1 + 0xd)
sub_140de7260(rax_7, r15_1 + 0xe)
sub_140de7260(rax_7, r15_1 + 0xe)
sub_140de7260(rax_7, r15_1 + 0xd)
sub_140de7260(rax_7, r15_1 + 0xf)
sub_140de7260(rax_7, r15_1 + 0x10)
sub_140de7260(rax_7, r15_1 + 0x11)
sub_140de7260(rax_7, r15_1 + 0x12)
sub_140de7260(rax_7, r15_1 + 0x12)
sub_140de7260(rax_7, r15_1 + 0x11)
sub_140de7260(rax_7, r15_1 + 0x13)
sub_140de7260(rax_7, r15_1 + 0x14)
sub_140de7260(rax_7, r15_1 + 0x15)
sub_140de7260(rax_7, r15_1 + 0x16)
sub_140de7260(rax_7, r15_1 + 0x16)
sub_140de7260(rax_7, r15_1 + 0x15)
sub_140de7260(rax_7, r15_1 + 0x17)
sub_140de7260(rax_7, r15_1 + 0x18)
sub_140de7260(rax_7, r15_1 + 0x19)
sub_140de7260(rax_7, r15_1 + 0x1a)
sub_140de7260(rax_7, r15_1 + 0x1a)
sub_140de7260(rax_7, r15_1 + 0x19)
sub_140de7260(rax_7, r15_1 + 0x1b)
sub_140de7260(rax_7, r15_1 + 0x1c)
sub_140de7260(rax_7, r15_1 + 0x1d)
sub_140de7260(rax_7, r15_1 + 0x1e)
sub_140de7260(rax_7, r15_1 + 0x1e)
sub_140de7260(rax_7, r15_1 + 0x1d)
return sub_140de7260(rax_7, r15_1 + 0x1f)
