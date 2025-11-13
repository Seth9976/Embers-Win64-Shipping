// 函数: sub_1407760d0
// 地址: 0x1407760d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
int128_t zmm6
rax, zmm6 = sub_1407526b0(*(arg1 + 0x28))
int16_t* r8 = *(arg2 + 0x10)
uint32_t r9 = zx.d(*r8)
*(arg2 + 0x10) = &r8[1]
uint8_t rsi_1 = (r9 u>> 0xf).b
int32_t rdx_1 = r9 & 0x7fff
int128_t* r9_3

if ((not.b(rsi_1) & 1) == 0)
    r9_3 = zx.q(*(arg2 + 0x80) * rdx_1) + *(arg2 + 0x70)
else
    int32_t* r9_1 = *(arg2 + 0x20)
    int32_t r8_1 = 0
    int32_t rax_2 = *r9_1
    
    if (rdx_1 s>= rax_2)
        int64_t rcx_1 = 0
        
        do
            rdx_1 -= rax_2
            rcx_1 += 1
            rax_2 = r9_1[rcx_1]
            r8_1 += 1
        while (rdx_1 s>= rax_2)
    
    r9_3 = sx.q(rdx_1) + *(*(arg2 + 0x18) + (sx.q(r8_1) << 3))

uint32_t rax_4 = zx.d(r8[1])
*(arg2 + 0x10) = &r8[2]
uint8_t rdi_1 = (rax_4 u>> 0xf).b
int32_t rdx_3 = rax_4 & 0x7fff
int32_t* r8_4

if ((not.b(rdi_1) & 1) == 0)
    r8_4 = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)
else
    int32_t* r10_1 = *(arg2 + 0x20)
    int32_t r8_2 = 0
    int32_t rax_6 = *r10_1
    
    if (rdx_3 s>= rax_6)
        int64_t rcx_3 = 0
        
        do
            rdx_3 -= rax_6
            rcx_3 += 1
            rax_6 = r10_1[rcx_3]
            r8_2 += 1
        while (rdx_3 s>= rax_6)
    
    r8_4 = sx.q(rdx_3) + *(*(arg2 + 0x18) + (sx.q(r8_2) << 3))

int32_t rdx_5 = zx.d(r8[2]) & 0x7fff
*(arg2 + 0x10) = &r8[3]
int32_t var_78 = rdx_5
int32_t rax_9
rax_9.b = rdx_5 != 0x7fff
int64_t result_1
void var_70

if (rdx_5 == 0x7fff)
    result_1 = &var_70
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_5) + *(arg2 + 0x70)
void* rcx_8 = *(arg1 + 0x28)
uint64_t result = 0

if (0 == *(rcx_8 + 0x210))
    *(rcx_8 + 0x210) = 0
else
    result = zx.q(*(rcx_8 + 0x210))

int32_t i = 0
int32_t r11_2 = result.d

if (*(arg2 + 0x40) s> 0)
    int64_t result_2 = result_1
    void* r13_1 = *(arg1 + 0x28)
    int128_t var_38_1 = zmm6
    
    do
        int32_t rdi_2 = *r8_4
        uint128_t zmm0_1 = *r9_3
        float zmm1_1
        
        if (rax == 0 || r11_2 == 0)
            zmm1_1 = (zx.o(0)).d
        else
            if (not(zmm0_1.d f>= 0f))
                zmm0_1 = zx.o(0)
            else if (not(zmm0_1.d f< 1f))
                zmm0_1 = 0x3f800000
            
            int64_t rsi_2 = *(r13_1 + 0x218)
            int32_t rcx_9 = rax - 1
            uint128_t zmm5_1
            zmm5_1.d = _mm_cvtepi32_ps(zx.o(rax)).d f* zmm0_1.d
            uint128_t zmm2_1
            zmm2_1.d = zmm5_1.d f+ zmm5_1.d
            zmm0_1.d = zmm2_1.d f- 0.5f
            int32_t rax_11 = int.d(zmm0_1.d) s>> 1
            zmm0_1.d = -0.5f f- zmm2_1.d
            zmm6 = *(rsi_2 + (sx.q(rax_11 * r11_2 + rdi_2) << 2))
            int32_t rax_17 = neg.d(int.d(zmm0_1.d) s>> 1)
            
            if (rax_17 s< 0)
                rcx_9 = 0
            else if (rax_17 s< rcx_9)
                rcx_9 = rax_17
            
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(rcx_9)).d f- zmm5_1.d
            zmm1_1 = (*(rsi_2 + (sx.q(rcx_9 * r11_2 + rdi_2) << 2)) f- zmm6.d) f* zmm0_1.d f+ zmm6.d
        
        *result_2 = zmm1_1
        r9_3 += zx.q(rsi_1) << 2
        result = result_1
        r8_4 = &r8_4[zx.q(rdi_1)]
        i += 1
        result_2 = result + (sx.q(rax_9) << 2)
        result_1 = result_2
    while (i s< *(arg2 + 0x40))

return result
