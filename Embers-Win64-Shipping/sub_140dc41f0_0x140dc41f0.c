// 函数: sub_140dc41f0
// 地址: 0x140dc41f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg2
int32_t r12 = 1
int64_t* r14 = *(r15 + 0x40)
uint32_t zmm8[0x4] = arg2[9].d
char arg_8 = *(arg2 + 0x4d)
int32_t rax_1 = arg2[6].d
int32_t rax_2 = 1

if (r14 != 0)
    r14 = r14[2]

uint32_t zmm2[0x4] = zmm8

if (r14 != 0)
    int32_t rax_4 = (**r14)(r14, arg3, zmm2)
    int64_t rdx = *r14
    r12 = rax_4
    rax_2 = (*(rdx + 8))(r14, rdx)
    zmm2 = arg2[9].d

uint32_t zmm0[0x4] = zx.o(0)
uint128_t zmm13 = *(arg1 + 0x24)
arg3 = zx.o(0)
uint32_t zmm7[0x4] = *(arg2 + 0x2c)
float zmm4[0x4] = 0x3f800000
uint128_t zmm5 = arg2[5].d
uint128_t zmm12 = *(r15 + 0x18)
float zmm15[0x4] = *(r15 + 0x1c)
uint128_t zmm14 = *(r15 + 0x24)
uint32_t zmm6[0x4] = zmm15
zmm4[0] = 1f f/ zmm2[0]
zmm2 = zmm13
uint32_t var_134 = zmm7[0]
zmm0[0] = float.s(zx.q(r12))
arg3[0] = float.s(zx.q(rax_2))
float var_138 = zmm5.d
zmm2[0] = zmm2[0] f/ zmm0[0]
zmm4[0] = zmm4[0] f* zmm0[0]
zmm13.d = zmm13.d f/ arg3[0]
zmm4[0] = zmm4[0] f* arg3[0]
zmm2[0] = zmm2[0] f+ 1f
uint128_t zmm9
zmm9.d = zmm12.d f* zmm4[0]
arg3 = zmm14
float var_12c = zmm4[0]
arg3[0] = arg3[0] f* zmm4[0]
float arg_18 = zmm2[0]
zmm0 = zmm13
zmm0[0] = zmm0[0] f+ 1f
uint32_t var_120 = zmm2[0]
int32_t var_130 = zmm12.d
float var_128 = zmm15[0]
zmm6[0] = zmm6[0] f* zmm4[0]
uint32_t var_148 = zmm0[0]
zmm0 = *(r15 + 0x20)
zmm0[0] = zmm0[0] f* zmm4[0]
uint128_t zmm10
zmm10.d = zmm5.d f- zmm0[0]
zmm7[0] = zmm7[0] f- arg3[0]
uint32_t arg_20 = zmm7[0]

if (not(zmm10.d f>= zmm9.d))
    zmm9.d = zmm5.d f* 0.5f
    zmm10 = zmm9

if (zmm7[0] f>= zmm6[0])
    arg3 = zmm7
else
    zmm6 = var_134
    zmm6[0] = zmm6[0] f* 0.5f
    arg_20 = zmm6[0]
    arg3 = zmm6

zmm0 = *(r15 + 0x20)
zmm5 = 0x3f800000
bool cond:1 = zmm0[0] f<= 0f
float temp0[0x4] = _mm_max_ss(zmm12[0], 0)
float temp0_1[0x4] = _mm_max_ss(zmm15[0], 0)

if (not(cond:1))
    zmm5.d = 1f f- zmm0[0]

if (zmm14.d f<= 0f)
    zmm14 = 0x3f800000
else
    zmm7 = 0x3f800000
    zmm7[0] = 1f f- zmm14.d
    zmm14 = zmm7[0]

zmm0[0] = zmm0[0] f+ var_130
temp0[0] = temp0[0] f+ zmm2[0]
uint32_t var_13c = 0x3f800000
zmm5.d = zmm5.d f+ zmm2[0]
zmm2 = 0x3f800000
zmm14.d = zmm14.d f+ zmm13.d
temp0_1[0] = temp0_1[0] f+ zmm13.d
zmm2[0] = 1f f- zmm0[0]
float var_158[0x4] = temp0
float var_140 = zmm5.d
float var_144_2 = zmm14.d
zmm14 = 0x3f800000
zmm2[0] = zmm2[0] f* var_12c

if (not(__andps_xmmxud_memxud(zmm2, data_142d3f770)[0] f<= 9.99999994e-09f))
    zmm14.d = zmm10.d f- zmm9.d
    zmm14.d = zmm14.d f/ zmm2[0]

zmm0 = *(r15 + 0x24)
zmm2 = 0x3f800000
zmm0[0] = zmm0[0] f+ var_128
zmm2[0] = 1f f- zmm0[0]
zmm2[0] = zmm2[0] f* zmm4[0]

if (not(__andps_xmmxud_memxud(zmm2, data_142d3f770)[0] f<= 9.99999994e-09f))
    arg3[0] = arg3[0] f- zmm6[0]
    arg3[0] = arg3[0] f/ zmm2[0]
    var_13c = arg3[0]

arg3 = data_142d3f660
char r8 = arg1[5].b
zmm0 = temp0
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
zmm0[0] = zmm5.d
uint32_t var_f8[0x4] = arg3
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xc6)
zmm0[0] = temp0_1[0]
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x27)
zmm0[0] = var_144_2[0]
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
uint32_t var_118[0x4] = zmm0
uint32_t var_108[0x4] = zmm0
var_118 = *(r15 + 8)
int32_t arg_10
uint128_t zmm6_1
float zmm7_1
float zmm8_1[0x4]
uint128_t zmm9_1
zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_140ae16d0(&var_118, &arg_10, r8)
char var_1b0 = 1
char var_1b8 = 2
int128_t* rax_7 = sub_140e0db30(arg1, rax_1, &var_108, r14, 2, 1, arg_8, 0x60, arg2)

if (not(zmm14.d f>= 1f))
    zmm14 = 0x3f800000

if (not(var_13c.d f>= 1f))
    var_13c = 0x3f800000

int32_t r15_1 = *(rax_7 + 0x64)
int32_t rax_8 = arg_10
int64_t* rcx_5 = rax_7[4].q
uint128_t zmm0_1 = arg2[3].d
int128_t zmm11 = var_120
float var_16c = (*(arg2 + 0x1c))[0]
zmm8_1[0] = zmm8_1[0] f* arg2[5].d
int64_t r14_1 = sx.q(rcx_5[1].d)
float var_188 = zmm11.d
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
int32_t var_184 = zmm13.d
int32_t var_170 = zmm0_1.d
int32_t var_178 = 0
int32_t var_174 = 0
int64_t var_180 = 0
zmm8_1[0] = zmm8_1[0] + zmm7_1
int32_t rax_9 = int.d(zmm8_1[0])
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0x2c)
int16_t var_164 = (rax_9 s>> 1).w
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] + zmm7_1
int16_t var_162 = (int.d(zmm8_1[0]) s>> 1).w
int32_t rax_13 = (r14_1 + 1).d
rcx_5[1].d = rax_13

if (rax_13 s> *(rcx_5 + 0xc))
    sub_1405c4ec0(rcx_5)

int64_t rdx_4 = r14_1 * 5
zmm0_1 = var_188.o
int64_t rcx_6 = *rax_7[4].q
var_188 = zmm11.d
float var_184_1 = temp0_1[0]
int32_t var_178_1 = 0
*(rcx_6 + (rdx_4 << 3)) = zmm0_1
int64_t var_180_1 = 0
*(rcx_6 + (rdx_4 << 3) + 0x10) = var_178.o
*(rcx_6 + (rdx_4 << 3) + 0x20) = rax_8.q
float zmm1[0x4] = zmm6_1
*(rax_7 + 0x64) += 1
zmm1[0] = zmm1[0] f* arg2[2].d
int32_t rax_15 = arg_10
zmm0_1.d = zmm6_1.d f* *(arg2 + 0x14)
int64_t* rcx_7 = rax_7[4].q
zmm1[0] = zmm1[0] f+ arg2[3].d
uint128_t zmm2_1 = *(arg2 + 0x2c)
zmm0_1.d = zmm0_1.d f+ *(arg2 + 0x1c)
int64_t r14_2 = sx.q(rcx_7[1].d)
float var_170_1 = zmm1[0]
zmm8_1[0] = zmm8_1[0] f* arg2[5].d
int32_t var_16c_1 = zmm0_1.d
zmm0_1.d = zmm6_1.d f/ zmm2_1.d
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
int32_t var_174_1 = zmm0_1.d
zmm8_1[0] = zmm8_1[0] + zmm7_1
zmm1 = zmm2_1
int16_t rax_17 = (int.d(zmm8_1[0]) s>> 1).w
zmm1[0] = zmm1[0] * zmm8_1[0]
int16_t var_164_1 = rax_17
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int16_t var_162_1 = (int.d(zmm1[0]) s>> 1).w
int32_t rax_20 = (r14_2 + 1).d
rcx_7[1].d = rax_20

if (rax_20 s> *(rcx_7 + 0xc))
    sub_1405c4ec0(rcx_7)

int64_t rdx_6 = r14_2 * 5
int64_t rcx_8 = *rax_7[4].q
int32_t var_184_2 = zmm13.d
int32_t var_174_2 = 0
int64_t var_180_2 = 0
*(rcx_8 + (rdx_6 << 3)) = var_188.o
*(rcx_8 + (rdx_6 << 3) + 0x10) = var_178_1.o
zmm1 = var_158
*(rcx_8 + (rdx_6 << 3) + 0x20) = rax_15.q
*(rax_7 + 0x64) += 1
zmm0_1.d = zmm9_1.d f* *(arg2 + 0xc)
int32_t rax_22 = arg_10
zmm2_1 = arg2[5].d
int64_t* rcx_9 = rax_7[4].q
zmm0_1.d = zmm0_1.d f+ *(arg2 + 0x1c)
var_188 = zmm1[0]
zmm1 = zmm9_1
zmm1[0] = zmm1[0] f* arg2[1].d
int64_t r14_3 = sx.q(rcx_9[1].d)
int32_t var_16c_2 = zmm0_1.d
zmm1[0] = zmm1[0] f+ arg2[3].d
zmm0_1.d = zmm9_1.d f/ zmm2_1.d
float var_170_2 = zmm1[0]
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int32_t var_178_2 = zmm0_1.d
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int32_t rax_23 = int.d(zmm1[0])
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0x2c)
int16_t var_164_2 = (rax_23 s>> 1).w
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] + zmm7_1
int16_t var_162_2 = (int.d(zmm8_1[0]) s>> 1).w
int32_t rax_27 = (r14_3 + 1).d
rcx_9[1].d = rax_27

if (rax_27 s> *(rcx_9 + 0xc))
    sub_1405c4ec0(rcx_9)

int64_t rdx_8 = r14_3 * 5
int64_t rcx_10 = *rax_7[4].q
float var_184_3 = temp0_1[0]
int64_t var_180_3 = 0
*(rcx_10 + (rdx_8 << 3)) = var_188.o
*(rcx_10 + (rdx_8 << 3) + 0x10) = var_178_2.o
*(rcx_10 + (rdx_8 << 3) + 0x20) = rax_22.q
zmm1 = zmm6_1
*(rax_7 + 0x64) += 1
zmm1[0] = zmm1[0] f* *(arg2 + 0x14)
int32_t rax_29 = arg_10
zmm2_1.d = zmm9_1.d f* arg2[1].d
int64_t* rcx_11 = rax_7[4].q
float zmm3[0x4] = arg2[5].d
var_188 = var_158.d
zmm0_1.d = zmm6_1.d f* arg2[2].d
int64_t r14_4 = sx.q(rcx_11[1].d)
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm0_1.d = zmm9_1.d f* *(arg2 + 0xc)
zmm2_1.d = zmm2_1.d f+ arg2[3].d
zmm1[0] = zmm1[0] f+ zmm0_1.d
int32_t var_170_3 = zmm2_1.d
zmm1[0] = zmm1[0] f+ *(arg2 + 0x1c)
zmm2_1 = *(arg2 + 0x2c)
zmm0_1.d = zmm6_1.d f/ zmm2_1.d
float var_16c_3 = zmm1[0]
zmm3[0] = zmm3[0] * zmm8_1[0]
int32_t var_174_3 = zmm0_1.d
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] + zmm7_1
int32_t rax_30 = int.d(zmm3[0])
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int16_t var_164_3 = (rax_30 s>> 1).w
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int32_t rax_32 = int.d(zmm1[0])
zmm1 = zmm9_1
zmm1[0] = zmm1[0] / zmm3[0]
int16_t var_162_3 = (rax_32 s>> 1).w
int32_t rax_34 = (r14_4 + 1).d
rcx_11[1].d = rax_34
float var_178_3 = zmm1[0]

if (rax_34 s> *(rcx_11 + 0xc))
    sub_1405c4ec0(rcx_11)

int64_t rdx_10 = r14_4 * 5
zmm0_1 = var_188.o
var_180_3:4.d = 0
int64_t rcx_12 = *rax_7[4].q
var_188 = zmm11.d
int32_t var_184_4 = zmm13.d
var_180_3.d = zmm14.d
*(rcx_12 + (rdx_10 << 3)) = zmm0_1
*(rcx_12 + (rdx_10 << 3) + 0x10) = var_178_3.o
*(rcx_12 + (rdx_10 << 3) + 0x20) = rax_29.q
zmm1 = zmm9_1
*(rax_7 + 0x64) += 1
zmm1[0] = zmm1[0] f* arg2[1].d
int32_t rax_36 = arg_10
zmm0_1.d = zmm9_1.d f* *(arg2 + 0xc)
int64_t* rcx_13 = rax_7[4].q
zmm1[0] = zmm1[0] f+ arg2[3].d
zmm2_1 = arg2[5].d
zmm0_1.d = zmm0_1.d f+ *(arg2 + 0x1c)
int64_t r14_5 = sx.q(rcx_13[1].d)
float var_170_4 = zmm1[0]
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int32_t var_16c_4 = zmm0_1.d
zmm0_1.d = zmm9_1.d f/ zmm2_1.d
zmm1[0] = zmm1[0] + zmm1[0]
int32_t var_174_4 = 0
int32_t var_178_4 = zmm0_1.d
zmm1[0] = zmm1[0] + zmm7_1
int32_t rax_37 = int.d(zmm1[0])
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0x2c)
int16_t var_164_4 = (rax_37 s>> 1).w
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] + zmm7_1
int16_t var_162_4 = (int.d(zmm8_1[0]) s>> 1).w
int32_t rax_41 = (r14_5 + 1).d
rcx_13[1].d = rax_41

if (rax_41 s> *(rcx_13 + 0xc))
    sub_1405c4ec0(rcx_13)

int64_t rdx_12 = r14_5 * 5
zmm0_1 = var_188.o
var_180_3:4.d = 0
int64_t rcx_14 = *rax_7[4].q
var_188 = zmm11.d
float var_184_5 = temp0_1[0]
var_180_3.d = zmm14.d
*(rcx_14 + (rdx_12 << 3)) = zmm0_1
*(rcx_14 + (rdx_12 << 3) + 0x10) = var_178_4.o
*(rcx_14 + (rdx_12 << 3) + 0x20) = rax_36.q
zmm1 = zmm6_1
*(rax_7 + 0x64) += 1
zmm1[0] = zmm1[0] f* *(arg2 + 0x14)
int32_t rax_43 = arg_10
zmm0_1.d = zmm6_1.d f* arg2[2].d
int64_t* rcx_15 = rax_7[4].q
zmm2_1.d = zmm9_1.d f* arg2[1].d
zmm3 = arg2[5].d
int64_t r14_6 = sx.q(rcx_15[1].d)
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm0_1.d = zmm9_1.d f* *(arg2 + 0xc)
zmm2_1.d = zmm2_1.d f+ arg2[3].d
zmm1[0] = zmm1[0] f+ zmm0_1.d
int32_t var_170_5 = zmm2_1.d
zmm1[0] = zmm1[0] f+ *(arg2 + 0x1c)
zmm2_1 = *(arg2 + 0x2c)
zmm0_1.d = zmm6_1.d f/ zmm2_1.d
float var_16c_5 = zmm1[0]
zmm3[0] = zmm3[0] * zmm8_1[0]
int32_t var_174_5 = zmm0_1.d
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] + zmm7_1
int32_t rax_44 = int.d(zmm3[0])
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int16_t var_164_5 = (rax_44 s>> 1).w
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int32_t rax_46 = int.d(zmm1[0])
zmm1 = zmm9_1
zmm1[0] = zmm1[0] / zmm3[0]
int16_t var_162_5 = (rax_46 s>> 1).w
int32_t rax_48 = (r14_6 + 1).d
rcx_15[1].d = rax_48
float var_178_5 = zmm1[0]

if (rax_48 s> *(rcx_15 + 0xc))
    sub_1405c4ec0(rcx_15)

int64_t rdx_14 = r14_6 * 5
var_180_3:4.d = 0
int64_t rcx_16 = *rax_7[4].q
int32_t var_184_6 = zmm13.d
var_180_3.d = zmm14.d
int32_t var_174_6 = 0
*(rcx_16 + (rdx_14 << 3)) = var_188.o
*(rcx_16 + (rdx_14 << 3) + 0x10) = var_178_5.o
*(rcx_16 + (rdx_14 << 3) + 0x20) = rax_43.q
*(rax_7 + 0x64) += 1
zmm0_1.d = zmm10.d f* *(arg2 + 0xc)
int32_t rax_50 = arg_10
zmm2_1 = arg2[5].d
int64_t* rcx_17 = rax_7[4].q
zmm0_1.d = zmm0_1.d f+ *(arg2 + 0x1c)
var_188 = arg_18[0]
zmm1 = zmm10
zmm1[0] = zmm1[0] f* arg2[1].d
int64_t r14_7 = sx.q(rcx_17[1].d)
int32_t var_16c_6 = zmm0_1.d
zmm1[0] = zmm1[0] f+ arg2[3].d
zmm0_1.d = zmm10.d f/ zmm2_1.d
float var_170_6 = zmm1[0]
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int32_t var_178_6 = zmm0_1.d
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int32_t rax_51 = int.d(zmm1[0])
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0x2c)
int16_t var_164_6 = (rax_51 s>> 1).w
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] + zmm7_1
int16_t var_162_6 = (int.d(zmm8_1[0]) s>> 1).w
int32_t rax_55 = (r14_7 + 1).d
rcx_17[1].d = rax_55

if (rax_55 s> *(rcx_17 + 0xc))
    sub_1405c4ec0(rcx_17)

int64_t rdx_16 = r14_7 * 5
var_180_3:4.d = 0
int64_t rcx_18 = *rax_7[4].q
float var_184_7 = temp0_1[0]
var_180_3.d = zmm14.d
*(rcx_18 + (rdx_16 << 3)) = var_188.o
*(rcx_18 + (rdx_16 << 3) + 0x10) = var_178_6.o
*(rcx_18 + (rdx_16 << 3) + 0x20) = rax_50.q
zmm1 = zmm6_1
*(rax_7 + 0x64) += 1
zmm1[0] = zmm1[0] f* *(arg2 + 0x14)
int32_t rax_57 = arg_10
zmm2_1.d = zmm10.d f* arg2[1].d
int64_t* rcx_19 = rax_7[4].q
zmm3 = arg2[5].d
var_188 = arg_18.d
zmm0_1.d = zmm6_1.d f* arg2[2].d
int64_t r14_8 = sx.q(rcx_19[1].d)
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm0_1.d = zmm10.d f* *(arg2 + 0xc)
zmm2_1.d = zmm2_1.d f+ arg2[3].d
zmm1[0] = zmm1[0] f+ zmm0_1.d
int32_t var_170_7 = zmm2_1.d
zmm1[0] = zmm1[0] f+ *(arg2 + 0x1c)
zmm2_1 = *(arg2 + 0x2c)
zmm0_1.d = zmm6_1.d f/ zmm2_1.d
float var_16c_7 = zmm1[0]
zmm3[0] = zmm3[0] * zmm8_1[0]
int32_t var_174_7 = zmm0_1.d
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] + zmm7_1
int32_t rax_58 = int.d(zmm3[0])
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int16_t var_164_7 = (rax_58 s>> 1).w
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int32_t rax_60 = int.d(zmm1[0])
zmm1 = zmm10
zmm1[0] = zmm1[0] / zmm3[0]
int16_t var_162_7 = (rax_60 s>> 1).w
int32_t rax_62 = (r14_8 + 1).d
rcx_19[1].d = rax_62
float var_178_7 = zmm1[0]

if (rax_62 s> *(rcx_19 + 0xc))
    sub_1405c4ec0(rcx_19)

int64_t rdx_18 = r14_8 * 5
int64_t rcx_20 = *rax_7[4].q
int32_t var_184_8 = zmm13.d
int32_t var_174_8 = 0
int64_t var_180_4 = 0
*(rcx_20 + (rdx_18 << 3)) = var_188.o
*(rcx_20 + (rdx_18 << 3) + 0x10) = var_178_7.o
*(rcx_20 + (rdx_18 << 3) + 0x20) = rax_57.q
*(rax_7 + 0x64) += 1
zmm0_1.d = zmm10.d f* *(arg2 + 0xc)
int32_t rax_64 = arg_10
zmm2_1 = arg2[5].d
int64_t* rcx_21 = rax_7[4].q
zmm0_1.d = zmm0_1.d f+ *(arg2 + 0x1c)
var_188 = var_140[0]
zmm1 = zmm10
zmm1[0] = zmm1[0] f* arg2[1].d
int64_t r14_9 = sx.q(rcx_21[1].d)
int32_t var_16c_8 = zmm0_1.d
zmm1[0] = zmm1[0] f+ arg2[3].d
zmm0_1.d = zmm10.d f/ zmm2_1.d
float var_170_8 = zmm1[0]
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int32_t var_178_8 = zmm0_1.d
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int32_t rax_65 = int.d(zmm1[0])
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0x2c)
int16_t var_164_8 = (rax_65 s>> 1).w
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] + zmm7_1
int16_t var_162_8 = (int.d(zmm8_1[0]) s>> 1).w
int32_t rax_69 = (r14_9 + 1).d
rcx_21[1].d = rax_69

if (rax_69 s> *(rcx_21 + 0xc))
    sub_1405c4ec0(rcx_21)

int64_t rdx_20 = r14_9 * 5
int64_t rcx_22 = *rax_7[4].q
float var_184_9 = temp0_1[0]
int64_t var_180_5 = 0
*(rcx_22 + (rdx_20 << 3)) = var_188.o
*(rcx_22 + (rdx_20 << 3) + 0x10) = var_178_8.o
*(rcx_22 + (rdx_20 << 3) + 0x20) = rax_64.q
zmm1 = zmm6_1
*(rax_7 + 0x64) += 1
zmm1[0] = zmm1[0] f* *(arg2 + 0x14)
int32_t rax_71 = arg_10
zmm2_1.d = zmm10.d f* arg2[1].d
int64_t* rcx_23 = rax_7[4].q
zmm3 = arg2[5].d
var_188 = var_140.d
zmm0_1.d = zmm6_1.d f* arg2[2].d
int64_t r14_10 = sx.q(rcx_23[1].d)
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm0_1.d = zmm10.d f* *(arg2 + 0xc)
zmm2_1.d = zmm2_1.d f+ arg2[3].d
zmm1[0] = zmm1[0] f+ zmm0_1.d
int32_t var_170_9 = zmm2_1.d
zmm1[0] = zmm1[0] f+ *(arg2 + 0x1c)
zmm2_1 = *(arg2 + 0x2c)
zmm0_1.d = zmm6_1.d f/ zmm2_1.d
float var_16c_9 = zmm1[0]
zmm3[0] = zmm3[0] * zmm8_1[0]
int32_t var_174_9 = zmm0_1.d
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] + zmm7_1
int32_t rax_72 = int.d(zmm3[0])
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int16_t var_164_9 = (rax_72 s>> 1).w
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int32_t rax_74 = int.d(zmm1[0])
zmm1 = zmm10
zmm1[0] = zmm1[0] / zmm3[0]
int16_t var_162_9 = (rax_74 s>> 1).w
int32_t rax_76 = (r14_10 + 1).d
rcx_23[1].d = rax_76
float var_178_9 = zmm1[0]

if (rax_76 s> *(rcx_23 + 0xc))
    sub_1405c4ec0(rcx_23)

int64_t rdx_22 = r14_10 * 5
int64_t rcx_24 = *rax_7[4].q
float zmm4_1[0x4] = var_138
int32_t var_184_10 = zmm13.d
int32_t var_174_10 = 0
*(rcx_24 + (rdx_22 << 3)) = var_188.o
int64_t var_180_6 = 0
*(rcx_24 + (rdx_22 << 3) + 0x10) = var_178_9.o
*(rcx_24 + (rdx_22 << 3) + 0x20) = rax_71.q
*(rax_7 + 0x64) += 1
zmm4_1[0] = zmm4_1[0] f* arg2[1].d
int32_t rax_78 = arg_10
zmm2_1 = arg2[5].d
zmm4_1[0] = zmm4_1[0] f+ arg2[3].d
int64_t* rcx_25 = rax_7[4].q
var_188 = arg_18.d
zmm0_1.d = zmm4_1.d f* *(arg2 + 0xc)
int64_t r14_11 = sx.q(rcx_25[1].d)
float var_170_10 = zmm4_1[0]
zmm1 = zmm2_1
zmm0_1.d = zmm0_1.d f+ *(arg2 + 0x1c)
zmm1[0] = zmm1[0] * zmm8_1[0]
zmm1[0] = zmm1[0] + zmm1[0]
int32_t var_16c_10 = zmm0_1.d
zmm0_1.d = zmm4_1.d f/ zmm2_1.d
zmm1[0] = zmm1[0] + zmm7_1
int32_t var_178_10 = zmm0_1.d
int32_t rax_79 = int.d(zmm1[0])
zmm8_1[0] = zmm8_1[0] f* *(arg2 + 0x2c)
int16_t var_164_10 = (rax_79 s>> 1).w
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] + zmm7_1
int16_t var_162_10 = (int.d(zmm8_1[0]) s>> 1).w
int32_t rax_83 = (r14_11 + 1).d
rcx_25[1].d = rax_83

if (rax_83 s> *(rcx_25 + 0xc))
    sub_1405c4ec0(rcx_25)
    zmm4_1 = var_138

int64_t rdx_24 = r14_11 * 5
int64_t rcx_26 = *rax_7[4].q
float var_184_11 = temp0_1[0]
int64_t var_180_7 = 0
*(rcx_26 + (rdx_24 << 3)) = var_188.o
*(rcx_26 + (rdx_24 << 3) + 0x10) = var_178_10.o
*(rcx_26 + (rdx_24 << 3) + 0x20) = rax_78.q
*(rax_7 + 0x64) += 1
zmm4_1[0] = zmm4_1[0] f* *(arg2 + 0xc)
int32_t rax_85 = arg_10
zmm2_1.d = zmm6_1.d f* arg2[2].d
int64_t* rcx_27 = rax_7[4].q
zmm3 = arg2[5].d
var_188 = arg_18.d
zmm0_1.d = zmm4_1.d f* arg2[1].d
int64_t r14_12 = sx.q(rcx_27[1].d)
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm0_1.d = zmm6_1.d f* *(arg2 + 0x14)
zmm2_1.d = zmm2_1.d f+ arg2[3].d
zmm4_1[0] = zmm4_1[0] f+ zmm0_1.d
int32_t var_170_11 = zmm2_1.d
zmm4_1[0] = zmm4_1[0] f+ *(arg2 + 0x1c)
zmm2_1 = *(arg2 + 0x2c)
zmm0_1.d = zmm6_1.d f/ zmm2_1.d
float var_16c_11 = zmm4_1[0]
zmm3[0] = zmm3[0] * zmm8_1[0]
int32_t var_174_11 = zmm0_1.d
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] + zmm7_1
int32_t rax_86 = int.d(zmm3[0])
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int16_t var_164_11 = (rax_86 s>> 1).w
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int16_t rax_89 = (int.d(zmm1[0]) s>> 1).w
zmm4_1[0] = zmm4_1[0] / zmm3[0]
int16_t var_162_11 = rax_89
int32_t rax_90 = (r14_12 + 1).d
rcx_27[1].d = rax_90
float var_178_11 = zmm4_1[0]

if (rax_90 s> *(rcx_27 + 0xc))
    sub_1405c4ec0(rcx_27)

int64_t rdx_26 = r14_12 * 5
zmm0_1 = var_188.o
var_180_7.d = 0
int64_t rcx_28 = *rax_7[4].q
zmm15 = var_13c
var_188 = zmm11.d
int32_t var_184_12 = zmm13.d
*(rcx_28 + (rdx_26 << 3)) = zmm0_1
*(rcx_28 + (rdx_26 << 3) + 0x10) = var_178_11.o
*(rcx_28 + (rdx_26 << 3) + 0x20) = rax_85.q
zmm1 = zmm6_1
*(rax_7 + 0x64) += 1
zmm1[0] = zmm1[0] f* arg2[2].d
int32_t rax_92 = arg_10
zmm0_1.d = zmm6_1.d f* *(arg2 + 0x14)
int64_t* rcx_29 = rax_7[4].q
zmm1[0] = zmm1[0] f+ arg2[3].d
zmm2_1 = *(arg2 + 0x2c)
zmm0_1.d = zmm0_1.d f+ *(arg2 + 0x1c)
int64_t r14_13 = sx.q(rcx_29[1].d)
float var_170_12 = zmm1[0]
zmm8_1[0] = zmm8_1[0] f* arg2[5].d
int32_t var_16c_12 = zmm0_1.d
zmm0_1.d = zmm6_1.d f/ zmm2_1.d
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
var_180_7:4.d = zmm15[0]
int32_t var_178_12 = 0
int32_t var_174_12 = zmm0_1.d
zmm8_1[0] = zmm8_1[0] + zmm7_1
zmm1 = zmm2_1
int16_t rax_94 = (int.d(zmm8_1[0]) s>> 1).w
zmm1[0] = zmm1[0] * zmm8_1[0]
int16_t var_164_12 = rax_94
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int16_t var_162_12 = (int.d(zmm1[0]) s>> 1).w
int32_t rax_97 = (r14_13 + 1).d
rcx_29[1].d = rax_97

if (rax_97 s> *(rcx_29 + 0xc))
    sub_1405c4ec0(rcx_29)

int64_t rdx_28 = r14_13 * 5
zmm0_1 = var_188.o
var_180_7.d = 0
int64_t rcx_30 = *rax_7[4].q
zmm3 = arg_20
var_188 = zmm11.d
var_180_7:4.d = zmm15[0]
*(rcx_30 + (rdx_28 << 3)) = zmm0_1
*(rcx_30 + (rdx_28 << 3) + 0x10) = var_178_12.o
*(rcx_30 + (rdx_28 << 3) + 0x20) = rax_92.q
*(rax_7 + 0x64) += 1
zmm3[0] = zmm3[0] f* arg2[2].d
int32_t rax_99 = arg_10
zmm2_1 = *(arg2 + 0x2c)
zmm3[0] = zmm3[0] f+ arg2[3].d
int64_t* rcx_31 = rax_7[4].q
int32_t var_184_13 = var_148.d
zmm0_1.d = zmm3.d f* *(arg2 + 0x14)
int64_t r14_14 = sx.q(rcx_31[1].d)
float var_170_13 = zmm3[0]
zmm8_1[0] = zmm8_1[0] f* arg2[5].d
zmm0_1.d = zmm0_1.d f+ *(arg2 + 0x1c)
int32_t var_178_13 = 0
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
int32_t var_16c_13 = zmm0_1.d
zmm0_1.d = zmm3.d f/ zmm2_1.d
zmm8_1[0] = zmm8_1[0] + zmm7_1
int32_t var_174_13 = zmm0_1.d
zmm1 = zmm2_1
int16_t rax_101 = (int.d(zmm8_1[0]) s>> 1).w
zmm1[0] = zmm1[0] * zmm8_1[0]
int16_t var_164_13 = rax_101
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int16_t var_162_13 = (int.d(zmm1[0]) s>> 1).w
int32_t rax_104 = (r14_14 + 1).d
rcx_31[1].d = rax_104

if (rax_104 s> *(rcx_31 + 0xc))
    sub_1405c4ec0(rcx_31)

int64_t rdx_30 = r14_14 * 5
var_180_7.d = 0
int64_t rcx_32 = *rax_7[4].q
int32_t var_184_14 = zmm13.d
var_180_7:4.d = zmm15[0]
*(rcx_32 + (rdx_30 << 3)) = var_188.o
*(rcx_32 + (rdx_30 << 3) + 0x10) = var_178_13.o
*(rcx_32 + (rdx_30 << 3) + 0x20) = rax_99.q
zmm1 = zmm6_1
*(rax_7 + 0x64) += 1
zmm1[0] = zmm1[0] f* *(arg2 + 0x14)
int32_t rax_106 = arg_10
zmm2_1.d = zmm9_1.d f* arg2[1].d
int64_t* rcx_33 = rax_7[4].q
zmm3 = arg2[5].d
var_188 = var_158.d
zmm0_1.d = zmm6_1.d f* arg2[2].d
int64_t r14_15 = sx.q(rcx_33[1].d)
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm0_1.d = zmm9_1.d f* *(arg2 + 0xc)
zmm2_1.d = zmm2_1.d f+ arg2[3].d
zmm1[0] = zmm1[0] f+ zmm0_1.d
int32_t var_170_14 = zmm2_1.d
zmm1[0] = zmm1[0] f+ *(arg2 + 0x1c)
zmm2_1 = *(arg2 + 0x2c)
zmm0_1.d = zmm6_1.d f/ zmm2_1.d
float var_16c_14 = zmm1[0]
zmm3[0] = zmm3[0] * zmm8_1[0]
int32_t var_174_14 = zmm0_1.d
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] + zmm7_1
int32_t rax_107 = int.d(zmm3[0])
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int16_t var_164_14 = (rax_107 s>> 1).w
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int32_t rax_109 = int.d(zmm1[0])
zmm1 = zmm9_1
zmm1[0] = zmm1[0] / zmm3[0]
int16_t var_162_14 = (rax_109 s>> 1).w
int32_t rax_111 = (r14_15 + 1).d
rcx_33[1].d = rax_111
float var_178_14 = zmm1[0]

if (rax_111 s> *(rcx_33 + 0xc))
    sub_1405c4ec0(rcx_33)

int64_t rdx_32 = r14_15 * 5
var_180_7.d = 0
zmm4_1 = arg_20
int64_t rcx_34 = *rax_7[4].q
var_180_7:4.d = zmm15[0]
*(rcx_34 + (rdx_32 << 3)) = var_188.o
*(rcx_34 + (rdx_32 << 3) + 0x10) = var_178_14.o
*(rcx_34 + (rdx_32 << 3) + 0x20) = rax_106.q
*(rax_7 + 0x64) += 1
zmm4_1[0] = zmm4_1[0] f* *(arg2 + 0x14)
zmm2_1.d = zmm9_1.d f* arg2[1].d
int32_t var_168_15 = arg_10
zmm3 = arg2[5].d
var_188 = var_158.d
int32_t var_184_15 = var_148.d
zmm0_1.d = zmm4_1.d f* arg2[2].d
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm0_1.d = zmm9_1.d f* *(arg2 + 0xc)
zmm2_1.d = zmm2_1.d f+ arg2[3].d
zmm4_1[0] = zmm4_1[0] f+ zmm0_1.d
int32_t var_170_15 = zmm2_1.d
zmm4_1[0] = zmm4_1[0] f+ *(arg2 + 0x1c)
zmm2_1 = *(arg2 + 0x2c)
zmm0_1.d = zmm4_1.d f/ zmm2_1.d
float var_16c_15 = zmm4_1[0]
zmm3[0] = zmm3[0] * zmm8_1[0]
int32_t var_174_15 = zmm0_1.d
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] + zmm7_1
int32_t rax_114 = int.d(zmm3[0])
zmm1 = zmm2_1
zmm1[0] = zmm1[0] * zmm8_1[0]
int16_t var_164_15 = (rax_114 s>> 1).w
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] + zmm7_1
int32_t rax_116 = int.d(zmm1[0])
zmm1 = zmm9_1
zmm1[0] = zmm1[0] / zmm3[0]
int16_t var_162_15 = (rax_116 s>> 1).w
float var_178_15 = zmm1[0]
sub_140de7940(rax_7, &var_188)
float zmm1_1 = zmm6_1.d f* *(arg2 + 0x14)
int32_t rax_118 = arg_10
zmm2_1.d = zmm10.d f* arg2[1].d
var_180_7.d = 0
zmm3 = arg2[5].d
var_188 = var_140
int32_t var_168_16 = rax_118
int32_t var_184_16 = zmm13.d
var_180_7:4.d = zmm15[0]
zmm2_1.d = zmm2_1.d f+ zmm6_1.d f* arg2[2].d
zmm2_1.d = zmm2_1.d f+ arg2[3].d
int32_t var_170_16 = zmm2_1.d
float var_16c_16 = zmm1_1 + zmm10.d f* *(arg2 + 0xc) f+ *(arg2 + 0x1c)
zmm2_1 = *(arg2 + 0x2c)
zmm1_1 = zmm3[0] * zmm8_1[0]
float var_174_16 = zmm6_1.d f/ zmm2_1.d
int32_t rax_119 = int.d(zmm1_1 + zmm1_1 + zmm7_1)
zmm1_1 = zmm2_1.d * zmm8_1[0]
int16_t var_164_16 = (rax_119 s>> 1).w
int16_t var_162_16 = (int.d(zmm1_1 + zmm1_1 + zmm7_1) s>> 1).w
float var_178_16 = zmm10.d / zmm3[0]
sub_140de7940(rax_7, &var_188)
zmm2_1.d = zmm10.d f* arg2[1].d
float zmm1_2 = arg_20 f* *(arg2 + 0x14)
int32_t var_168_17 = arg_10
zmm3 = arg2[5].d
var_188 = var_140
uint32_t var_184_17 = var_148
var_180_7.d = 0
var_180_7:4.d = zmm15[0]
zmm2_1.d = zmm2_1.d f+ arg_20 f* arg2[2].d
zmm2_1.d = zmm2_1.d f+ arg2[3].d
int32_t var_170_17 = zmm2_1.d
zmm2_1 = *(arg2 + 0x2c)
float var_16c_17 = zmm1_2 f+ zmm10.d f* *(arg2 + 0xc) f+ *(arg2 + 0x1c)
zmm1_2 = zmm3[0] * zmm8_1[0]
uint32_t var_174_17 = arg_20 f/ zmm2_1.d
int32_t rax_124 = int.d(zmm1_2 + zmm1_2 + zmm7_1)
zmm1_2 = zmm2_1.d * zmm8_1[0]
int16_t var_164_17 = (rax_124 s>> 1).w
int16_t var_162_17 = (int.d(zmm1_2 + zmm1_2 + zmm7_1) s>> 1).w
float var_178_17 = zmm10.d / zmm3[0]
sub_140de7940(rax_7, &var_188)
zmm2_1.d = zmm6_1.d f* arg2[2].d
var_180_7.d = 0
var_188 = arg_18
int32_t var_184_18 = zmm13.d
var_180_7:4.d = zmm15[0]
zmm3 = arg2[5].d
zmm2_1.d = zmm2_1.d f+ var_138 f* arg2[1].d
int32_t var_168_18 = arg_10
zmm2_1.d = zmm2_1.d f+ arg2[3].d
float zmm1_3 = var_138 f* *(arg2 + 0xc) + zmm6_1.d f* *(arg2 + 0x14) f+ *(arg2 + 0x1c)
int32_t var_170_18 = zmm2_1.d
zmm2_1 = *(arg2 + 0x2c)
zmm6_1.d = zmm6_1.d f/ zmm2_1.d
float var_16c_18 = zmm1_3
zmm1_3 = zmm3[0] * zmm8_1[0]
float var_178_18 = var_138 / zmm3[0]
int32_t var_174_18 = zmm6_1.d
int32_t rax_129 = int.d(zmm1_3 + zmm1_3 + zmm7_1)
zmm1_3 = zmm2_1.d * zmm8_1[0]
int16_t var_164_18 = (rax_129 s>> 1).w
int16_t var_162_18 = (int.d(zmm1_3 + zmm1_3 + zmm7_1) s>> 1).w
sub_140de7940(rax_7, &var_188)
zmm13 = arg_20
zmm2_1.d = zmm13.d f* arg2[2].d
float zmm1_4 = zmm13.d f* *(arg2 + 0x14)
int32_t var_168_19 = arg_10
zmm3 = arg2[5].d
zmm6_1 = var_148
var_188 = arg_18
var_180_7:4.d = zmm15[0]
zmm15 = var_138
int32_t var_184_19 = zmm6_1.d
var_180_7.d = 0
zmm2_1.d = zmm2_1.d f+ zmm15[0] f* arg2[1].d
zmm2_1.d = zmm2_1.d f+ arg2[3].d
int32_t var_170_19 = zmm2_1.d
zmm2_1 = *(arg2 + 0x2c)
float var_16c_19 = zmm1_4 + zmm15[0] f* *(arg2 + 0xc) f+ *(arg2 + 0x1c)
zmm1_4 = zmm3[0] * zmm8_1[0]
int32_t rax_134 = int.d(zmm1_4 + zmm1_4 + zmm7_1)
zmm1_4 = zmm2_1.d * zmm8_1[0]
int16_t var_164_19 = (rax_134 s>> 1).w
int16_t var_162_19 = (int.d(zmm1_4 + zmm1_4 + zmm7_1) s>> 1).w
float var_178_19 = zmm15[0] / zmm3[0]
float var_174_19 = zmm13.d f/ zmm2_1.d
sub_140de7940(rax_7, &var_188)
zmm2_1 = *(arg2 + 0x2c)
float var_184_20 = var_144_2
float zmm0_6 = zmm13.d f* *(arg2 + 0x14)
int32_t var_168_20 = arg_10
float zmm1_5 = zmm13.d f* arg2[2].d f+ arg2[3].d
var_188 = zmm11.d
int32_t var_178_20 = 0
int64_t var_180_8 = 0
float var_170_20 = zmm1_5
zmm1_5 = zmm8_1[0] f* arg2[5].d
float var_16c_20 = zmm0_6 f+ *(arg2 + 0x1c)
float var_174_20 = zmm13.d f/ zmm2_1.d
int32_t rax_139 = int.d(zmm1_5 + zmm1_5 + zmm7_1)
zmm1_5 = zmm2_1.d * zmm8_1[0]
int16_t var_164_20 = (rax_139 s>> 1).w
int16_t var_162_20 = (int.d(zmm1_5 + zmm1_5 + zmm7_1) s>> 1).w
sub_140de7940(rax_7, &var_188)
zmm3 = var_134
zmm2_1 = *(arg2 + 0x2c)
float zmm0_7 = zmm3[0] f* *(arg2 + 0x14)
int32_t var_168_21 = arg_10
float zmm1_6 = zmm3[0] f* arg2[2].d f+ arg2[3].d
var_188 = zmm11.d
int32_t var_184_21 = zmm6_1.d
int32_t var_178_21 = 0
float var_170_21 = zmm1_6
zmm1_6 = zmm8_1[0] f* arg2[5].d
int64_t var_180_9 = 0
float var_16c_21 = zmm0_7 f+ *(arg2 + 0x1c)
float var_174_21 = zmm3[0] f/ zmm2_1.d
int32_t rax_144 = int.d(zmm1_6 + zmm1_6 + zmm7_1)
zmm1_6 = zmm2_1.d * zmm8_1[0]
int16_t var_164_21 = (rax_144 s>> 1).w
int16_t var_162_21 = (int.d(zmm1_6 + zmm1_6 + zmm7_1) s>> 1).w
sub_140de7940(rax_7, &var_188)
zmm6_1 = var_158
zmm12 = var_144_2
var_188 = zmm6_1.d
int32_t var_184_22 = zmm12.d
int64_t var_180_10 = 0
zmm3 = arg2[5].d
zmm2_1.d = zmm9_1.d f* arg2[1].d
int32_t var_168_22 = arg_10
zmm2_1.d = zmm2_1.d f+ zmm13.d f* arg2[2].d
zmm2_1.d = zmm2_1.d f+ arg2[3].d
int32_t var_170_22 = zmm2_1.d
zmm2_1 = *(arg2 + 0x2c)
float var_16c_22 = zmm13.d f* *(arg2 + 0x14) + zmm9_1.d f* *(arg2 + 0xc) f+ *(arg2 + 0x1c)
float zmm1_7 = zmm3[0] * zmm8_1[0]
float var_174_22 = zmm13.d f/ zmm2_1.d
int32_t rax_149 = int.d(zmm1_7 + zmm1_7 + zmm7_1)
zmm1_7 = zmm2_1.d * zmm8_1[0]
int16_t var_164_22 = (rax_149 s>> 1).w
int16_t var_162_22 = (int.d(zmm1_7 + zmm1_7 + zmm7_1) s>> 1).w
float var_178_22 = zmm9_1.d / zmm3[0]
sub_140de7940(rax_7, &var_188)
zmm2_1.d = zmm9_1.d f* arg2[1].d
float zmm1_8 = zmm9_1.d f* *(arg2 + 0xc)
int32_t var_168_23 = arg_10
zmm3 = arg2[5].d
float var_184_23 = var_148
var_188 = zmm6_1.d
zmm6_1 = var_134
int64_t var_180_11 = 0
zmm2_1.d = zmm2_1.d f+ zmm6_1.d f* arg2[2].d
zmm2_1.d = zmm2_1.d f+ arg2[3].d
int32_t var_170_23 = zmm2_1.d
zmm2_1 = *(arg2 + 0x2c)
float var_16c_23 = zmm1_8 + zmm6_1.d f* *(arg2 + 0x14) f+ *(arg2 + 0x1c)
zmm1_8 = zmm3[0] * zmm8_1[0]
int32_t rax_154 = int.d(zmm1_8 + zmm1_8 + zmm7_1)
zmm1_8 = zmm2_1.d * zmm8_1[0]
int16_t var_164_23 = (rax_154 s>> 1).w
int16_t var_162_23 = (int.d(zmm1_8 + zmm1_8 + zmm7_1) s>> 1).w
float var_178_23 = zmm9_1.d / zmm3[0]
float var_174_23 = zmm6_1.d f/ zmm2_1.d
sub_140de7940(rax_7, &var_188)
var_158[0] = zmm11.d
char var_1a8
var_1a8.q = &arg_10
var_158[1] = zmm12.d
var_1b0.q = &var_158
var_1b8.d = zmm8_1[0]
var_158[2] = zmm14.d
arg_8.d = zmm9_1.d
uint32_t arg_c = zmm13.d
var_158[3] = 0
int32_t* rax_158
uint32_t zmm6_2
rax_158, zmm6_2 = sub_140dd3620(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_158)
var_158[0] = zmm11.d
zmm11 = var_148
var_1a8.q = &arg_10
var_158[1] = zmm11.d
var_1b0.q = &var_158
var_1b8.d = zmm8_1[0]
var_158[2] = zmm14.d
arg_8.d = zmm9_1.d
arg_c = zmm6_2
var_158[3] = 0
sub_140de7940(rax_7, sub_140dd3620(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8))
var_1a8.q = &arg_10
var_158[0] = arg_18
var_1b0.q = &var_158
var_1b8.d = zmm8_1[0]
var_158[1] = zmm12.d
var_158[2] = zmm14.d
arg_8.d = zmm10.d
arg_c = zmm13.d
var_158[3] = 0
int32_t* rax_160
uint32_t zmm6_3
int32_t zmm7_3
rax_160, zmm6_3, zmm7_3 =
    sub_140dd3620(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_160)
var_158[0] = zmm7_3
var_1a8.q = &arg_10
var_158[1] = zmm11.d
var_1b0.q = &var_158
var_1b8.d = zmm8_1[0]
var_158[2] = zmm14.d
arg_8.d = zmm10.d
arg_c = zmm6_3
var_158[3] = 0
sub_140de7940(rax_7, sub_140dd3620(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8))
var_1a8.q = &arg_10
var_158[0] = var_140
var_1b0.q = &var_158
var_1b8.d = zmm8_1[0]
var_158[1] = zmm12.d
arg_8.d = zmm10.d
arg_c = zmm13.d
var_158[2].q = 0
int32_t* rax_162
uint32_t zmm6_5
rax_162, zmm6_5 = sub_140dd3620(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_162)
var_158[0] = zmm6_5
var_1a8.q = &arg_10
var_158[1] = zmm11.d
var_1b0.q = &var_158
var_1b8.d = zmm8_1[0]
arg_8.d = zmm10.d
arg_c = var_134
var_158[2].q = 0
int32_t* rax_163
int32_t zmm7_4
rax_163, zmm7_4 = sub_140dd3620(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_163)
var_158[0] = zmm7_4
var_1a8.q = &arg_10
var_158[1] = zmm12.d
var_1b0.q = &var_158
var_1b8.d = zmm8_1[0]
arg_8.d = zmm15[0]
arg_c = zmm13.d
var_158[2].q = 0
int32_t* rax_164
uint32_t zmm6_6
int32_t zmm7_5
rax_164, zmm6_6, zmm7_5 =
    sub_140dd3620(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8)
sub_140de7940(rax_7, rax_164)
var_158[0] = zmm7_5
var_1a8.q = &arg_10
var_158[1] = zmm11.d
var_1b0.q = &var_158
var_1b8.d = zmm8_1[0]
arg_8.d = zmm15[0]
arg_c = zmm6_6
var_158[2].q = 0
sub_140de7940(rax_7, sub_140dd3620(&var_188, &arg2[1], &arg_8, &arg2[5], var_1b8, var_1b0, var_1a8))
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
