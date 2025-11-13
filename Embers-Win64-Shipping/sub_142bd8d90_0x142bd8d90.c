// 函数: sub_142bd8d90
// 地址: 0x142bd8d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg1 u< arg2)
    int32_t r11_1 = sx.d(*arg1)
    void* r9_1 = &arg1[1]
    int32_t r8_1 = 0
    int32_t r10_1 = 0x34
    
    do
        int32_t rdx_1 = (r10_1 + r8_1) s>> 1
        int64_t rcx = sx.q(rdx_1 * 2)
        void* rax_5 =
            (zx.q(*(rcx + &data_14368a422)) << 8 | zx.q(*(rcx + 0x14368a423))) + &data_14368a420
        int32_t rcx_3 = zx.d(*rax_5) & 0x7f
        
        if (rcx_3 == r11_1)
            while (r9_1 u< arg2)
                int32_t r10_2 = sx.d(*r9_1)
                r9_1 += 1
                
                if (*rax_5 s>= 0)
                    uint32_t rcx_6 = zx.d(*(rax_5 + 1))
                    int32_t r8_3 = rcx_6 & 0x7f
                    void* rdx_4 = rax_5 + 3
                    
                    if (rcx_6.b s>= 0)
                        rdx_4 = rax_5 + 1
                    
                    void* rdx_5 = rdx_4 + 1
                    
                    while (true)
                        if (r8_3 s<= 0)
                            return 0
                        
                        rax_5 = (zx.q(*rdx_5) << 8 | zx.q(*(rdx_5 + 1))) + &data_14368a420
                        
                        if (r10_2 == (zx.d(*rax_5) & 0x7f))
                            break
                        
                        r8_3 -= 1
                        rdx_5 += 2
                else
                    uint32_t rcx_4 = zx.d(*(rax_5 + 1))
                    rax_5 += 1
                    
                    if (r10_2 != (rcx_4 & 0x7f))
                        return 0
            
            if (*rax_5 s>= 0 && *(rax_5 + 1) s< 0)
                return zx.q(*(rax_5 + 3)) | zx.q(zx.d(*(rax_5 + 2)) << 8)
            
            break
        
        if (rcx_3 s>= r11_1)
            r10_1 = rdx_1
        else
            r8_1 = rdx_1 + 1
    while (r8_1 s< r10_1)

return 0
