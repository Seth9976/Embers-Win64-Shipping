// 函数: sub_1422ebf00
// 地址: 0x1422ebf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int128_t zmm9 = zx.o(0)

if (not(arg3[0] <= 0f))
    char rax = *arg2
    float zmm8[0x4] = _mm_min_ss(arg3[0], 0x3f800000)
    
    if ((rax & 1) != 0)
        *(arg1 + 0xe04) = (*(arg2 + 0x24) f- *(arg1 + 0xe04)) * zmm8[0] f+ *(arg1 + 0xe04)
        rax = *arg2
    
    if ((rax & 2) != 0)
        *(arg1 + 0xe08) = (*(arg2 + 0x28) f- *(arg1 + 0xe08)) * zmm8[0] f+ *(arg1 + 0xe08)
        rax = *arg2
    
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    float var_88[0x4]
    float zmm0
    float zmm3
    float zmm4
    
    if ((rax & 4) != 0)
        zmm6 = *(arg2 + 0x30)
        zmm6[0] = zmm6[0] f- *(arg1 + 0xe10)
        zmm4 = *(arg2 + 0x34) f- *(arg1 + 0xe14)
        zmm3 = *(arg2 + 0x38) f- *(arg1 + 0xe18)
        zmm0 = *(arg2 + 0x3c) f- *(arg1 + 0xe1c)
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm4 = zmm4 * zmm8[0]
        zmm6[0] = zmm6[0] f+ *(arg1 + 0xe10)
        zmm4 = zmm4 f+ *(arg1 + 0xe14)
        zmm0 = zmm0 * zmm8[0]
        zmm3 = zmm3 * zmm8[0] f+ *(arg1 + 0xe18)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm0 = zmm0 f+ *(arg1 + 0xe1c)
        temp0_2[0] = zmm4
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
        temp0_3[0] = zmm3
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
        temp0_4[0] = zmm0
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
        *(arg1 + 0xe10) = temp0_5
        rax = *arg2
        var_88 = temp0_5
    
    if ((rax & 8) != 0)
        zmm6 = *(arg2 + 0x40)
        zmm6[0] = zmm6[0] f- *(arg1 + 0xe20)
        zmm4 = *(arg2 + 0x44) f- *(arg1 + 0xe24)
        zmm3 = *(arg2 + 0x48) f- *(arg1 + 0xe28)
        zmm0 = *(arg2 + 0x4c) f- *(arg1 + 0xe2c)
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm4 = zmm4 * zmm8[0]
        zmm6[0] = zmm6[0] f+ *(arg1 + 0xe20)
        zmm4 = zmm4 f+ *(arg1 + 0xe24)
        zmm0 = zmm0 * zmm8[0]
        zmm3 = zmm3 * zmm8[0] f+ *(arg1 + 0xe28)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm0 = zmm0 f+ *(arg1 + 0xe2c)
        temp0_6[0] = zmm4
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
        temp0_7[0] = zmm3
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
        temp0_8[0] = zmm0
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
        *(arg1 + 0xe20) = temp0_9
        rax = *arg2
        var_88 = temp0_9
    
    if ((rax & 0x10) != 0)
        zmm6 = *(arg2 + 0x50)
        zmm6[0] = zmm6[0] f- *(arg1 + 0xe30)
        zmm4 = *(arg2 + 0x54) f- *(arg1 + 0xe34)
        zmm3 = *(arg2 + 0x58) f- *(arg1 + 0xe38)
        zmm0 = *(arg2 + 0x5c) f- *(arg1 + 0xe3c)
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm4 = zmm4 * zmm8[0]
        zmm6[0] = zmm6[0] f+ *(arg1 + 0xe30)
        zmm4 = zmm4 f+ *(arg1 + 0xe34)
        zmm0 = zmm0 * zmm8[0]
        zmm3 = zmm3 * zmm8[0] f+ *(arg1 + 0xe38)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm0 = zmm0 f+ *(arg1 + 0xe3c)
        temp0_10[0] = zmm4
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
        temp0_11[0] = zmm3
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x27)
        temp0_12[0] = zmm0
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x39)
        *(arg1 + 0xe30) = temp0_13
        rax = *arg2
        var_88 = temp0_13
    
    if ((rax & 0x20) != 0)
        zmm6 = *(arg2 + 0x60)
        zmm6[0] = zmm6[0] f- *(arg1 + 0xe40)
        zmm4 = *(arg2 + 0x64) f- *(arg1 + 0xe44)
        zmm3 = *(arg2 + 0x68) f- *(arg1 + 0xe48)
        zmm0 = *(arg2 + 0x6c) f- *(arg1 + 0xe4c)
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm4 = zmm4 * zmm8[0]
        zmm6[0] = zmm6[0] f+ *(arg1 + 0xe40)
        zmm4 = zmm4 f+ *(arg1 + 0xe44)
        zmm0 = zmm0 * zmm8[0]
        zmm3 = zmm3 * zmm8[0] f+ *(arg1 + 0xe48)
        float temp0_14[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm0 = zmm0 f+ *(arg1 + 0xe4c)
        temp0_14[0] = zmm4
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc6)
        temp0_15[0] = zmm3
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x27)
        temp0_16[0] = zmm0
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
        *(arg1 + 0xe40) = temp0_17
        rax = *arg2
        var_88 = temp0_17
    
    if ((rax & 0x40) != 0)
        zmm6 = *(arg2 + 0x70)
        zmm6[0] = zmm6[0] f- *(arg1 + 0xe50)
        zmm4 = *(arg2 + 0x74) f- *(arg1 + 0xe54)
        zmm3 = *(arg2 + 0x78) f- *(arg1 + 0xe58)
        zmm0 = *(arg2 + 0x7c) f- *(arg1 + 0xe5c)
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm4 = zmm4 * zmm8[0]
        zmm6[0] = zmm6[0] f+ *(arg1 + 0xe50)
        zmm4 = zmm4 f+ *(arg1 + 0xe54)
        zmm0 = zmm0 * zmm8[0]
        zmm3 = zmm3 * zmm8[0] f+ *(arg1 + 0xe58)
        float temp0_18[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm0 = zmm0 f+ *(arg1 + 0xe5c)
        temp0_18[0] = zmm4
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
        temp0_19[0] = zmm3
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x27)
        temp0_20[0] = zmm0
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x39)
        *(arg1 + 0xe50) = temp0_21
        rax = *arg2
        var_88 = temp0_21
    
    float zmm1
    float zmm5
    
    if (rax s< 0)
        zmm0 = *(arg1 + 0xe60)
        zmm6 = *(arg2 + 0x80)
        zmm1 = *(arg1 + 0xe64)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xe68)
        zmm5 = *(arg1 + 0xe6c)
        zmm3 = *(arg2 + 0x88)
        zmm4 = *(arg2 + 0x84) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x8c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_22[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_22[0] = zmm4 + zmm1
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc6)
        temp0_23[0] = zmm3
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x27)
        temp0_24[0] = zmm0 + zmm5
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x39)
        var_88 = temp0_25
        *(arg1 + 0xe60) = temp0_25
    
    char rax_1 = arg2[1]
    
    if ((rax_1 & 1) != 0)
        zmm0 = *(arg1 + 0xe70)
        zmm6 = *(arg2 + 0x90)
        zmm1 = *(arg1 + 0xe74)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xe78)
        zmm5 = *(arg1 + 0xe7c)
        zmm3 = *(arg2 + 0x98)
        zmm4 = *(arg2 + 0x94) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x9c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_26[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_26[0] = zmm4 + zmm1
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc6)
        temp0_27[0] = zmm3
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x27)
        temp0_28[0] = zmm0 + zmm5
        float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x39)
        *(arg1 + 0xe70) = temp0_29
        rax_1 = arg2[1]
        var_88 = temp0_29
    
    if ((rax_1 & 2) != 0)
        zmm0 = *(arg1 + 0xe80)
        zmm6 = *(arg2 + 0xa0)
        zmm1 = *(arg1 + 0xe84)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xe88)
        zmm5 = *(arg1 + 0xe8c)
        zmm3 = *(arg2 + 0xa8)
        zmm4 = *(arg2 + 0xa4) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0xac) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_30[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_30[0] = zmm4 + zmm1
        float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc6)
        temp0_31[0] = zmm3
        float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x27)
        temp0_32[0] = zmm0 + zmm5
        float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x39)
        *(arg1 + 0xe80) = temp0_33
        rax_1 = arg2[1]
        var_88 = temp0_33
    
    if ((rax_1 & 4) != 0)
        zmm0 = *(arg1 + 0xe90)
        zmm6 = *(arg2 + 0xb0)
        zmm1 = *(arg1 + 0xe94)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xe98)
        zmm5 = *(arg1 + 0xe9c)
        zmm3 = *(arg2 + 0xb8)
        zmm4 = *(arg2 + 0xb4) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0xbc) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_34[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_34[0] = zmm4 + zmm1
        float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc6)
        temp0_35[0] = zmm3
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x27)
        temp0_36[0] = zmm0 + zmm5
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x39)
        *(arg1 + 0xe90) = temp0_37
        rax_1 = arg2[1]
        var_88 = temp0_37
    
    if ((rax_1 & 8) != 0)
        zmm0 = *(arg1 + 0xea0)
        zmm6 = *(arg2 + 0xc0)
        zmm1 = *(arg1 + 0xea4)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xea8)
        zmm5 = *(arg1 + 0xeac)
        zmm3 = *(arg2 + 0xc8)
        zmm4 = *(arg2 + 0xc4) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0xcc) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_38[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_38[0] = zmm4 + zmm1
        float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc6)
        temp0_39[0] = zmm3
        float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x27)
        temp0_40[0] = zmm0 + zmm5
        float temp0_41[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x39)
        *(arg1 + 0xea0) = temp0_41
        rax_1 = arg2[1]
        var_88 = temp0_41
    
    if ((rax_1 & 0x10) != 0)
        zmm0 = *(arg1 + 0xeb0)
        zmm6 = *(arg2 + 0xd0)
        zmm1 = *(arg1 + 0xeb4)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xeb8)
        zmm5 = *(arg1 + 0xebc)
        zmm3 = *(arg2 + 0xd8)
        zmm4 = *(arg2 + 0xd4) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0xdc) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_42[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_42[0] = zmm4 + zmm1
        float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xc6)
        temp0_43[0] = zmm3
        float temp0_44[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x27)
        temp0_44[0] = zmm0 + zmm5
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x39)
        *(arg1 + 0xeb0) = temp0_45
        rax_1 = arg2[1]
        var_88 = temp0_45
    
    if ((rax_1 & 0x20) != 0)
        zmm0 = *(arg1 + 0xec0)
        zmm6 = *(arg2 + 0xe0)
        zmm1 = *(arg1 + 0xec4)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xec8)
        zmm5 = *(arg1 + 0xecc)
        zmm3 = *(arg2 + 0xe8)
        zmm4 = *(arg2 + 0xe4) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0xec) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_46[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_46[0] = zmm4 + zmm1
        float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xc6)
        temp0_47[0] = zmm3
        float temp0_48[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0x27)
        temp0_48[0] = zmm0 + zmm5
        float temp0_49[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0x39)
        *(arg1 + 0xec0) = temp0_49
        rax_1 = arg2[1]
        var_88 = temp0_49
    
    if ((rax_1 & 0x40) != 0)
        zmm0 = *(arg1 + 0xed0)
        zmm6 = *(arg2 + 0xf0)
        zmm1 = *(arg1 + 0xed4)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xed8)
        zmm5 = *(arg1 + 0xedc)
        zmm3 = *(arg2 + 0xf8)
        zmm4 = *(arg2 + 0xf4) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0xfc) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_50[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_50[0] = zmm4 + zmm1
        float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xc6)
        temp0_51[0] = zmm3
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0x27)
        temp0_52[0] = zmm0 + zmm5
        float temp0_53[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0x39)
        *(arg1 + 0xed0) = temp0_53
        rax_1 = arg2[1]
        var_88 = temp0_53
    
    if (rax_1 s< 0)
        zmm0 = *(arg1 + 0xee0)
        zmm6 = *(arg2 + 0x100)
        zmm1 = *(arg1 + 0xee4)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xee8)
        zmm5 = *(arg1 + 0xeec)
        zmm3 = *(arg2 + 0x108)
        zmm4 = *(arg2 + 0x104) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x10c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_54[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_54[0] = zmm4 + zmm1
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xc6)
        temp0_55[0] = zmm3
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x27)
        temp0_56[0] = zmm0 + zmm5
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x39)
        var_88 = temp0_57
        *(arg1 + 0xee0) = temp0_57
    
    char rax_2 = arg2[2]
    
    if ((rax_2 & 1) != 0)
        zmm0 = *(arg1 + 0xef0)
        zmm6 = *(arg2 + 0x110)
        zmm1 = *(arg1 + 0xef4)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xef8)
        zmm5 = *(arg1 + 0xefc)
        zmm3 = *(arg2 + 0x118)
        zmm4 = *(arg2 + 0x114) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x11c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_58[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_58[0] = zmm4 + zmm1
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xc6)
        temp0_59[0] = zmm3
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x27)
        temp0_60[0] = zmm0 + zmm5
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x39)
        *(arg1 + 0xef0) = temp0_61
        rax_2 = arg2[2]
        var_88 = temp0_61
    
    if ((rax_2 & 2) != 0)
        zmm0 = *(arg1 + 0xf00)
        zmm6 = *(arg2 + 0x120)
        zmm1 = *(arg1 + 0xf04)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xf08)
        zmm5 = *(arg1 + 0xf0c)
        zmm3 = *(arg2 + 0x128)
        zmm4 = *(arg2 + 0x124) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x12c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_62[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_62[0] = zmm4 + zmm1
        float temp0_63[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xc6)
        temp0_63[0] = zmm3
        float temp0_64[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x27)
        temp0_64[0] = zmm0 + zmm5
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x39)
        *(arg1 + 0xf00) = temp0_65
        rax_2 = arg2[2]
        var_88 = temp0_65
    
    if ((rax_2 & 4) != 0)
        zmm0 = *(arg1 + 0xf10)
        zmm6 = *(arg2 + 0x130)
        zmm1 = *(arg1 + 0xf14)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xf18)
        zmm5 = *(arg1 + 0xf1c)
        zmm3 = *(arg2 + 0x138)
        zmm4 = *(arg2 + 0x134) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x13c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_66[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_66[0] = zmm4 + zmm1
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xc6)
        temp0_67[0] = zmm3
        float temp0_68[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x27)
        temp0_68[0] = zmm0 + zmm5
        float temp0_69[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x39)
        *(arg1 + 0xf10) = temp0_69
        rax_2 = arg2[2]
        var_88 = temp0_69
    
    if ((rax_2 & 8) != 0)
        zmm0 = *(arg1 + 0xf20)
        zmm6 = *(arg2 + 0x140)
        zmm1 = *(arg1 + 0xf24)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xf28)
        zmm5 = *(arg1 + 0xf2c)
        zmm3 = *(arg2 + 0x148)
        zmm4 = *(arg2 + 0x144) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x14c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_70[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_70[0] = zmm4 + zmm1
        float temp0_71[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xc6)
        temp0_71[0] = zmm3
        float temp0_72[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x27)
        temp0_72[0] = zmm0 + zmm5
        float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x39)
        *(arg1 + 0xf20) = temp0_73
        rax_2 = arg2[2]
        var_88 = temp0_73
    
    if ((rax_2 & 0x10) != 0)
        zmm0 = *(arg1 + 0xf30)
        zmm6 = *(arg2 + 0x150)
        zmm1 = *(arg1 + 0xf34)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xf38)
        zmm5 = *(arg1 + 0xf3c)
        zmm3 = *(arg2 + 0x158)
        zmm4 = *(arg2 + 0x154) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x15c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_74[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_74[0] = zmm4 + zmm1
        float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xc6)
        temp0_75[0] = zmm3
        float temp0_76[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0x27)
        temp0_76[0] = zmm0 + zmm5
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0x39)
        *(arg1 + 0xf30) = temp0_77
        rax_2 = arg2[2]
        var_88 = temp0_77
    
    if ((rax_2 & 0x20) != 0)
        zmm0 = *(arg1 + 0xf40)
        zmm6 = *(arg2 + 0x160)
        zmm1 = *(arg1 + 0xf44)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xf48)
        zmm5 = *(arg1 + 0xf4c)
        zmm3 = *(arg2 + 0x168)
        zmm4 = *(arg2 + 0x164) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x16c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_78[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_78[0] = zmm4 + zmm1
        float temp0_79[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xc6)
        temp0_79[0] = zmm3
        float temp0_80[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0x27)
        temp0_80[0] = zmm0 + zmm5
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0x39)
        *(arg1 + 0xf40) = temp0_81
        rax_2 = arg2[2]
        var_88 = temp0_81
    
    if ((rax_2 & 0x40) != 0)
        zmm0 = *(arg1 + 0xf54)
        *(arg1 + 0xf54) = (*(arg2 + 0x174) - zmm0) * zmm8[0] + zmm0
        rax_2 = arg2[2]
    
    if (rax_2 s< 0)
        zmm0 = *(arg1 + 0xf50)
        *(arg1 + 0xf50) = (*(arg2 + 0x170) - zmm0) * zmm8[0] + zmm0
    
    char rax_3 = arg2[3]
    
    if ((rax_3 & 1) != 0)
        zmm0 = *(arg1 + 0xf58)
        *(arg1 + 0xf58) = (*(arg2 + 0x178) - zmm0) * zmm8[0] + zmm0
        rax_3 = arg2[3]
    
    if ((rax_3 & 2) != 0)
        zmm0 = *(arg1 + 0xf5c)
        *(arg1 + 0xf5c) = (*(arg2 + 0x17c) - zmm0) * zmm8[0] + zmm0
        rax_3 = arg2[3]
    
    if ((rax_3 & 4) != 0)
        zmm0 = *(arg1 + 0xf74)
        zmm6 = *(arg2 + 0x194)
        zmm1 = *(arg1 + 0xf78)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xf7c)
        zmm5 = *(arg1 + 0xf80)
        zmm3 = *(arg2 + 0x19c)
        zmm4 = *(arg2 + 0x198) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x1a0) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_82[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_82[0] = zmm4 + zmm1
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0xc6)
        temp0_83[0] = zmm3
        float temp0_84[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0x27)
        temp0_84[0] = zmm0 + zmm5
        float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x39)
        *(arg1 + 0xf74) = temp0_85
        rax_3 = arg2[3]
        var_88 = temp0_85
    
    if ((rax_3 & 8) != 0)
        zmm0 = *(arg1 + 0xf9c)
        *(arg1 + 0xf9c) = (*(arg2 + 0x1bc) - zmm0) * zmm8[0] + zmm0
        rax_3 = arg2[3]
    
    if ((rax_3 & 0x10) != 0)
        zmm0 = *(arg1 + 0xfa0)
        zmm6 = *(arg2 + 0x1c0)
        zmm1 = *(arg1 + 0xfa4)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xfa8)
        zmm5 = *(arg1 + 0xfac)
        zmm3 = *(arg2 + 0x1c8)
        zmm4 = *(arg2 + 0x1c4) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x1cc) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_86[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_86[0] = zmm4 + zmm1
        float temp0_87[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xc6)
        temp0_87[0] = zmm3
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0x27)
        temp0_88[0] = zmm0 + zmm5
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0x39)
        *(arg1 + 0xfa0) = temp0_89
        rax_3 = arg2[3]
        var_88 = temp0_89
    
    if ((rax_3 & 0x20) != 0)
        zmm0 = *(arg1 + 0xfb0)
        zmm6 = *(arg2 + 0x1d0)
        zmm1 = *(arg1 + 0xfb4)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xfb8)
        zmm5 = *(arg1 + 0xfbc)
        zmm3 = *(arg2 + 0x1d8)
        zmm4 = *(arg2 + 0x1d4) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x1dc) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_90[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_90[0] = zmm4 + zmm1
        float temp0_91[0x4] = _mm_shuffle_ps(temp0_90, temp0_90, 0xc6)
        temp0_91[0] = zmm3
        float temp0_92[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0x27)
        temp0_92[0] = zmm0 + zmm5
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0x39)
        *(arg1 + 0xfb0) = temp0_93
        rax_3 = arg2[3]
        var_88 = temp0_93
    
    if ((rax_3 & 0x40) != 0)
        zmm0 = *(arg1 + 0xfc0)
        zmm6 = *(arg2 + 0x1e0)
        zmm1 = *(arg1 + 0xfc4)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xfc8)
        zmm5 = *(arg1 + 0xfcc)
        zmm3 = *(arg2 + 0x1e8)
        zmm4 = *(arg2 + 0x1e4) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x1ec) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_94[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_94[0] = zmm4 + zmm1
        float temp0_95[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0xc6)
        temp0_95[0] = zmm3
        float temp0_96[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0x27)
        temp0_96[0] = zmm0 + zmm5
        float temp0_97[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0x39)
        *(arg1 + 0xfc0) = temp0_97
        rax_3 = arg2[3]
        var_88 = temp0_97
    
    if (rax_3 s< 0)
        zmm0 = *(arg1 + 0xfd0)
        *(arg1 + 0xfd0) = (*(arg2 + 0x1f0) - zmm0) * zmm8[0] + zmm0
    
    char rax_4 = arg2[4]
    
    if ((rax_4 & 1) != 0)
        zmm0 = *(arg1 + 0xfdc)
        *(arg1 + 0xfdc) = (*(arg2 + 0x1fc) - zmm0) * zmm8[0] + zmm0
        rax_4 = arg2[4]
    
    if ((rax_4 & 2) != 0)
        zmm0 = *(arg1 + 0xfd8)
        *(arg1 + 0xfd8) = (*(arg2 + 0x1f8) - zmm0) * zmm8[0] + zmm0
        rax_4 = arg2[4]
    
    if ((rax_4 & 4) != 0)
        zmm0 = *(arg1 + 0xfd4)
        *(arg1 + 0xfd4) = (*(arg2 + 0x1f4) - zmm0) * zmm8[0] + zmm0
        rax_4 = arg2[4]
    
    if ((rax_4 & 8) != 0)
        zmm0 = *(arg1 + 0xf84)
        zmm6 = *(arg2 + 0x1a4)
        zmm1 = *(arg1 + 0xf88)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xf8c)
        zmm5 = *(arg1 + 0xf90)
        zmm3 = *(arg2 + 0x1ac)
        zmm4 = *(arg2 + 0x1a8) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x1b0) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_98[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_98[0] = zmm4 + zmm1
        float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xc6)
        temp0_99[0] = zmm3
        float temp0_100[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0x27)
        temp0_100[0] = zmm0 + zmm5
        float temp0_101[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0x39)
        *(arg1 + 0xf84) = temp0_101
        rax_4 = arg2[4]
        var_88 = temp0_101
    
    if ((rax_4 & 0x10) != 0)
        zmm0 = *(arg1 + 0xf94)
        *(arg1 + 0xf94) = (*(arg2 + 0x1b4) - zmm0) * zmm8[0] + zmm0
        rax_4 = arg2[4]
    
    if ((rax_4 & 0x20) != 0)
        zmm0 = *(arg1 + 0xf98)
        *(arg1 + 0xf98) = (*(arg2 + 0x1b8) - zmm0) * zmm8[0] + zmm0
        rax_4 = arg2[4]
    
    if ((rax_4 & 0x40) != 0)
        zmm0 = *(arg1 + 0xf60)
        *(arg1 + 0xf60) = (*(arg2 + 0x180) - zmm0) * zmm8[0] + zmm0
        rax_4 = arg2[4]
    
    if (rax_4 s< 0)
        zmm0 = *(arg1 + 0xf64)
        *(arg1 + 0xf64) = (*(arg2 + 0x184) - zmm0) * zmm8[0] + zmm0
    
    char rax_5 = arg2[5]
    
    if ((rax_5 & 1) != 0)
        zmm0 = *(arg1 + 0xf68)
        *(arg1 + 0xf68) = (*(arg2 + 0x188) - zmm0) * zmm8[0] + zmm0
        rax_5 = arg2[5]
    
    if ((rax_5 & 2) != 0)
        zmm0 = *(arg1 + 0xf6c)
        *(arg1 + 0xf6c) = (*(arg2 + 0x18c) - zmm0) * zmm8[0] + zmm0
        rax_5 = arg2[5]
    
    if ((rax_5 & 4) != 0)
        zmm0 = *(arg1 + 0xf70)
        *(arg1 + 0xf70) = (*(arg2 + 0x190) - zmm0) * zmm8[0] + zmm0
        rax_5 = arg2[5]
    
    if ((rax_5 & 8) != 0)
        zmm0 = *(arg1 + 0xfe0)
        zmm6 = *(arg2 + 0x200)
        zmm1 = *(arg1 + 0xfe4)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0xfe8)
        zmm5 = *(arg1 + 0xfec)
        zmm3 = *(arg2 + 0x208)
        zmm4 = *(arg2 + 0x204) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x20c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_102[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_102[0] = zmm4 + zmm1
        float temp0_103[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0xc6)
        temp0_103[0] = zmm3
        float temp0_104[0x4] = _mm_shuffle_ps(temp0_103, temp0_103, 0x27)
        temp0_104[0] = zmm0 + zmm5
        float temp0_105[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0x39)
        *(arg1 + 0xfe0) = temp0_105
        rax_5 = arg2[5]
        var_88 = temp0_105
    
    if ((rax_5 & 0x10) != 0)
        zmm0 = *(arg1 + 0xff0)
        *(arg1 + 0xff0) = (*(arg2 + 0x210) - zmm0) * zmm8[0] + zmm0
        rax_5 = arg2[5]
    
    if ((rax_5 & 0x20) != 0)
        zmm0 = *(arg1 + 0xff4)
        *(arg1 + 0xff4) = (*(arg2 + 0x214) - zmm0) * zmm8[0] + zmm0
    
    char rax_6 = arg2[6]
    
    if ((rax_6 & 2) != 0)
        zmm0 = *(arg1 + 0xff8)
        *(arg1 + 0xff8) = (*(arg2 + 0x218) - zmm0) * zmm8[0] + zmm0
        rax_6 = arg2[6]
    
    if ((rax_6 & 4) != 0)
        zmm0 = *(arg1 + 0xffc)
        *(arg1 + 0xffc) = (*(arg2 + 0x21c) - zmm0) * zmm8[0] + zmm0
        rax_6 = arg2[6]
    
    if ((rax_6 & 8) != 0)
        zmm0 = *(arg1 + 0x101c)
        zmm6 = *(arg2 + 0x23c)
        zmm1 = *(arg1 + 0x1020)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x1024)
        zmm5 = *(arg1 + 0x1028)
        zmm3 = *(arg2 + 0x244)
        zmm4 = *(arg2 + 0x240) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x248) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_106[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_106[0] = zmm4 + zmm1
        float temp0_107[0x4] = _mm_shuffle_ps(temp0_106, temp0_106, 0xc6)
        temp0_107[0] = zmm3
        float temp0_108[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0x27)
        temp0_108[0] = zmm0 + zmm5
        float temp0_109[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0x39)
        var_88 = temp0_109
        *(arg1 + 0x101c) = temp0_109
    
    if (arg2[7] s< 0)
        zmm0 = *(arg1 + 0x1000)
        *(arg1 + 0x1000) = (*(arg2 + 0x220) - zmm0) * zmm8[0] + zmm0
    
    char rax_7 = arg2[6]
    
    if ((rax_7 & 0x10) != 0)
        zmm0 = *(arg1 + 0x1004)
        *(arg1 + 0x1004) = (*(arg2 + 0x224) - zmm0) * zmm8[0] + zmm0
        rax_7 = arg2[6]
    
    if ((rax_7 & 0x40) != 0)
        zmm0 = *(arg1 + 0x102c)
        zmm6 = *(arg2 + 0x24c)
        zmm1 = *(arg1 + 0x1030)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x1034)
        zmm5 = *(arg1 + 0x1038)
        zmm3 = *(arg2 + 0x254)
        zmm4 = *(arg2 + 0x250) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x258) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_110[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_110[0] = zmm4 + zmm1
        float temp0_111[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0xc6)
        temp0_111[0] = zmm3
        float temp0_112[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0x27)
        temp0_112[0] = zmm0 + zmm5
        float temp0_113[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0x39)
        *(arg1 + 0x102c) = temp0_113
        rax_7 = arg2[6]
        var_88 = temp0_113
    
    if ((rax_7 & 0x20) != 0)
        zmm0 = *(arg1 + 0x1008)
        *(arg1 + 0x1008) = (*(arg2 + 0x228) - zmm0) * zmm8[0] + zmm0
        rax_7 = arg2[6]
    
    if (rax_7 s< 0)
        zmm0 = *(arg1 + 0x103c)
        zmm6 = *(arg2 + 0x25c)
        zmm1 = *(arg1 + 0x1040)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x1044)
        zmm5 = *(arg1 + 0x1048)
        zmm3 = *(arg2 + 0x264)
        zmm4 = *(arg2 + 0x260) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x268) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_114[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_114[0] = zmm4 + zmm1
        float temp0_115[0x4] = _mm_shuffle_ps(temp0_114, temp0_114, 0xc6)
        temp0_115[0] = zmm3
        float temp0_116[0x4] = _mm_shuffle_ps(temp0_115, temp0_115, 0x27)
        temp0_116[0] = zmm0 + zmm5
        float temp0_117[0x4] = _mm_shuffle_ps(temp0_116, temp0_116, 0x39)
        var_88 = temp0_117
        *(arg1 + 0x103c) = temp0_117
    
    char rax_8 = arg2[7]
    
    if ((rax_8 & 1) != 0)
        zmm0 = *(arg1 + 0x100c)
        *(arg1 + 0x100c) = (*(arg2 + 0x22c) - zmm0) * zmm8[0] + zmm0
        rax_8 = arg2[7]
    
    if ((rax_8 & 2) != 0)
        zmm0 = *(arg1 + 0x104c)
        zmm6 = *(arg2 + 0x26c)
        zmm1 = *(arg1 + 0x1050)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x1054)
        zmm5 = *(arg1 + 0x1058)
        zmm3 = *(arg2 + 0x274)
        zmm4 = *(arg2 + 0x270) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x278) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_118[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_118[0] = zmm4 + zmm1
        float temp0_119[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xc6)
        temp0_119[0] = zmm3
        float temp0_120[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0x27)
        temp0_120[0] = zmm0 + zmm5
        float temp0_121[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0x39)
        *(arg1 + 0x104c) = temp0_121
        rax_8 = arg2[7]
        var_88 = temp0_121
    
    if ((rax_8 & 4) != 0)
        zmm0 = *(arg1 + 0x1010)
        *(arg1 + 0x1010) = (*(arg2 + 0x230) - zmm0) * zmm8[0] + zmm0
        rax_8 = arg2[7]
    
    if ((rax_8 & 8) != 0)
        zmm0 = *(arg1 + 0x105c)
        zmm6 = *(arg2 + 0x27c)
        zmm1 = *(arg1 + 0x1060)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x1064)
        zmm5 = *(arg1 + 0x1068)
        zmm3 = *(arg2 + 0x284)
        zmm4 = *(arg2 + 0x280) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x288) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_122[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_122[0] = zmm4 + zmm1
        float temp0_123[0x4] = _mm_shuffle_ps(temp0_122, temp0_122, 0xc6)
        temp0_123[0] = zmm3
        float temp0_124[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0x27)
        temp0_124[0] = zmm0 + zmm5
        float temp0_125[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0x39)
        *(arg1 + 0x105c) = temp0_125
        rax_8 = arg2[7]
        var_88 = temp0_125
    
    if ((rax_8 & 0x10) != 0)
        zmm0 = *(arg1 + 0x1014)
        *(arg1 + 0x1014) = (*(arg2 + 0x234) - zmm0) * zmm8[0] + zmm0
        rax_8 = arg2[7]
    
    if ((rax_8 & 0x20) != 0)
        zmm0 = *(arg1 + 0x106c)
        zmm6 = *(arg2 + 0x28c)
        zmm1 = *(arg1 + 0x1070)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x1074)
        zmm5 = *(arg1 + 0x1078)
        zmm3 = *(arg2 + 0x294)
        zmm4 = *(arg2 + 0x290) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x298) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_126[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_126[0] = zmm4 + zmm1
        float temp0_127[0x4] = _mm_shuffle_ps(temp0_126, temp0_126, 0xc6)
        temp0_127[0] = zmm3
        float temp0_128[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0x27)
        temp0_128[0] = zmm0 + zmm5
        float temp0_129[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0x39)
        *(arg1 + 0x106c) = temp0_129
        rax_8 = arg2[7]
        var_88 = temp0_129
    
    if ((rax_8 & 0x40) != 0)
        zmm0 = *(arg1 + 0x1018)
        *(arg1 + 0x1018) = (*(arg2 + 0x238) - zmm0) * zmm8[0] + zmm0
    
    char rax_9 = arg2[9]
    
    if ((rax_9 & 1) != 0)
        zmm0 = *(arg1 + 0x10a8)
        *(arg1 + 0x10a8) = (*(arg2 + 0x2c8) - zmm0) * zmm8[0] + zmm0
        rax_9 = arg2[9]
    
    if ((rax_9 & 2) != 0)
        zmm0 = *(arg1 + 0x10ac)
        zmm6 = *(arg2 + 0x2cc)
        zmm1 = *(arg1 + 0x10b0)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x10b4)
        zmm5 = *(arg1 + 0x10b8)
        zmm3 = *(arg2 + 0x2d4)
        zmm4 = *(arg2 + 0x2d0) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x2d8) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_130[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_130[0] = zmm4 + zmm1
        float temp0_131[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0xc6)
        temp0_131[0] = zmm3
        float temp0_132[0x4] = _mm_shuffle_ps(temp0_131, temp0_131, 0x27)
        temp0_132[0] = zmm0 + zmm5
        float temp0_133[0x4] = _mm_shuffle_ps(temp0_132, temp0_132, 0x39)
        var_88 = temp0_133
        *(arg1 + 0x10ac) = temp0_133
    
    char rax_10 = arg2[8]
    
    if ((rax_10 & 2) != 0)
        zmm0 = *(arg1 + 0x107c)
        *(arg1 + 0x107c) = (*(arg2 + 0x29c) - zmm0) * zmm8[0] + zmm0
        rax_10 = arg2[8]
    
    if ((rax_10 & 4) != 0)
        zmm0 = *(arg1 + 0x1088)
        arg3 = *(arg1 + 0x108c)
        zmm1 = (*(arg2 + 0x2ac) - arg3[0]) * zmm8[0] + arg3[0]
        *(arg1 + 0x1088) = (*(arg2 + 0x2a8) - zmm0) * zmm8[0] + zmm0
        *(arg1 + 0x108c) = zmm1
        rax_10 = arg2[8]
    
    if ((rax_10 & 0x10) != 0)
        zmm0 = *(arg1 + 0x1090)
        *(arg1 + 0x1090) = (*(arg2 + 0x2b0) - zmm0) * zmm8[0] + zmm0
        rax_10 = arg2[8]
    
    if ((rax_10 & 0x20) != 0)
        zmm0 = *(arg1 + 0x1094)
        *(arg1 + 0x1094) = (*(arg2 + 0x2b4) - zmm0) * zmm8[0] + zmm0
        rax_10 = arg2[8]
    
    if ((rax_10 & 0x40) != 0)
        zmm0 = *(arg1 + 0x1098)
        *(arg1 + 0x1098) = (*(arg2 + 0x2b8) - zmm0) * zmm8[0] + zmm0
    
    char rax_11 = arg2[5]
    
    if (rax_11 s< 0)
        zmm0 = *(arg1 + 0x10cc)
        *(arg1 + 0x10cc) = (*(arg2 + 0x2ec) - zmm0) * zmm8[0] + zmm0
        rax_11 = arg2[5]
    
    if ((rax_11 & 0x40) != 0)
        zmm0 = *(arg1 + 0x10bc)
        zmm6 = *(arg2 + 0x2dc)
        zmm1 = *(arg1 + 0x10c0)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x10c4)
        zmm5 = *(arg1 + 0x10c8)
        zmm3 = *(arg2 + 0x2e4)
        zmm4 = *(arg2 + 0x2e0) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x2e8) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_134[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_134[0] = zmm4 + zmm1
        float temp0_135[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xc6)
        temp0_135[0] = zmm3
        float temp0_136[0x4] = _mm_shuffle_ps(temp0_135, temp0_135, 0x27)
        temp0_136[0] = zmm0 + zmm5
        float temp0_137[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0x39)
        var_88 = temp0_137
        *(arg1 + 0x10bc) = temp0_137
    
    char rax_12 = arg2[9]
    
    if ((rax_12 & 8) != 0)
        zmm0 = *(arg1 + 0x10d8)
        *(arg1 + 0x10d8) = (*(arg2 + 0x2f8) - zmm0) * zmm8[0] + zmm0
        rax_12 = arg2[9]
    
    if ((rax_12 & 0x10) != 0)
        zmm0 = *(arg1 + 0x10dc)
        *(arg1 + 0x10dc) = (*(arg2 + 0x2fc) - zmm0) * zmm8[0] + zmm0
        rax_12 = arg2[9]
    
    if ((rax_12 & 0x40) != 0)
        zmm0 = *(arg1 + 0x1110)
        *(arg1 + 0x1110) = (*(arg2 + 0x330) - zmm0) * zmm8[0] + zmm0
        rax_12 = arg2[9]
    
    if (rax_12 s< 0)
        zmm0 = *(arg1 + 0x1114)
        *(arg1 + 0x1114) = (*(arg2 + 0x334) - zmm0) * zmm8[0] + zmm0
    
    char rax_13 = arg2[0xa]
    
    if ((rax_13 & 1) != 0)
        zmm0 = *(arg1 + 0x1118)
        *(arg1 + 0x1118) = (*(arg2 + 0x338) - zmm0) * zmm8[0] + zmm0
        rax_13 = arg2[0xa]
    
    if ((rax_13 & 2) != 0)
        zmm0 = *(arg1 + 0x111c)
        *(arg1 + 0x111c) = (*(arg2 + 0x33c) - zmm0) * zmm8[0] + zmm0
        rax_13 = arg2[0xa]
    
    if ((rax_13 & 8) != 0)
        zmm0 = *(arg1 + 0x1120)
        *(arg1 + 0x1120) = (*(arg2 + 0x340) - zmm0) * zmm8[0] + zmm0
        rax_13 = arg2[0xa]
    
    if ((rax_13 & 0x10) != 0)
        zmm0 = *(arg1 + 0x1124)
        *(arg1 + 0x1124) = (*(arg2 + 0x344) - zmm0) * zmm8[0] + zmm0
        rax_13 = arg2[0xa]
    
    if ((rax_13 & 0x20) != 0)
        zmm0 = *(arg1 + 0x10ec)
        *(arg1 + 0x10ec) = (*(arg2 + 0x30c) - zmm0) * zmm8[0] + zmm0
    
    char rax_14 = arg2[0xb]
    
    if ((rax_14 & 2) != 0)
        zmm0 = *(arg1 + 0x1128)
        *(arg1 + 0x1128) = (*(arg2 + 0x348) - zmm0) * zmm8[0] + zmm0
        rax_14 = arg2[0xb]
    
    if ((rax_14 & 4) != 0)
        zmm0 = *(arg1 + 0x112c)
        *(arg1 + 0x112c) = (*(arg2 + 0x34c) - zmm0) * zmm8[0] + zmm0
        rax_14 = arg2[0xb]
    
    if ((rax_14 & 8) != 0)
        zmm0 = *(arg1 + 0x1134)
        *(arg1 + 0x1134) = (*(arg2 + 0x354) - zmm0) * zmm8[0] + zmm0
        rax_14 = arg2[0xb]
    
    if ((rax_14 & 0x10) != 0)
        zmm0 = *(arg1 + 0x1138)
        zmm6 = *(arg2 + 0x358)
        zmm1 = *(arg1 + 0x113c)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x1140)
        zmm5 = *(arg1 + 0x1144)
        zmm3 = *(arg2 + 0x360)
        zmm4 = *(arg2 + 0x35c) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x364) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_138[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_138[0] = zmm4 + zmm1
        float temp0_139[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xc6)
        temp0_139[0] = zmm3
        float temp0_140[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0x27)
        temp0_140[0] = zmm0 + zmm5
        float temp0_141[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0x39)
        *(arg1 + 0x1138) = temp0_141
        rax_14 = arg2[0xb]
        var_88 = temp0_141
    
    if ((rax_14 & 0x40) != 0)
        zmm0 = *(arg1 + 0x1148)
        *(arg1 + 0x1148) = (*(arg2 + 0x368) - zmm0) * zmm8[0] + zmm0
    
    char rax_15 = arg2[0xc]
    
    if ((rax_15 & 1) != 0)
        zmm0 = *(arg1 + 0x114c)
        *(arg1 + 0x114c) = (*(arg2 + 0x36c) - zmm0) * zmm8[0] + zmm0
        rax_15 = arg2[0xc]
    
    if ((rax_15 & 2) != 0)
        zmm0 = *(arg1 + 0x11d8)
        *(arg1 + 0x11d8) = (*(arg2 + 0x3f8) - zmm0) * zmm8[0] + zmm0
        rax_15 = arg2[0xc]
    
    if ((rax_15 & 4) != 0)
        zmm0 = *(arg1 + 0x11e0)
        *(arg1 + 0x11e0) = (*(arg2 + 0x400) - zmm0) * zmm8[0] + zmm0
        rax_15 = arg2[0xc]
    
    if ((rax_15 & 8) != 0)
        zmm0 = *(arg1 + 0x11dc)
        *(arg1 + 0x11dc) = (*(arg2 + 0x3fc) - zmm0) * zmm8[0] + zmm0
        rax_15 = arg2[0xc]
    
    if ((rax_15 & 0x10) != 0)
        zmm0 = *(arg1 + 0x11e4)
        *(arg1 + 0x11e4) = (*(arg2 + 0x404) - zmm0) * zmm8[0] + zmm0
        rax_15 = arg2[0xc]
    
    if ((rax_15 & 0x20) != 0)
        zmm0 = *(arg1 + 0x11e8)
        *(arg1 + 0x11e8) = (*(arg2 + 0x408) - zmm0) * zmm8[0] + zmm0
        rax_15 = arg2[0xc]
    
    if ((rax_15 & 0x40) != 0)
        zmm0 = *(arg1 + 0x11ec)
        *(arg1 + 0x11ec) = (*(arg2 + 0x40c) - zmm0) * zmm8[0] + zmm0
        rax_15 = arg2[0xc]
    
    if (rax_15 s< 0)
        zmm0 = *(arg1 + 0x11f4)
        *(arg1 + 0x11f4) = (*(arg2 + 0x414) - zmm0) * zmm8[0] + zmm0
    
    char rax_16 = arg2[0xd]
    
    if ((rax_16 & 1) != 0)
        zmm0 = *(arg1 + 0x11f8)
        *(arg1 + 0x11f8) = (*(arg2 + 0x418) - zmm0) * zmm8[0] + zmm0
        rax_16 = arg2[0xd]
    
    if ((rax_16 & 2) != 0)
        zmm0 = *(arg1 + 0x11fc)
        *(arg1 + 0x11fc) = (*(arg2 + 0x41c) - zmm0) * zmm8[0] + zmm0
        rax_16 = arg2[0xd]
    
    if ((rax_16 & 8) != 0)
        zmm0 = *(arg1 + 0x1200)
        *(arg1 + 0x1200) = (*(arg2 + 0x420) - zmm0) * zmm8[0] + zmm0
        rax_16 = arg2[0xd]
    
    if ((rax_16 & 0x10) != 0)
        zmm0 = *(arg1 + 0x1204)
        *(arg1 + 0x1204) = (*(arg2 + 0x424) - zmm0) * zmm8[0] + zmm0
        rax_16 = arg2[0xd]
    
    if ((rax_16 & 0x20) != 0)
        zmm0 = *(arg1 + 0x1208)
        *(arg1 + 0x1208) = (*(arg2 + 0x428) - zmm0) * zmm8[0] + zmm0
        rax_16 = arg2[0xd]
    
    if ((rax_16 & 0x40) != 0)
        zmm0 = *(arg1 + 0x120c)
        *(arg1 + 0x120c) = (*(arg2 + 0x42c) - zmm0) * zmm8[0] + zmm0
        rax_16 = arg2[0xd]
    
    if (rax_16 s< 0)
        zmm0 = *(arg1 + 0x1210)
        *(arg1 + 0x1210) = (*(arg2 + 0x430) - zmm0) * zmm8[0] + zmm0
    
    if ((arg2[0xe] & 1) != 0)
        zmm0 = *(arg1 + 0x1214)
        *(arg1 + 0x1214) = (*(arg2 + 0x434) - zmm0) * zmm8[0] + zmm0
    
    if (arg2[0x15] s< 0)
        zmm0 = *(arg1 + 0x1220)
        zmm6 = *(arg2 + 0x440)
        zmm1 = *(arg1 + 0x1224)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x1228)
        zmm5 = *(arg1 + 0x122c)
        zmm3 = *(arg2 + 0x448)
        zmm4 = *(arg2 + 0x444) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x44c) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_142[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_142[0] = zmm4 + zmm1
        float temp0_143[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xc6)
        temp0_143[0] = zmm3
        float temp0_144[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0x27)
        temp0_144[0] = zmm0 + zmm5
        float temp0_145[0x4] = _mm_shuffle_ps(temp0_144, temp0_144, 0x39)
        var_88 = temp0_145
        *(arg1 + 0x1220) = temp0_145
    
    char rax_17 = arg2[0x16]
    
    if ((rax_17 & 1) != 0)
        zmm0 = *(arg1 + 0x1230)
        *(arg1 + 0x1230) = (*(arg2 + 0x450) - zmm0) * zmm8[0] + zmm0
        rax_17 = arg2[0x16]
    
    if ((rax_17 & 8) != 0)
        zmm0 = *(arg1 + 0x1254)
        *(arg1 + 0x1254) = (*(arg2 + 0x474) - zmm0) * zmm8[0] + zmm0
        rax_17 = arg2[0x16]
    
    if ((rax_17 & 0x10) != 0)
        zmm0 = *(arg1 + 0x10e0)
        *(arg1 + 0x10e0) = (*(arg2 + 0x300) - zmm0) * zmm8[0] + zmm0
        rax_17 = arg2[0x16]
    
    if ((rax_17 & 0x20) != 0)
        zmm0 = *(arg1 + 0x10e4)
        *(arg1 + 0x10e4) = (*(arg2 + 0x304) - zmm0) * zmm8[0] + zmm0
        rax_17 = arg2[0x16]
    
    if (rax_17 s< 0)
        zmm0 = *(arg1 + 0x1250)
        *(arg1 + 0x1250) = (*(arg2 + 0x470) - zmm0) * zmm8[0] + zmm0
    
    char rax_18 = arg2[0x17]
    
    if ((rax_18 & 1) != 0)
        zmm0 = *(arg1 + 0x125c)
        *(arg1 + 0x125c) = (*(arg2 + 0x47c) - zmm0) * zmm8[0] + zmm0
        rax_18 = arg2[0x17]
    
    if ((rax_18 & 2) != 0)
        zmm0 = *(arg1 + 0x1258)
        *(arg1 + 0x1258) = (*(arg2 + 0x478) - zmm0) * zmm8[0] + zmm0
        rax_18 = arg2[0x17]
    
    if ((rax_18 & 4) != 0)
        zmm0 = *(arg1 + 0x1260)
        *(arg1 + 0x1260) = (*(arg2 + 0x480) - zmm0) * zmm8[0] + zmm0
        rax_18 = arg2[0x17]
    
    if ((rax_18 & 8) != 0)
        zmm0 = *(arg1 + 0x1264)
        *(arg1 + 0x1264) = (*(arg2 + 0x484) - zmm0) * zmm8[0] + zmm0
        rax_18 = arg2[0x17]
    
    if ((rax_18 & 0x10) != 0)
        zmm0 = *(arg1 + 0x1268)
        *(arg1 + 0x1268) = (*(arg2 + 0x488) - zmm0) * zmm8[0] + zmm0
        rax_18 = arg2[0x17]
    
    if ((rax_18 & 0x20) != 0)
        zmm0 = *(arg1 + 0x126c)
        *(arg1 + 0x126c) = (*(arg2 + 0x48c) - zmm0) * zmm8[0] + zmm0
        rax_18 = arg2[0x17]
    
    if ((rax_18 & 0x40) != 0)
        zmm0 = *(arg1 + 0x1270)
        *(arg1 + 0x1270) = (*(arg2 + 0x490) - zmm0) * zmm8[0] + zmm0
        rax_18 = arg2[0x17]
    
    if (rax_18 s< 0)
        zmm0 = *(arg1 + 0x1274)
        *(arg1 + 0x1274) = (*(arg2 + 0x494) - zmm0) * zmm8[0] + zmm0
    
    char rax_19 = arg2[0x18]
    
    if ((rax_19 & 2) != 0)
        zmm0 = *(arg1 + 0x1278)
        *(arg1 + 0x1278) = (*(arg2 + 0x498) - zmm0) * zmm8[0] + zmm0
        rax_19 = arg2[0x18]
    
    if ((rax_19 & 4) != 0)
        zmm0 = *(arg1 + 0x127c)
        *(arg1 + 0x127c) = (*(arg2 + 0x49c) - zmm0) * zmm8[0] + zmm0
        rax_19 = arg2[0x18]
    
    if ((rax_19 & 8) != 0)
        zmm0 = *(arg1 + 0x1280)
        *(arg1 + 0x1280) = (*(arg2 + 0x4a0) - zmm0) * zmm8[0] + zmm0
        rax_19 = arg2[0x18]
    
    if ((rax_19 & 0x10) != 0)
        zmm0 = *(arg1 + 0x1284)
        *(arg1 + 0x1284) = (*(arg2 + 0x4a4) - zmm0) * zmm8[0] + zmm0
        rax_19 = arg2[0x18]
    
    if ((rax_19 & 0x20) != 0)
        zmm0 = *(arg1 + 0x1288)
        *(arg1 + 0x1288) = (*(arg2 + 0x4a8) - zmm0) * zmm8[0] + zmm0
        rax_19 = arg2[0x18]
    
    if (rax_19 s< 0)
        zmm0 = *(arg1 + 0x1290)
        *(arg1 + 0x1290) = (*(arg2 + 0x4b0) - zmm0) * zmm8[0] + zmm0
    
    char rax_20 = arg2[0x19]
    
    if ((rax_20 & 1) != 0)
        zmm0 = *(arg1 + 0x1308)
        *(arg1 + 0x1308) = (*(arg2 + 0x528) - zmm0) * zmm8[0] + zmm0
        rax_20 = arg2[0x19]
    
    if ((rax_20 & 4) != 0)
        zmm0 = *(arg1 + 0x12d0)
        *(arg1 + 0x12d0) = (*(arg2 + 0x4f0) - zmm0) * zmm8[0] + zmm0
        rax_20 = arg2[0x19]
    
    if ((rax_20 & 2) != 0)
        zmm0 = *(arg1 + 0x12cc)
        *(arg1 + 0x12cc) = (*(arg2 + 0x4ec) - zmm0) * zmm8[0] + zmm0
        rax_20 = arg2[0x19]
    
    if ((rax_20 & 8) != 0)
        zmm0 = *(arg1 + 0x12d4)
        *(arg1 + 0x12d4) = (*(arg2 + 0x4f4) - zmm0) * zmm8[0] + zmm0
    
    int32_t rax_21 = *(arg2 + 0x1c)
    
    if ((rax_21.b & 1) != 0)
        *(arg1 + 0x12c8) = arg2[0x4e8]
        rax_21 = *(arg2 + 0x1c)
    
    if ((rax_21.b & 2) != 0)
        *(arg1 + 0x12d8) = *(arg2 + 0x4f8)
        rax_21 = *(arg2 + 0x1c)
    
    if ((rax_21.b & 4) != 0)
        *(arg1 + 0x12dc) = *(arg2 + 0x4fc)
        rax_21 = *(arg2 + 0x1c)
    
    if ((rax_21.b & 8) != 0)
        *(arg1 + 0x12e0) = *(arg2 + 0x500)
        rax_21 = *(arg2 + 0x1c)
    
    if ((rax_21.b & 0x10) != 0)
        *(arg1 + 0x12e4) = arg2[0x504]
        rax_21 = *(arg2 + 0x1c)
    
    if ((rax_21.b & 0x20) != 0)
        *(arg1 + 0x12e5) ^= (arg2[0x505] ^ *(arg1 + 0x12e5)) & 1
        rax_21 = *(arg2 + 0x1c)
    
    if ((rax_21.b & 0x40) != 0)
        *(arg1 + 0x12e6) = arg2[0x506]
        rax_21 = *(arg2 + 0x1c)
    
    if (rax_21.b s< 0)
        *(arg1 + 0x12e8) = *(arg2 + 0x508)
        rax_21 = *(arg2 + 0x1c)
    
    if (test_bit(rax_21, 8))
        *(arg1 + 0x12ec) = *(arg2 + 0x50c)
        rax_21 = *(arg2 + 0x1c)
    
    if (test_bit(rax_21, 9))
        *(arg1 + 0x12f0) = *(arg2 + 0x510)
        rax_21 = *(arg2 + 0x1c)
    
    if (test_bit(rax_21, 0xa))
        *(arg1 + 0x12f4) = arg2[0x514]
        rax_21 = *(arg2 + 0x1c)
    
    if (test_bit(rax_21, 0xb))
        *(arg1 + 0x12f5) ^= (arg2[0x515] ^ *(arg1 + 0x12f5)) & 1
        rax_21 = *(arg2 + 0x1c)
    
    if (test_bit(rax_21, 0xc))
        *(arg1 + 0x1234) = arg2[0x454]
        rax_21 = *(arg2 + 0x1c)
    
    if (test_bit(rax_21, 0xd))
        *(arg1 + 0x1238) = *(arg2 + 0x458)
        rax_21 = *(arg2 + 0x1c)
    
    if (test_bit(rax_21, 0xe))
        *(arg1 + 0x123c) = *(arg2 + 0x45c)
    
    char rax_40 = (*(arg2 + 0x10)).b
    
    if ((rax_40 & 1) != 0)
        *(arg1 + 0x1218) ^= (*(arg2 + 0x438) ^ *(arg1 + 0x1218)) & 1
        rax_40 = (*(arg2 + 0x10)).b
    
    if ((rax_40 & 2) != 0)
        *(arg1 + 0x121c) = *(arg2 + 0x43c)
    
    int32_t rax_43 = *(arg2 + 0x1c)
    
    if (test_bit(rax_43, 0xf))
        *(arg1 + 0x12f8) = *(arg2 + 0x518)
        rax_43 = *(arg2 + 0x1c)
    
    if (test_bit(rax_43, 0x10))
        *(arg1 + 0x12fc) = *(arg2 + 0x51c)
    
    if ((arg2[0x16] & 0x40) != 0)
        *(arg1 + 0x10e8) = *(arg2 + 0x308)
    
    int64_t rcx = *(arg2 + 0x2f0)
    float zmm7[0x4]
    
    if (rcx != 0)
        char rax_46 = arg2[5]
        
        if (rax_46 s< 0)
            arg3 = *(arg2 + 0x2ec)
            float temp0_146[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
            var_88 = temp0_146
            
            if ((rax_46 & 0x40) != 0)
                zmm1 = temp0_146[0] f* *(arg2 + 0x2e0)
                var_88[0] = temp0_146[0] f* *(arg2 + 0x2dc)
                zmm0 = temp0_146[0] f* *(arg2 + 0x2e4)
                temp0_146[0] = temp0_146[0] f* *(arg2 + 0x2e8)
                var_88[2] = zmm0
                var_88[1] = zmm1
                var_88[3] = temp0_146[0]
            
            int64_t var_78_1 = rcx
            zmm7, zmm8, zmm9 = sub_1422f6a70(arg1 + 0xde0, &var_88, zmm8)
    
    int32_t rsi_1 = 0
    
    if ((arg2[0x16] & 4) != 0)
        int64_t r10_1 = *(arg2 + 0x468)
        
        if (r10_1 != 0)
            arg3 = *(arg2 + 0x460)
            
            if (arg3[0] f>= zmm9.d)
                arg3 = _mm_min_ss(arg3[0], 0x3f800000)
            else
                arg3 = zx.o(0)
            
            arg3[0] = arg3[0] * zmm8[0]
            
            if (arg3[0] > 0.996078432f || *(arg1 + 0x1478) == 0)
                sub_1422f28a0(arg1 + 0xde0)
            else
                void* rax_47 = *(arg1 + 0x1470)
                void* r8_1 = arg1 + 0x13f0
                int32_t rcx_2 = 0
                zmm1 = 1f - arg3[0]
                
                if (rax_47 != 0)
                    r8_1 = rax_47
                
                int32_t rdx_2
                
                do
                    float* rax_49 = sx.q(rcx_2) << 4
                    rcx_2 += 1
                    *(rax_49 + r8_1) = zmm1 f* *(rax_49 + r8_1)
                    rdx_2 = *(arg1 + 0x1478)
                while (rcx_2 u< rdx_2)
                
                int32_t rcx_3 = 0
                int64_t r8_2
                void* r9_1
                
                if (rdx_2 != 0)
                    void* rax_50 = *(arg1 + 0x1470)
                    r9_1 = arg1 + 0x13f0
                    
                    if (rax_50 != 0)
                        r9_1 = rax_50
                    
                    while (true)
                        r8_2 = sx.q(rcx_3)
                        
                        if (*((r8_2 << 4) + r9_1 + 8) == r10_1)
                            break
                        
                        rcx_3 += 1
                        
                        if (rcx_3 u>= rdx_2)
                            goto label_1422ee87d
                
                if (rdx_2 == 0 || rcx_3 == 0xffffffff)
                label_1422ee87d:
                    sub_1422f05c0(arg1 + 0xde0, r10_1, arg3[0])
                else
                    int64_t r8_3 = r8_2 * 2
                    arg3[0] = arg3[0] f+ *(r9_1 + (r8_3 << 3))
                    *(r9_1 + (r8_3 << 3)) = arg3[0]
    
    if ((arg2[9] & 4) != 0)
        int64_t rax_53 = *(arg2 + 0x2c0)
        
        if (rax_53 != 0)
            *(arg1 + 0x10a0) = rax_53
    
    if ((arg2[6] & 1) != 0)
        char rax_54 = arg2[0x21]
        
        if (rax_54 != 0)
            *(arg1 + 0xe01) = rax_54
    
    char rax_55 = arg2[8]
    
    if ((rax_55 & 1) != 0)
        int64_t rcx_6 = *(arg2 + 0x2a0)
        
        if (rcx_6 != 0)
            *(arg1 + 0x1080) = rcx_6
            rax_55 = arg2[8]
    
    if (rax_55 s< 0)
        zmm0 = *(arg2 + 0x2bc)
        
        if (not(zmm0 f== zmm9.d))
            *(arg1 + 0x109c) = zmm0
    
    char rax_56 = arg2[0xa]
    
    if ((rax_56 & 0x40) != 0)
        int64_t rcx_7 = *(arg2 + 0x320)
        
        if (rcx_7 != 0)
            *(arg1 + 0x1100) = rcx_7
            rax_56 = arg2[0xa]
    
    if (rax_56 s< 0)
        int64_t rax_57 = *(arg2 + 0x328)
        
        if (rax_57 != 0)
            *(arg1 + 0x1108) = rax_57
    
    char rax_58 = arg2[0xb]
    
    if (rax_58 s< 0)
        int64_t rcx_8 = *(arg2 + 0x370)
        
        if (rcx_8 != 0)
            *(arg1 + 0x1150) = rcx_8
            rax_58 = arg2[0xb]
    
    if ((rax_58 & 0x20) != 0)
        zmm0 = *(arg1 + 0x1158)
        zmm1 = *(arg1 + 0x115c)
        arg3 = *(arg1 + 0x1160)
        zmm5 = *(arg1 + 0x1164)
        zmm6 = *(arg2 + 0x378)
        zmm6[0] = zmm6[0] - zmm0
        zmm4 = *(arg2 + 0x37c) - zmm1
        zmm3 = *(arg2 + 0x380) - arg3[0]
        float var_38_1[0x4] = zmm7
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm4 = zmm4 * zmm8[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm0 = *(arg2 + 0x384) - zmm5
        zmm3 = zmm3 * zmm8[0] + arg3[0]
        float temp0_148[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        temp0_148[0] = zmm4 + zmm1
        float temp0_149[0x4] = _mm_shuffle_ps(temp0_148, temp0_148, 0xc6)
        temp0_149[0] = zmm3
        zmm0 = zmm0 * zmm8[0]
        float temp0_150[0x4] = _mm_shuffle_ps(temp0_149, temp0_149, 0x27)
        temp0_150[0] = zmm0 + zmm5
        *(arg1 + 0x1158) = _mm_shuffle_ps(temp0_150, temp0_150, 0x39)
        zmm0 = *(arg1 + 0x1168)
        zmm1 = *(arg1 + 0x116c)
        arg3 = *(arg1 + 0x1170)
        zmm5 = *(arg1 + 0x1174)
        zmm6 = *(arg2 + 0x388)
        zmm4 = *(arg2 + 0x38c)
        zmm6[0] = zmm6[0] - zmm0
        zmm3 = *(arg2 + 0x390) - arg3[0]
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm4 = (zmm4 - zmm1) * zmm8[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm0 = *(arg2 + 0x394) - zmm5
        zmm3 = zmm3 * zmm8[0] + arg3[0]
        float temp0_152[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        temp0_152[0] = zmm4 + zmm1
        float temp0_153[0x4] = _mm_shuffle_ps(temp0_152, temp0_152, 0xc6)
        temp0_153[0] = zmm3
        zmm0 = zmm0 * zmm8[0]
        float temp0_154[0x4] = _mm_shuffle_ps(temp0_153, temp0_153, 0x27)
        temp0_154[0] = zmm0 + zmm5
        *(arg1 + 0x1168) = _mm_shuffle_ps(temp0_154, temp0_154, 0x39)
        zmm0 = *(arg1 + 0x1178)
        zmm6 = *(arg2 + 0x398)
        zmm1 = *(arg1 + 0x117c)
        zmm6[0] = zmm6[0] - zmm0
        arg3 = *(arg1 + 0x1180)
        zmm5 = *(arg1 + 0x1184)
        zmm3 = *(arg2 + 0x3a0)
        zmm4 = *(arg2 + 0x39c) - zmm1
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm3 = zmm3 - arg3[0]
        zmm6[0] = zmm6[0] + zmm0
        zmm4 = zmm4 * zmm8[0]
        zmm0 = *(arg2 + 0x3a4) - zmm5
        zmm3 = zmm3 * zmm8[0]
        float temp0_156[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3 = zmm3 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        temp0_156[0] = zmm4 + zmm1
        float temp0_157[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xc6)
        temp0_157[0] = zmm3
        float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0x27)
        temp0_158[0] = zmm0 + zmm5
        *(arg1 + 0x1178) = _mm_shuffle_ps(temp0_158, temp0_158, 0x39)
        zmm7 = *(arg1 + 0x1188)
        zmm4 = *(arg1 + 0x118c)
        zmm5 = *(arg1 + 0x1190)
        zmm6 = *(arg1 + 0x1194)
        arg3 = *(arg2 + 0x3ac)
        zmm3 = *(arg2 + 0x3a8) - zmm7[0]
        zmm1 = *(arg2 + 0x3b0)
        arg3[0] = arg3[0] - zmm4
        zmm0 = *(arg2 + 0x3b4) - zmm6[0]
        zmm3 = zmm3 * zmm8[0]
        arg3[0] = arg3[0] * zmm8[0]
        zmm7[0] = zmm7[0] + zmm3
        zmm4 = zmm4 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        zmm5 = zmm5 + (zmm1 - zmm5) * zmm8[0]
        float temp0_160[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
        zmm6[0] = zmm6[0] + zmm0
        temp0_160[0] = zmm4
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc6)
        temp0_161[0] = zmm5
        float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0x27)
        temp0_162[0] = zmm6[0]
        *(arg1 + 0x1188) = _mm_shuffle_ps(temp0_162, temp0_162, 0x39)
        zmm7 = *(arg1 + 0x1198)
        zmm4 = *(arg1 + 0x119c)
        zmm5 = *(arg1 + 0x11a0)
        zmm6 = *(arg1 + 0x11a4)
        arg3 = *(arg2 + 0x3bc)
        zmm3 = *(arg2 + 0x3b8) - zmm7[0]
        zmm1 = *(arg2 + 0x3c0)
        arg3[0] = arg3[0] - zmm4
        zmm0 = *(arg2 + 0x3c4) - zmm6[0]
        zmm3 = zmm3 * zmm8[0]
        arg3[0] = arg3[0] * zmm8[0]
        zmm7[0] = zmm7[0] + zmm3
        zmm4 = zmm4 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        zmm5 = zmm5 + (zmm1 - zmm5) * zmm8[0]
        float temp0_164[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
        zmm6[0] = zmm6[0] + zmm0
        temp0_164[0] = zmm4
        float temp0_165[0x4] = _mm_shuffle_ps(temp0_164, temp0_164, 0xc6)
        temp0_165[0] = zmm5
        float temp0_166[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0x27)
        temp0_166[0] = zmm6[0]
        *(arg1 + 0x1198) = _mm_shuffle_ps(temp0_166, temp0_166, 0x39)
        zmm7 = *(arg1 + 0x11a8)
        zmm4 = *(arg1 + 0x11ac)
        zmm5 = *(arg1 + 0x11b0)
        zmm6 = *(arg1 + 0x11b4)
        arg3 = *(arg2 + 0x3cc)
        zmm3 = *(arg2 + 0x3c8) - zmm7[0]
        zmm1 = *(arg2 + 0x3d0)
        arg3[0] = arg3[0] - zmm4
        zmm0 = *(arg2 + 0x3d4) - zmm6[0]
        zmm3 = zmm3 * zmm8[0]
        arg3[0] = arg3[0] * zmm8[0]
        zmm7[0] = zmm7[0] + zmm3
        zmm0 = zmm0 * zmm8[0]
        zmm4 = zmm4 + arg3[0]
        zmm5 = zmm5 + (zmm1 - zmm5) * zmm8[0]
        float temp0_168[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
        zmm6[0] = zmm6[0] + zmm0
        temp0_168[0] = zmm4
        float temp0_169[0x4] = _mm_shuffle_ps(temp0_168, temp0_168, 0xc6)
        temp0_169[0] = zmm5
        float temp0_170[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0x27)
        temp0_170[0] = zmm6[0]
        *(arg1 + 0x11a8) = _mm_shuffle_ps(temp0_170, temp0_170, 0x39)
        zmm7 = *(arg1 + 0x11b8)
        zmm4 = *(arg1 + 0x11bc)
        zmm5 = *(arg1 + 0x11c0)
        zmm6 = *(arg1 + 0x11c4)
        arg3 = *(arg2 + 0x3dc)
        zmm3 = *(arg2 + 0x3d8) - zmm7[0]
        zmm1 = *(arg2 + 0x3e0)
        arg3[0] = arg3[0] - zmm4
        zmm0 = *(arg2 + 0x3e4) - zmm6[0]
        zmm3 = zmm3 * zmm8[0]
        arg3[0] = arg3[0] * zmm8[0]
        zmm7[0] = zmm7[0] + zmm3
        zmm4 = zmm4 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        zmm5 = zmm5 + (zmm1 - zmm5) * zmm8[0]
        float temp0_172[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
        zmm6[0] = zmm6[0] + zmm0
        temp0_172[0] = zmm4
        float temp0_173[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0xc6)
        temp0_173[0] = zmm5
        float temp0_174[0x4] = _mm_shuffle_ps(temp0_173, temp0_173, 0x27)
        temp0_174[0] = zmm6[0]
        *(arg1 + 0x11b8) = _mm_shuffle_ps(temp0_174, temp0_174, 0x39)
        zmm7 = *(arg1 + 0x11c8)
        zmm4 = *(arg1 + 0x11cc)
        zmm5 = *(arg1 + 0x11d0)
        zmm6 = *(arg1 + 0x11d4)
        arg3 = *(arg2 + 0x3ec)
        zmm3 = *(arg2 + 0x3e8) - zmm7[0]
        zmm1 = *(arg2 + 0x3f0)
        arg3[0] = arg3[0] - zmm4
        zmm0 = *(arg2 + 0x3f4) - zmm6[0]
        zmm3 = zmm3 * zmm8[0]
        arg3[0] = arg3[0] * zmm8[0]
        zmm7[0] = zmm7[0] + zmm3
        zmm4 = zmm4 + arg3[0]
        zmm0 = zmm0 * zmm8[0]
        zmm5 = zmm5 + (zmm1 - zmm5) * zmm8[0]
        float temp0_176[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
        zmm6[0] = zmm6[0] + zmm0
        temp0_176[0] = zmm4
        float temp0_177[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0xc6)
        temp0_177[0] = zmm5
        float temp0_178[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0x27)
        temp0_178[0] = zmm6[0]
        *(arg1 + 0x11c8) = _mm_shuffle_ps(temp0_178, temp0_178, 0x39)
    
    if ((arg2[0x18] & 1) != 0)
        *(arg1 + 0xe00) ^= (arg2[0x20] ^ *(arg1 + 0xe00)) & 1
    
    if ((arg2[9] & 0x20) != 0)
        *(arg1 + 0xe02) = arg2[0x22]
    
    if ((arg2[0xd] & 4) != 0)
        *(arg1 + 0x11f0) ^= (*(arg2 + 0x410) ^ *(arg1 + 0x11f0)) & 1
    
    if ((arg2[0x18] & 0x40) != 0)
        *(arg1 + 0x128c) = *(arg2 + 0x4ac)
    
    if ((arg2[0xb] & 1) != 0)
        *(arg1 + 0x10f8) ^= (*(arg2 + 0x318) ^ *(arg1 + 0x10f8)) & 1
    
    void* rax_68
    float zmm8_1
    int32_t zmm9_1
    rax_68, zmm8_1, zmm9_1 = sub_1422d5450(arg1 + 0x1510)
    
    if ((arg2[0x14] & 1) != 0)
        *(rax_68 + 4) = (*(arg2 + 0x4b4) f- *(rax_68 + 4)) * zmm8_1 f+ *(rax_68 + 4)
    
    char rax_69 = arg2[0x15]
    
    if ((rax_69 & 1) != 0)
        *(rax_68 + 0x10) = (*(arg2 + 0x4c0) f- *(rax_68 + 0x10)) * zmm8_1 f+ *(rax_68 + 0x10)
        rax_69 = arg2[0x15]
    
    if ((rax_69 & 2) != 0)
        *(rax_68 + 0x14) = (*(arg2 + 0x4c4) f- *(rax_68 + 0x14)) * zmm8_1 f+ *(rax_68 + 0x14)
        rax_69 = arg2[0x15]
    
    if ((rax_69 & 8) != 0)
        *(rax_68 + 8) = (*(arg2 + 0x4b8) f- *(rax_68 + 8)) * zmm8_1 f+ *(rax_68 + 8)
        rax_69 = arg2[0x15]
    
    if ((rax_69 & 4) != 0)
        *(rax_68 + 0x18) = (*(arg2 + 0x4c8) f- *(rax_68 + 0x18)) * zmm8_1 f+ *(rax_68 + 0x18)
        rax_69 = arg2[0x15]
    
    if ((rax_69 & 0x10) != 0)
        *(rax_68 + 0x1c) = (*(arg2 + 0x4cc) f- *(rax_68 + 0x1c)) * zmm8_1 f+ *(rax_68 + 0x1c)
    
    char rax_70 = arg2[0x14]
    
    if ((rax_70 & 2) != 0)
        *(rax_68 + 0x20) = (*(arg2 + 0x4d0) f- *(rax_68 + 0x20)) * zmm8_1 f+ *(rax_68 + 0x20)
        rax_70 = arg2[0x14]
    
    if ((rax_70 & 4) != 0)
        *(rax_68 + 0x24) = (*(arg2 + 0x4d4) f- *(rax_68 + 0x24)) * zmm8_1 f+ *(rax_68 + 0x24)
        rax_70 = arg2[0x14]
    
    if ((rax_70 & 8) != 0)
        *(rax_68 + 0x28) = (*(arg2 + 0x4d8) f- *(rax_68 + 0x28)) * zmm8_1 f+ *(rax_68 + 0x28)
        rax_70 = arg2[0x14]
    
    if ((rax_70 & 0x10) != 0)
        *(rax_68 + 0x2c) = (*(arg2 + 0x4dc) f- *(rax_68 + 0x2c)) * zmm8_1 f+ *(rax_68 + 0x2c)
        rax_70 = arg2[0x14]
    
    if ((rax_70 & 0x20) != 0)
        *(rax_68 + 0x30) = (*(arg2 + 0x4e0) f- *(rax_68 + 0x30)) * zmm8_1 f+ *(rax_68 + 0x30)
        rax_70 = arg2[0x14]
    
    if ((rax_70 & 0x40) != 0)
        *(rax_68 + 0x34) = (*(arg2 + 0x4e4) f- *(rax_68 + 0x34)) * zmm8_1 f+ *(rax_68 + 0x34)
    
    result = zx.q(arg2[0x15])
    
    if ((result.b & 0x20) != 0)
        *(rax_68 + 0x38) = (*(arg2 + 0x520) f- *(rax_68 + 0x38)) * zmm8_1 f+ *(rax_68 + 0x38)
        result = zx.q(arg2[0x15])
    
    if ((result.b & 0x40) != 0)
        *(rax_68 + 0x3c) = (*(arg2 + 0x524) f- *(rax_68 + 0x3c)) * zmm8_1 f+ *(rax_68 + 0x3c)
    
    if (arg2[0x14] s< 0)
        result = zx.q(*(arg2 + 0x4bc))
        *(rax_68 + 0xc) = result.d
    
    int32_t r15_1 = *(arg2 + 0x538)
    
    if (r15_1 != 0)
        do
            result = *(arg2 + 0x530)
            int64_t rdi_3 = sx.q(rsi_1) * 2
            void* r14_1 = result[rdi_3 + 1]
            
            if (r14_1 != 0)
                result = sub_140d23de0(r14_1)
                
                if (result.b != 0)
                    result = sub_140d21950(r14_1, sub_142475bc0())
                    
                    if (result != 0 && not(_mm_min_ss(*(*(arg2 + 0x530) + (rdi_3 << 3)), 0x3f800000)
                            * zmm8_1 f<= zmm9_1))
                        void* const r8_4 = *result
                        result = (*(r8_4 + 0x10))(result, arg1, r8_4)
            
            rsi_1 += 1
        while (rsi_1 u< r15_1)

return result
