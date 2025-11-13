// 函数: sub_14280fb90
// 地址: 0x14280fb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = *(arg3 + 4)
uint32_t zmm4[0x4] = *(arg3 + 8)
bool cond:0 = zmm3[0] f< zmm4[0]
uint32_t zmm6[0x4] = arg2[1]
uint32_t zmm7[0x4] = arg2[2]
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm6, data_142d3f770)
uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm7, data_142d3f770)

if (not(cond:0))
    if (temp0_1[0] f>= 9.99999997e-07f)
        goto label_14280fc2d
    
    if (not(zmm6[0] f> 0f))
        zmm3 ^= data_142d3f780
    
    arg1[1] = zmm3[0]
    *arg1 = 0
    arg1[2] = 0
else if (temp0[0] f>= 9.99999997e-07f)
label_14280fc2d:
    uint32_t zmm9[0x4]
    uint32_t var_48_1[0x4] = zmm9
    uint32_t zmm5[0x4] = zmm3
    zmm3[0] = zmm3[0] f* temp0[0]
    uint32_t zmm8[0x4] = zmm4
    int32_t rax_1 = 0
    uint32_t zmm10[0x4]
    uint32_t var_58_1[0x4] = zmm10
    float zmm12[0x4] = zmm3
    uint32_t zmm13[0x4] = 0x3f800000
    uint32_t zmm14[0x4] = *arg3
    zmm4[0] = zmm4[0] f* temp0_1[0]
    zmm14[0] = zmm14[0] f* zmm14[0]
    zmm5[0] = zmm5[0] f* zmm3[0]
    zmm8[0] = zmm8[0] f* zmm4[0]
    uint32_t arg_20 = zmm3[0]
    zmm12[0] = zmm12[0] f- zmm5[0]
    uint32_t arg_10 = zmm5[0]
    zmm14[0] = zmm14[0] f* 0f
    zmm4[0] = zmm4[0] f- zmm8[0]
    uint32_t arg_18 = zmm8[0]
    uint32_t var_b8_1 = zmm4[0]
    zmm14[0] = zmm14[0] f* 0f
    float temp0_2[0x4] = _mm_max_ss(zmm12[0], zmm4[0])
    zmm14[0] = zmm14[0] f* zmm14[0]
    
    while (true)
        zmm8[0] = zmm8[0] f+ temp0_2[0]
        zmm10 = 0x3f800000
        zmm9 = 0x3f800000
        zmm5[0] = zmm5[0] f+ temp0_2[0]
        zmm10[0] = 1f f/ zmm8[0]
        zmm9[0] = 1f f/ zmm5[0]
        zmm10[0] = zmm10[0] f* var_b8_1
        zmm9[0] = zmm9[0] f* arg_20
        zmm10[0] = zmm10[0] f* zmm10[0]
        zmm9[0] = zmm9[0] f* zmm9[0]
        zmm10[0] = zmm10[0] f+ zmm9[0]
        zmm10[0] = zmm10[0] f- 1f
        
        if (zmm10[0] f< 9.99999975e-05f)
            zmm6[0] = zmm6[0] f* arg_10
            zmm7[0] = zmm7[0] f* arg_18
            zmm14[0] = zmm14[0] f* *arg2
            zmm6[0] = zmm6[0] f* zmm9[0]
            zmm7[0] = zmm7[0] f* zmm10[0]
            arg1[1] = zmm6[0]
            zmm14[0] = zmm14[0] f* 0f
            arg1[2] = zmm7[0]
            break
        
        zmm9[0] = zmm9[0] f* zmm9[0]
        rax_1 += 1
        zmm14[0] = zmm14[0] f* 0f
        zmm10[0] = zmm10[0] f* zmm10[0]
        zmm9[0] = zmm9[0] f* 2f
        zmm14[0] = zmm14[0] f* 2f
        zmm10[0] = zmm10[0] f* -2f
        zmm8 = arg_18
        zmm14[0] = zmm14[0] f+ zmm9[0]
        zmm10[0] = zmm10[0] f- zmm14[0]
        zmm10[0] = zmm10[0] f/ zmm10[0]
        temp0_2[0] = temp0_2[0] f- zmm10[0]
        zmm5 = arg_10
        
        if (rax_1 u>= 0x14)
            zmm14[0] = zmm14[0] f* *arg2
            zmm6[0] = zmm6[0] f* zmm5[0]
            zmm7[0] = zmm7[0] f* zmm8[0]
            zmm6[0] = zmm6[0] f* zmm9[0]
            zmm7[0] = zmm7[0] f* zmm10[0]
            zmm14[0] = zmm14[0] f* 0f
            zmm7[0] = zmm7[0] f/ zmm4[0]
            zmm6[0] = zmm6[0] f/ zmm3[0]
            zmm7[0] = zmm7[0] f* zmm7[0]
            zmm6[0] = zmm6[0] f* zmm6[0]
            zmm7[0] = zmm7[0] f+ zmm6[0]
            zmm13[0] = 1f f/ _mm_sqrt_ss(zmm7[0], zmm7[0])[0]
            zmm14[0] = zmm14[0] f* zmm13[0]
            zmm13[0] = zmm13[0] f* zmm6[0]
            zmm13[0] = zmm13[0] f* zmm7[0]
            arg1[1] = zmm13[0]
            arg1[2] = zmm13[0]
            break
    
    *arg1 = zmm14[0]
else
    if (not(zmm7[0] f> 0f))
        zmm4 ^= data_142d3f780
    
    arg1[2] = zmm4[0]
    *arg1 = 0

return arg1
