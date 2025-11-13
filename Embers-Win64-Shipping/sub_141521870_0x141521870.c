// 函数: sub_141521870
// 地址: 0x141521870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t i = 0

if (arg2[1].d s> 0)
    int128_t* rbx_1 = nullptr
    
    do
        int64_t rdi_1 = *arg2
        
        if (_finite(_mm_cvtps_pd((*(rbx_1 + rdi_1))[0])[0]) == 0)
            rsi += 1
        else if (_finite(_mm_cvtps_pd((*(rbx_1 + rdi_1 + 4))[0])[0]) == 0)
            rsi += 1
        else if (_finite(_mm_cvtps_pd((*(rbx_1 + rdi_1 + 8))[0])[0]) == 0)
            rsi += 1
        else
            uint128_t zmm2 = *(rbx_1 + rdi_1 + 4)
            uint128_t zmm1 = *(rbx_1 + rdi_1)
            int128_t zmm3 = _mm_cvtps_pd((*(rbx_1 + rdi_1 + 8)).q)
            zmm2 = _mm_cvtps_pd(zmm2.q)
            double var_58
            double var_50
            double var_48[0x2]
            void arg_10
            char rax_4
            int32_t zmm6_1
            rax_4, zmm6_1 = sub_141528880(arg1, _mm_cvtps_pd(zmm1.q), zmm2, zmm3, &var_58, &var_50, 
                &var_48, &arg_10)
            double zmm0[0x2]
            
            if (rax_4 != 0)
                zmm1 = *(rbx_1 + rdi_1 + 4)
                zmm0 = _mm_cvtps_pd((*(rbx_1 + rdi_1))[0])
                zmm1 = _mm_cvtps_pd(zmm1.q)
                zmm0[0] = zmm0[0] - var_58
                zmm1.q = zmm1.q f- var_50
                zmm2 = _mm_cvtpd_ps(zmm0)
                zmm0 = *(rbx_1 + rdi_1 + 8)
                zmm3 = _mm_cvtpd_ps(zmm1)
                zmm0 = _mm_cvtps_pd(zmm0[0])
                zmm3.d = zmm3.d f* zmm3.d
                zmm0[0] = zmm0[0] - var_48[0]
                zmm2.d = zmm2.d f* zmm2.d
                zmm1 = _mm_cvtpd_ps(zmm0)
                zmm3.d = zmm3.d f+ zmm2.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm3.d = zmm3.d f+ zmm1.d
            
            if (rax_4 != 0 && zmm3.d f< zmm6_1)
                rsi += 1
            else
                zmm3 = *(rbx_1 + rdi_1 + 4)
                zmm2 = *(rbx_1 + rdi_1)
                zmm0 = _mm_cvtps_pd((*(rbx_1 + rdi_1 + 8))[0])
                zmm3 = _mm_cvtps_pd(zmm3.q)
                int64_t var_78_2 = zmm0.q
                sub_141528c70(arg1, i + arg3, _mm_cvtps_pd(zmm2.q).q, zmm3.q)
        
        i += 1
        rbx_1 += 0xc
    while (i s< arg2[1].d)

return zx.q(rsi)
