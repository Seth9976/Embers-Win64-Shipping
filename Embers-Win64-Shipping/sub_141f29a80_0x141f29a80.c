// 函数: sub_141f29a80
// 地址: 0x141f29a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t* rdi = *(arg1 + 0x20)
uint64_t result = &rdi[sx.q(*(arg1 + 0x28))]
uint64_t r14_1 = sx.q(*(arg1 + 0x28)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    int128_t zmm8 = zx.o(0)
    float zmm9[0x4] = 0x3f800000
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    uint128_t zmm7
    uint128_t var_38_1 = zmm7
    
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            void* rcx = *(rbx_1 + 0x1f0)
            
            if (rcx != 0)
                int64_t zmm0_1
                zmm0_1, result = sub_142004530(rcx)
                zmm7 = *(rbx_1 + 0x2c8)
                float zmm2[0x4] = zmm7
                zmm2[0] = zmm2[0] f/ zmm0_1.d
                int32_t rcx_1 = int.d(zmm2[0])
                
                if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== zmm2[0]))
                    result = zx.q(_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q))) & 1
                    zmm2 = _mm_cvtepi32_ps(zx.o(rcx_1 - result.d))
                
                zmm6 = *(rbx_1 + 0x1fc)
                bool cond:0_1 = zmm6[0] f<= zmm8.d
                zmm2[0] = zmm2[0] f* zmm0_1.d
                zmm7.d = zmm7.d f- zmm2[0]
                
                if (not(cond:0_1))
                    void* rcx_3
                    
                    if ((*(rbx_1 + 0x1f8) & 0x10) == 0)
                        void* rcx_4 = *(rbx_1 + 0x200)
                        
                        if (rcx_4 != 0)
                            rcx_3 = rcx_4 + 0x28
                            goto label_141f29b82
                    else
                        rcx_3 = rbx_1 + 0x208
                    label_141f29b82:
                        
                        if (rcx_3 != 0)
                            int32_t rax_2 = arg2[1].d
                            int64_t var_68 = *arg2
                            int32_t var_60_1 = rax_2
                            int32_t zmm0_2
                            result, zmm0_2, zmm6, zmm7, zmm8, zmm9 =
                                sub_141e5be90(rcx_3, rbx_1 + 0x1c0, &var_68, zmm9)
                            zmm6[0] = zmm6[0] f* zmm0_2
                    
                    if (not(zmm6[0] f<= zmm8.d))
                        result, zmm8, zmm9 = sub_142007800(*(rbx_1 + 0x1f0), zmm7, arg3)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return result
