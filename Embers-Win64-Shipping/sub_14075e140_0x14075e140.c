// 函数: sub_14075e140
// 地址: 0x14075e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x4c) = 0x3f800000
int32_t r14 = 0
arg1[4].q = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x54) = 0
*(arg1 + 0x5c) = 0x3f800000
arg1[0x15].q = 0
*(arg1 + 0x158) = 0
*(arg1 + 0x15c) = 0x3f800000
*(arg1 + 0x164) = 0
*(arg1 + 0x16c) = 0x3f800000
arg1[0x1b].q = 0
*(arg1 + 0x1b8) = 0
*(arg1 + 0x1bc) = 0x3f800000
*(arg1 + 0x1c4) = 0
*(arg1 + 0x1cc) = 0x3f800000
*(arg1 + 0x1d4) = 0
*(arg1 + 0x1dc) = 0x3f800000
*(arg1 + 0x1e4) = 0
*(arg1 + 0x1ec) = 0x3f800000
*(arg1 + 0x1f4) = 0
*(arg1 + 0x1fc) = 0x3f800000
*(arg1 + 0x204) = 0
*(arg1 + 0x20c) = 0x3f800000
*(arg1 + 0x214) = 0
*(arg1 + 0x21c) = 0x3f800000
*(arg1 + 0x224) = 0
*(arg1 + 0x22c) = 0x3f800000
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
uint32_t var_e8[0x4][0x4]
uint32_t (* rax)[0x4] = sub_140631b10(arg2, &var_e8)
arg1[6] = *rax
arg1[7] = rax[1]
arg1[8] = rax[2]
arg1[9] = rax[3]
arg1[0xa] = *arg3
arg1[0xb] = arg3[1]
arg1[0xc] = arg3[2]
arg1[0xd] = arg3[3]
uint32_t (* rax_1)[0x4] = sub_140631b10(arg3, &var_e8)
arg1[0xe] = *rax_1
arg1[0xf] = rax_1[1]
arg1[0x10] = rax_1[2]
arg1[0x11] = rax_1[3]
uint32_t zmm0_2[0x4] = *(arg5 + 4)
float zmm1_2[0x4] = *(arg5 + 8)
uint32_t zmm2[0x4] = *(arg5 + 0x18)
float zmm3[0x4] = *arg5
int32_t zmm10 = 0x3f800000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm0_2[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1_2[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm2[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
arg1[5] = temp0_3
arg1[0x13].q = *(arg5 + 0xc)
*(arg1 + 0x138) = *(arg5 + 0x14)
zmm1_2 = *arg6
zmm1_2[0] = zmm1_2[0] f- *(arg6 + 0xc)
zmm2 = *(arg6 + 4)
zmm2[0] = zmm2[0] f- arg6[1].d
zmm0_2 = *(arg6 + 8)
zmm0_2[0] = zmm0_2[0] f- *(arg6 + 0x14)
arg1[0x17].q = (_mm_unpacklo_ps(zmm1_2, zmm2[0].q)).q
temp0_3[2] = zmm0_2[0]
*(arg1 + 0x178) = temp0_3[2]
zmm1_2 = *arg6
zmm1_2[0] = zmm1_2[0] f+ *(arg6 + 0xc)
zmm2 = arg6[1].d
zmm2[0] = zmm2[0] f+ *(arg6 + 4)
zmm0_2 = *(arg6 + 0x14)
zmm0_2[0] = zmm0_2[0] f+ *(arg6 + 8)
arg1[0x18].q = (_mm_unpacklo_ps(zmm1_2, zmm2[0].q)).q
temp0_3[2] = zmm0_2[0]
*(arg1 + 0x188) = temp0_3[2]
zmm1_2 = *arg7
zmm1_2[0] = zmm1_2[0] - (*arg7)[3]
zmm2 = (*arg7)[1]
zmm2[0] = zmm2[0] f- arg7[1][0]
zmm0_2 = (*arg7)[2]
zmm0_2[0] = zmm0_2[0] f- (*arg7)[5]
arg1[0x19].q = (_mm_unpacklo_ps(zmm1_2, zmm2[0].q)).q
temp0_3[2] = zmm0_2[0]
*(arg1 + 0x198) = temp0_3[2]
zmm1_2 = *arg7
zmm1_2[0] = zmm1_2[0] + (*arg7)[3]
zmm2 = arg7[1][0]
zmm2[0] = zmm2[0] f+ (*arg7)[1]
zmm0_2 = (*arg7)[5]
zmm0_2[0] = zmm0_2[0] f+ (*arg7)[2]
arg1[0x1a].q = (_mm_unpacklo_ps(zmm1_2, zmm2[0].q)).q
temp0_3[2] = zmm0_2[0]
*(arg1 + 0x1a8) = temp0_3[2]
uint32_t zmm6[0x4] = arg2[2].d
uint32_t zmm7[0x4] = *(arg2 + 0x24)
uint32_t zmm8[0x4] = *(arg2 + 0x28)
zmm7[0] = zmm7[0] f* zmm7[0]
zmm1_2 = zmm8
zmm6[0] = zmm6[0] f* zmm6[0]
zmm1_2[0] = zmm1_2[0] f* zmm8[0]
zmm7[0] = zmm7[0] f+ zmm6[0]
temp0_3[0] = zmm6[0]
temp0_3[1] = zmm7[0]
temp0_3[2] = zmm8[0]
zmm7[0] = zmm7[0] f+ zmm1_2[0]
uint32_t zmm4_1[0x4]
uint32_t zmm5_1[0x4]

if (not(zmm7[0] f!= 1f))
    zmm0_2 = zx.o(temp0_3[0].q)
    temp0_3[2] = temp0_3[2]
    zmm1_2 = temp0_3[2]
    temp0_3[0].q = zmm0_2.q
    zmm3 = temp0_3[0]
    zmm2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
else if (zmm7[0] f>= 9.99999994e-09f)
    zmm5_1 = 0x3f000000
    zmm3 = zmm7
    zmm4_1 = _mm_rsqrt_ss(zmm7[0], zmm3[0])
    zmm2 = 0x3f000000
    zmm3[0] = zmm3[0] * 0.5f
    zmm4_1[0] = zmm4_1[0] f* zmm4_1[0]
    zmm3[0] = zmm3[0] f* zmm4_1[0]
    zmm2[0] = 0.5f - zmm3[0]
    zmm4_1[0] = zmm4_1[0] f* zmm2[0]
    zmm4_1[0] = zmm4_1[0] f+ zmm4_1[0]
    zmm1_2 = zmm4_1
    zmm1_2[0] = zmm1_2[0] f* zmm4_1[0]
    zmm3[0] = zmm3[0] * zmm1_2[0]
    zmm1_2 = zmm4_1
    zmm5_1[0] = 0.5f - zmm3[0]
    zmm1_2[0] = zmm1_2[0] f* zmm5_1[0]
    zmm1_2[0] = zmm1_2[0] f+ zmm4_1[0]
    zmm0_2 = zmm1_2
    zmm3 = zmm1_2
    zmm0_2[0] = zmm0_2[0] f* zmm7[0]
    zmm3[0] = zmm3[0] f* zmm6[0]
    zmm2 = zmm0_2
    zmm1_2[0] = zmm1_2[0] f* zmm8[0]
else
    zmm3 = data_143dbb1f8
    zmm2 = data_143dbb1fc
    zmm1_2 = data_143dbb200

int32_t rax_9 = arg4[1].d
temp0_3[3] = 0x3f800000
zmm0_2 = temp0_3
zmm0_2[0] = zmm3[0]
zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xe1)
zmm0_2[0] = zmm2[0]
zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc6)
zmm0_2[0] = zmm1_2[0]
zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc9)
arg1[0x15] = zmm0_2
uint32_t var_f8_1[0x4] = zmm0_2
arg1[0x12].q = *arg4
*(arg1 + 0x13c) = arg15[0]
*(arg1 + 0x128) = rax_9
*(arg1 + 0x17c) = arg14
zmm1_2 = *arg2
zmm2 = *(arg2 + 4)
zmm3 = arg2[1].d
zmm0_2 = *(arg2 + 8)
zmm5_1 = *(arg2 + 0x14)
zmm6 = arg2[2].d
zmm8 = *(arg2 + 0x24)
zmm4_1 = *(arg2 + 0x18)
zmm7 = *(arg2 + 0x28)
zmm0_2[0] = zmm0_2[0] f* zmm0_2[0]
var_f8_1[3] = 0
zmm2[0] = zmm2[0] f* zmm2[0]
zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
zmm3[0] = zmm3[0] * zmm3[0]
zmm2[0] = zmm2[0] f+ zmm1_2[0]
zmm5_1[0] = zmm5_1[0] f* zmm5_1[0]
zmm8[0] = zmm8[0] f* zmm8[0]
zmm5_1[0] = zmm5_1[0] f+ zmm3[0]
zmm6[0] = zmm6[0] f* zmm6[0]
zmm2[0] = zmm2[0] f+ zmm0_2[0]
zmm4_1[0] = zmm4_1[0] f* zmm4_1[0]
zmm8[0] = zmm8[0] f+ zmm6[0]
zmm7[0] = zmm7[0] f* zmm7[0]
int32_t temp0_13 = _mm_sqrt_ss(0, zmm2[0])
zmm5_1[0] = zmm5_1[0] f+ zmm4_1[0]
zmm8[0] = zmm8[0] f+ zmm7[0]
var_f8_1[0] = temp0_13
float temp0_14[0x4] = _mm_sqrt_ss(0, zmm5_1[0])
zmm0_2 = _mm_shuffle_ps(var_f8_1, var_f8_1, 0xe1)
float temp0_16[0x4] = _mm_sqrt_ss(0, zmm8[0])
zmm0_2[0] = temp0_14[0]
zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc6)
bool cond:0 = temp0_16[0] <= 9.99999975e-05f
zmm0_2[0] = temp0_16[0]
arg1[0x16] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc9)
float zmm13

if (cond:0)
    zmm13 = (zx.o(0)).d
else
    zmm13 = 1f / temp0_16[0]

float zmm12

if (temp0_14[0] <= 9.99999975e-05f)
    zmm12 = (zx.o(0)).d
else
    zmm12 = 1f / temp0_14[0]

float zmm9[0x4]

if (temp0_13 f<= 9.99999975e-05f)
    zmm9 = zx.o(0)
else
    zmm9 = 0x3f800000
    zmm9[0] = 1f f/ temp0_13

zmm6 = *(arg2 + 0x14)
zmm4_1 = *(arg2 + 0x18)
zmm6[0] = zmm6[0] f* *(arg2 + 0x28)
zmm4_1[0] = zmm4_1[0] f* *(arg2 + 0x24)
zmm7 = *(arg2 + 4)
zmm5_1 = *(arg2 + 8)
zmm1_2 = zmm7
zmm1_2[0] = zmm1_2[0] f* *(arg2 + 0x28)
zmm6[0] = zmm6[0] f- zmm4_1[0]
zmm7[0] = zmm7[0] f* zmm4_1[0]
zmm5_1[0] = zmm5_1[0] f* *(arg2 + 0x24)
zmm6[0] = zmm6[0] f* *arg2
zmm1_2[0] = zmm1_2[0] f- zmm5_1[0]
zmm5_1[0] = zmm5_1[0] f* zmm6[0]
zmm7[0] = zmm7[0] f- zmm5_1[0]
zmm1_2[0] = zmm1_2[0] f* arg2[1].d
zmm7[0] = zmm7[0] f* arg2[2].d
zmm6[0] = zmm6[0] f- zmm1_2[0]
zmm6[0] = zmm6[0] f+ zmm7[0]

if (zmm6[0] f< 0f)
    zmm0_2 = 0xbf800000
else
    zmm0_2 = 0x3f800000

float temp0_19[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
temp0_19[0] = zmm12
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
temp0_20[0] = zmm13
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x27)
temp0_21[0] = zmm0_2[0]
zmm0_2 = _mm_cvtepi32_ps(zx.o(arg8))
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x39)
arg1[0x14].d = zmm0_2[0]
arg1[4] = temp0_23
zmm0_2 = _mm_cvtepi32_ps(zx.o(zx.d(arg9) + (zx.d(arg10) << 1)))
zmm0_2[0] = zmm0_2[0] f* 0.333333343f
*(arg1 + 0x144) = zmm0_2[0]

if (arg11 == 0)
    zmm0_2 = zx.o(0)
else
    zmm0_2 = 0x3f800000

*(arg1 + 0x12c) = zmm0_2[0]

if (arg12 == 0 || arg11 == 0)
    zmm10 = (zx.o(0)).d

*(arg1 + 0x148) = zmm10
*(arg1 + 0x18c) = arg16
zmm0_2 = _mm_cvtepi32_ps(zx.o(arg13))

if (arg17 s>= 0)
    r14 = arg17

*(arg1 + 0x1ac) = zx.d(arg18)
*(arg1 + 0x19c) = r14
*(arg1 + 0x14c) = zmm0_2[0]
memset(&arg1[0x1b], 0, 0x80)

if (arg19 != 0)
    int32_t r8 = 0x20
    
    if (arg19[1].d s<= 0x20)
        r8 = arg19[1].d
    
    memcpy(&arg1[0x1b], *arg19, r8 << 2)

return arg1
