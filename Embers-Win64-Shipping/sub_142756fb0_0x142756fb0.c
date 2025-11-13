// 函数: sub_142756fb0
// 地址: 0x142756fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdi = *(arg1 + 0x80)
int32_t r14 = 0
int64_t rsi = *(arg1 + 0x70)
int32_t r9 = 0
uint32_t rbp = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rcx = zx.d(rax[1])
int32_t* r8_1 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[2]
int32_t rax_1 = *r8_1
uint128_t* rbp_2 = zx.q(rbp * rdi) + rsi

if (rcx s>= rax_1)
    int64_t rdx_1 = 0
    
    do
        rcx -= rax_1
        rdx_1 += 1
        rax_1 = r8_1[rdx_1]
        r9 += 1
    while (rcx s>= rax_1)

int64_t rbx = *(arg1 + 0x18)
int32_t r9_1 = 0
uint128_t zmm11 = *(sx.q(rcx) + *(rbx + (sx.q(r9) << 3)))
uint32_t rcx_2 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t rax_4 = *r8_1

if (rcx_2 s>= rax_4)
    int64_t rdx_2 = 0
    
    do
        rcx_2 -= rax_4
        rdx_2 += 1
        rax_4 = r8_1[rdx_2]
        r9_1 += 1
    while (rcx_2 s>= rax_4)

uint64_t rbx_2 = zx.q(zx.d(rax[3]) * rdi)
float zmm14[0x4] = *(sx.q(rcx_2) + *(rbx + (sx.q(r9_1) << 3)))
void* result = &rax[4]
*(arg1 + 0x10) = result
int32_t* rbx_3 = rbx_2 + rsi
int32_t rsi_1 = *(arg1 + 0x40)

if (rsi_1 s> 0)
    float zmm1[0x4] = zmm11
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    int32_t rcx_4 = int.d(zmm1[0])
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    
    if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1[0]))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    float zmm2[0x4] = zmm14
    int32_t rcx_6 = int.d(zmm2[0])
    
    if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm2[0]))
        zmm2 =
            _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
    
    float zmm6[0x4] = 0x40c00000
    zmm11.d = zmm11.d f- zmm1[0]
    uint128_t zmm8 = 0x41700000
    zmm14[0] = zmm14[0] - zmm2[0]
    uint128_t zmm9 = 0x41200000
    uint128_t zmm5 = 0x3f800000
    uint128_t zmm0
    zmm0.d = zmm11.d f* zmm11.d
    uint32_t r12_1 = zx.d((int.d(zmm1[0])).b)
    zmm14[0] = zmm14[0] * 6f
    uint128_t zmm12
    zmm12.d = zmm11.d f- 1f
    char rax_12 = (int.d(zmm2[0])).b
    zmm0.d = zmm0.d f* zmm11.d
    zmm14[0] = zmm14[0] - 15f
    uint32_t r15_1 = zx.d(rax_12)
    zmm2 = zmm11
    zmm2[0] = zmm2[0] * 6f
    zmm14[0] = zmm14[0] - 1f
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm2[0] = zmm2[0] - 15f
    zmm14[0] = zmm14[0] + 10f
    zmm2[0] = zmm2[0] f* zmm11.d
    zmm2[0] = zmm2[0] + 10f
    zmm2[0] = zmm2[0] f* zmm0.d
    zmm0.d = zmm14.d f* zmm14[0]
    float arg_10 = zmm2[0]
    zmm0.d = zmm0.d f* zmm14[0]
    zmm14[0] = zmm14[0] f* zmm0.d
    float arg_18 = zmm14[0]
    
    do
        uint128_t zmm3 = *rbp_2
        rbp_2 += 4
        zmm1 = zmm3
        int32_t* rdi_1 = rbx_3
        int32_t rcx_8 = int.d(zmm1[0])
        rbx_3 = &rbx_3[1]
        
        if (rcx_8 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_8)).d f== zmm1[0]))
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_8
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
        
        zmm3.d = zmm3.d f- zmm1[0]
        float zmm4[0x4] = zmm3
        uint64_t rdx_3 = zx.q((int.d(zmm1[0])).b)
        zmm4[0] = zmm4[0] f- zmm5.d
        zmm0.d = zmm3.d f* zmm3.d
        zmm5.d = zmm3.d f* zmm6[0]
        zmm0.d = zmm0.d f* zmm3.d
        int64_t rcx_10 = sx.q(*(&data_143b6da00 + (rdx_3 << 2)) + r12_1)
        zmm5.d = zmm5.d f- zmm8.d
        int64_t rcx_11 = sx.q(*((rdx_3 << 2) + 0x143b6da04) + r12_1)
        zmm5.d = zmm5.d f* zmm3.d
        zmm5.d = zmm5.d f+ zmm9.d
        int64_t r11_2 = sx.q(*((rcx_11 << 2) + 0x143b6da04) + r15_1)
        zmm5.d = zmm5.d f* zmm0.d
        int32_t rcx_12 = *((r11_2 << 2) + 0x143b6da04)
        int32_t rax_23 = rcx_12 & 0xf
        int32_t arg_8 = zmm5.d
        
        zmm13 = rax_23 u>= 8 ? zmm12 : zmm4
        
        if (rax_23 u< 4)
            zmm8 = zmm12
        else if (((rax_23 - 0xc) & 0xfffffffd) == 0)
            zmm8 = zmm4
        else
            zmm8 = zmm14
        
        if ((rcx_12.b & 1) != 0)
            zmm13 ^= 0x80000000
        
        if ((rcx_12.b & 2) != 0)
            zmm8 ^= 0x80000000
        
        int64_t r10_1 = sx.q(*((rcx_10 << 2) + 0x143b6da04) + r15_1)
        int32_t rcx_13 = *((r10_1 << 2) + 0x143b6da04)
        int32_t rax_26 = rcx_13 & 0xf
        
        zmm0 = rax_26 u>= 8 ? zmm12 : zmm3
        
        if (rax_26 u< 4)
            zmm10 = zmm12
        else if (((rax_26 - 0xc) & 0xfffffffd) == 0)
            zmm10 = zmm3
        else
            zmm10 = zmm14
        
        if ((rcx_13.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_13.b & 2) != 0)
            zmm10 ^= 0x80000000
        
        int64_t r8_4 = sx.q(*(&data_143b6da00 + (rcx_11 << 2)) + r15_1)
        zmm10.d = zmm10.d f+ zmm0.d
        int32_t rcx_14 = *((r8_4 << 2) + 0x143b6da04)
        int32_t rax_29 = rcx_14 & 0xf
        
        zmm2 = rax_29 u>= 8 ? zmm11 : zmm4
        
        if (rax_29 u< 4)
            zmm6 = zmm11
        else if (((rax_29 - 0xc) & 0xfffffffd) == 0)
            zmm6 = zmm4
        else
            zmm6 = zmm14
        
        if ((rcx_14.b & 1) != 0)
            zmm2 ^= 0x80000000
        
        if ((rcx_14.b & 2) != 0)
            zmm6 ^= 0x80000000
        
        int64_t rdx_6 = sx.q(*(&data_143b6da00 + (rcx_10 << 2)) + r15_1)
        int32_t rcx_15 = *((rdx_6 << 2) + 0x143b6da04)
        int32_t rax_32 = rcx_15 & 0xf
        
        zmm1 = rax_32 u>= 8 ? zmm11 : zmm3
        
        if (rax_32 u< 4)
            zmm0 = zmm11
        else if (((rax_32 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm3
        else
            zmm0 = zmm14
        
        if ((rcx_15.b & 1) != 0)
            zmm1 ^= 0x80000000
        
        if ((rcx_15.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_16 = *(&data_143b6da00 + (r11_2 << 2))
        zmm6[0] = zmm6[0] + zmm2[0]
        zmm0.d = zmm0.d f+ zmm1[0]
        int32_t rax_35 = rcx_16 & 0xf
        zmm6[0] = zmm6[0] f- zmm0.d
        zmm6[0] = zmm6[0] f* zmm5.d
        zmm6[0] = zmm6[0] f+ zmm0.d
        
        zmm9 = rax_35 u>= 8 ? zmm12 : zmm4
        
        if (rax_35 u< 4)
            zmm0 = zmm12
        else if (((rax_35 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm4
        else
            zmm0 = zmm14
        
        if ((rcx_16.b & 1) != 0)
            zmm9 ^= 0x80000000
        
        if ((rcx_16.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_17 = *(&data_143b6da00 + (r10_1 << 2))
        int32_t rax_38 = rcx_17 & 0xf
        
        zmm1 = rax_38 u>= 8 ? zmm12 : zmm3
        
        if (rax_38 u< 4)
            zmm2 = zmm12
        else if (((rax_38 - 0xc) & 0xfffffffd) == 0)
            zmm2 = zmm3
        else
            zmm2 = zmm14
        
        if ((rcx_17.b & 1) != 0)
            zmm1 ^= 0x80000000
        
        if ((rcx_17.b & 2) != 0)
            zmm2 ^= 0x80000000
        
        int32_t rcx_18 = *(&data_143b6da00 + (r8_4 << 2))
        zmm2[0] = zmm2[0] + zmm1[0]
        int32_t rax_41 = rcx_18 & 0xf
        
        zmm5 = rax_41 u>= 8 ? zmm11 : zmm4
        
        if (rax_41 u< 4)
            zmm4 = zmm11
        else if (((rax_41 - 0xc) & 0xfffffffd) != 0)
            zmm4 = zmm14
        
        if ((rcx_18.b & 1) != 0)
            zmm5 ^= 0x80000000
        
        if ((rcx_18.b & 2) != 0)
            zmm4 ^= 0x80000000
        
        int32_t rcx_19 = *(&data_143b6da00 + (rdx_6 << 2))
        result = zx.q(rcx_19) & 0xf
        
        zmm1 = result.d u>= 8 ? zmm11 : zmm3
        
        if (result.d u>= 4)
            result = zx.q(result.d - 0xc)
            
            if ((result.d & 0xfffffffd) != 0)
                zmm3 = zmm14
        else
            zmm3 = zmm11
        
        if ((rcx_19.b & 1) != 0)
            zmm1 ^= 0x80000000
        
        if ((rcx_19.b & 2) != 0)
            zmm3 ^= 0x80000000
        
        zmm8.d = zmm8.d f+ zmm13[0]
        r14 += 1
        zmm0.d = zmm0.d f+ zmm9.d
        zmm9 = 0x41200000
        zmm4[0] = zmm4[0] f+ zmm5.d
        zmm5 = 0x3f800000
        zmm3.d = zmm3.d f+ zmm1[0]
        zmm1 = arg_8
        zmm8.d = zmm8.d f- zmm10.d
        zmm0.d = zmm0.d f- zmm2[0]
        zmm4[0] = zmm4[0] f- zmm3.d
        zmm8.d = zmm8.d f* zmm1[0]
        zmm0.d = zmm0.d f* zmm1[0]
        zmm4[0] = zmm4[0] * zmm1[0]
        zmm8.d = zmm8.d f+ zmm10.d
        zmm0.d = zmm0.d f+ zmm2[0]
        zmm4[0] = zmm4[0] f+ zmm3.d
        zmm8.d = zmm8.d f- zmm6[0]
        zmm0.d = zmm0.d f- zmm4[0]
        zmm8.d = zmm8.d f* arg_10
        zmm0.d = zmm0.d f* arg_10
        zmm8.d = zmm8.d f+ zmm6[0]
        zmm6 = 0x40c00000
        zmm0.d = zmm0.d f+ zmm4[0]
        zmm8.d = zmm8.d f- zmm0.d
        zmm8.d = zmm8.d f* arg_18
        zmm8.d = zmm8.d f+ zmm0.d
        *rdi_1 = zmm8.d
        zmm8 = 0x41700000
    while (r14 s< rsi_1)

return result
