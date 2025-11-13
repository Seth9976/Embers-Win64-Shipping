// 函数: sub_1427582e0
// 地址: 0x1427582e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rbp = 0
int32_t* r9 = *(arg1 + 0x20)
int32_t rdx = 0
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r9

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8 s>= rax_1)

int64_t rbx = *(arg1 + 0x18)
int32_t r8_1 = 0
uint128_t zmm11 = *(sx.q(r8) + *(rbx + (sx.q(rdx) << 3)))
uint32_t rcx_2 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
int32_t rax_4 = *r9

if (rcx_2 s>= rax_4)
    int64_t rdx_1 = 0
    
    do
        rcx_2 -= rax_4
        rdx_1 += 1
        rax_4 = r9[rdx_1]
        r8_1 += 1
    while (rcx_2 s>= rax_4)

int32_t r15 = *(arg1 + 0x40)
int32_t r8_2 = *(arg1 + 0x80)
uint128_t* rdi_2 = zx.q(zx.d(rax[2]) * r8_2) + *(arg1 + 0x70)
float zmm12[0x4] = *(sx.q(rcx_2) + *(rbx + (sx.q(r8_1) << 3)))
void* result = &rax[4]
*(arg1 + 0x10) = &rax[3]
uint64_t rsi_1 = zx.q(zx.d(rax[3]) * r8_2)
*(arg1 + 0x10) = result
float* rsi_2 = rsi_1 + *(arg1 + 0x70)

if (r15 s> 0)
    float zmm1[0x4] = zmm11
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    int32_t rcx_4 = int.d(zmm1[0])
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    
    if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1[0]))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    float zmm2[0x4] = zmm12
    int32_t rcx_6 = int.d(zmm2[0])
    
    if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm2[0]))
        zmm2 =
            _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
    
    float zmm5[0x4] = 0x40c00000
    zmm12[0] = zmm12[0] - zmm2[0]
    float zmm7[0x4] = 0x41700000
    zmm11.d = zmm11.d f- zmm1[0]
    float zmm9[0x4] = 0x41200000
    uint128_t zmm4 = 0x3f800000
    uint128_t zmm3
    zmm3.d = zmm11.d f* 6f
    uint32_t r12_1 = zx.d((int.d(zmm2[0])).b)
    uint128_t zmm0
    zmm0.d = zmm11.d f* zmm11.d
    zmm12[0] = zmm12[0] * 6f
    uint128_t zmm14
    zmm14.d = zmm11.d f- 1f
    zmm0.d = zmm0.d f* zmm11.d
    zmm3.d = zmm3.d f- 15f
    zmm12[0] = zmm12[0] - 15f
    char rax_12 = (int.d(zmm1[0])).b
    zmm3.d = zmm3.d f* zmm11.d
    zmm12[0] = zmm12[0] - 1f
    uint64_t r13_1 = zx.q(rax_12)
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm3.d = zmm3.d f+ 10f
    zmm12[0] = zmm12[0] + 10f
    zmm3.d = zmm3.d f* zmm0.d
    zmm0.d = zmm12.d f* zmm12[0]
    int32_t arg_8 = zmm3.d
    zmm0.d = zmm0.d f* zmm12[0]
    zmm12[0] = zmm12[0] f* zmm0.d
    float arg_10 = zmm12[0]
    
    do
        zmm8 = *rdi_2
        rdi_2 += 4
        zmm1 = zmm8
        float* r14_1 = rsi_2
        int32_t rcx_8 = int.d(zmm1[0])
        rsi_2 = &rsi_2[1]
        
        if (rcx_8 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_8)).d f== zmm1[0]))
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_8
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
        
        zmm8.d = zmm8.d f- zmm1[0]
        char rax_15 = (int.d(zmm1[0])).b
        int64_t rdx_3 = sx.q(*(&data_143b6da00 + (r13_1 << 2)) + r12_1)
        int32_t rcx_13 = *((r13_1 << 2) + 0x143b6da04) + r12_1
        int32_t r11_2 = *(&data_143b6da00 + (rdx_3 << 2))
        int32_t r9_1 = *((rdx_3 << 2) + 0x143b6da04)
        zmm1 = zmm8
        uint32_t r8_3 = zx.d(rax_15)
        zmm1[0] = zmm1[0] * zmm5[0]
        int64_t rdx_4 = sx.q(rcx_13)
        zmm0.d = zmm8.d f* zmm8.d
        zmm1[0] = zmm1[0] - zmm7[0]
        zmm2 = zmm8
        int32_t rax_16 = *((rdx_4 << 2) + 0x143b6da04)
        zmm2[0] = zmm2[0] f- zmm4.d
        int64_t rbx_1 = sx.q(rax_16 + r8_3)
        int32_t r10_2 = *(&data_143b6da00 + (rdx_4 << 2)) + r8_3
        zmm0.d = zmm0.d f* zmm8.d
        zmm1[0] = zmm1[0] f* zmm8.d
        int32_t rcx_14 = *((rbx_1 << 2) + 0x143b6da04)
        int32_t rax_19 = rcx_14 & 0xf
        zmm1[0] = zmm1[0] + zmm9[0]
        zmm1[0] = zmm1[0] f* zmm0.d
        float arg_18 = zmm1[0]
        
        zmm15 = rax_19 u>= 8 ? zmm12 : zmm14
        
        if (rax_19 u< 4)
            zmm7 = zmm12
        else if (((rax_19 - 0xc) & 0xfffffffd) == 0)
            zmm7 = zmm14
        else
            zmm7 = zmm2
        
        if ((rcx_14.b & 1) != 0)
            zmm15 ^= 0x80000000
        
        if ((rcx_14.b & 2) != 0)
            zmm7 ^= 0x80000000
        
        int64_t rdx_5 = sx.q(r9_1 + r8_3)
        int32_t rcx_15 = *((rdx_5 << 2) + 0x143b6da04)
        int32_t rax_22 = rcx_15 & 0xf
        
        zmm0 = rax_22 u>= 8 ? zmm12 : zmm11
        
        if (rax_22 u< 4)
            zmm10 = zmm12
        else if (((rax_22 - 0xc) & 0xfffffffd) == 0)
            zmm10 = zmm11
        else
            zmm10 = zmm2
        
        if ((rcx_15.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_15.b & 2) != 0)
            zmm10 ^= 0x80000000
        
        int64_t r9_3 = sx.q(r10_2)
        zmm10[0] = zmm10[0] f+ zmm0.d
        int32_t rcx_16 = *((r9_3 << 2) + 0x143b6da04)
        int32_t rax_25 = rcx_16 & 0xf
        
        zmm1 = rax_25 u>= 8 ? zmm12 : zmm14
        
        if (rax_25 u< 4)
            zmm5 = zmm12
        else if (((rax_25 - 0xc) & 0xfffffffd) == 0)
            zmm5 = zmm14
        else
            zmm5 = zmm2
        
        if ((rcx_16.b & 1) != 0)
            zmm1 ^= 0x80000000
        
        if ((rcx_16.b & 2) != 0)
            zmm5 ^= 0x80000000
        
        int64_t r8_4 = sx.q(r11_2 + r8_3)
        int32_t rcx_17 = *((r8_4 << 2) + 0x143b6da04)
        int32_t rax_28 = rcx_17 & 0xf
        
        zmm0 = rax_28 u>= 8 ? zmm12 : zmm11
        
        if (rax_28 u< 4)
            zmm2 = zmm12
        else if (((rax_28 - 0xc) & 0xfffffffd) == 0)
            zmm2 = zmm11
        
        if ((rcx_17.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_17.b & 2) != 0)
            zmm2 ^= 0x80000000
        
        int32_t rcx_18 = *(&data_143b6da00 + (rbx_1 << 2))
        zmm5[0] = zmm5[0] + zmm1[0]
        zmm2[0] = zmm2[0] f+ zmm0.d
        int32_t rax_31 = rcx_18 & 0xf
        zmm5[0] = zmm5[0] - zmm2[0]
        zmm5[0] = zmm5[0] f* zmm3.d
        zmm5[0] = zmm5[0] + zmm2[0]
        
        zmm9 = rax_31 u>= 8 ? zmm12 : zmm14
        
        if (rax_31 u< 4)
            zmm1 = zmm12
        else if (((rax_31 - 0xc) & 0xfffffffd) == 0)
            zmm1 = zmm14
        else
            zmm1 = zmm8
        
        if ((rcx_18.b & 1) != 0)
            zmm9 ^= 0x80000000
        
        if ((rcx_18.b & 2) != 0)
            zmm1 ^= 0x80000000
        
        int32_t rcx_19 = *(&data_143b6da00 + (rdx_5 << 2))
        int32_t rax_34 = rcx_19 & 0xf
        
        zmm0 = rax_34 u>= 8 ? zmm12 : zmm11
        
        if (rax_34 u< 4)
            zmm2 = zmm12
        else if (((rax_34 - 0xc) & 0xfffffffd) == 0)
            zmm2 = zmm11
        else
            zmm2 = zmm8
        
        if ((rcx_19.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_19.b & 2) != 0)
            zmm2 ^= 0x80000000
        
        int32_t rcx_20 = *(&data_143b6da00 + (r9_3 << 2))
        zmm2[0] = zmm2[0] f+ zmm0.d
        int32_t rax_37 = rcx_20 & 0xf
        
        zmm4 = rax_37 u>= 8 ? zmm12 : zmm14
        
        if (rax_37 u< 4)
            zmm0 = zmm12
        else if (((rax_37 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm14
        else
            zmm0 = zmm8
        
        if ((rcx_20.b & 1) != 0)
            zmm4 ^= 0x80000000
        
        if ((rcx_20.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_21 = *(&data_143b6da00 + (r8_4 << 2))
        result = zx.q(rcx_21) & 0xf
        
        zmm3 = result.d u>= 8 ? zmm12 : zmm11
        
        if (result.d u>= 4)
            result = zx.q(result.d - 0xc)
            
            if ((result.d & 0xfffffffd) == 0)
                zmm8 = zmm11
        else
            zmm8 = zmm12
        
        if ((rcx_21.b & 1) != 0)
            zmm3 ^= 0x80000000
        
        if ((rcx_21.b & 2) != 0)
            zmm8 ^= 0x80000000
        
        zmm7[0] = zmm7[0] f+ zmm15.d
        rbp += 1
        zmm1[0] = zmm1[0] + zmm9[0]
        zmm9 = 0x41200000
        zmm0.d = zmm0.d f+ zmm4.d
        zmm4 = 0x3f800000
        zmm8.d = zmm8.d f+ zmm3.d
        zmm3 = arg_8
        zmm7[0] = zmm7[0] - zmm10[0]
        zmm1[0] = zmm1[0] - zmm2[0]
        zmm0.d = zmm0.d f- zmm8.d
        zmm7[0] = zmm7[0] f* zmm3.d
        zmm1[0] = zmm1[0] f* zmm3.d
        zmm0.d = zmm0.d f* zmm3.d
        zmm7[0] = zmm7[0] + zmm10[0]
        zmm1[0] = zmm1[0] + zmm2[0]
        zmm0.d = zmm0.d f+ zmm8.d
        zmm7[0] = zmm7[0] - zmm5[0]
        zmm1[0] = zmm1[0] f- zmm0.d
        zmm7[0] = zmm7[0] * arg_10
        zmm1[0] = zmm1[0] * arg_10
        zmm7[0] = zmm7[0] + zmm5[0]
        zmm5 = 0x40c00000
        zmm1[0] = zmm1[0] f+ zmm0.d
        zmm7[0] = zmm7[0] - zmm1[0]
        zmm7[0] = zmm7[0] * arg_18
        zmm7[0] = zmm7[0] + zmm1[0]
        *r14_1 = zmm7[0]
        zmm7 = 0x41700000
    while (rbp s< r15)

return result
