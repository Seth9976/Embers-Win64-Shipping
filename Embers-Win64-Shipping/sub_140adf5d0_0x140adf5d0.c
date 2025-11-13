// 函数: sub_140adf5d0
// 地址: 0x140adf5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = *(arg1 + 4)
float zmm4[0x4] = *(arg1 + 8)
uint32_t zmm1[0x4] = *arg1
uint32_t zmm2[0x4] = *(arg1 + 0xc)
uint32_t zmm5[0x4] = zmm1
zmm3[0] = zmm3[0] f* zmm2[0]
zmm2[0] = zmm2[0] f* zmm4[0]
zmm5[0] = zmm5[0] f* zmm4[0]
zmm2[0] = zmm2[0] f+ zmm2[0]
zmm3[0] = zmm3[0] f* zmm3[0]
zmm3[0] = zmm3[0] f* zmm1[0]
zmm5[0] = zmm5[0] f- zmm3[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm3[0] = zmm3[0] f+ zmm3[0]
zmm3[0] = zmm3[0] f+ zmm3[0]
bool cond:0 = zmm5[0] f>= -0.499999493f
uint32_t zmm9[0x4] = 0x3f800000
zmm4[0] = zmm4[0] + zmm4[0]
uint32_t zmm8[0x4] = 0x3f800000
zmm3[0] = zmm3[0] f+ zmm2[0]
zmm3[0] = zmm3[0] f+ zmm4[0]
zmm8[0] = 1f f- zmm3[0]
float zmm0_3
uint32_t zmm0_2[0x4]

if (cond:0)
    if (not(zmm5[0] f<= 0.499999493f))
        *arg2 = 0x42b40000
        uint32_t zmm0_4[0x4] = sub_140a3f4a0(zmm3, zmm8)
        zmm0_4[0] = zmm0_4[0] f* 57.2957764f
        uint32_t zmm1_3[0x4] = *(arg1 + 0xc)
        arg2[1] = zmm0_4[0]
        float zmm1_2[0x4] = sub_140a3f4a0(*arg1, zmm1_3)
        zmm0_2 = arg2[1]
        zmm1_2[0] = zmm1_2[0] * 2f
        zmm1_2[0] = zmm1_2[0] * 57.2957764f
        zmm0_2[0] = zmm0_2[0] f- zmm1_2[0]
        goto label_140adf6be
    
    zmm1 = 0x3bda90c5
    zmm5[0] = zmm5[0] f+ zmm5[0]
    uint32_t zmm0[0x4] = 0x3f800000
    bool cond:1_1 = zmm5[0] f< 0f
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm5, data_142d3f770)
    zmm0[0] = 1f f- temp0_1[0]
    float temp0_3[0x4] = _mm_sqrt_ss(0, _mm_max_ss(zmm0[0], 0)[0])
    temp0_1[0] = temp0_1[0] f* 0.0012624911f
    zmm1[0] = 0.0066700899f f- temp0_1[0]
    zmm0 = 0x3fc90fda
    zmm1[0] = zmm1[0] f* temp0_1[0]
    zmm1[0] = zmm1[0] f- 0.0170881264f
    zmm1[0] = zmm1[0] f* temp0_1[0]
    zmm1[0] = zmm1[0] f+ 0.0308918804f
    zmm1[0] = zmm1[0] f* temp0_1[0]
    zmm1[0] = zmm1[0] f- 0.0501743034f
    zmm1[0] = zmm1[0] f* temp0_1[0]
    zmm1[0] = zmm1[0] f+ 0.0889789909f
    zmm1[0] = zmm1[0] f* temp0_1[0]
    zmm1[0] = zmm1[0] f- 0.214598805f
    zmm1[0] = zmm1[0] f* temp0_1[0]
    zmm1[0] = zmm1[0] f+ 1.57079625f
    temp0_3[0] = temp0_3[0] f* zmm1[0]
    
    if (cond:1_1)
        temp0_3[0] = temp0_3[0] - 1.57079625f
        zmm0 = temp0_3
    else
        zmm0[0] = 1.57079625f - temp0_3[0]
    
    zmm0[0] = zmm0[0] f* 57.2957764f
    *arg2 = zmm0[0]
    uint32_t zmm0_5[0x4]
    int32_t zmm6_1
    zmm0_5, zmm6_1 = sub_140a3f4a0(zmm3, zmm8)
    float zmm4_1 = *arg1
    zmm0_5[0] = zmm0_5[0] f* zmm6_1
    float zmm2_1 = zmm4_1 * zmm4_1
    zmm4_1 = zmm4_1 f* *(arg1 + 0xc)
    arg2[1] = zmm0_5[0]
    zmm0_5 = *(arg1 + 4)
    float zmm3_1 = zmm0_5[0] f* zmm0_5[0]
    zmm0_5[0] = zmm0_5[0] f* *(arg1 + 8)
    zmm0_5[0] = zmm0_5[0] f* -2f
    zmm0_5[0] = zmm0_5[0] f- (zmm4_1 + zmm4_1)
    zmm9[0] = 1f - (zmm2_1 + zmm2_1 + zmm3_1 + zmm3_1)
    float zmm6_2
    zmm0_3, zmm6_2 = sub_140a3f4a0(zmm0_5, zmm9)
    zmm0_3 = zmm0_3 * zmm6_2
else
    *arg2 = 0xc2b40000
    uint32_t zmm0_1[0x4] = sub_140a3f4a0(zmm3, zmm8)
    uint32_t zmm1_1[0x4] = *(arg1 + 0xc)
    uint32_t zmm7[0x4] = zmm0_1
    zmm7[0] = zmm7[0] f* 57.2957764f
    zmm0_1 = *arg1
    arg2[1] = zmm7[0]
    zmm7 ^= data_142d3f780
    zmm0_2 = sub_140a3f4a0(zmm0_1, zmm1_1)
    zmm0_2[0] = zmm0_2[0] f* 2f
    zmm0_2[0] = zmm0_2[0] f* 57.2957764f
    zmm7[0] = zmm7[0] f- zmm0_2[0]
    zmm0_2 = zmm7
label_140adf6be:
    float zmm6
    zmm0_3, zmm6 = sub_140a454f0(zmm0_2, 0x43b40000)
    
    if (not(zmm0_3 >= 0f))
        zmm0_3 = zmm0_3 + zmm6
    
    if (not(zmm0_3 <= 180f))
        zmm0_3 = zmm0_3 - zmm6
arg2[2] = zmm0_3
return arg2
