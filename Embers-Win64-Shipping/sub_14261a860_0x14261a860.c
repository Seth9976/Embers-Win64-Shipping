// 函数: sub_14261a860
// 地址: 0x14261a860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (*(arg1 + 4) s> 0)
    int64_t* rdi_1 = nullptr
    float zmm6[0x4] = 0x3f000000
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    float zmm10[0x4]
    float var_58_1[0x4] = zmm10
    float zmm12[0x4]
    float var_78_1[0x4] = zmm12
    float zmm13[0x4]
    float var_88_1[0x4] = zmm13
    int128_t zmm15
    int128_t var_a8_1 = zmm15
    
    do
        result = *(arg1 + 0x10)
        void* rdx_1 = *(rdi_1 + result)
        
        if (*(rdx_1 + 0x327) == 1)
            result = zx.q(*(rdx_1 + 0x325))
            
            if (result.b != 0)
                char r9_1 = (*(rdx_1 + 0x2ac)).b
                float arg_8
                float zmm0[0x4]
                float zmm1
                float zmm2[0x4]
                float zmm3[0x4]
                float zmm4[0x4]
                float zmm5[0x4]
                
                if (result.b != 6)
                    uint64_t r8_1 = zx.q(*(rdx_1 + 0x304))
                    
                    if ((1 & r9_1) == 0)
                        if (r8_1.d != 0)
                            zmm2 = *(rdx_1 + 0x2b0)
                            zmm5 = 0x3f800000
                            zmm2[0] = zmm2[0] f- *(rdx_1 + 0x22c)
                            zmm3 = *(rdx_1 + 0x2b8)
                            zmm3[0] = zmm3[0] f- *(rdx_1 + 0x234)
                            zmm2[0] = zmm2[0] * zmm2[0]
                            zmm5[0] = 1f / _mm_sqrt_ss(0, zmm3[0] * zmm3[0] + zmm2[0])[0]
                            zmm6 = zmm5
                            zmm5[0] = zmm5[0] * zmm3[0]
                            zmm6[0] = zmm6[0] * zmm2[0]
                        else
                            zmm6 = zx.o(0)
                            zmm5 = zx.o(0)
                    else if (r8_1.d != 0)
                        zmm0 = *(rdx_1 + 0x22c)
                        uint64_t rax = zx.q((r8_1 - 1).d)
                        zmm1 = *(rdx_1 + 0x234)
                        zmm7 = *(rdx_1 + 0x2b0)
                        zmm8 = *(rdx_1 + 0x2b8)
                        zmm7[0] = zmm7[0] - zmm0[0]
                        zmm8[0] = zmm8[0] - zmm1
                        
                        if (rax.d s> 1)
                            rax = 1
                        
                        result = zx.q((rax * 3).d)
                        int64_t rcx = sx.q(result.d)
                        zmm3 = *(rdx_1 + (rcx << 2) + 0x2b0)
                        zmm4 = *(rdx_1 + (rcx << 2) + 0x2b8)
                        zmm3[0] = zmm3[0] - zmm0[0]
                        zmm4[0] = zmm4[0] - zmm1
                        zmm7[0] = zmm7[0] * zmm7[0]
                        zmm1 = zmm8[0] * zmm8[0]
                        zmm4[0] = zmm4[0] * zmm4[0]
                        zmm1 = zmm1 + zmm7[0]
                        zmm3[0] = zmm3[0] * zmm3[0]
                        float temp0_2[0x4] = _mm_sqrt_ss(0, zmm1)
                        zmm4[0] = zmm4[0] + zmm3[0]
                        float temp0_3 = _mm_sqrt_ss(0, zmm4[0])
                        
                        if (not(temp0_3 <= 0.00100000005f))
                            zmm0 = 0x3f800000
                            zmm0[0] = 1f / temp0_3
                            zmm3[0] = zmm3[0] * zmm0[0]
                            zmm4[0] = zmm4[0] * zmm0[0]
                        
                        zmm3[0] = zmm3[0] * temp0_2[0]
                        zmm4[0] = zmm4[0] * temp0_2[0]
                        zmm5 = 0x3f800000
                        zmm3[0] = zmm3[0] * zmm6[0]
                        zmm4[0] = zmm4[0] * zmm6[0]
                        zmm7[0] = zmm7[0] - zmm3[0]
                        zmm8[0] = zmm8[0] - zmm4[0]
                        zmm7[0] = zmm7[0] * zmm7[0]
                        zmm5[0] = 1f / _mm_sqrt_ss(0, zmm8[0] * zmm8[0] + zmm7[0])[0]
                        zmm6 = zmm5
                        zmm5[0] = zmm5[0] * zmm8[0]
                        zmm6[0] = zmm6[0] * zmm7[0]
                    else
                        zmm6 = zx.o(0)
                        zmm5 = zx.o(0)
                    
                    zmm1 = 1f
                    
                    if (r9_1 s< 0)
                        zmm2 = *(rdx_1 + 0x280)
                        zmm2[0] = zmm2[0] + zmm2[0]
                        
                        if (r8_1.d != 0)
                            result = sx.q(r8_1.d)
                        
                        if (r8_1.d == 0 || (*(result + rdx_1 + 0x2ff) & 2) == 0)
                            zmm1 = zmm2[0]
                        else
                            result = zx.q((r8_1 * 3).d)
                            int64_t rcx_1 = sx.q(result.d)
                            zmm1 = *(rdx_1 + (rcx_1 << 2) + 0x2a4) f- *(rdx_1 + 0x22c)
                            zmm0 = *(rdx_1 + (rcx_1 << 2) + 0x2ac)
                            zmm0[0] = zmm0[0] f- *(rdx_1 + 0x234)
                            zmm0[0] = zmm0[0] * zmm0[0]
                            zmm0[0] = zmm0[0] + zmm1 * zmm1
                            zmm1 = _mm_min_ss(_mm_sqrt_ss(0, zmm0[0]), zmm2[0])
                        
                        zmm1 = zmm1 / zmm2[0]
                    
                    zmm0 = *(rdx_1 + 0x28c)
                    zmm10 = zx.o(0)
                    *(rdx_1 + 0x228) = zmm0[0]
                    zmm0[0] = zmm0[0] * zmm1
                    arg_8 = 0f
                    zmm6[0] = zmm6[0] * zmm0[0]
                    zmm5[0] = zmm5[0] * zmm0[0]
                else
                    zmm10 = *(rdx_1 + 0x310)
                    zmm6 = *(rdx_1 + 0x30c)
                    zmm5 = *(rdx_1 + 0x314)
                    zmm6[0] = zmm6[0] * zmm6[0]
                    zmm1 = zmm5[0]
                    zmm10[0] = zmm10[0] * zmm10[0]
                    zmm1 = zmm1 * zmm5[0]
                    zmm10[0] = zmm10[0] + zmm6[0]
                    arg_8 = zmm10[0]
                    zmm10[0] = zmm10[0] + zmm1
                    *(rdx_1 + 0x228) = _mm_sqrt_ss(0, zmm10[0])[0]
                
                float var_b4_1 = zmm10[0]
                
                if ((r9_1 & 4) != 0)
                    zmm2 = *(rdx_1 + 0x290)
                    zmm0 = 0x3f800000
                    result = zx.q(*(rdx_1 + 0x224))
                    zmm15 = zx.o(0)
                    float var_b8_1 = zmm2[0]
                    zmm12 = zx.o(0)
                    zmm13 = zx.o(0)
                    zmm0[0] = 1f / zmm2[0]
                    
                    if (result.d s> 0)
                        int64_t r10_1 = *(arg1 + 8)
                        void* r8_2 = rdx_1 + 0x1f4
                        uint64_t j_1 = zx.q(result.d)
                        uint64_t j
                        
                        do
                            zmm4 = *(rdx_1 + 0x22c)
                            zmm3 = *(rdx_1 + 0x234)
                            result = sx.q(*r8_2)
                            int64_t rcx_2 = result * 0x328
                            zmm4[0] = zmm4[0] f- *(rcx_2 + r10_1 + 0x22c)
                            zmm3[0] = zmm3[0] f- *(rcx_2 + r10_1 + 0x234)
                            zmm1 = zmm3[0]
                            zmm4[0] = zmm4[0] * zmm4[0]
                            zmm1 = zmm1 * zmm3[0] + zmm4[0]
                            
                            if (not(zmm1 < 9.99999975e-06f))
                                zmm2[0] = zmm2[0] * zmm2[0]
                                
                                if (not(zmm1 > zmm2[0]))
                                    zmm7 = 0x3f800000
                                    float temp0_8[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm1)
                                    zmm1 = zmm1 * zmm0[0]
                                    zmm4[0] = zmm4[0] * zmm6[0]
                                    zmm7[0] = 1f - zmm1 * zmm0[0]
                                    zmm1 = zmm3[0] * zmm5[0]
                                    zmm7[0] = zmm7[0] f* *(rdx_1 + 0x298)
                                    
                                    if (not(zmm1 + zmm4[0] f>= *(arg1 + 0x2b0c)))
                                        zmm3[0] = zmm3[0] * zmm6[0]
                                        zmm9 = zmm6 ^ data_142d3f780
                                        zmm1 = zmm9[0]
                                        zmm5[0] = zmm5[0] * zmm5[0]
                                        zmm1 = zmm1 * zmm9[0]
                                        zmm2 = 0x3f800000
                                        zmm4[0] = zmm4[0] * zmm5[0]
                                        zmm1 = zmm1 + zmm5[0]
                                        zmm4[0] = zmm4[0] - zmm3[0]
                                        zmm3 = temp0_8
                                        float temp0_9[0x4] = _mm_sqrt_ss(0, zmm1)
                                        zmm1 = zmm5[0]
                                        bool cond:2_1 = zmm4[0] > 0f
                                        zmm2[0] = 1f / temp0_9[0]
                                        zmm1 = zmm1 * zmm2[0]
                                        zmm9[0] = zmm9[0] * zmm2[0]
                                        
                                        if (not(cond:2_1))
                                            zmm3 ^= data_142d3f780
                                        
                                        zmm2 = var_b8_1
                                        zmm4 = zmm3
                                        zmm4[0] = zmm4[0] * zmm1
                                        zmm3[0] = zmm3[0] * zmm9[0]
                                    
                                    zmm7[0] = zmm7[0] / temp0_8[0]
                                    zmm15.d = zmm15.d f+ 1f
                                    zmm4[0] = zmm4[0] * zmm7[0]
                                    zmm3[0] = zmm3[0] * zmm7[0]
                                    zmm12[0] = zmm12[0] + zmm4[0]
                                    zmm13[0] = zmm13[0] + zmm3[0]
                            
                            r8_2 += 8
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        zmm10 = arg_8
                        
                        if (not(zmm15.d f<= 9.99999975e-05f))
                            zmm3 = var_b4_1
                            zmm0 = 0x3f800000
                            zmm0[0] = 1f f/ zmm15.d
                            zmm10 = zmm3
                            zmm12[0] = zmm12[0] * zmm0[0]
                            zmm13[0] = zmm13[0] * zmm0[0]
                            zmm3[0] = zmm3[0] * zmm3[0]
                            zmm12[0] = zmm12[0] + zmm6[0]
                            zmm13[0] = zmm13[0] + zmm5[0]
                            zmm6 = zmm12
                            zmm6[0] = zmm6[0] * zmm6[0]
                            zmm5 = zmm13
                            zmm1 = zmm5[0] * zmm5[0]
                            zmm3[0] = zmm3[0] + zmm6[0]
                            zmm0 = *(rdx_1 + 0x228)
                            zmm0[0] = zmm0[0] * zmm0[0]
                            zmm3[0] = zmm3[0] + zmm1
                            
                            if (not(zmm3[0] <= zmm0[0]))
                                zmm0[0] = zmm0[0] / zmm3[0]
                                zmm6[0] = zmm6[0] * zmm0[0]
                                zmm10[0] = zmm10[0] * zmm0[0]
                                zmm5[0] = zmm5[0] * zmm0[0]
                
                *(rdx_1 + 0x244) = zmm6[0]
                zmm6 = 0x3f000000
                *(rdx_1 + 0x248) = zmm10[0]
                *(rdx_1 + 0x24c) = zmm5[0]
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 4))

return result
