// 函数: sub_142756350
// 地址: 0x142756350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r14 = 0
int32_t r8 = 0
uint32_t rsi = zx.d(*rax)
int32_t rbx = *(arg1 + 0x80)
int64_t rdi = *(arg1 + 0x70)
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rbp = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t rcx_2 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t rax_2 = *r10
float (* rbp_2)[0x4] = zx.q(rbp * rbx) + rdi
int128_t* rsi_2 = zx.q(rsi * rbx) + rdi

if (rcx_2 s>= rax_2)
    int64_t rdx_1 = 0
    
    do
        rcx_2 -= rax_2
        rdx_1 += 1
        rax_2 = r10[rdx_1]
        r8 += 1
    while (rcx_2 s>= rax_2)

int32_t r15 = *(arg1 + 0x40)
float zmm13[0x4] = *(sx.q(rcx_2) + *(*(arg1 + 0x18) + (sx.q(r8) << 3)))
void* result = &rax[4]
uint64_t rbx_1 = zx.q(rbx * zx.d(rax[3]))
*(arg1 + 0x10) = result
float* rbx_2 = rbx_1 + rdi

if (r15 s> 0)
    float zmm1[0x4] = zmm13
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    int32_t rcx_5 = int.d(zmm1[0])
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    
    if (rcx_5 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_5)).d f== zmm1[0]))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx_5 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    float zmm7[0x4] = 0x40c00000
    zmm13[0] = zmm13[0] - zmm1[0]
    float zmm8[0x4] = 0x41700000
    float zmm10[0x4] = 0x41200000
    float zmm5[0x4] = 0x3f800000
    char rax_7 = (int.d(zmm1[0])).b
    zmm13[0] = zmm13[0] * 6f
    uint32_t r12_1 = zx.d(rax_7)
    uint128_t zmm0
    zmm0.d = zmm13.d f* zmm13[0]
    zmm13[0] = zmm13[0] - 1f
    zmm13[0] = zmm13[0] - 15f
    zmm0.d = zmm0.d f* zmm13[0]
    zmm13[0] = zmm13[0] * zmm13[0]
    zmm13[0] = zmm13[0] + 10f
    zmm13[0] = zmm13[0] f* zmm0.d
    float arg_10 = zmm13[0]
    
    do
        zmm9 = *rsi_2
        float* rdi_1 = rbx_2
        float zmm4[0x4] = *rbp_2
        rbp_2 = &(*rbp_2)[1]
        zmm1 = zmm9
        rsi_2 += 4
        int32_t rcx_7 = int.d(zmm1[0])
        rbx_2 = &rbx_2[1]
        
        if (rcx_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_7)).d f== zmm1[0]))
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_7
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
        
        float zmm2[0x4] = zmm4
        int32_t rcx_9 = int.d(zmm2[0])
        
        if (rcx_9 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_9)).d f== zmm2[0]))
            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_9
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
        
        zmm9[0] = zmm9[0] - zmm1[0]
        zmm4[0] = zmm4[0] - zmm2[0]
        uint32_t r8_1 = zx.d((int.d(zmm2[0])).b)
        float zmm3[0x4] = zmm9
        char rax_13 = (int.d(zmm1[0])).b
        zmm9[0] = zmm9[0] * zmm7[0]
        zmm3[0] = zmm3[0] - zmm5[0]
        uint64_t rdx_3 = zx.q(rax_13)
        zmm0.d = zmm9.d f* zmm9[0]
        zmm4[0] = zmm4[0] * zmm7[0]
        zmm9[0] = zmm9[0] - zmm8[0]
        zmm0.d = zmm0.d f* zmm9[0]
        zmm2 = zmm4
        int64_t rcx_11 = sx.q(*(&data_143b6da00 + (rdx_3 << 2)) + r8_1)
        zmm2[0] = zmm2[0] - zmm5[0]
        int32_t rax_16 = *((rdx_3 << 2) + 0x143b6da04)
        zmm4[0] = zmm4[0] - zmm8[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        int32_t r9_1 = *((rcx_11 << 2) + 0x143b6da04)
        int32_t r10_2 = *(&data_143b6da00 + (rcx_11 << 2)) + r12_1
        int64_t rcx_12 = sx.q(rax_16 + r8_1)
        zmm9[0] = zmm9[0] + zmm10[0]
        zmm4[0] = zmm4[0] * zmm4[0]
        int32_t rax_18 = *((rcx_12 << 2) + 0x143b6da04)
        int32_t rdx_4 = *(&data_143b6da00 + (rcx_12 << 2))
        zmm4[0] = zmm4[0] + zmm10[0]
        zmm9[0] = zmm9[0] f* zmm0.d
        int64_t r11_1 = sx.q(rax_18 + r12_1)
        zmm0.d = zmm4.d f* zmm4[0]
        int32_t rcx_13 = *((r11_1 << 2) + 0x143b6da04)
        int32_t rax_21 = rcx_13 & 0xf
        zmm0.d = zmm0.d f* zmm4[0]
        zmm4[0] = zmm4[0] f* zmm0.d
        float arg_8 = zmm4[0]
        
        zmm12 = rax_21 u>= 8 ? zmm2 : zmm3
        
        if (rax_21 u< 4)
            zmm1 = zmm2
        else if (((rax_21 - 0xc) & 0xfffffffd) == 0)
            zmm1 = zmm3
        else
            zmm1 = zmm13
        
        if ((rcx_13.b & 1) != 0)
            zmm12 ^= 0x80000000
        
        if ((rcx_13.b & 2) != 0)
            zmm1 ^= 0x80000000
        
        int64_t r8_2 = sx.q(r9_1 + r12_1)
        int32_t rcx_14 = *((r8_2 << 2) + 0x143b6da04)
        int32_t rax_24 = rcx_14 & 0xf
        
        zmm0 = rax_24 u>= 8 ? zmm2 : zmm9
        
        if (rax_24 u< 4)
            zmm11 = zmm2
        else if (((rax_24 - 0xc) & 0xfffffffd) == 0)
            zmm11 = zmm9
        else
            zmm11 = zmm13
        
        if ((rcx_14.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_14.b & 2) != 0)
            zmm11 ^= 0x80000000
        
        int64_t r9_3 = sx.q(rdx_4 + r12_1)
        zmm11[0] = zmm11[0] f+ zmm0.d
        int32_t rcx_15 = *((r9_3 << 2) + 0x143b6da04)
        int32_t rax_27 = rcx_15 & 0xf
        
        zmm8 = rax_27 u>= 8 ? zmm4 : zmm3
        
        if (rax_27 u< 4)
            zmm5 = zmm4
        else if (((rax_27 - 0xc) & 0xfffffffd) == 0)
            zmm5 = zmm3
        else
            zmm5 = zmm13
        
        if ((rcx_15.b & 1) != 0)
            zmm8 ^= 0x80000000
        
        if ((rcx_15.b & 2) != 0)
            zmm5 ^= 0x80000000
        
        int64_t rdx_6 = sx.q(r10_2)
        int32_t rcx_16 = *((rdx_6 << 2) + 0x143b6da04)
        int32_t rax_30 = rcx_16 & 0xf
        
        zmm7 = rax_30 u>= 8 ? zmm4 : zmm9
        
        if (rax_30 u< 4)
            zmm0 = zmm4
        else if (((rax_30 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm9
        else
            zmm0 = zmm13
        
        if ((rcx_16.b & 1) != 0)
            zmm7 ^= 0x80000000
        
        if ((rcx_16.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_17 = *(&data_143b6da00 + (r11_1 << 2))
        zmm5[0] = zmm5[0] + zmm8[0]
        zmm0.d = zmm0.d f+ zmm7[0]
        int32_t rax_33 = rcx_17 & 0xf
        zmm5[0] = zmm5[0] f- zmm0.d
        zmm5[0] = zmm5[0] * zmm9[0]
        zmm5[0] = zmm5[0] f+ zmm0.d
        
        zmm10 = rax_33 u>= 8 ? zmm2 : zmm3
        
        if (rax_33 u< 4)
            zmm0 = zmm2
        else if (((rax_33 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm3
        else
            zmm0 = zmm13
        
        if ((rcx_17.b & 1) != 0)
            zmm10 ^= 0x80000000
        
        if ((rcx_17.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_18 = *(&data_143b6da00 + (r8_2 << 2))
        int32_t rax_36 = rcx_18 & 0xf
        
        zmm7 = rax_36 u>= 8 ? zmm2 : zmm9
        
        if (rax_36 u>= 4)
            if (((rax_36 - 0xc) & 0xfffffffd) == 0)
                zmm2 = zmm9
            else
                zmm2 = zmm13
        
        if ((rcx_18.b & 1) != 0)
            zmm7 ^= 0x80000000
        
        if ((rcx_18.b & 2) != 0)
            zmm2 ^= 0x80000000
        
        int32_t rcx_19 = *(&data_143b6da00 + (r9_3 << 2))
        zmm2[0] = zmm2[0] + zmm7[0]
        int32_t rax_39 = rcx_19 & 0xf
        
        zmm8 = rax_39 u>= 8 ? zmm4 : zmm3
        
        if (rax_39 u< 4)
            zmm3 = zmm4
        else if (((rax_39 - 0xc) & 0xfffffffd) != 0)
            zmm3 = zmm13
        
        if ((rcx_19.b & 1) != 0)
            zmm8 ^= 0x80000000
        
        if ((rcx_19.b & 2) != 0)
            zmm3 ^= 0x80000000
        
        int32_t rcx_20 = *(&data_143b6da00 + (rdx_6 << 2))
        result = zx.q(rcx_20) & 0xf
        
        zmm7 = result.d u>= 8 ? zmm4 : zmm9
        
        if (result.d u>= 4)
            result = zx.q(result.d - 0xc)
            
            if ((result.d & 0xfffffffd) == 0)
                zmm4 = zmm9
            else
                zmm4 = zmm13
        
        if ((rcx_20.b & 1) != 0)
            zmm7 ^= 0x80000000
        
        if ((rcx_20.b & 2) != 0)
            zmm4 ^= 0x80000000
        
        zmm1[0] = zmm1[0] + zmm12[0]
        r14 += 1
        zmm0.d = zmm0.d f+ zmm10[0]
        zmm10 = 0x41200000
        zmm3[0] = zmm3[0] + zmm8[0]
        zmm8 = 0x41700000
        zmm4[0] = zmm4[0] + zmm7[0]
        zmm7 = 0x40c00000
        zmm1[0] = zmm1[0] - zmm11[0]
        zmm0.d = zmm0.d f- zmm2[0]
        zmm3[0] = zmm3[0] - zmm4[0]
        zmm1[0] = zmm1[0] * zmm9[0]
        zmm0.d = zmm0.d f* zmm9[0]
        zmm3[0] = zmm3[0] * zmm9[0]
        zmm1[0] = zmm1[0] + zmm11[0]
        zmm0.d = zmm0.d f+ zmm2[0]
        zmm3[0] = zmm3[0] + zmm4[0]
        zmm1[0] = zmm1[0] - zmm5[0]
        zmm0.d = zmm0.d f- zmm3[0]
        zmm1[0] = zmm1[0] * arg_8
        zmm0.d = zmm0.d f* arg_8
        zmm1[0] = zmm1[0] + zmm5[0]
        zmm5 = 0x3f800000
        zmm0.d = zmm0.d f+ zmm3[0]
        zmm1[0] = zmm1[0] f- zmm0.d
        zmm1[0] = zmm1[0] * arg_10
        zmm1[0] = zmm1[0] f+ zmm0.d
        *rdi_1 = zmm1[0]
    while (r14 s< r15)

return result
