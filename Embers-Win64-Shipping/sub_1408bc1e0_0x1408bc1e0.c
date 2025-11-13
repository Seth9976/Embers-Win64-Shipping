// 函数: sub_1408bc1e0
// 地址: 0x1408bc1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int128_t zmm6
int128_t zmm7
result, zmm6, zmm7 = sub_1408c0320(arg1)

if (result.b != 0 || *(arg1 + 0x1c8) s>= 4)
    *(arg1 + 8) = 0
    return result

int32_t i = 0

if (*(arg1 + 0xc8) s<= 0)
    *(arg1 + 8) = 0
    return result

int64_t* rdi = nullptr
int128_t var_48 = zmm7
zmm7 = zx.o(0)
int128_t zmm8 = 0xbf800000
uint128_t zmm9 = 0x3e7ad7f29abcaf49
int128_t var_38 = zmm6

do
    uint128_t zmm1_1 = *(arg1 + 0xd0)
    
    if (zmm1_1.d f== zmm7.d)
        break
    
    int64_t rsi_1 = *(arg1 + 0xc0)
    
    if (not(*(arg1 + 0xc) f/ zmm1_1.d f< *(rdi + rsi_1 + 0x34)))
        void* r8_1 = *(rdi + rsi_1)
        
        if (r8_1 != 0)
            int32_t rax = *(r8_1 + 0xd638)
            int64_t rcx = sx.q(data_143982b28)
            void* rbp_1
            
            if (rax s<= 0 || rcx.d s< 0 || rcx.d s>= rax)
            label_1408bc2e2:
                rbp_1 = r8_1
            else
                int64_t rdx_1 = *(r8_1 + 0xd630)
                int64_t rax_1 = rcx
                rbp_1 = *(rdx_1 + (rcx << 3))
                
                if (rbp_1 == 0)
                    while (*(rdx_1 + (rax_1 << 3)) == 0)
                        rcx = zx.q(rcx.d - 1)
                        int64_t temp0_1 = rax_1
                        rax_1 -= 1
                        
                        if (temp0_1 - 1 s< 0)
                            goto label_1408bc2e2
                    
                    rbp_1 = *(rdx_1 + (sx.q(rcx.d) << 3))
            
            if (*(rdi + rsi_1 + 0x40) != 0)
            label_1408bc323:
                void arg_10
                int64_t* rax_4 = sub_140b21590(&arg_10)
                uint128_t zmm1_2 = *(rbp_1 + 0x38)
                
                if (not(zmm1_2.d f== zmm8.d))
                    double zmm0_2[0x2] = zx.o(0)
                    result = *rax_4 - *(rdi + rsi_1 + 8)
                    zmm0_2[0] = float.d(result)
                    zmm0_2[0] = zmm0_2[0] f* zmm9.q
                    
                    if (_mm_cvtpd_ps(zmm0_2)[0].d f>= zmm1_2.d)
                        break
            else
                void arg_8
                *(rdi + rsi_1 + 8) = *sub_140b21590(&arg_8)
                *(rdi + *(arg1 + 0xc0) + 0x40) = 1
                rsi_1 = *(arg1 + 0xc0)
                
                if (*(rdi + rsi_1 + 0x40) != 0)
                    goto label_1408bc323
            
            sub_1408bf070(rbp_1 + 0x40, *(arg1 + 0x10), *(arg1 + 0xc), *(arg1 + 0x54), 
                (*(arg1 + 0x170))[0].d)
            int32_t rax_7 = sub_1408be720(sx.q(i) * 0x50 + *(arg1 + 0xc0))
            float zmm3_1[0x4] = *(arg1 + 0x54)
            uint128_t zmm2_1 = *(arg1 + 0xc)
            _mm_cvtepi32_ps(zx.o(rax_7))
            float zmm0_1
            zmm0_1, zmm6, zmm7, zmm8, zmm9 =
                sub_1408bf070(rbp_1 + 0x828, *(arg1 + 0x10), zmm2_1, zmm3_1, (*(arg1 + 0x16c)).d)
            int64_t rdx_2 = *(arg1 + 0xc0)
            zmm0_1 = zmm0_1 f* *(arg1 + 8) f+ *(rdi + rdx_2 + 0x44)
            int32_t rcx_9 = int.d(_mm_min_ss(_mm_cvtepi32_ps(zx.o(int.d(zmm0_1))).d, zmm6.d).d)
            *(rdi + rdx_2 + 0x44) = zmm0_1 f- _mm_cvtepi32_ps(zx.o(rcx_9)).d
            result = *(arg1 + 0xc0)
            *(rdi + result + 0x48) = rcx_9
    
    i += 1
    rdi = &rdi[0xa]
while (i s< *(arg1 + 0xc8))

*(arg1 + 8) = 0
return result
