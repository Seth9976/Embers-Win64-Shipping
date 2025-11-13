// 函数: sub_141dcdcb0
// 地址: 0x141dcdcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg3 + 0x38))
float zmm4 = 3.40282347e+38f
float zmm6[0x4] = arg2
int128_t zmm7
int128_t var_28 = zmm7
int64_t r8
float zmm0
float zmm2
float zmm3
float zmm5

if (r9 s< 4)
    r8 = 0
else
    zmm5 = *(arg3 + 0x24)
    void* rax_2 = *(arg3 + 0x30) + 0x24
    zmm7 = *(arg3 + 0x28)
    int64_t i_2 = ((r9 - 4) u>> 2) + 1
    int128_t zmm8 = *(arg3 + 0x2c)
    r8 = i_2 << 2
    int64_t i
    
    do
        zmm3 = *(rax_2 - 8) - zmm5
        arg2 = *rax_2
        zmm0 = *(rax_2 - 4) f- zmm7.d
        zmm2 = *(rax_2 + 0x84)
        arg2[0] = arg2[0] f- zmm8.d
        zmm2 = zmm2 f- zmm7.d
        arg2[0] = arg2[0] * arg2[0]
        zmm3 = zmm3 * zmm3 + zmm0 * zmm0
        zmm0 = *(rax_2 + 0x88) f- zmm8.d
        zmm3 = zmm3 + arg2[0]
        arg2 = *(rax_2 + 0x80)
        arg2[0] = arg2[0] - zmm5
        float temp0_1 = _mm_min_ss(zmm3, zmm4)
        zmm4 = *(rax_2 + 0x194)
        arg2[0] = arg2[0] * arg2[0]
        zmm4 = zmm4 f- zmm7.d
        zmm2 = zmm2 * zmm2 + arg2[0]
        arg2 = *(rax_2 + 0x108)
        arg2[0] = arg2[0] - zmm5
        zmm2 = zmm2 + zmm0 * zmm0
        zmm0 = *(rax_2 + 0x110) f- zmm8.d
        arg2[0] = arg2[0] * arg2[0]
        float temp0_2 = _mm_min_ss(zmm2, temp0_1)
        zmm3 = *(rax_2 + 0x10c) f- zmm7.d
        zmm3 = zmm3 * zmm3 + arg2[0]
        arg2 = *(rax_2 + 0x190)
        arg2[0] = arg2[0] - zmm5
        zmm3 = zmm3 + zmm0 * zmm0
        zmm0 = *(rax_2 + 0x198) f- zmm8.d
        arg2[0] = arg2[0] * arg2[0]
        rax_2 += 0x220
        zmm4 = _mm_min_ss(zmm4 * zmm4 + arg2[0] + zmm0 * zmm0, _mm_min_ss(zmm3, temp0_2))
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r8 s< r9)
    zmm3 = *(arg3 + 0x24)
    zmm5 = *(arg3 + 0x28)
    zmm7 = *(arg3 + 0x2c)
    float* rdx_3 = *(arg3 + 0x30) + 0x24 + r8 * 0x88
    int64_t i_3 = r9 - r8
    int64_t i_1
    
    do
        arg2 = rdx_3[-2]
        zmm2 = rdx_3[-1] - zmm5
        zmm0 = *rdx_3
        arg2[0] = arg2[0] - zmm3
        zmm0 = zmm0 f- zmm7.d
        rdx_3 = &rdx_3[0x22]
        arg2[0] = arg2[0] * arg2[0]
        zmm4 = _mm_min_ss(zmm2 * zmm2 + arg2[0] + zmm0 * zmm0, zmm4)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int32_t zmm0_1 = sub_142004250(arg3 + 0x10, _mm_sqrt_ss(0, zmm4)[0])
zmm6[0] = zmm6[0] f- *(arg3 + 0x14)
int32_t temp0_7 = _mm_max_ss(zmm0_1, 0)
zmm6[0] = zmm6[0] f* temp0_7
zmm6[0] = zmm6[0] f+ *(arg3 + 0x14)
return zmm6[0]
