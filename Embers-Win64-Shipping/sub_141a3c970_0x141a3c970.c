// 函数: sub_141a3c970
// 地址: 0x141a3c970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1
int32_t i = 0
int32_t r9 = arg2.d

if (result[1].d s> 0)
    uint128_t zmm5 = 0x3fefffffdfc9a9ad
    int64_t r11_1 = 0
    uint32_t rbp_2 = (arg2 u>> 0x20).d
    int32_t arg_c = 0
    uint32_t r15_2 = (arg3 u>> 0x20).d
    
    do
        int32_t* rsi_1 = *result
        int64_t rdi_1 = sx.q(*(rsi_1 + r11_1))
        int64_t rax = rdi_1.d.q
        int32_t rdx_1
        uint128_t zmm0
        
        if (r9 != arg3.d || rbp_2 != r15_2)
            int64_t r10_2 = sx.q(rbp_2) * sx.q(arg3.d)
            double zmm1 = _mm_cvtps_pd(rax:4.d)
            int64_t rcx_2 = sx.q(r15_2) * sx.q(r9)
            zmm0.q = float.d(rcx_2)
            int64_t temp0_3 = divs.dp.q(sx.o(rdi_1 * r10_2), rcx_2)
            double zmm3 = 0x3ff0000000000000 f/ zmm0.q
            double zmm2 = float.d(r10_2)
            uint128_t zmm4
            zmm4.q = _mm_cvtepi32_pd(zx.q(rdi_1.d)).q f* zmm2
            zmm0.q = float.d(temp0_3)
            zmm4.q = zmm4.q f* zmm3
            zmm4.q = zmm4.q f- zmm0.q
            zmm4.q = zmm4.q f+ zmm1 * zmm2 * zmm3
            int64_t rcx_3 = int.q(zmm4.q)
            zmm0 = zmm4
            
            if (rcx_3 != -0x8000000000000000 && not(float.d(rcx_3) f== zmm4.q))
                zmm0.q = float.d(rcx_3 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))
            
            zmm4.q = zmm4.q f- zmm0.q
            rdx_1 = temp0_3.d + (int.q(zmm0.q)).d
            
            if (not(zmm4.q f<= 0.0) && not(zmm4.q f<= zmm5.q))
                zmm4 = zmm5
            
            zmm0.d = fconvert.s(zmm4.q)
            
            if (not(zmm0.d f< 0f))
                if (not(zmm0.d f< 0.99999994f))
                    zmm0 = 0x3f7fffff
                
                goto label_141a3cb20
        else
            zmm0 = rax:4.d
            rdx_1 = rax.d
        label_141a3cb20:
            
            if (not(zmm0.d f< 0.5f))
                rdx_1 += 1
        *(rsi_1 + r11_1) = rdx_1
        i += 1
        result = *arg1
        r11_1 += 4
    while (i s< result[1].d)

return result
