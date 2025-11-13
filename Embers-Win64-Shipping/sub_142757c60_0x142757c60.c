// 函数: sub_142757c60
// 地址: 0x142757c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r14 = 0
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
int32_t rdi = *(arg1 + 0x80)
int64_t rsi = *(arg1 + 0x70)
int32_t r8_1 = 0
uint128_t* rbp_2 = zx.q(zx.d(rax[1]) * rdi) + rsi
uint128_t zmm11 = *(sx.q(r8) + *(rbx + (sx.q(rdx) << 3)))
*(arg1 + 0x10) = &rax[2]
uint32_t rcx_3 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t rax_5 = *r9

if (rcx_3 s>= rax_5)
    int64_t rdx_1 = 0
    
    do
        rcx_3 -= rax_5
        rdx_1 += 1
        rax_5 = r9[rdx_1]
        r8_1 += 1
    while (rcx_3 s>= rax_5)

uint64_t rbx_2 = zx.q(zx.d(rax[3]) * rdi)
float zmm14[0x4] = *(sx.q(rcx_3) + *(rbx + (sx.q(r8_1) << 3)))
void* result = &rax[4]
*(arg1 + 0x10) = result
int32_t* rbx_3 = rbx_2 + rsi
int32_t rsi_1 = *(arg1 + 0x40)

if (rsi_1 s> 0)
    float zmm1[0x4] = zmm11
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    int32_t rcx_5 = int.d(zmm1[0])
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    
    if (rcx_5 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_5)).d f== zmm1[0]))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx_5 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    float zmm2[0x4] = zmm14
    int32_t rcx_7 = int.d(zmm2[0])
    
    if (rcx_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_7)).d f== zmm2[0]))
        zmm2 =
            _mm_cvtepi32_ps(zx.o(rcx_7 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
    
    float zmm6[0x4] = 0x40c00000
    zmm11.d = zmm11.d f- zmm1[0]
    uint128_t zmm8 = 0x41700000
    zmm14[0] = zmm14[0] - zmm2[0]
    uint128_t zmm9 = 0x41200000
    char rax_12 = (int.d(zmm2[0])).b
    zmm2 = 0x3f800000
    uint128_t zmm0
    zmm0.d = zmm11.d f* zmm11.d
    uint32_t r15_1 = zx.d(rax_12)
    uint128_t zmm4
    zmm4.d = zmm11.d f* 6f
    zmm0.d = zmm0.d f* zmm11.d
    uint128_t zmm12
    zmm12.d = zmm11.d f- 1f
    uint64_t r12_1 = zx.q((int.d(zmm1[0])).b)
    zmm4.d = zmm4.d f- 15f
    zmm14[0] = zmm14[0] * 6f
    zmm14[0] = zmm14[0] - 1f
    zmm14[0] = zmm14[0] - 15f
    zmm4.d = zmm4.d f* zmm11.d
    zmm4.d = zmm4.d f+ 10f
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm4.d = zmm4.d f* zmm0.d
    zmm14[0] = zmm14[0] + 10f
    zmm0.d = zmm14.d f* zmm14[0]
    int32_t arg_8 = zmm4.d
    zmm0.d = zmm0.d f* zmm14[0]
    zmm14[0] = zmm14[0] f* zmm0.d
    float arg_18 = zmm14[0]
    
    do
        uint128_t zmm3 = *rbp_2
        rbp_2 += 4
        zmm1 = zmm3
        int32_t* rdi_1 = rbx_3
        int32_t rcx_9 = int.d(zmm1[0])
        rbx_3 = &rbx_3[1]
        
        if (rcx_9 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_9)).d f== zmm1[0]))
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_9
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
        
        zmm3.d = zmm3.d f- zmm1[0]
        char rax_16 = (int.d(zmm1[0])).b
        zmm1 = zmm3
        uint32_t rdx_2 = zx.d(rax_16)
        uint128_t zmm5
        zmm5.d = zmm3.d f- zmm2[0]
        int32_t rax_18 = *(&data_143b6da00 + (r12_1 << 2)) + rdx_2
        zmm1[0] = zmm1[0] * zmm6[0]
        int64_t rcx_11 = sx.q(rax_18)
        int32_t rax_20 = *((r12_1 << 2) + 0x143b6da04) + rdx_2
        zmm0.d = zmm3.d f* zmm3.d
        int32_t r9_1 = *(&data_143b6da00 + (rcx_11 << 2))
        zmm1[0] = zmm1[0] f- zmm8.d
        int64_t rcx_12 = sx.q(rax_20)
        int32_t r8_3 = *((rcx_11 << 2) + 0x143b6da04) + r15_1
        zmm0.d = zmm0.d f* zmm3.d
        zmm1[0] = zmm1[0] f* zmm3.d
        int64_t r11_2 = sx.q(*((rcx_12 << 2) + 0x143b6da04) + r15_1)
        int32_t rdx_4 = *(&data_143b6da00 + (rcx_12 << 2)) + r15_1
        zmm1[0] = zmm1[0] f+ zmm9.d
        int32_t rcx_13 = *((r11_2 << 2) + 0x143b6da04)
        int32_t rax_24 = rcx_13 & 0xf
        zmm1[0] = zmm1[0] f* zmm0.d
        float arg_10 = zmm1[0]
        
        zmm13 = rax_24 u>= 8 ? zmm5 : zmm12
        
        if (rax_24 u< 4)
            zmm9 = zmm5
        else if (((rax_24 - 0xc) & 0xfffffffd) == 0)
            zmm9 = zmm12
        else
            zmm9 = zmm14
        
        if ((rcx_13.b & 1) != 0)
            zmm13 ^= 0x80000000
        
        if ((rcx_13.b & 2) != 0)
            zmm9 ^= 0x80000000
        
        int64_t r10_1 = sx.q(r8_3)
        int32_t rcx_14 = *((r10_1 << 2) + 0x143b6da04)
        int32_t rax_27 = rcx_14 & 0xf
        
        zmm0 = rax_27 u>= 8 ? zmm5 : zmm11
        
        if (rax_27 u< 4)
            zmm10 = zmm5
        else if (((rax_27 - 0xc) & 0xfffffffd) == 0)
            zmm10 = zmm11
        else
            zmm10 = zmm14
        
        if ((rcx_14.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_14.b & 2) != 0)
            zmm10 ^= 0x80000000
        
        int64_t r8_4 = sx.q(rdx_4)
        zmm10[0] = zmm10[0] f+ zmm0.d
        int32_t rcx_15 = *((r8_4 << 2) + 0x143b6da04)
        int32_t rax_30 = rcx_15 & 0xf
        
        zmm2 = rax_30 u>= 8 ? zmm3 : zmm12
        
        if (rax_30 u< 4)
            zmm6 = zmm3
        else if (((rax_30 - 0xc) & 0xfffffffd) == 0)
            zmm6 = zmm12
        else
            zmm6 = zmm14
        
        if ((rcx_15.b & 1) != 0)
            zmm2 ^= 0x80000000
        
        if ((rcx_15.b & 2) != 0)
            zmm6 ^= 0x80000000
        
        int64_t rdx_5 = sx.q(r9_1 + r15_1)
        int32_t rcx_16 = *((rdx_5 << 2) + 0x143b6da04)
        int32_t rax_33 = rcx_16 & 0xf
        
        zmm1 = rax_33 u>= 8 ? zmm3 : zmm11
        
        if (rax_33 u< 4)
            zmm0 = zmm3
        else if (((rax_33 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm11
        else
            zmm0 = zmm14
        
        if ((rcx_16.b & 1) != 0)
            zmm1 ^= 0x80000000
        
        if ((rcx_16.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_17 = *(&data_143b6da00 + (r11_2 << 2))
        zmm6[0] = zmm6[0] + zmm2[0]
        zmm0.d = zmm0.d f+ zmm1[0]
        int32_t rax_36 = rcx_17 & 0xf
        zmm6[0] = zmm6[0] f- zmm0.d
        zmm6[0] = zmm6[0] f* zmm4.d
        zmm6[0] = zmm6[0] f+ zmm0.d
        
        zmm8 = rax_36 u>= 8 ? zmm5 : zmm12
        
        if (rax_36 u< 4)
            zmm2 = zmm5
        else if (((rax_36 - 0xc) & 0xfffffffd) == 0)
            zmm2 = zmm12
        else
            zmm2 = zmm14
        
        if ((rcx_17.b & 1) != 0)
            zmm8 ^= 0x80000000
        
        if ((rcx_17.b & 2) != 0)
            zmm2 ^= 0x80000000
        
        int32_t rcx_18 = *(&data_143b6da00 + (r10_1 << 2))
        int32_t rax_39 = rcx_18 & 0xf
        
        zmm0 = rax_39 u>= 8 ? zmm5 : zmm11
        
        if (rax_39 u>= 4)
            if (((rax_39 - 0xc) & 0xfffffffd) == 0)
                zmm5 = zmm11
            else
                zmm5 = zmm14
        
        if ((rcx_18.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_18.b & 2) != 0)
            zmm5 ^= 0x80000000
        
        int32_t rcx_19 = *(&data_143b6da00 + (r8_4 << 2))
        zmm5.d = zmm5.d f+ zmm0.d
        int32_t rax_42 = rcx_19 & 0xf
        
        zmm4 = rax_42 u>= 8 ? zmm3 : zmm12
        
        if (rax_42 u< 4)
            zmm0 = zmm3
        else if (((rax_42 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm12
        else
            zmm0 = zmm14
        
        if ((rcx_19.b & 1) != 0)
            zmm4 ^= 0x80000000
        
        if ((rcx_19.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_20 = *(&data_143b6da00 + (rdx_5 << 2))
        result = zx.q(rcx_20) & 0xf
        
        zmm1 = result.d u>= 8 ? zmm3 : zmm11
        
        if (result.d u>= 4)
            result = zx.q(result.d - 0xc)
            
            if ((result.d & 0xfffffffd) == 0)
                zmm3 = zmm11
            else
                zmm3 = zmm14
        
        if ((rcx_20.b & 1) != 0)
            zmm1 ^= 0x80000000
        
        if ((rcx_20.b & 2) != 0)
            zmm3 ^= 0x80000000
        
        zmm9.d = zmm9.d f+ zmm13.d
        r14 += 1
        zmm2[0] = zmm2[0] f+ zmm8.d
        zmm8 = 0x41700000
        zmm0.d = zmm0.d f+ zmm4.d
        zmm4 = arg_8
        zmm3.d = zmm3.d f+ zmm1[0]
        zmm9.d = zmm9.d f- zmm10[0]
        zmm2[0] = zmm2[0] f- zmm5.d
        zmm0.d = zmm0.d f- zmm3.d
        zmm9.d = zmm9.d f* zmm4.d
        zmm2[0] = zmm2[0] f* zmm4.d
        zmm0.d = zmm0.d f* zmm4.d
        zmm9.d = zmm9.d f+ zmm10[0]
        zmm2[0] = zmm2[0] f+ zmm5.d
        zmm0.d = zmm0.d f+ zmm3.d
        zmm9.d = zmm9.d f- zmm6[0]
        zmm2[0] = zmm2[0] f- zmm0.d
        zmm9.d = zmm9.d f* arg_10
        zmm2[0] = zmm2[0] * arg_10
        zmm9.d = zmm9.d f+ zmm6[0]
        zmm6 = 0x40c00000
        zmm2[0] = zmm2[0] f+ zmm0.d
        zmm9.d = zmm9.d f- zmm2[0]
        zmm9.d = zmm9.d f* arg_18
        zmm9.d = zmm9.d f+ zmm2[0]
        zmm2 = 0x3f800000
        *rdi_1 = zmm9.d
        zmm9 = 0x41200000
    while (r14 s< rsi_1)

return result
