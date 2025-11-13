// 函数: sub_141baabe0
// 地址: 0x141baabe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t* i = *(arg1 + 0x178)
    int64_t arg_10 = arg2
    
    for (; i != &i[sx.q(*(arg1 + 0x180))]; i = &i[1])
        void* rax_2 = *i
        
        if (*(rax_2 + 0x408) == arg2)
            if (i == 0 || rax_2 == 0)
                break
            
            int64_t r8_1 = *(rax_2 + 0x738)
            double zmm2[0x2] = zx.o(0)
            int64_t rax_3 = *(rax_2 + 0x744)
            uint32_t rdx_1 = (r8_1 u>> 0x20).d
            uint128_t zmm0
            zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* rax_3:4.d
            uint64_t temp0_1 = _mm_cvtepi32_pd(zx.q(r8_1.d))
            zmm2[0] = float.d(sx.q(rdx_1) * sx.q(rax_3.d))
            zmm0 = _mm_cvtps_pd(zmm0.q)
            zmm2[0] = zmm2[0] f+ zmm0.q
            zmm2[0] = zmm2[0] f/ temp0_1
            return _mm_cvtpd_ps(zmm2)

return zx.o(0)
