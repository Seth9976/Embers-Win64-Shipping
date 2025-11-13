// 函数: sub_141ab4320
// 地址: 0x141ab4320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg3
int64_t i_1 = sx.q(*arg4)
int32_t rax_1 = *(arg1 + 0x1b8) - 1
int128_t zmm6
int128_t var_18 = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
int128_t zmm8
int128_t var_38 = zmm8
float zmm4 = arg3[0] * zmm3[0]

if (i_1.d s< rax_1)
    zmm6 = *arg2
    int64_t i = i_1
    zmm7 = *(arg2 + 4)
    zmm8 = *(arg2 + 8)
    float* rax_4 = ((i_1 + 1) << 4) + *(arg1 + 0x1b0)
    
    do
        float zmm1 = zmm6.d - rax_4[-4]
        float zmm0 = zmm8.d - rax_4[-2]
        float zmm5 = zmm7[0] - rax_4[-3]
        zmm7[0] = zmm7[0] - rax_4[1]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm5 = zmm5 * zmm5 + zmm1 * zmm1
        zmm1 = zmm6.d - *rax_4
        zmm5 = zmm5 + zmm0 * zmm0
        zmm0 = zmm8.d - rax_4[2]
        zmm7[0] = zmm7[0] + zmm1 * zmm1
        zmm7[0] = zmm7[0] + zmm0 * zmm0
        
        if (not(zmm5 > zmm4) && zmm7[0] >= zmm4)
            *arg4 = i_1.d
            float temp0 = _mm_sqrt_ss(0, zmm7[0])
            float temp0_1 = _mm_sqrt_ss(0, zmm5)
            arg3 = zx.o(0)
            zmm3[0] = zmm3[0] - temp0_1
            zmm3[0] = zmm3[0] / (temp0 - temp0_1)
            
            if (not(zmm3[0] < 0f))
                arg3 = __minss_xmmss_memss(zmm3[0], 0x3f800000)
            
            return (rax_4[3] - rax_4[-1]) * arg3[0] + rax_4[-1]
        
        i_1 = zx.q(i_1.d + 1)
        i += 1
        rax_4 = &rax_4[4]
    while (i s< sx.q(rax_1))

*arg4 = 0
return *(*(arg1 + 0x190) + sx.q(*(arg1 + 0x198)) * 0x14 - 0x10)
