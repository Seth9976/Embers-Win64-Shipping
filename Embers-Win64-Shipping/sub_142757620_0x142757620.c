// 函数: sub_142757620
// 地址: 0x142757620
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

int64_t r9_1 = *(arg1 + 0x70)
int32_t r15 = *(arg1 + 0x40)
int32_t r8_1 = *(arg1 + 0x80)
uint128_t zmm11 = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint128_t* rbx_2 = zx.q(zx.d(rax[1]) * r8_1) + r9_1
*(arg1 + 0x10) = &rax[2]
uint32_t rdi = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
void* result = &rax[4]
uint64_t rsi_1 = zx.q(zx.d(rax[3]) * r8_1)
*(arg1 + 0x10) = result
int128_t* rdi_2 = zx.q(rdi * r8_1) + r9_1
float* rsi_2 = rsi_1 + r9_1

if (r15 s> 0)
    float zmm1[0x4] = zmm11
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    int32_t rcx_2 = int.d(zmm1[0])
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    
    if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm1[0]))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    uint128_t zmm6 = 0x40c00000
    zmm11.d = zmm11.d f- zmm1[0]
    uint128_t zmm8 = 0x41700000
    uint128_t zmm9 = 0x41200000
    uint128_t zmm5 = 0x3f800000
    uint128_t zmm15
    zmm15.d = zmm11.d f* 6f
    uint128_t zmm0
    zmm0.d = zmm11.d f* zmm11.d
    uint128_t zmm12
    zmm12.d = zmm11.d f- 1f
    zmm15.d = zmm15.d f- 15f
    zmm15.d = zmm15.d f* zmm11.d
    uint64_t r12_1 = zx.q((int.d(zmm1[0])).b)
    zmm0.d = zmm0.d f* zmm11.d
    zmm15.d = zmm15.d f+ 10f
    zmm15.d = zmm15.d f* zmm0.d
    
    do
        uint128_t zmm3 = *rbx_2
        float* r14_1 = rsi_2
        zmm13 = *rdi_2
        rdi_2 += 4
        zmm1 = zmm3
        rbx_2 += 4
        int32_t rcx_4 = int.d(zmm1[0])
        rsi_2 = &rsi_2[1]
        
        if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1[0]))
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_4
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
        
        float zmm2[0x4] = zmm13
        int32_t rcx_6 = int.d(zmm2[0])
        
        if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm2[0]))
            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_6
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
        
        zmm13[0] = zmm13[0] - zmm2[0]
        zmm3.d = zmm3.d f- zmm1[0]
        uint32_t rdx_4 = zx.d((int.d(zmm1[0])).b)
        uint128_t zmm4
        zmm4.d = zmm3.d f- zmm5.d
        char rax_12 = (int.d(zmm2[0])).b
        zmm0.d = zmm3.d f* zmm3.d
        zmm2 = zmm3
        uint32_t r8_2 = zx.d(rax_12)
        int32_t rax_13 = *(&data_143b6da00 + (r12_1 << 2))
        zmm1 = zmm13
        zmm2[0] = zmm2[0] f* zmm6.d
        zmm1[0] = zmm1[0] f- zmm5.d
        zmm0.d = zmm0.d f* zmm3.d
        int64_t rcx_8 = sx.q(rax_13 + rdx_4)
        int32_t rax_15 = *((r12_1 << 2) + 0x143b6da04)
        zmm2[0] = zmm2[0] f- zmm8.d
        int32_t r9_2 = *((rcx_8 << 2) + 0x143b6da04)
        int32_t r10_2 = *(&data_143b6da00 + (rcx_8 << 2)) + r8_2
        zmm2[0] = zmm2[0] f* zmm3.d
        int64_t rcx_9 = sx.q(rax_15 + rdx_4)
        zmm2[0] = zmm2[0] f+ zmm9.d
        int64_t r11_1 = sx.q(*((rcx_9 << 2) + 0x143b6da04) + r8_2)
        int32_t rdx_6 = *(&data_143b6da00 + (rcx_9 << 2)) + r8_2
        zmm2[0] = zmm2[0] f* zmm0.d
        int32_t rcx_10 = *((r11_1 << 2) + 0x143b6da04)
        zmm0.d = zmm13.d f* zmm13[0]
        int32_t rax_20 = rcx_10 & 0xf
        float arg_8 = zmm2[0]
        zmm13[0] = zmm13[0] f* zmm6.d
        zmm0.d = zmm0.d f* zmm13[0]
        zmm13[0] = zmm13[0] f- zmm8.d
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm13[0] = zmm13[0] f+ zmm9.d
        zmm13[0] = zmm13[0] f* zmm0.d
        float arg_10 = zmm13[0]
        
        zmm14 = rax_20 u>= 8 ? zmm4 : zmm12
        
        if (rax_20 u< 4)
            zmm2 = zmm4
        else if (((rax_20 - 0xc) & 0xfffffffd) == 0)
            zmm2 = zmm12
        else
            zmm2 = zmm1
        
        if ((rcx_10.b & 1) != 0)
            zmm14 ^= 0x80000000
        
        if ((rcx_10.b & 2) != 0)
            zmm2 ^= 0x80000000
        
        int64_t r8_3 = sx.q(r9_2 + r8_2)
        int32_t rcx_11 = *((r8_3 << 2) + 0x143b6da04)
        int32_t rax_23 = rcx_11 & 0xf
        
        zmm0 = rax_23 u>= 8 ? zmm4 : zmm11
        
        if (rax_23 u< 4)
            zmm10 = zmm4
        else if (((rax_23 - 0xc) & 0xfffffffd) == 0)
            zmm10 = zmm11
        else
            zmm10 = zmm1
        
        if ((rcx_11.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_11.b & 2) != 0)
            zmm10 ^= 0x80000000
        
        int64_t r9_4 = sx.q(rdx_6)
        zmm10.d = zmm10.d f+ zmm0.d
        int32_t rcx_12 = *((r9_4 << 2) + 0x143b6da04)
        int32_t rax_26 = rcx_12 & 0xf
        
        zmm6 = rax_26 u>= 8 ? zmm3 : zmm12
        
        if (rax_26 u< 4)
            zmm5 = zmm3
        else if (((rax_26 - 0xc) & 0xfffffffd) == 0)
            zmm5 = zmm12
        else
            zmm5 = zmm1
        
        if ((rcx_12.b & 1) != 0)
            zmm6 ^= 0x80000000
        
        if ((rcx_12.b & 2) != 0)
            zmm5 ^= 0x80000000
        
        int64_t rdx_7 = sx.q(r10_2)
        int32_t rcx_13 = *((rdx_7 << 2) + 0x143b6da04)
        int32_t rax_29 = rcx_13 & 0xf
        
        zmm0 = rax_29 u>= 8 ? zmm3 : zmm11
        
        if (rax_29 u< 4)
            zmm1 = zmm3
        else if (((rax_29 - 0xc) & 0xfffffffd) == 0)
            zmm1 = zmm11
        
        if ((rcx_13.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_13.b & 2) != 0)
            zmm1 ^= 0x80000000
        
        int32_t rcx_14 = *(&data_143b6da00 + (r11_1 << 2))
        zmm5.d = zmm5.d f+ zmm6.d
        zmm1[0] = zmm1[0] f+ zmm0.d
        int32_t rax_32 = rcx_14 & 0xf
        zmm5.d = zmm5.d f- zmm1[0]
        zmm5.d = zmm5.d f* zmm15.d
        zmm5.d = zmm5.d f+ zmm1[0]
        
        zmm9 = rax_32 u>= 8 ? zmm4 : zmm12
        
        if (rax_32 u< 4)
            zmm1 = zmm4
        else if (((rax_32 - 0xc) & 0xfffffffd) == 0)
            zmm1 = zmm12
        else
            zmm1 = zmm13
        
        if ((rcx_14.b & 1) != 0)
            zmm9 ^= 0x80000000
        
        if ((rcx_14.b & 2) != 0)
            zmm1 ^= 0x80000000
        
        int32_t rcx_15 = *(&data_143b6da00 + (r8_3 << 2))
        int32_t rax_35 = rcx_15 & 0xf
        
        zmm0 = rax_35 u>= 8 ? zmm4 : zmm11
        
        if (rax_35 u>= 4)
            if (((rax_35 - 0xc) & 0xfffffffd) == 0)
                zmm4 = zmm11
            else
                zmm4 = zmm13
        
        if ((rcx_15.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_15.b & 2) != 0)
            zmm4 ^= 0x80000000
        
        int32_t rcx_16 = *(&data_143b6da00 + (r9_4 << 2))
        zmm4.d = zmm4.d f+ zmm0.d
        int32_t rax_38 = rcx_16 & 0xf
        
        zmm8 = rax_38 u>= 8 ? zmm3 : zmm12
        
        if (rax_38 u< 4)
            zmm0 = zmm3
        else if (((rax_38 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm12
        else
            zmm0 = zmm13
        
        if ((rcx_16.b & 1) != 0)
            zmm8 ^= 0x80000000
        
        if ((rcx_16.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_17 = *(&data_143b6da00 + (rdx_7 << 2))
        result = zx.q(rcx_17) & 0xf
        
        zmm6 = result.d u>= 8 ? zmm3 : zmm11
        
        if (result.d u>= 4)
            result = zx.q(result.d - 0xc)
            
            if ((result.d & 0xfffffffd) == 0)
                zmm3 = zmm11
            else
                zmm3 = zmm13
        
        if ((rcx_17.b & 1) != 0)
            zmm6 ^= 0x80000000
        
        if ((rcx_17.b & 2) != 0)
            zmm3 ^= 0x80000000
        
        zmm2[0] = zmm2[0] f+ zmm14.d
        rbp += 1
        zmm1[0] = zmm1[0] f+ zmm9.d
        zmm9 = 0x41200000
        zmm0.d = zmm0.d f+ zmm8.d
        zmm8 = 0x41700000
        zmm3.d = zmm3.d f+ zmm6.d
        zmm6 = 0x40c00000
        zmm2[0] = zmm2[0] f- zmm10.d
        zmm1[0] = zmm1[0] f- zmm4.d
        zmm0.d = zmm0.d f- zmm3.d
        zmm2[0] = zmm2[0] f* zmm15.d
        zmm1[0] = zmm1[0] f* zmm15.d
        zmm0.d = zmm0.d f* zmm15.d
        zmm2[0] = zmm2[0] f+ zmm10.d
        zmm1[0] = zmm1[0] f+ zmm4.d
        zmm0.d = zmm0.d f+ zmm3.d
        zmm2[0] = zmm2[0] f- zmm5.d
        zmm1[0] = zmm1[0] f- zmm0.d
        zmm2[0] = zmm2[0] * arg_8
        zmm1[0] = zmm1[0] * arg_8
        zmm2[0] = zmm2[0] f+ zmm5.d
        zmm5 = 0x3f800000
        zmm1[0] = zmm1[0] f+ zmm0.d
        zmm2[0] = zmm2[0] - zmm1[0]
        zmm2[0] = zmm2[0] * arg_10
        zmm2[0] = zmm2[0] + zmm1[0]
        *r14_1 = zmm2[0]
    while (rbp s< r15)

return result
