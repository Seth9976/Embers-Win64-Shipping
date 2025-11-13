// 函数: sub_1426579a0
// 地址: 0x1426579a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x30)

if (arg3 u>= r10)
    return (zx.o(0)).q

int64_t result = (zx.o(0)).q
int64_t zmm0
int64_t zmm1
float zmm2

if (r10 - arg3 u>= 4)
    int64_t r11_1 = *(arg1 + 0x28)
    
    do
        int64_t rdx = sx.q(arg3)
        int64_t rcx_1 = rdx << 5
        int32_t rax_2 = *(rcx_1 + r11_1 + 8)
        zmm1.d = (*(rcx_1 + r11_1)).d f- *arg2
        zmm2 = *(rcx_1 + r11_1 + 4) f- arg2[1]
        zmm0.d = rax_2.d f- arg2[2]
        zmm1.d = zmm1.d f* zmm1.d
        zmm0.d = zmm0.d f* zmm0.d
        result.d = result.d f+ _mm_sqrt_ss(0, zmm2 * zmm2 f+ zmm1.d f+ zmm0.d).d
        *arg2 = *(rcx_1 + r11_1)
        arg2[2] = rax_2
        int64_t rcx_3 = (rdx + 1) << 5
        int32_t rax_3 = *(rcx_3 + r11_1 + 8)
        zmm1.d = (*(rcx_3 + r11_1)).d f- *arg2
        zmm2 = *(rcx_3 + r11_1 + 4) f- arg2[1]
        zmm0.d = rax_3.d f- arg2[2]
        zmm1.d = zmm1.d f* zmm1.d
        zmm0.d = zmm0.d f* zmm0.d
        result.d = result.d f+ _mm_sqrt_ss(0, zmm2 * zmm2 f+ zmm1.d f+ zmm0.d).d
        *arg2 = *(rcx_3 + r11_1)
        arg2[2] = rax_3
        int64_t rcx_5 = (rdx + 2) << 5
        int32_t rax_4 = *(rcx_5 + r11_1 + 8)
        zmm1.d = (*(rcx_5 + r11_1)).d f- *arg2
        zmm2 = *(rcx_5 + r11_1 + 4) f- arg2[1]
        zmm0.d = rax_4.d f- arg2[2]
        zmm1.d = zmm1.d f* zmm1.d
        zmm0.d = zmm0.d f* zmm0.d
        result.d = result.d f+ _mm_sqrt_ss(0, zmm2 * zmm2 f+ zmm1.d f+ zmm0.d).d
        *arg2 = *(rcx_5 + r11_1)
        arg2[2] = rax_4
        int64_t rcx_7 = (rdx + 3) << 5
        zmm2 = *(rcx_7 + r11_1 + 4) f- arg2[1]
        zmm1.d = (*(rcx_7 + r11_1)).d f- *arg2
        int32_t rax_5 = *(rcx_7 + r11_1 + 8)
        zmm0.d = rax_5.d f- arg2[2]
        zmm1.d = zmm1.d f* zmm1.d
        zmm0.d = zmm0.d f* zmm0.d
        result.d = result.d f+ _mm_sqrt_ss(0, zmm2 * zmm2 f+ zmm1.d f+ zmm0.d).d
        arg3 += 4
        *arg2 = *(rcx_7 + r11_1)
        arg2[2] = rax_5
    while (arg3 u< r10 - 3)

if (arg3 u< r10)
    int64_t rdx_1 = *(arg1 + 0x28)
    
    do
        int64_t rcx_8 = sx.q(arg3)
        arg3 += 1
        int64_t rcx_9 = rcx_8 << 5
        int32_t rax_6 = *(rcx_9 + rdx_1 + 8)
        zmm1.d = (*(rcx_9 + rdx_1)).d f- *arg2
        zmm2 = *(rcx_9 + rdx_1 + 4) f- arg2[1]
        zmm0.d = rax_6.d f- arg2[2]
        zmm1.d = zmm1.d f* zmm1.d
        zmm0.d = zmm0.d f* zmm0.d
        result.d = result.d f+ _mm_sqrt_ss(0, zmm2 * zmm2 f+ zmm1.d f+ zmm0.d).d
        *arg2 = *(rcx_9 + rdx_1)
        arg2[2] = rax_6
    while (arg3 u< r10)

return result
