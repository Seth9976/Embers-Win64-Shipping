// 函数: sub_142bb0d40
// 地址: 0x142bb0d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = 0
int32_t i = 0
uint64_t r8 = zx.q(arg3) * 3
int64_t rax_1 = *(arg2 + 8)
int32_t r10 = *(rax_1 + (r8 << 3) + 4)
void* r12 = rax_1 + (r8 << 3)
int64_t rax_3 = *(rax_1 + (r8 << 3) + 0x10) + (zx.q(r10 * arg4) << 1)

if (r10 != 0)
    do
        uint32_t r11_1 = 0x10000
        int32_t j = 0
        uint64_t i_1 = zx.q(i)
        int32_t* rbx_1 = *(*(arg2 + 0x18) + (zx.q(*(*(r12 + 8) + (i_1 << 2))) << 3))
        
        if (0 u< *(arg2 + 0x10))
            do
                int32_t r8_3 = *rbx_1
                int32_t rax_6 = rbx_1[1]
                
                if (r8_3 s<= rax_6)
                    int32_t r10_1 = rbx_1[2]
                    
                    if (rax_6 s<= r10_1 && (r8_3 s>= 0 || r10_1 s<= 0 || rax_6 == 0) && rax_6 != 0)
                        int32_t r9 = *(*(*(arg1 + 0x410) + 0x10) + (zx.q(j) << 2))
                        
                        if (r9 != rax_6)
                            if (r9 s<= r8_3 || r9 s>= r10_1)
                                r11_1 = 0
                                break
                            
                            int32_t rdx_1
                            int32_t r8_4
                            
                            if (r9 s>= rax_6)
                                r8_4 = r10_1 - rax_6
                                rdx_1 = r10_1 - r9
                            else
                                r8_4 = rax_6 - r8_3
                                rdx_1 = r9 - r8_3
                            
                            r11_1 = sub_142b93dd0(r11_1, rdx_1, r8_4)
                
                j += 1
                rbx_1 = &rbx_1[3]
            while (j u< zx.d(*(arg2 + 0x10)))
        
        r13 += sub_142b93e80(r11_1, sx.d(*(rax_3 + (i_1 << 1))) << 0x10)
        i += 1
    while (i u< *(r12 + 4))

return zx.q(sx.d(((r13 + 0x8000) u>> 0x10).w))
