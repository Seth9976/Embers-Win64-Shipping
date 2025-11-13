// 函数: sub_141f89e90
// 地址: 0x141f89e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0
uint128_t zmm8_1
zmm0, zmm8_1 = sub_141f86ef0(arg1 + 8, arg3, zx.o(0))
int32_t var_78 = zmm0.d
int128_t zmm0_1
uint128_t zmm8_2
zmm0_1, zmm8_2 = sub_141f86ef0(arg1 + 0x88, zmm8_1, zx.o(0))
int32_t var_74 = zmm0_1.d
int32_t zmm0_2
uint128_t zmm8_3
zmm0_2, zmm8_3 = sub_141f86ef0(arg1 + 0x108, zmm8_2, zx.o(0))
int32_t zmm9 = zmm0_2
int32_t zmm7 = 0x3f800000
int32_t var_70 = zmm9
float var_6c

if (*(arg1 + 0x200) != 0)
    float zmm0_3
    zmm0_3, zmm7, zmm9 = sub_141f86ef0(arg1 + 0x188, zmm8_3, zx.o(0))
    var_6c = zmm0_3
else
    var_6c = 1f

int64_t rdi

if (zmm0.d f> zmm7 || zmm0_1.d f> zmm7 || zmm9 f> zmm7)
    rdi.b = 0
else
    rdi.b = 1

float var_88
float zmm6_1
float zmm7_1[0x4]
zmm6_1, zmm7_1 = sub_140ad9b20(&var_78, &var_88)
int32_t var_80
float zmm0_4[0x4] = var_80
float zmm1_4[0x4] = *(arg1 + 0x214)
zmm0_4[0] = zmm0_4[0] f* *(arg1 + 0x210)
uint32_t zmm2_3[0x4] = zmm1_4
zmm2_3[0] = zmm2_3[0] f- zmm7_1[0]
uint32_t var_80_1 = zmm0_4[0]

if (not(_mm_and_ps(zmm2_3, 0x7fffffff)[0] f<= 9.99999975e-05f) && not(zmm1_4[0] == zmm6_1))
    var_80_1 = powf(zmm0_4[0], zmm1_4[0])[0]

zmm1_4 = *(arg1 + 0x218)
int32_t var_84
zmm2_3 = var_84

if (not(_mm_and_ps(zmm1_4, 0x7fffffff)[0] <= 9.99999975e-05f))
    bool cond:2_1 = zmm1_4[0] >= zmm6_1
    zmm7_1[0] = zmm7_1[0] f- zmm2_3[0]
    float zmm3_1 = zmm7_1[0] * zmm7_1[0]
    zmm3_1 = zmm3_1 * zmm3_1 * zmm7_1[0]
    
    if (cond:2_1)
        zmm1_4 = _mm_min_ss(zmm1_4[0], zmm7_1[0])
    else
        zmm1_4 = zx.o(0)
    
    zmm1_4[0] = zmm1_4[0] * 0.5f
    zmm1_4[0] = zmm1_4[0] * zmm3_1
    zmm2_3[0] = zmm2_3[0] f+ zmm1_4[0]

zmm0_4 = var_88
zmm0_4[0] = zmm0_4[0] f+ *(arg1 + 0x208)
zmm2_3[0] = zmm2_3[0] f* *(arg1 + 0x20c)
var_88 = zmm0_4[0]
uint32_t var_84_1 = zmm2_3[0]
uint32_t zmm0_5
uint32_t zmm6_2
int32_t zmm7_2
float zmm8_4
zmm0_5, zmm6_2, zmm7_2, zmm8_4 = sub_140a454f0(zmm0_4, 0x43b40000)
var_88 = zmm0_5

if (not(zmm0_5 f>= zmm6_2))
    var_88 = zmm0_5 f+ zmm8_4

if (var_84_1 f>= zmm6_2)
    zmm0_5 = _mm_min_ss(var_84_1, zmm7_2)
else
    zmm0_5 = (zx.o(0)).d

uint32_t var_84_2 = zmm0_5

if (rdi.b != 0)
    if (not(var_80_1 f< zmm6_2))
        zmm6_2 = _mm_min_ss(var_80_1, zmm7_2)
    
    uint32_t var_80_2 = zmm6_2

sub_140ad9100(&var_88, arg2)
float zmm0_6 = *(arg1 + 0x21c)
arg2[3] = (*(arg1 + 0x220) - zmm0_6) * var_6c + zmm0_6
return arg2
