// 函数: sub_142832370
// 地址: 0x142832370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t rcx = -1
int32_t i_2 = *(arg1 + 8)

if (i_2 s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t* rdx = *(arg1 + 0x68)
        int32_t* rbx_1 = *(r14_1 + rdx)
        
        if (rbx_1[1].b == 1 && rbx_1[0x3a1] s< 5)
            uint64_t r8 = zx.q(*(rbx_1 + 5))
            
            if (r8.d == arg2 && zx.d(*(rbx_1 + 6)) == arg3)
                if (*(arg1 + 0xe) != 0)
                    int32_t r10_1 = 0
                    
                    if (i_2 s> 0)
                        uint64_t i_1 = zx.q(i_2)
                        uint64_t i
                        
                        do
                            void* rax = *rdx
                            
                            if (*(rax + 4) != 0 && *(rax + 4) != 3)
                                r10_1 += 1
                            
                            rdx = &rdx[1]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    uint64_t rcx_1 = zx.q(rbx_1[0x36b])
                    uint64_t rax_2 = zx.q(rbx_1[0x36a] + rcx_1.d)
                    int32_t var_28_1 = r10_1
                    int64_t zmm0
                    zmm0.d = float.s(rcx_1)
                    zmm0.d = zmm0.d f/ 44100f
                    int64_t temp0_1 = _mm_cvtps_pd(zmm0)
                    zmm0.d = float.s(rax_2)
                    int32_t rax_3 = *rbx_1
                    int64_t var_30_1 = temp0_1
                    zmm0.d = zmm0.d f/ 44100f
                    int64_t var_38_1 = _mm_cvtps_pd(zmm0)
                    int32_t var_40_1 = rax_3
                    int64_t var_48_1 = 0
                    sub_142833a04(3, "noteoff\t%d\t%d\t%d\t%05d\t%.3f\t\t%.3f\t%d", r8)
                
                sub_14283934c(rbx_1)
                rcx = 0
        
        i_2 = *(arg1 + 8)
        rsi += 1
        r14_1 = &r14_1[1]
    while (rsi s< i_2)

return zx.q(rcx)
