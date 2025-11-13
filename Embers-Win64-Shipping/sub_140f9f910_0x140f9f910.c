// 函数: sub_140f9f910
// 地址: 0x140f9f910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8 = *(arg1 + 0x40c)
int64_t rdi
rdi.b = 1
int128_t zmm10 = arg3

if (not(zmm8.d f>= 0.25f))
    int128_t zmm0 = *(arg1 + 0x3f8)
    float zmm4 = zmm8.d * 4f
    float zmm1 = *(arg1 + 0x3fc)
    arg3 = *(arg1 + 0x400)
    float zmm5 = *(arg1 + 0x3ec) - zmm1
    float zmm3 = *(arg1 + 0x3f0) f- arg3.d
    float zmm7[0x4] = *(arg1 + 0x3e8)
    zmm7[0] = zmm7[0] f- zmm0.d
    zmm7[0] = zmm7[0] * zmm4
    zmm7[0] = zmm7[0] f+ zmm0.d
    zmm0.d = (*(arg1 + 0x3f4)).d f- *(arg1 + 0x404)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
    temp0_1[0] = zmm5 * zmm4 + zmm1
    zmm0.d = zmm0.d f* zmm4
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm3 * zmm4 f+ arg3.d
    zmm0.d = zmm0.d f+ *(arg1 + 0x404)
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
    temp0_3[0] = zmm0.d
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
    bool cond:1_1 = temp0_4[0] >= 0f
    float var_48[0x4] = temp0_4
    *(arg1 + 0x3b8) = temp0_4
    
    if (not(cond:1_1))
        temp0_4[0] = temp0_4[0] + 360f
        *(arg1 + 0x3b8) = temp0_4[0]
    else if (not(temp0_4[0] <= 360f))
        temp0_4[0] = temp0_4[0] - 360f
        *(arg1 + 0x3b8) = temp0_4[0]
    
    zmm8.d = zmm8.d f+ zmm10.d
    *(arg1 + 0x40c) = zmm8.d
    
    if (not(zmm8.d f< 0.25f))
        rdi.b = 0
        *(arg1 + 0x3b8) = *(arg1 + 0x3e8)
    
    *(arg1 + 0x3c8) = *sub_140ad9100(arg1 + 0x3b8, &var_48)

return zx.q(rdi.b)
