// 函数: sub_141f54450
// 地址: 0x141f54450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9
int128_t var_48 = zmm9
int128_t zmm10
int128_t var_58 = zmm10

if (sub_1420f6150(arg1, arg2) != 0)
    zmm6 = arg2[6]
    float zmm4 = *(arg1 + 0x1a8)
    zmm9 = *arg2
    int128_t zmm3_1 = arg2[1]
    zmm10 = arg2[2]
    float zmm2_1 = zmm6.d / zmm4
    zmm7.d = zmm9.d f- (*(arg1 + 0xb0) - zmm2_1 f* *(arg1 + 0x40))
    float zmm5 = zmm3_1.d - (*(arg1 + 0xb4) - zmm2_1 f* *(arg1 + 0x50))
    zmm8.d = zmm10.d f- (*(arg1 + 0xb8) - zmm2_1 f* *(arg1 + 0x60))
    zmm2_1 = zmm5 f* *(arg1 + 0x50) + zmm7.d f* *(arg1 + 0x40) + zmm8.d f* *(arg1 + 0x60)
    
    if (not(zmm2_1 <= 0f))
        float zmm0_1 = *(arg1 + 0x1a0)
        zmm7.d = zmm7.d f* zmm7.d
        zmm8.d = zmm8.d f* zmm8.d
        
        if (not(zmm2_1 * zmm2_1 < (zmm5 * zmm5 f+ zmm7.d f+ zmm8.d) * zmm0_1 * zmm0_1))
            zmm3_1.d = zmm3_1.d f- *(arg1 + 0xb4)
            zmm9.d = zmm9.d f- *(arg1 + 0xb0)
            zmm10.d = zmm10.d f- *(arg1 + 0xb8)
            zmm2_1 = zmm3_1.d f* zmm3_1.d
            zmm3_1.d = zmm3_1.d f* *(arg1 + 0x50)
            zmm0_1 = zmm9.d f* zmm9.d
            zmm9.d = zmm9.d f* *(arg1 + 0x40)
            float zmm1_1 = zmm10.d f* zmm10.d
            zmm10.d = zmm10.d f* *(arg1 + 0x60)
            zmm3_1.d = zmm3_1.d f+ zmm9.d
            zmm2_1 = zmm2_1 + zmm0_1 + zmm1_1
            zmm3_1.d = zmm3_1.d f+ zmm10.d
            zmm3_1 ^= data_142d3f780
            
            if (not(zmm3_1.d f<= 0f))
                zmm3_1.d = zmm3_1.d f* zmm3_1.d
                
                if (not(zmm3_1.d f< zmm4 * zmm4 * zmm2_1))
                    zmm6.d = zmm6.d f* zmm6.d
                    return zmm6.d f>= zmm2_1
            
            return true

return false
