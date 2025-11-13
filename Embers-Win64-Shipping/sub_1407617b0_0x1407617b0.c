// 函数: sub_1407617b0
// 地址: 0x1407617b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t zmm7
zmm6, zmm7 = sub_1407799d0(*(arg1 + 0x28))
int16_t* rax = *(arg2 + 0x10)
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t rbp_1 = (r8 u>> 0xf).b
int32_t r8_1 = r8 & 0x7fff
int128_t* r11_1

if ((not.b(rbp_1) & 1) == 0)
    r11_1 = zx.q(*(arg2 + 0x80) * r8_1) + *(arg2 + 0x70)
else
    int32_t* r9_1 = *(arg2 + 0x20)
    int32_t rdx = 0
    int32_t rax_2 = *r9_1
    
    if (r8_1 s>= rax_2)
        int64_t rcx_1 = 0
        
        do
            r8_1 -= rax_2
            rcx_1 += 1
            rax_2 = r9_1[rcx_1]
            rdx += 1
        while (r8_1 s>= rax_2)
    
    r11_1 = sx.q(r8_1) + *(*(arg2 + 0x18) + (sx.q(rdx) << 3))

uint32_t rax_4 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rdi_1 = (rax_4 u>> 0xf).b
int32_t rdx_2 = rax_4 & 0x7fff
int32_t* r10_1

if ((not.b(rdi_1) & 1) == 0)
    r10_1 = zx.q(*(arg2 + 0x80) * rdx_2) + *(arg2 + 0x70)
else
    int32_t* r9_2 = *(arg2 + 0x20)
    int32_t r8_2 = 0
    int32_t rax_6 = *r9_2
    
    if (rdx_2 s>= rax_6)
        int64_t rcx_3 = 0
        
        do
            rdx_2 -= rax_6
            rcx_3 += 1
            rax_6 = r9_2[rcx_3]
            r8_2 += 1
        while (rdx_2 s>= rax_6)
    
    r10_1 = sx.q(rdx_2) + *(*(arg2 + 0x18) + (sx.q(r8_2) << 3))

uint32_t rdx_3 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t rdx_4 = rdx_3 & 0x7fff
int32_t var_48 = rdx_4
int32_t* result
result.b = rdx_4 != 0x7fff
int32_t var_44 = result.d
int32_t* result_2
void var_40

if (rdx_4 == 0x7fff)
    result_2 = &var_40
else
    result_2 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)
int32_t i = 0
int32_t* result_1 = result_2

if (*(arg2 + 0x40) s> 0)
    void* r14_1 = *(arg1 + 0x28)
    int128_t var_18_1 = zmm6
    int128_t var_28_1 = zmm7
    
    do
        int64_t rax_9 = sx.q(*r10_1)
        uint128_t zmm0_1 = *r11_1
        uint128_t zmm2_1
        
        if (rax_9.d s< *(r14_1 + 0x220))
            int64_t* rcx_7 = (rax_9 << 4) + *(r14_1 + 0x218)
            int32_t rax_10 = rcx_7[1].d
            int32_t rdx_5 = rax_10 - 1
            
            if (rdx_5 s>= 0)
                if (not(zmm0_1.d f>= 0f))
                    zmm0_1 = zx.o(0)
                else if (not(zmm0_1.d f< 1f))
                    zmm0_1 = 0x3f800000
                
                uint128_t zmm4_1
                zmm4_1.d = _mm_cvtepi32_ps(zx.o(rax_10)).d f* zmm0_1.d
                zmm2_1.d = zmm4_1.d f+ zmm4_1.d
                zmm0_1.d = zmm2_1.d f- 0.5f
                int32_t rax_12 = int.d(zmm0_1.d) s>> 1
                int32_t r8_3
                
                if (rax_12 s>= 0)
                    r8_3 = rdx_5
                    
                    if (rax_12 s< rdx_5)
                        r8_3 = rax_12
                else
                    r8_3 = 0
                
                zmm0_1.d = -0.5f f- zmm2_1.d
                int32_t rax_15 = neg.d(int.d(zmm0_1.d) s>> 1)
                
                if (rax_15 s< 0)
                    rdx_5 = 0
                else if (rax_15 s< rdx_5)
                    rdx_5 = rax_15
                
                int64_t rcx_8 = *rcx_7
                zmm0_1 = _mm_cvtepi32_ps(zx.o(r8_3))
                int32_t zmm1_1 = *(rcx_8 + (sx.q(r8_3) << 2))
                zmm4_1.d = zmm4_1.d f- zmm0_1.d
                zmm2_1.d = (*(rcx_8 + (sx.q(rdx_5) << 2))).d f- zmm1_1
                zmm2_1.d = zmm2_1.d f* zmm4_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1
            else
                zmm2_1 = zx.o(0)
        else
            zmm2_1 = zx.o(0)
        
        *result_2 = zmm2_1.d
        r11_1 += zx.q(rbp_1) << 2
        result = result_1
        r10_1 = &r10_1[zx.q(rdi_1)]
        i += 1
        result_2 = &result[sx.q(var_44)]
        result_1 = result_2
    while (i s< *(arg2 + 0x40))

return result
