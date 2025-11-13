// 函数: sub_142c303f0
// 地址: 0x142c303f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *(*arg2 + 0xb4)
uint128_t zmm2 = *(arg2[1] + 0x30)

if (not(0f f< zmm2.d))
    void* rax_1
    rax_1.b = 0
    return rax_1

void* rbx = arg2[3]
int32_t rdi = 0
double rax_14

if ((*(rbx + 0x38) & 0xfffffffe) != 4)
    uint16_t r8_3 = zx.w(*(arg1 + 8))
    uint64_t r9_2 = zx.q(*(arg1 + 9))
    char* rcx_14
    
    if (0 != r8_3 * 0x100 + r9_2.w)
        rcx_14 = (zx.q(r8_3.b) << 8) + arg1 + r9_2
    else
        rcx_14 = &data_14369a5d0
    
    int32_t rax_16 = sub_142c31a10(rcx_14, arg1, zmm2)
    void* rcx_18 = arg2[1]
    int32_t r14_2 = *(rcx_18 + 0x24)
    void* rcx_19 = *(rcx_18 + 0x18)
    uint32_t r8_4 = *(rcx_19 + 0x2c)
    
    if (r8_4 == 0)
        r8_4 = sub_142bf7870(rcx_19)
    
    int32_t temp0_6
    int32_t temp1_1
    temp0_6:temp1_1 = sx.q(rax_16)
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(r14_2))
    uint128_t zmm2_2
    zmm2_2.d = _mm_cvtepi32_ps(zx.o((temp1_1 - temp0_6) s>> 1)).d f* zmm0_1.d
    zmm2_2.d = zmm2_2.d f/ float.s(zx.q(r8_4))
    zmm0_1 = _mm_cvtps_pd(zmm2_2.q)
    round(zmm0_1.q)
    void* rax_23 = arg2[1]
    int32_t r14_3 = int.d(zmm0_1.q)
    void* rcx_20 = *(rax_23 + 0x18)
    int32_t rsi_2 = *(rax_23 + 0x24)
    uint32_t rax_24 = *(rcx_20 + 0x2c)
    
    if (rax_24 == 0)
        rax_24 = sub_142bf7870(rcx_20)
    
    zmm2_2.d = _mm_cvtepi32_ps(zx.o(rsi_2)).d f* _mm_cvtepi32_ps(zx.o(rax_16)).d
    zmm2_2.d = zmm2_2.d f/ float.s(zx.q(rax_24))
    zmm0_1 = _mm_cvtps_pd(zmm2_2.q)
    round(zmm0_1.q)
    int32_t r10_1 = *(rbx + 0x60)
    
    if (r10_1 != 0)
        int64_t r8_5 = *(rbx + 0x70)
        uint64_t rdx_4 = 0
        
        do
            rdx_4 = zx.q(rdx_4.d + 1)
            
            if (rdx_4.d u>= r10_1)
                break
            
            rax_14.b = *(r8_5 + rdx_4 * 0x14 + 0x10) u>> 7
        while ((rax_14.b & 1) != 0)
        
        if (r10_1 != 0)
            do
                int64_t rcx_22 = zx.q(rdi) i* 5
                
                if ((*(r8_5 + (rcx_22 << 2) + 4) & r15) != 0)
                    int64_t rax_26 = *(rbx + 0x80)
                    *(rax_26 + (rcx_22 << 2) + 4) += int.d(zmm0_1.q)
                    rax_14 = *(rbx + 0x80)
                    *(rax_14 i+ (rcx_22 << 2) + 0xc) += r14_3
                
                r8_5 = *(rbx + 0x70)
                rdi = rdx_4.d
                
                do
                    rdx_4 = zx.q(rdx_4.d + 1)
                    
                    if (rdx_4.d u>= *(rbx + 0x60))
                        break
                    
                    rax_14.b = *(r8_5 + rdx_4 * 0x14 + 0x10) u>> 7
                while ((rax_14.b & 1) != 0)
            while (rdi u< r10_1)
else
    uint16_t r8 = zx.w(*(arg1 + 6))
    uint64_t r9 = zx.q(*(arg1 + 7))
    int128_t* const rcx_2
    
    if (0 != r8 * 0x100 + r9.w)
        rcx_2 = (zx.q(r8.b) << 8) + arg1 + r9
    else
        rcx_2 = &data_14369a5d0
    
    int32_t rax_4 = sub_142c31a10(rcx_2, arg1, zmm2)
    void* rcx_6 = arg2[1]
    int32_t r14 = *(rcx_6 + 0x20)
    void* rcx_7 = *(rcx_6 + 0x18)
    uint32_t r8_1 = *(rcx_7 + 0x2c)
    
    if (r8_1 == 0)
        r8_1 = sub_142bf7870(rcx_7)
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_4)
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(r14))
    uint128_t zmm2_1
    zmm2_1.d = _mm_cvtepi32_ps(zx.o((temp3_1 - temp2_1) s>> 1)).d f* zmm0.d
    zmm2_1.d = zmm2_1.d f/ float.s(zx.q(r8_1))
    zmm0 = _mm_cvtps_pd(zmm2_1.q)
    round(zmm0.q)
    void* rax_11 = arg2[1]
    int32_t r14_1 = int.d(zmm0.q)
    void* rcx_8 = *(rax_11 + 0x18)
    int32_t rsi_1 = *(rax_11 + 0x20)
    uint32_t rax_12 = *(rcx_8 + 0x2c)
    
    if (rax_12 == 0)
        rax_12 = sub_142bf7870(rcx_8)
    
    zmm2_1.d = _mm_cvtepi32_ps(zx.o(rsi_1)).d f* _mm_cvtepi32_ps(zx.o(rax_4)).d
    zmm2_1.d = zmm2_1.d f/ float.s(zx.q(rax_12))
    zmm0 = _mm_cvtps_pd(zmm2_1.q)
    round(zmm0.q)
    int32_t r10 = *(rbx + 0x60)
    
    if (r10 != 0)
        int64_t r8_2 = *(rbx + 0x70)
        uint64_t rdx_2 = 0
        
        do
            rdx_2 = zx.q(rdx_2.d + 1)
            
            if (rdx_2.d u>= r10)
                break
            
            rax_14.b = *(r8_2 + rdx_2 * 0x14 + 0x10) u>> 7
        while ((rax_14.b & 1) != 0)
        
        if (r10 != 0)
            do
                int64_t rcx_10 = zx.q(rdi) i* 5
                
                if ((*(r8_2 + (rcx_10 << 2) + 4) & r15) != 0)
                    int64_t rax_15 = *(rbx + 0x80)
                    *(rax_15 + (rcx_10 << 2)) += int.d(zmm0.q)
                    rax_14 = *(rbx + 0x80)
                    *(rax_14 i+ (rcx_10 << 2) + 8) += r14_1
                
                r8_2 = *(rbx + 0x70)
                rdi = rdx_2.d
                
                do
                    rdx_2 = zx.q(rdx_2.d + 1)
                    
                    if (rdx_2.d u>= *(rbx + 0x60))
                        break
                    
                    rax_14.b = *(r8_2 + rdx_2 * 0x14 + 0x10) u>> 7
                while ((rax_14.b & 1) != 0)
            while (rdi u< r10)

rax_14.b = 1
return rax_14
