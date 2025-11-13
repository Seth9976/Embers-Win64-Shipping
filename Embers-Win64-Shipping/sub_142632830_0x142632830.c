// 函数: sub_142632830
// 地址: 0x142632830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result[0x4] = cosf(arg2 * 0.0174532924f)
int64_t r11 = sx.q(arg5)
float result_1[0x4] = result

if (r11 s> 0)
    char* r9_1 = nullptr
    void* r10_2 = arg4 + 4
    int128_t zmm6
    int128_t var_18_1 = zmm6
    int128_t zmm7
    int128_t var_28_1 = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    
    do
        int64_t r8 = sx.q(*(r10_2 + 4) * 3)
        float zmm5_1[0x4] = *(arg3 + (r8 << 2))
        float zmm2 = *(arg3 + (r8 << 2) + 8)
        zmm8 = *(arg3 + (r8 << 2) + 4)
        int64_t rdx_1 = sx.q(*r10_2 * 3)
        int64_t rax_5 = sx.q(*(r10_2 - 4) * 3)
        zmm7 = *(arg3 + (rdx_1 << 2))
        zmm8[0] = zmm8[0] f- *(arg3 + (rax_5 << 2) + 4)
        zmm5_1[0] = zmm5_1[0] f- *(arg3 + (rax_5 << 2))
        zmm2 = zmm2 f- *(arg3 + (rax_5 << 2) + 8)
        zmm7.d = zmm7.d f- *(arg3 + (rax_5 << 2))
        float zmm3 = *(arg3 + (rdx_1 << 2) + 8) f- *(arg3 + (rax_5 << 2) + 8)
        zmm6.d = (*(arg3 + (rdx_1 << 2) + 4)).d f- *(arg3 + (rax_5 << 2) + 4)
        zmm8[0] = zmm8[0] f* zmm7.d
        zmm8[0] = zmm8[0] * zmm3
        zmm5_1[0] = zmm5_1[0] * zmm3
        zmm5_1[0] = zmm5_1[0] - zmm2 f* zmm7.d
        zmm5_1[0] = zmm5_1[0] f* zmm6.d
        arg2 = zmm2 f* zmm6.d - zmm8[0]
        zmm8[0] = zmm8[0] - zmm5_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm5_1[0] = zmm5_1[0] + arg2 * arg2
        zmm5_1[0] = zmm5_1[0] + zmm8[0]
        result = _mm_sqrt_ss(zmm5_1[0], zmm5_1[0])
        zmm5_1[0] = zmm5_1[0] / result[0]
        
        if (not(zmm5_1[0] <= result_1[0]))
            r9_1[arg6] = 0x3f
        
        r9_1 = &r9_1[1]
        r10_2 += 0xc
    while (r9_1 s< r11)

return result
