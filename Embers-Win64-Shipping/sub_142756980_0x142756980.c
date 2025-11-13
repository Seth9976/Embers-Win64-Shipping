// 函数: sub_142756980
// 地址: 0x142756980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r11 = *(arg1 + 0x80)
int32_t r14 = 0
int64_t rbx = *(arg1 + 0x70)
uint32_t rsi = zx.d(*rax)
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rcx = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int32_t rax_1 = *r10
int128_t* rsi_2 = zx.q(rsi * r11) + rbx

if (rcx s>= rax_1)
    int64_t rdx_1 = 0
    
    do
        rcx -= rax_1
        rdx_1 += 1
        rax_1 = r10[rdx_1]
        r8_1 += 1
    while (rcx s>= rax_1)

int32_t r15 = *(arg1 + 0x40)
uint128_t zmm12 = *(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
uint32_t rax_4 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
void* result = &rax[4]
uint64_t rbp_1 = zx.q(zx.d(rax[3]) * r11)
*(arg1 + 0x10) = result
uint128_t* rdi_3 = zx.q(rax_4 * r11) + rbx
float* rbp_2 = rbp_1 + rbx

if (r15 s> 0)
    float zmm1[0x4] = zmm12
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    int32_t rcx_2 = int.d(zmm1[0])
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    
    if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm1[0]))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    float zmm6[0x4] = 0x40c00000
    zmm12.d = zmm12.d f- zmm1[0]
    float zmm10[0x4] = 0x41700000
    uint128_t zmm11 = 0x41200000
    uint128_t zmm4 = 0x3f800000
    uint128_t zmm15
    zmm15.d = zmm12.d f* 6f
    uint128_t zmm0
    zmm0.d = zmm12.d f* zmm12.d
    uint128_t zmm13
    zmm13.d = zmm12.d f- 1f
    zmm15.d = zmm15.d f- 15f
    zmm15.d = zmm15.d f* zmm12.d
    uint32_t r12_1 = zx.d((int.d(zmm1[0])).b)
    zmm0.d = zmm0.d f* zmm12.d
    zmm15.d = zmm15.d f+ 10f
    zmm15.d = zmm15.d f* zmm0.d
    
    do
        zmm9 = *rsi_2
        float* rbx_1 = rbp_2
        zmm8 = *rdi_3
        rdi_3 += 4
        zmm1 = zmm9
        rsi_2 += 4
        int32_t rcx_4 = int.d(zmm1[0])
        rbp_2 = &rbp_2[1]
        
        if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1[0]))
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_4
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
        
        uint128_t zmm2 = zmm8
        int32_t rcx_6 = int.d(zmm2.d)
        
        if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm2.d))
            zmm2 =
                _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2.q)) & 1)))
        
        zmm9[0] = zmm9[0] - zmm1[0]
        zmm8.d = zmm8.d f- zmm2.d
        uint32_t r8_2 = zx.d((int.d(zmm2.d)).b)
        float zmm3[0x4] = zmm9
        char rax_13 = (int.d(zmm1[0])).b
        zmm9[0] = zmm9[0] * zmm6[0]
        zmm3[0] = zmm3[0] f- zmm4.d
        uint64_t rdx_4 = zx.q(rax_13)
        zmm0.d = zmm9.d f* zmm9[0]
        zmm1 = zmm8
        zmm1[0] = zmm1[0] * zmm6[0]
        zmm9[0] = zmm9[0] - zmm10[0]
        zmm0.d = zmm0.d f* zmm9[0]
        int64_t rcx_8 = sx.q(*(&data_143b6da00 + (rdx_4 << 2)) + r12_1)
        zmm2.d = zmm8.d f- zmm4.d
        int32_t rax_16 = *((rdx_4 << 2) + 0x143b6da04)
        zmm1[0] = zmm1[0] - zmm10[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        int32_t r9_1 = *((rcx_8 << 2) + 0x143b6da04)
        int32_t r10_2 = *(&data_143b6da00 + (rcx_8 << 2)) + r8_2
        int64_t rcx_9 = sx.q(rax_16 + r12_1)
        zmm9[0] = zmm9[0] f+ zmm11.d
        zmm1[0] = zmm1[0] f* zmm8.d
        int32_t rax_18 = *((rcx_9 << 2) + 0x143b6da04)
        int32_t rdx_5 = *(&data_143b6da00 + (rcx_9 << 2))
        zmm1[0] = zmm1[0] f+ zmm11.d
        zmm9[0] = zmm9[0] f* zmm0.d
        int64_t r11_1 = sx.q(rax_18 + r8_2)
        zmm0.d = zmm8.d f* zmm8.d
        int32_t rcx_10 = *((r11_1 << 2) + 0x143b6da04)
        int32_t rax_21 = rcx_10 & 0xf
        float arg_8 = zmm9[0]
        zmm0.d = zmm0.d f* zmm8.d
        zmm1[0] = zmm1[0] f* zmm0.d
        float arg_10 = zmm1[0]
        
        zmm14 = rax_21 u>= 8 ? zmm13 : zmm3
        
        if (rax_21 u< 4)
            zmm1 = zmm13
        else if (((rax_21 - 0xc) & 0xfffffffd) == 0)
            zmm1 = zmm3
        else
            zmm1 = zmm2
        
        if ((rcx_10.b & 1) != 0)
            zmm14 ^= 0x80000000
        
        if ((rcx_10.b & 2) != 0)
            zmm1 ^= 0x80000000
        
        int64_t r8_3 = sx.q(r9_1 + r8_2)
        int32_t rcx_11 = *((r8_3 << 2) + 0x143b6da04)
        int32_t rax_24 = rcx_11 & 0xf
        
        zmm0 = rax_24 u>= 8 ? zmm13 : zmm9
        
        if (rax_24 u< 4)
            zmm11 = zmm13
        else if (((rax_24 - 0xc) & 0xfffffffd) == 0)
            zmm11 = zmm9
        else
            zmm11 = zmm2
        
        if ((rcx_11.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_11.b & 2) != 0)
            zmm11 ^= 0x80000000
        
        int64_t r9_3 = sx.q(rdx_5 + r8_2)
        zmm11.d = zmm11.d f+ zmm0.d
        int32_t rcx_12 = *((r9_3 << 2) + 0x143b6da04)
        int32_t rax_27 = rcx_12 & 0xf
        
        zmm6 = rax_27 u>= 8 ? zmm12 : zmm3
        
        if (rax_27 u< 4)
            zmm4 = zmm12
        else if (((rax_27 - 0xc) & 0xfffffffd) == 0)
            zmm4 = zmm3
        else
            zmm4 = zmm2
        
        if ((rcx_12.b & 1) != 0)
            zmm6 ^= 0x80000000
        
        if ((rcx_12.b & 2) != 0)
            zmm4 ^= 0x80000000
        
        int64_t rdx_7 = sx.q(r10_2)
        int32_t rcx_13 = *((rdx_7 << 2) + 0x143b6da04)
        int32_t rax_30 = rcx_13 & 0xf
        
        zmm0 = rax_30 u>= 8 ? zmm12 : zmm9
        
        if (rax_30 u< 4)
            zmm2 = zmm12
        else if (((rax_30 - 0xc) & 0xfffffffd) == 0)
            zmm2 = zmm9
        
        if ((rcx_13.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_13.b & 2) != 0)
            zmm2 ^= 0x80000000
        
        int32_t rcx_14 = *(&data_143b6da00 + (r11_1 << 2))
        zmm4.d = zmm4.d f+ zmm6[0]
        zmm2.d = zmm2.d f+ zmm0.d
        int32_t rax_33 = rcx_14 & 0xf
        zmm4.d = zmm4.d f- zmm2.d
        zmm4.d = zmm4.d f* zmm9[0]
        zmm4.d = zmm4.d f+ zmm2.d
        
        zmm10 = rax_33 u>= 8 ? zmm13 : zmm3
        
        if (rax_33 u< 4)
            zmm0 = zmm13
        else if (((rax_33 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm3
        else
            zmm0 = zmm8
        
        if ((rcx_14.b & 1) != 0)
            zmm10 ^= 0x80000000
        
        if ((rcx_14.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_15 = *(&data_143b6da00 + (r8_3 << 2))
        int32_t rax_36 = rcx_15 & 0xf
        
        zmm6 = rax_36 u>= 8 ? zmm13 : zmm9
        
        if (rax_36 u< 4)
            zmm2 = zmm13
        else if (((rax_36 - 0xc) & 0xfffffffd) == 0)
            zmm2 = zmm9
        else
            zmm2 = zmm8
        
        if ((rcx_15.b & 1) != 0)
            zmm6 ^= 0x80000000
        
        if ((rcx_15.b & 2) != 0)
            zmm2 ^= 0x80000000
        
        int32_t rcx_16 = *(&data_143b6da00 + (r9_3 << 2))
        zmm2.d = zmm2.d f+ zmm6[0]
        int32_t rax_39 = rcx_16 & 0xf
        
        zmm7 = rax_39 u>= 8 ? zmm12 : zmm3
        
        if (rax_39 u< 4)
            zmm3 = zmm12
        else if (((rax_39 - 0xc) & 0xfffffffd) != 0)
            zmm3 = zmm8
        
        if ((rcx_16.b & 1) != 0)
            zmm7 ^= 0x80000000
        
        if ((rcx_16.b & 2) != 0)
            zmm3 ^= 0x80000000
        
        int32_t rcx_17 = *(&data_143b6da00 + (rdx_7 << 2))
        result = zx.q(rcx_17) & 0xf
        
        zmm6 = result.d u>= 8 ? zmm12 : zmm9
        
        if (result.d u>= 4)
            result = zx.q(result.d - 0xc)
            
            if ((result.d & 0xfffffffd) == 0)
                zmm8 = zmm9
        else
            zmm8 = zmm12
        
        if ((rcx_17.b & 1) != 0)
            zmm6 ^= 0x80000000
        
        if ((rcx_17.b & 2) != 0)
            zmm8 ^= 0x80000000
        
        zmm1[0] = zmm1[0] + zmm14[0]
        r14 += 1
        zmm0.d = zmm0.d f+ zmm10[0]
        zmm10 = 0x41700000
        zmm8.d = zmm8.d f+ zmm6[0]
        zmm6 = arg_8
        zmm3[0] = zmm3[0] + zmm7[0]
        zmm1[0] = zmm1[0] f- zmm11.d
        zmm0.d = zmm0.d f- zmm2.d
        zmm3[0] = zmm3[0] f- zmm8.d
        zmm1[0] = zmm1[0] * zmm6[0]
        zmm0.d = zmm0.d f* zmm6[0]
        zmm3[0] = zmm3[0] * zmm6[0]
        zmm1[0] = zmm1[0] f+ zmm11.d
        zmm6 = 0x40c00000
        zmm0.d = zmm0.d f+ zmm2.d
        zmm11 = 0x41200000
        zmm3[0] = zmm3[0] f+ zmm8.d
        zmm1[0] = zmm1[0] f- zmm4.d
        zmm0.d = zmm0.d f- zmm3[0]
        zmm1[0] = zmm1[0] f* zmm15.d
        zmm0.d = zmm0.d f* zmm15.d
        zmm1[0] = zmm1[0] f+ zmm4.d
        zmm4 = 0x3f800000
        zmm0.d = zmm0.d f+ zmm3[0]
        zmm1[0] = zmm1[0] f- zmm0.d
        zmm1[0] = zmm1[0] * arg_10
        zmm1[0] = zmm1[0] f+ zmm0.d
        *rbx_1 = zmm1[0]
    while (r14 s< r15)

return result
