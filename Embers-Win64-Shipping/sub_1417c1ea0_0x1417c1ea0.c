// 函数: sub_1417c1ea0
// 地址: 0x1417c1ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg2
int64_t rsi = sx.q(*(result + 8))

if (rsi s> 0)
    int64_t rbx_1 = 0
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    float zmm7[0x4]
    float var_38_1[0x4] = zmm7
    int128_t zmm8
    int128_t var_48_1 = zmm8
    
    do
        int64_t rdi_1 = **arg2
        float zmm0[0x4] = zx.o(rand())
        int64_t rax_2 = sx.q(*(rdi_1 + (rbx_1 << 3) + 4))
        float temp0_1[0x4] = _mm_cvtepi32_ps(zmm0)
        int64_t rax_3 = *arg3
        temp0_1[0] = temp0_1[0] * 6.10370189e-05f
        temp0_1[0] = temp0_1[0] - 1f
        *(rax_3 + rax_2 * 0xc) = temp0_1[0]
        zmm0 = zx.o(rand())
        int64_t rax_5 = sx.q(*(rdi_1 + (rbx_1 << 3) + 4))
        float temp0_2[0x4] = _mm_cvtepi32_ps(zmm0)
        int64_t rax_6 = *arg3
        temp0_2[0] = temp0_2[0] * 6.10370189e-05f
        temp0_2[0] = temp0_2[0] - 1f
        *(rax_6 + rax_5 * 0xc + 4) = temp0_2[0]
        zmm0 = zx.o(rand())
        int64_t rax_8 = sx.q(*(rdi_1 + (rbx_1 << 3) + 4))
        float temp0_3[0x4] = _mm_cvtepi32_ps(zmm0)
        int64_t rax_9 = *arg3
        temp0_3[0] = temp0_3[0] * 6.10370189e-05f
        temp0_3[0] = temp0_3[0] - 1f
        *(rax_9 + rax_8 * 0xc + 8) = temp0_3[0]
        int64_t rdx = *arg3
        int64_t rcx_3 = sx.q(*(rdi_1 + (rbx_1 << 3) + 4)) * 3
        zmm7 = *(rdx + (rcx_3 << 2) + 4)
        zmm6 = *(rdx + (rcx_3 << 2))
        zmm8 = *(rdx + (rcx_3 << 2) + 8)
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm6[0] = zmm6[0] + zmm7[0]
        zmm6[0] = zmm6[0] + zmm8.d f* zmm8.d
        
        if (not(zmm6[0] <= 9.99999994e-09f))
            float zmm4_1[0x4] = zx.o(0)
            zmm4_1[0] = 0x3f000000
            float zmm3 = zmm6[0]
            float temp0_4[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3)
            zmm3 = zmm3 * 0.5f
            temp0_4[0] = temp0_4[0] * temp0_4[0]
            zmm4_1[0] = zmm4_1[0] - zmm3 * temp0_4[0]
            temp0_4[0] = temp0_4[0] * zmm4_1[0]
            temp0_4[0] = temp0_4[0] + temp0_4[0]
            zmm4_1[0] = 0.5f - zmm3 * temp0_4[0] * temp0_4[0]
            temp0_4[0] = temp0_4[0] * zmm4_1[0]
            temp0_4[0] = temp0_4[0] + temp0_4[0]
            zmm6[0] = zmm6[0] * temp0_4[0]
            zmm7[0] = zmm7[0] * temp0_4[0]
            zmm8.d = zmm8.d f* temp0_4[0]
            *(rdx + (rcx_3 << 2)) = zmm6[0]
            *(rdx + (rcx_3 << 2) + 4) = zmm7[0]
            *(rdx + (rcx_3 << 2) + 8) = zmm8.d
        
        float zmm2[0x4] = *(arg1 + 0x10)
        result = sx.q(*(rdi_1 + (rbx_1 << 3) + 4))
        float zmm1 = zmm2[0]
        rbx_1 += 1
        void* rcx_4 = result * 3
        zmm2[0] = zmm2[0] f* *(rdx + (rcx_4 << 2))
        zmm1 = zmm1 f* *(rdx + (rcx_4 << 2) + 4)
        zmm2[0] = zmm2[0] f* *(rdx + (rcx_4 << 2) + 8)
        *(rdx + (rcx_4 << 2)) = zmm2[0]
        *(rdx + (rcx_4 << 2) + 4) = zmm1
        *(rdx + (rcx_4 << 2) + 8) = zmm2[0]
    while (rbx_1 s< rsi)

return result
