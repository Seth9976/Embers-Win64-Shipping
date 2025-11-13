// 函数: sub_142b4ba70
// 地址: 0x142b4ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< *(arg1 + 0x58) || arg2 s> *(arg1 + 0x5c))
    int64_t rax
    rax.b = 0
    return rax

int32_t rax_1 = sub_1429b9e30(*(arg1 + 0x50))
void* rcx_1 = *(arg1 + 0x50)
uint128_t zmm6

if (rax_1 != 0)
    int64_t r14
    r14.b = 1
    
    if (rax_1 != 1)
        int32_t rax_12 = sub_1408e52c0(rcx_1)
        int32_t rax_13 = sub_1408e52d0(*(arg1 + 0x50))
        int32_t rbx_3 = rax_13
        
        if (rax_1 == 3)
            r14.b = 0
            
            if (rax_12 == 1 && rax_13 == 0x1d && sub_142b4bfd0(arg2) == 0)
                rbx_3 = 0x1c
        
        zmm6 = sub_142acc900(arg2, rax_12, rbx_3)
    else
        int32_t rax_4 = sub_141c39d90(rcx_1)
        void* rcx_4 = *(arg1 + 0x50)
        
        if (rax_4 s<= 0)
            r14.b = 0
            char rax_9 = sub_142ac5cd0(arg2, sub_1408e52c0(rcx_4))
            zmm6.q = sub_142acc900(arg2, sub_1408e52c0(*(arg1 + 0x50)), sx.d(rax_9)).q
                f+ _mm_cvtepi32_pd(zx.q((rax_4 + 1) * 7)).q
        else
            zmm6.q = sub_142acc900(arg2, sub_1408e52c0(rcx_4), 1).q
                f+ _mm_cvtepi32_pd(zx.q(rax_4 * 7 - 7)).q
    
    int32_t rax_15 = sub_142acc5b0(zmm6)
    int32_t rax_17 = sub_1405f8ab0(*(arg1 + 0x50)) - rax_15
    
    if (r14.b != 0)
        int32_t rcx_14 = rax_17 + 7
        
        if (rax_17 s>= 0)
            rcx_14 = rax_17
        
        rax_17 = rcx_14
    else if (rax_17 s> 0)
        rax_17 -= 7
    
    zmm6.q = zmm6.q f+ _mm_cvtepi32_pd(zx.q(rax_17)).q
else
    int32_t rax_2 = sub_1408e52d0(rcx_1)
    zmm6 = sub_142acc900(arg2, sub_1408e52c0(*(arg1 + 0x50)), rax_2)

zmm6.q = zmm6.q f* 86400000.0
uint128_t zmm0
zmm0.q = _mm_cvtepi32_pd(zx.q(sub_140a47570(*(arg1 + 0x50)))).q f+ zmm6.q
*arg5 = zmm0.q

if (sub_1405f75a0(*(arg1 + 0x50)) != 2)
    *arg5 = *arg5 f- _mm_cvtepi32_pd(zx.q(arg3)).q

if (sub_1405f75a0(*(arg1 + 0x50)) == 0)
    *arg5 = *arg5 f- _mm_cvtepi32_pd(zx.q(arg4)).q

int32_t rax_20
rax_20.b = 1
return rax_20
