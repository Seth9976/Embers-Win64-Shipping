// 函数: sub_142755d60
// 地址: 0x142755d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r15 = 0
int32_t r9 = *(arg1 + 0x80)
int64_t r10 = *(arg1 + 0x70)
int32_t r13 = *(arg1 + 0x40)
uint32_t rdi = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rsi = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t rbp = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
void* result = &rax[4]
uint64_t r14_1 = zx.q(zx.d(rax[3]) * r9)
int128_t* rdi_2 = zx.q(rdi * r9) + r10
*(arg1 + 0x10) = result
int128_t* rsi_2 = zx.q(rsi * r9) + r10
float* r14_2 = r14_1 + r10
int128_t* rbp_2 = zx.q(rbp * r9) + r10

if (r13 s> 0)
    uint128_t zmm5 = 0x3f800000
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm8[0x4] = 0x40c00000
    uint128_t zmm9
    uint128_t var_68_1 = zmm9
    float zmm10[0x4] = 0x41700000
    float zmm11[0x4] = 0x41200000
    float zmm12[0x4]
    float var_98_1[0x4] = zmm12
    float zmm13[0x4]
    float var_a8_1[0x4] = zmm13
    uint128_t zmm14
    uint128_t var_b8_1 = zmm14
    uint128_t zmm15
    uint128_t var_c8_1 = zmm15
    
    do
        zmm9 = *rdi_2
        float* r12_1 = r14_2
        zmm12 = *rbp_2
        rbp_2 += 4
        uint128_t zmm3 = *rsi_2
        rsi_2 += 4
        float zmm1[0x4] = zmm9
        rdi_2 += 4
        int32_t rcx = int.d(zmm1[0])
        r14_2 = &r14_2[1]
        
        if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
            zmm1 =
                _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
        
        float zmm4[0x4] = zmm3
        int32_t rcx_2 = int.d(zmm4[0])
        
        if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm4[0]))
            zmm4 = _mm_cvtepi32_ps(zx.o(rcx_2
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q)) & 1)))
        
        float zmm2[0x4] = zmm12
        int32_t rcx_4 = int.d(zmm2[0])
        
        if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm2[0]))
            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_4
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
        
        zmm9.d = zmm9.d f- zmm1[0]
        zmm12[0] = zmm12[0] - zmm2[0]
        zmm3.d = zmm3.d f- zmm4[0]
        uint32_t r8_1 = zx.d((int.d(zmm4[0])).b)
        uint128_t zmm0
        zmm0.d = zmm9.d f* zmm9.d
        zmm4 = zmm3
        char rax_8 = (int.d(zmm2[0])).b
        zmm14.d = zmm9.d f* zmm8[0]
        zmm4[0] = zmm4[0] f- zmm5.d
        uint32_t r9_1 = zx.d(rax_8)
        zmm0.d = zmm0.d f* zmm9.d
        zmm2 = zmm9
        zmm15.d = zmm3.d f* zmm8[0]
        zmm14.d = zmm14.d f- zmm10[0]
        uint64_t rdx_2 = zx.q((int.d(zmm1[0])).b)
        zmm2[0] = zmm2[0] f- zmm5.d
        zmm12[0] = zmm12[0] * zmm8[0]
        zmm6 = zmm12
        zmm15.d = zmm15.d f- zmm10[0]
        zmm14.d = zmm14.d f* zmm9.d
        int64_t rcx_6 = sx.q(*(&data_143b6da00 + (rdx_2 << 2)) + r8_1)
        int32_t rax_12 = *((rdx_2 << 2) + 0x143b6da04)
        zmm12[0] = zmm12[0] - zmm10[0]
        zmm6[0] = zmm6[0] f- zmm5.d
        zmm15.d = zmm15.d f* zmm3.d
        int32_t r10_1 = *((rcx_6 << 2) + 0x143b6da04)
        zmm14.d = zmm14.d f+ zmm11[0]
        int64_t rcx_7 = sx.q(rax_12 + r8_1)
        int32_t r11_2 = *(&data_143b6da00 + (rcx_6 << 2)) + r9_1
        zmm12[0] = zmm12[0] * zmm12[0]
        zmm15.d = zmm15.d f+ zmm11[0]
        int32_t rax_14 = *((rcx_7 << 2) + 0x143b6da04)
        int32_t rdx_3 = *(&data_143b6da00 + (rcx_7 << 2))
        zmm12[0] = zmm12[0] + zmm11[0]
        zmm14.d = zmm14.d f* zmm0.d
        int64_t rbx_1 = sx.q(rax_14 + r9_1)
        zmm0.d = zmm3.d f* zmm3.d
        int32_t rcx_8 = *((rbx_1 << 2) + 0x143b6da04)
        int32_t rax_17 = rcx_8 & 0xf
        zmm0.d = zmm0.d f* zmm3.d
        zmm15.d = zmm15.d f* zmm0.d
        zmm0.d = zmm12.d f* zmm12[0]
        zmm0.d = zmm0.d f* zmm12[0]
        zmm12[0] = zmm12[0] f* zmm0.d
        float arg_8 = zmm12[0]
        
        zmm13 = rax_17 u>= 8 ? zmm4 : zmm2
        
        if (rax_17 u< 4)
            zmm1 = zmm4
        else if (((rax_17 - 0xc) & 0xfffffffd) == 0)
            zmm1 = zmm2
        else
            zmm1 = zmm6
        
        if ((rcx_8.b & 1) != 0)
            zmm13 ^= 0x80000000
        
        if ((rcx_8.b & 2) != 0)
            zmm1 ^= 0x80000000
        
        int64_t r8_2 = sx.q(r10_1 + r9_1)
        int32_t rcx_9 = *((r8_2 << 2) + 0x143b6da04)
        int32_t rax_20 = rcx_9 & 0xf
        
        zmm0 = rax_20 u>= 8 ? zmm4 : zmm9
        
        if (rax_20 u< 4)
            zmm10 = zmm4
        else if (((rax_20 - 0xc) & 0xfffffffd) == 0)
            zmm10 = zmm9
        else
            zmm10 = zmm6
        
        if ((rcx_9.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_9.b & 2) != 0)
            zmm10 ^= 0x80000000
        
        int64_t r9_2 = sx.q(rdx_3 + r9_1)
        zmm10[0] = zmm10[0] f+ zmm0.d
        int32_t rcx_10 = *((r9_2 << 2) + 0x143b6da04)
        int32_t rax_23 = rcx_10 & 0xf
        
        zmm8 = rax_23 u>= 8 ? zmm3 : zmm2
        
        if (rax_23 u< 4)
            zmm5 = zmm3
        else if (((rax_23 - 0xc) & 0xfffffffd) == 0)
            zmm5 = zmm2
        else
            zmm5 = zmm6
        
        if ((rcx_10.b & 1) != 0)
            zmm8 ^= 0x80000000
        
        if ((rcx_10.b & 2) != 0)
            zmm5 ^= 0x80000000
        
        int64_t rdx_5 = sx.q(r11_2)
        int32_t rcx_11 = *((rdx_5 << 2) + 0x143b6da04)
        int32_t rax_26 = rcx_11 & 0xf
        
        zmm0 = rax_26 u>= 8 ? zmm3 : zmm9
        
        if (rax_26 u< 4)
            zmm6 = zmm3
        else if (((rax_26 - 0xc) & 0xfffffffd) == 0)
            zmm6 = zmm9
        
        if ((rcx_11.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_11.b & 2) != 0)
            zmm6 ^= 0x80000000
        
        int32_t rcx_12 = *(&data_143b6da00 + (rbx_1 << 2))
        zmm5.d = zmm5.d f+ zmm8[0]
        zmm6[0] = zmm6[0] f+ zmm0.d
        int32_t rax_29 = rcx_12 & 0xf
        zmm5.d = zmm5.d f- zmm6[0]
        zmm5.d = zmm5.d f* zmm14.d
        zmm5.d = zmm5.d f+ zmm6[0]
        
        zmm11 = rax_29 u>= 8 ? zmm4 : zmm2
        
        if (rax_29 u< 4)
            zmm0 = zmm4
        else if (((rax_29 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm2
        else
            zmm0 = zmm12
        
        if ((rcx_12.b & 1) != 0)
            zmm11 ^= 0x80000000
        
        if ((rcx_12.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_13 = *(&data_143b6da00 + (r8_2 << 2))
        int32_t rax_32 = rcx_13 & 0xf
        
        zmm6 = rax_32 u>= 8 ? zmm4 : zmm9
        
        if (rax_32 u>= 4)
            if (((rax_32 - 0xc) & 0xfffffffd) == 0)
                zmm4 = zmm9
            else
                zmm4 = zmm12
        
        if ((rcx_13.b & 1) != 0)
            zmm6 ^= 0x80000000
        
        if ((rcx_13.b & 2) != 0)
            zmm4 ^= 0x80000000
        
        int32_t rcx_14 = *(&data_143b6da00 + (r9_2 << 2))
        zmm4[0] = zmm4[0] + zmm6[0]
        int32_t rax_35 = rcx_14 & 0xf
        
        zmm8 = rax_35 u>= 8 ? zmm3 : zmm2
        
        if (rax_35 u< 4)
            zmm2 = zmm3
        else if (((rax_35 - 0xc) & 0xfffffffd) != 0)
            zmm2 = zmm12
        
        if ((rcx_14.b & 1) != 0)
            zmm8 ^= 0x80000000
        
        if ((rcx_14.b & 2) != 0)
            zmm2 ^= 0x80000000
        
        int32_t rcx_15 = *(&data_143b6da00 + (rdx_5 << 2))
        result = zx.q(rcx_15) & 0xf
        
        zmm6 = result.d u>= 8 ? zmm3 : zmm9
        
        if (result.d u>= 4)
            result = zx.q(result.d - 0xc)
            
            if ((result.d & 0xfffffffd) == 0)
                zmm3 = zmm9
            else
                zmm3 = zmm12
        
        if ((rcx_15.b & 1) != 0)
            zmm6 ^= 0x80000000
        
        if ((rcx_15.b & 2) != 0)
            zmm3 ^= 0x80000000
        
        zmm1[0] = zmm1[0] + zmm13[0]
        r15 += 1
        zmm0.d = zmm0.d f+ zmm11[0]
        zmm11 = 0x41200000
        zmm2[0] = zmm2[0] + zmm8[0]
        zmm8 = 0x40c00000
        zmm3.d = zmm3.d f+ zmm6[0]
        zmm1[0] = zmm1[0] - zmm10[0]
        zmm0.d = zmm0.d f- zmm4[0]
        zmm2[0] = zmm2[0] f- zmm3.d
        zmm1[0] = zmm1[0] f* zmm14.d
        zmm0.d = zmm0.d f* zmm14.d
        zmm2[0] = zmm2[0] f* zmm14.d
        zmm1[0] = zmm1[0] + zmm10[0]
        zmm10 = 0x41700000
        zmm0.d = zmm0.d f+ zmm4[0]
        zmm2[0] = zmm2[0] f+ zmm3.d
        zmm1[0] = zmm1[0] f- zmm5.d
        zmm0.d = zmm0.d f- zmm2[0]
        zmm1[0] = zmm1[0] f* zmm15.d
        zmm0.d = zmm0.d f* zmm15.d
        zmm1[0] = zmm1[0] f+ zmm5.d
        zmm5 = 0x3f800000
        zmm0.d = zmm0.d f+ zmm2[0]
        zmm1[0] = zmm1[0] f- zmm0.d
        zmm1[0] = zmm1[0] * arg_8
        zmm1[0] = zmm1[0] f+ zmm0.d
        *r12_1 = zmm1[0]
    while (r15 s< r13)

return result
