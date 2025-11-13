// 函数: sub_141a3cb80
// 地址: 0x141a3cb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2.d
uint128_t zmm0 = _mm_cvtepi32_pd(zx.q(arg3.d))
int32_t i = 0
uint64_t result = arg2 u>> 0x20
uint128_t zmm2
zmm2.q = _mm_cvtepi32_pd(zx.q((arg3 u>> 0x20).d)).q f/ zmm0.q
zmm2.q = zmm2.q f* _mm_cvtepi32_pd(zx.q(r9))
zmm2.q = zmm2.q f/ _mm_cvtepi32_pd(zx.q(result.d)).q
uint128_t zmm6 = _mm_cvtpd_ps(zmm2)

if (*(arg1 + 0x18) s> 0)
    uint128_t zmm5 = 0x3fefffffdfc9a9ad
    void* rbx_1 = nullptr
    uint32_t r15_2 = (arg2 u>> 0x20).d
    int32_t arg_c = 0
    int64_t r11_1 = 0
    uint32_t r12_2 = (arg3 u>> 0x20).d
    
    do
        int64_t r14_1 = *(arg1 + 0x10)
        int64_t rsi_1 = sx.q(*(rbx_1 + r14_1))
        int64_t rax_3 = rsi_1.d.q
        int32_t rdx_1
        double zmm1
        
        if (r9 != arg3.d || r15_2 != r12_2)
            int64_t r10_2 = sx.q(r15_2) * sx.q(arg3.d)
            zmm1 = _mm_cvtps_pd(rax_3:4.d)
            int64_t rcx_2 = sx.q(r12_2) * sx.q(r9)
            zmm0.q = float.d(rcx_2)
            int64_t temp0_7 = divs.dp.q(sx.o(rsi_1 * r10_2), rcx_2)
            double zmm3 = 0x3ff0000000000000 f/ zmm0.q
            zmm2.q = float.d(r10_2)
            uint128_t zmm4
            zmm4.q = _mm_cvtepi32_pd(zx.q(rsi_1.d)).q f* zmm2.q
            zmm0.q = float.d(temp0_7)
            zmm4.q = zmm4.q f* zmm3
            zmm4.q = zmm4.q f- zmm0.q
            zmm4.q = zmm4.q f+ zmm1 f* zmm2.q * zmm3
            int64_t rcx_3 = int.q(zmm4.q)
            zmm0 = zmm4
            
            if (rcx_3 != -0x8000000000000000 && not(float.d(rcx_3) f== zmm4.q))
                zmm0.q = float.d(rcx_3 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))
            
            zmm4.q = zmm4.q f- zmm0.q
            rdx_1 = temp0_7.d + (int.q(zmm0.q)).d
            
            if (not(zmm4.q f<= 0.0) && not(zmm4.q f<= zmm5.q))
                zmm4 = zmm5
            
            zmm0.d = fconvert.s(zmm4.q)
            
            if (not(zmm0.d f< 0f))
                if (not(zmm0.d f< 0.99999994f))
                    zmm0 = 0x3f7fffff
                
                goto label_141a3cd78
        else
            zmm0 = rax_3:4.d
            rdx_1 = rax_3.d
        label_141a3cd78:
            
            if (not(zmm0.d f< 0.5f))
                rdx_1 += 1
        
        *(rbx_1 + r14_1) = rdx_1
        result = *(arg1 + 0x20)
        i += 1
        rbx_1 += 4
        zmm0.d = zmm6.d f* *(r11_1 + result + 4)
        zmm1.d = zmm6.q.d f* *(r11_1 + result + 8)
        *(r11_1 + result + 4) = zmm0.d
        *(r11_1 + result + 8) = zmm1.d
        r11_1 += 0x1c
    while (i s< *(arg1 + 0x18))

return result
