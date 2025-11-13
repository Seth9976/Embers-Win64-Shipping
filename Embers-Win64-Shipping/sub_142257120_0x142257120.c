// 函数: sub_142257120
// 地址: 0x142257120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm2[0x4] = *(arg2 + 4)
uint32_t zmm3[0x4] = *(arg2 + 8)
uint32_t zmm4[0x4] = *(arg3 + 4)
uint32_t zmm5[0x4] = *(arg3 + 8)
bool cond:0 = zmm4[0] f< zmm5[0]
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm2, data_142d3f770)
uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm3, data_142d3f770)

if (not(cond:0))
    if (temp0_1[0] f>= 9.99999997e-07f)
        goto label_1422571b6
    
    if (not(zmm2[0] f> 0f))
        zmm4 ^= data_142d3f780
    
    arg1[1] = zmm4[0]
    arg1[2] = 0
    *arg1 = 0
else if (temp0[0] f>= 9.99999997e-07f)
label_1422571b6:
    uint32_t zmm6[0x4]
    uint32_t var_18_1[0x4] = zmm6
    int32_t rdx = 0
    int128_t zmm8
    int128_t var_38_1 = zmm8
    uint32_t zmm9[0x4]
    uint32_t var_48_1[0x4] = zmm9
    temp0[0] = temp0[0] f* zmm4[0]
    temp0_1[0] = temp0_1[0] f* zmm5[0]
    zmm5[0] = zmm5[0] f* zmm5[0]
    zmm4[0] = zmm4[0] f* zmm4[0]
    temp0_1[0] = temp0_1[0] f- zmm5[0]
    temp0[0] = temp0[0] f- zmm4[0]
    uint32_t zmm7[0x4] = _mm_max_ss(temp0_1[0], temp0[0])
    
    while (true)
        zmm4[0] = zmm4[0] f+ zmm7[0]
        zmm9 = 0x3f800000
        zmm8.d = 1f f/ zmm4[0]
        zmm5[0] = zmm5[0] f+ zmm7[0]
        float zmm1 = zmm8.d f* temp0[0]
        zmm9[0] = 1f f/ zmm5[0]
        zmm1 = zmm1 * zmm1
        zmm9[0] = zmm9[0] f* temp0_1[0]
        zmm9[0] = zmm9[0] f* zmm9[0]
        zmm9[0] = zmm9[0] f+ zmm1
        zmm9[0] = zmm9[0] f- 1f
        
        if (zmm9[0] f< 9.99999975e-05f)
            zmm2[0] = zmm2[0] f* zmm4[0]
            zmm3[0] = zmm3[0] f* zmm5[0]
            zmm2[0] = zmm2[0] f* zmm8.d
            zmm3[0] = zmm3[0] f* zmm9[0]
            break
        
        zmm9[0] = zmm9[0] f* zmm9[0]
        rdx += 1
        zmm9[0] = zmm9[0] f* 2f
        zmm9[0] = zmm9[0] f+ zmm1 f* zmm8.d * 2f
        zmm9[0] = zmm9[0] f/ zmm9[0]
        zmm7[0] = zmm7[0] f+ zmm9[0]
        
        if (rdx u>= 0x14)
            zmm2[0] = zmm2[0] f* zmm4[0]
            zmm3[0] = zmm3[0] f* zmm5[0]
            zmm2[0] = zmm2[0] f* zmm8.d
            zmm3[0] = zmm3[0] f* zmm9[0]
            zmm1 = zmm2[0] f/ zmm4[0]
            zmm3[0] = zmm3[0] f/ zmm5[0]
            zmm3[0] = zmm3[0] f* zmm3[0]
            zmm3[0] = zmm3[0] f+ zmm1 * zmm1
            int128_t zmm12
            zmm12.d = 1f f/ _mm_sqrt_ss(zmm3[0], zmm3[0])[0]
            zmm2[0] = zmm2[0] f* zmm12.d
            zmm3[0] = zmm3[0] f* zmm12.d
            break
    
    arg1[2] = zmm3[0]
    arg1[1] = zmm2[0]
    *arg1 = 0
else
    if (not(zmm3[0] f> 0f))
        zmm5 ^= data_142d3f780
    
    arg1[2] = zmm5[0]
    *arg1 = 0

return arg1
