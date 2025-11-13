// 函数: sub_142758970
// 地址: 0x142758970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdi = 0
int32_t* rdx = *(arg1 + 0x20)
int32_t r9 = 0
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *rdx

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = rdx[rcx]
        r9 += 1
    while (r8 s>= rax_1)

int64_t rbx = *(arg1 + 0x18)
int32_t r9_1 = 0
uint128_t zmm12 = *(sx.q(r8) + *(rbx + (sx.q(r9) << 3)))
uint32_t rcx_2 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
int32_t rax_4 = *rdx

if (rcx_2 s>= rax_4)
    int64_t r8_1 = 0
    
    do
        rcx_2 -= rax_4
        r8_1 += 1
        rax_4 = rdx[r8_1]
        r9_1 += 1
    while (rcx_2 s>= rax_4)

int32_t r9_2 = 0
uint128_t zmm11 = *(sx.q(rcx_2) + *(rbx + (sx.q(r9_1) << 3)))
uint32_t rcx_4 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t rax_7 = *rdx

if (rcx_4 s>= rax_7)
    int64_t r8_2 = 0
    
    do
        rcx_4 -= rax_7
        r8_2 += 1
        rax_7 = rdx[r8_2]
        r9_2 += 1
    while (rcx_4 s>= rax_7)

int32_t r13 = *(arg1 + 0x40)
uint128_t zmm6 = *(sx.q(rcx_4) + *(rbx + (sx.q(r9_2) << 3)))
void* result = &rax[4]
uint64_t rsi_1 = zx.q(*(arg1 + 0x80) * zx.d(rax[3]))
*(arg1 + 0x10) = result
int32_t* rsi_2 = rsi_1 + *(arg1 + 0x70)

if (r13 s> 0)
    float zmm1[0x4] = zmm12
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    uint128_t zmm10
    uint128_t var_98_1 = zmm10
    int32_t rcx_7 = int.d(zmm1[0])
    uint128_t zmm15
    uint128_t var_e8_1 = zmm15
    
    if (rcx_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_7)).d f== zmm1[0]))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx_7 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    float zmm3[0x4] = zmm11
    int32_t rcx_9 = int.d(zmm3[0])
    
    if (rcx_9 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_9)).d f== zmm3[0]))
        zmm3 =
            _mm_cvtepi32_ps(zx.o(rcx_9 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q)) & 1)))
    
    float zmm2[0x4] = zmm6
    int32_t rcx_11 = int.d(zmm2[0])
    
    if (rcx_11 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_11)).d f== zmm2[0]))
        zmm2 =
            _mm_cvtepi32_ps(zx.o(rcx_11 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
    
    zmm6.d = zmm6.d f- zmm2[0]
    zmm12.d = zmm12.d f- zmm1[0]
    zmm11.d = zmm11.d f- zmm3[0]
    uint128_t zmm8
    zmm8.d = zmm6.d f- 1f
    uint32_t r14_1 = zx.d((int.d(zmm3[0])).b)
    uint32_t rbp_1 = zx.d((int.d(zmm2[0])).b)
    uint128_t zmm9
    zmm9.d = zmm12.d f* 6f
    uint128_t zmm14
    zmm14.d = zmm12.d f- 1f
    int32_t arg_10 = zmm6.d
    int32_t var_f8_1 = zmm8.d
    zmm9.d = zmm9.d f- 15f
    uint128_t zmm13
    zmm13.d = zmm11.d f- 1f
    uint128_t zmm0
    zmm0.d = zmm12.d f* zmm12.d
    zmm0.d = zmm0.d f* zmm12.d
    zmm9.d = zmm9.d f* zmm12.d
    uint64_t r15_1 = zx.q((int.d(zmm1[0])).b)
    zmm9.d = zmm9.d f+ 10f
    zmm9.d = zmm9.d f* zmm0.d
    zmm0.d = zmm11.d f* zmm11.d
    int32_t arg_8 = zmm9.d
    zmm0.d = zmm0.d f* zmm11.d
    float zmm4 = ((zmm11.d * 6f - 15f) f* zmm11.d + 10f) f* zmm0.d
    zmm0.d = zmm6.d f* zmm6.d
    float arg_18 = zmm4
    zmm0.d = zmm0.d f* zmm6.d
    zmm4 = ((zmm6.d * 6f - 15f) f* zmm6.d + 10f) f* zmm0.d
    
    do
        int32_t* r12_1 = rsi_2
        int64_t rcx_13 = sx.q(*(&data_143b6da00 + (r15_1 << 2)) + r14_1)
        rsi_2 = &rsi_2[1]
        int64_t rcx_14 = sx.q(*((r15_1 << 2) + 0x143b6da04) + r14_1)
        int64_t rbx_1 = sx.q(*((rcx_14 << 2) + 0x143b6da04) + rbp_1)
        int32_t rcx_15 = *((rbx_1 << 2) + 0x143b6da04)
        int32_t rax_26 = rcx_15 & 0xf
        
        zmm15 = rax_26 u>= 8 ? zmm13 : zmm14
        
        if (rax_26 u< 4)
            zmm7 = zmm13
        else if (((rax_26 - 0xc) & 0xfffffffd) == 0)
            zmm7 = zmm14
        else
            zmm7 = zmm8
        
        if ((rcx_15.b & 1) != 0)
            zmm15 ^= 0x80000000
        
        if ((rcx_15.b & 2) != 0)
            zmm7 ^= 0x80000000
        
        int64_t r10_1 = sx.q(*((rcx_13 << 2) + 0x143b6da04) + rbp_1)
        int32_t rcx_16 = *((r10_1 << 2) + 0x143b6da04)
        int32_t rax_29 = rcx_16 & 0xf
        
        zmm0 = rax_29 u>= 8 ? zmm13 : zmm12
        
        if (rax_29 u< 4)
            zmm10 = zmm13
        else if (((rax_29 - 0xc) & 0xfffffffd) == 0)
            zmm10 = zmm12
        else
            zmm10 = zmm8
        
        if ((rcx_16.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_16.b & 2) != 0)
            zmm10 ^= 0x80000000
        
        int64_t r11_3 = sx.q(*(&data_143b6da00 + (rcx_14 << 2)) + rbp_1)
        zmm10.d = zmm10.d f+ zmm0.d
        int32_t rcx_17 = *((r11_3 << 2) + 0x143b6da04)
        int32_t rax_32 = rcx_17 & 0xf
        
        zmm2 = rax_32 u>= 8 ? zmm11 : zmm14
        
        uint128_t zmm5
        
        if (rax_32 u< 4)
            zmm5 = zmm11
        else if (((rax_32 - 0xc) & 0xfffffffd) == 0)
            zmm5 = zmm14
        else
            zmm5 = zmm8
        
        if ((rcx_17.b & 1) != 0)
            zmm2 ^= 0x80000000
        
        if ((rcx_17.b & 2) != 0)
            zmm5 ^= 0x80000000
        
        int64_t rdx_3 = sx.q(*(&data_143b6da00 + (rcx_13 << 2)) + rbp_1)
        int32_t rcx_18 = *((rdx_3 << 2) + 0x143b6da04)
        int32_t rax_35 = rcx_18 & 0xf
        
        zmm1 = rax_35 u>= 8 ? zmm11 : zmm12
        
        if (rax_35 u< 4)
            zmm0 = zmm11
        else if (((rax_35 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm12
        else
            zmm0 = zmm8
        
        if ((rcx_18.b & 1) != 0)
            zmm1 ^= 0x80000000
        
        if ((rcx_18.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_19 = *(&data_143b6da00 + (rbx_1 << 2))
        zmm5.d = zmm5.d f+ zmm2[0]
        zmm0.d = zmm0.d f+ zmm1[0]
        int32_t rax_38 = rcx_19 & 0xf
        zmm5.d = zmm5.d f- zmm0.d
        zmm5.d = zmm5.d f* zmm9.d
        zmm5.d = zmm5.d f+ zmm0.d
        
        zmm9 = rax_38 u>= 8 ? zmm13 : zmm14
        
        if (rax_38 u< 4)
            zmm2 = zmm13
        else if (((rax_38 - 0xc) & 0xfffffffd) == 0)
            zmm2 = zmm14
        else
            zmm2 = zmm6
        
        if ((rcx_19.b & 1) != 0)
            zmm9 ^= 0x80000000
        
        if ((rcx_19.b & 2) != 0)
            zmm2 ^= 0x80000000
        
        int32_t rcx_20 = *(&data_143b6da00 + (r10_1 << 2))
        int32_t rax_41 = rcx_20 & 0xf
        
        zmm0 = rax_41 u>= 8 ? zmm13 : zmm12
        
        if (rax_41 u< 4)
            zmm3 = zmm13
        else if (((rax_41 - 0xc) & 0xfffffffd) == 0)
            zmm3 = zmm12
        else
            zmm3 = zmm6
        
        if ((rcx_20.b & 1) != 0)
            zmm0 ^= 0x80000000
        
        if ((rcx_20.b & 2) != 0)
            zmm3 ^= 0x80000000
        
        int32_t rcx_21 = *(&data_143b6da00 + (r11_3 << 2))
        zmm3[0] = zmm3[0] f+ zmm0.d
        int32_t rax_44 = rcx_21 & 0xf
        
        zmm8 = rax_44 u>= 8 ? zmm11 : zmm14
        
        if (rax_44 u< 4)
            zmm0 = zmm11
        else if (((rax_44 - 0xc) & 0xfffffffd) == 0)
            zmm0 = zmm14
        else
            zmm0 = zmm6
        
        if ((rcx_21.b & 1) != 0)
            zmm8 ^= 0x80000000
        
        if ((rcx_21.b & 2) != 0)
            zmm0 ^= 0x80000000
        
        int32_t rcx_22 = *(&data_143b6da00 + (rdx_3 << 2))
        result = zx.q(rcx_22) & 0xf
        
        zmm6 = result.d u>= 8 ? zmm11 : zmm12
        
        if (result.d u>= 4)
            result = zx.q(result.d - 0xc)
            
            if ((result.d & 0xfffffffd) == 0)
                zmm1 = zmm12
            else
                zmm1 = arg_10
        else
            zmm1 = zmm11
        
        if ((rcx_22.b & 1) != 0)
            zmm6 ^= 0x80000000
        
        if ((rcx_22.b & 2) != 0)
            zmm1 ^= 0x80000000
        
        zmm7.d = zmm7.d f+ zmm15.d
        rdi += 1
        zmm2[0] = zmm2[0] f+ zmm9.d
        zmm9 = arg_8
        zmm0.d = zmm0.d f+ zmm8.d
        zmm8 = var_f8_1
        zmm1[0] = zmm1[0] f+ zmm6.d
        zmm6 = arg_10
        zmm7.d = zmm7.d f- zmm10.d
        zmm2[0] = zmm2[0] - zmm3[0]
        zmm0.d = zmm0.d f- zmm1[0]
        zmm7.d = zmm7.d f* zmm9.d
        zmm2[0] = zmm2[0] f* zmm9.d
        zmm0.d = zmm0.d f* arg_8
        zmm7.d = zmm7.d f+ zmm10.d
        zmm2[0] = zmm2[0] + zmm3[0]
        zmm0.d = zmm0.d f+ zmm1[0]
        zmm7.d = zmm7.d f- zmm5.d
        zmm2[0] = zmm2[0] f- zmm0.d
        zmm7.d = zmm7.d f* arg_18
        zmm2[0] = zmm2[0] * arg_18
        zmm7.d = zmm7.d f+ zmm5.d
        zmm2[0] = zmm2[0] f+ zmm0.d
        zmm7.d = zmm7.d f- zmm2[0]
        zmm7.d = zmm7.d f* zmm4
        zmm7.d = zmm7.d f+ zmm2[0]
        *r12_1 = zmm7.d
    while (rdi s< r13)

return result
