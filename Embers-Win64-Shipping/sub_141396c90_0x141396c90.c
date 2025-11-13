// 函数: sub_141396c90
// 地址: 0x141396c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = 0x3dcccccd
float zmm9[0x4] = arg4
float zmm1[0x4] = *(data_143ec4368 + 4)

if (not(zmm1[0] < 0.100000001f))
    zmm0 = __minss_xmmss_memss(zmm1[0], 0x41200000)

zmm1 = 0x3727c5ac
bool cond:0 = arg3[0] >= 9.99999975e-06f
arg4 = zx.o(0)
arg4[0] = float.s(zx.q(arg2 - 1))
float zmm12[0x4]

if (cond:0)
    zmm12 = _mm_min_ss(arg4[0], arg3[0])
else
    zmm12 = 0x3727c5ac

zmm0[0] = zmm0[0] * arg3[0]

if (not(zmm0[0] < 9.99999975e-06f))
    zmm1 = _mm_min_ss(arg4[0], zmm0[0])

zmm0 = 0xbf000000
int32_t r14 = arg2 - 1
float zmm8[0x4] = 0x3f800000
zmm1[0] = zmm1[0] + zmm1[0]
int128_t zmm13 = zx.o(0)
zmm0[0] = -0.5f - zmm1[0]
int32_t rax_3 = neg.d(int.d(zmm0[0]) s>> 1)

if (rax_3 s<= r14)
    r14 = rax_3

uint64_t rsi = 0
int32_t result = 0
int32_t rdi_1 = neg.d(r14)

if (rdi_1 s<= r14)
    int32_t r15_1 = rdi_1 + 1
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    float zmm7[0x4]
    float var_38_1[0x4] = zmm7
    uint128_t zmm11
    uint128_t var_78_1 = zmm11
    
    do
        bool cond:2_1 = zmm9[0] <= 1f
        zmm7 = 0x3f800000
        zmm11 = _mm_cvtepi32_ps(zx.o(rdi_1))
        zmm0 = _mm_and_ps(zmm11, 0x7fffffff)
        zmm7[0] = 1f - zmm0[0]
        zmm7 = _mm_max_ss(zmm7[0], 0)
        
        if (cond:2_1)
            zmm0[0] = zmm0[0] / zmm12[0]
            zmm0[0] = zmm0[0] * zmm0[0]
            zmm0[0] = zmm0[0] * -16.7000008f
            zmm0 = expf(zmm0[0])
            zmm7[0] = zmm7[0] - zmm0[0]
            zmm7[0] = zmm7[0] * zmm9[0]
            zmm7[0] = zmm7[0] + zmm0[0]
        else
            zmm7 = powf(zmm7[0], zmm9[0])
        
        zmm6 = zx.o(0)
        
        if (rdi_1 != r14)
            bool cond:1_1 = zmm9[0] <= 1f
            zmm6 = 0x3f800000
            zmm0 = _mm_and_ps(_mm_cvtepi32_ps(zx.o(r15_1)), 0x7fffffff)
            zmm6[0] = 1f - zmm0[0]
            zmm6 = _mm_max_ss(zmm6[0], 0)
            
            if (cond:1_1)
                zmm0[0] = zmm0[0] / zmm12[0]
                zmm0[0] = zmm0[0] * zmm0[0]
                zmm0[0] = zmm0[0] * -16.7000008f
                zmm0 = expf(zmm0[0])
                zmm6[0] = zmm6[0] - zmm0[0]
                zmm6[0] = zmm6[0] * zmm9[0]
                zmm6[0] = zmm6[0] + zmm0[0]
            else
                zmm6 = powf(zmm6[0], zmm9[0])
        
        uint64_t result_1 = zx.q(result)
        zmm6[0] = zmm6[0] + zmm7[0]
        result += 1
        rdi_1 += 2
        r15_1 += 2
        *(arg1 + (result_1 << 3) + 4) = zmm6[0]
        zmm13.d = zmm13.d f+ zmm6[0]
        zmm6[0] = zmm6[0] / zmm6[0]
        zmm6[0] = zmm6[0] f+ zmm11.d
        *(arg1 + (result_1 << 3)) = zmm6[0]
    while (rdi_1 s<= r14)

zmm8[0] = 1f f/ zmm13.d
float temp0_10[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)

if (result != 0)
    if (result u>= 8)
        int32_t r11_1 = 2
        
        do
            arg4 = *(arg1 + (rsi << 3) + 4)
            uint64_t r8_1 = zx.q(r11_1 + 1)
            uint64_t rax_4 = zx.q(r11_1 - 1)
            uint64_t r9_1 = zx.q(r11_1 + 5)
            uint64_t rdx = zx.q(r11_1)
            float temp0_11[0x4] =
                _mm_unpacklo_ps(*(arg1 + (rax_4 << 3) + 4), (*(arg1 + (r8_1 << 3) + 4))[0].q)
            float temp0_14[0x4] = _mm_mul_ps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(arg4, (*(arg1 + (rdx << 3) + 4))[0].q), 
                    temp0_11[0].q), 
                temp0_10)
            *(arg1 + (rsi << 3) + 4) = temp0_14[0]
            rsi = zx.q(rsi.d + 8)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xe5)
            *(arg1 + (rax_4 << 3) + 4) = temp0_15[0]
            uint64_t rax_5 = zx.q(r11_1 + 2)
            float temp0_16[0x4] = _mm_unpackhi_ps(temp0_15, temp0_15)
            *(arg1 + (rdx << 3) + 4) = temp0_16[0]
            uint64_t rdx_1 = zx.q(r11_1 + 3)
            arg3 = *(arg1 + (rdx_1 << 3) + 4)
            *(arg1 + (r8_1 << 3) + 4) = _mm_unpackhi_ps(temp0_16, temp0_16)[0]
            uint64_t r8_2 = zx.q(r11_1 + 4)
            r11_1 += 8
            float temp0_21[0x4] = _mm_mul_ps(
                _mm_unpacklo_ps(
                    _mm_unpacklo_ps(*(arg1 + (rax_5 << 3) + 4), (*(arg1 + (r8_2 << 3) + 4))[0].q), 
                    _mm_unpacklo_ps(arg3, (*(arg1 + (r9_1 << 3) + 4))[0].q)[0].q), 
                temp0_10)
            *(arg1 + (rax_5 << 3) + 4) = temp0_21[0]
            float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xe5)
            *(arg1 + (rdx_1 << 3) + 4) = temp0_22[0]
            float temp0_23[0x4] = _mm_unpackhi_ps(temp0_22, temp0_22)
            *(arg1 + (r8_2 << 3) + 4) = temp0_23[0]
            *(arg1 + (r9_1 << 3) + 4) = _mm_unpackhi_ps(temp0_23, temp0_23)[0]
        while (rsi.d u< (result & 0xfffffff8))
    
    if (rsi.d u>= result)
        return result
    
    if (result - rsi.d u>= 4)
        void* rcx_2 = arg1 + 0xc + (rsi << 3)
        uint64_t rax_11 = zx.q(((result - rsi.d - 4) u>> 2) + 1)
        uint64_t i_3 = zx.q(rax_11.d)
        rsi = zx.q((rsi + (rax_11 << 2)).d)
        uint64_t i
        
        do
            rcx_2 += 0x20
            zmm8[0] = zmm8[0] f* *(rcx_2 - 0x28)
            zmm8[0] = zmm8[0] f* *(rcx_2 - 0x20)
            *(rcx_2 - 0x28) = zmm8[0]
            zmm8[0] = zmm8[0] f* *(rcx_2 - 0x18)
            *(rcx_2 - 0x20) = zmm8[0]
            zmm8[0] = zmm8[0] f* *(rcx_2 - 0x10)
            *(rcx_2 - 0x18) = zmm8[0]
            *(rcx_2 - 0x10) = zmm8[0]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (rsi.d u>= result)
        return result
    
    uint64_t i_2 = zx.q(result - rsi.d)
    void* rdx_3 = arg1 + 4 + (rsi << 3)
    uint64_t i_1
    
    do
        rdx_3 += 8
        zmm8[0] = zmm8[0] f* *(rdx_3 - 8)
        *(rdx_3 - 8) = zmm8[0]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
