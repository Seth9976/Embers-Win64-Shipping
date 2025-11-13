// 函数: sub_141a8b4d0
// 地址: 0x141a8b4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = *(arg1 + 0x130)
float zmm2[0x4] = zx.o(0)

if (i_1 s> 0)
    int64_t r11_2 = *(arg1 + 0x110) << 2
    int128_t* rcx = *(arg1 + 0x118) + ((*(arg1 + 0x128) * arg4) << 2)
    int128_t* r8_2 = *(arg1 + 0x100) + (arg3 << 2)
    int64_t i
    
    do
        float zmm1[0x4] = *r8_2
        r8_2 += r11_2
        float zmm0[0x4] = *rcx
        rcx += 4
        zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0)))
        i = i_1
        i_1 -= 1
    while (i != 1)

*arg2 = zmm2
return arg2
