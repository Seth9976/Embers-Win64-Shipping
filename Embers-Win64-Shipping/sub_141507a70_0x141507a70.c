// 函数: sub_141507a70
// 地址: 0x141507a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q((arg2 u>> 4).w)
int32_t rax_4 = *(*(arg1 + 0x58) + ((zx.q(rbx.d) & zx.q(arg1[0x13].w)) << 2))

if (rax_4 != 0xffffffff)
    int64_t r8_2 = *(arg1 + 8)
    int64_t rdx
    
    while (true)
        rdx = sx.q(rax_4)
        
        if (*(r8_2 + rdx * 0x10) == arg2)
            break
        
        rax_4 = *(*(arg1 + 0x60) + (zx.q(rax_4) << 2))
        
        if (rax_4 == 0xffffffff)
            return rax_4
    
    if (rax_4 != 0xffffffff)
        arg1[0x1b] -= 1
        int64_t rdx_1 = rdx * 2
        int64_t* r11_1 = r8_2 + (rdx_1 << 3)
        arg1[0x1c] += 0xffffffff << ((*(r8_2 + (rdx_1 << 3) + 0xb) & 0xf) * (*arg1).b)
        int32_t r10_1 = r11_1[1].d
        *r11_1 = 0
        int16_t r8_3 = *(*(arg1 + 0x18) + ((zx.q(r10_1 u>> 0x18) & 0xf) << 1))
        *(r11_1 + 0xc) = r8_3
        
        if (r8_3 != 0xffff)
            *(*(arg1 + 8) + zx.q(r8_3) * 0x10 + 0xe) = rax_4.w
            r10_1 = r11_1[1].d
        
        *(*(arg1 + 0x18) + ((zx.q(r10_1 u>> 0x18) & 0xf) << 1)) = rax_4.w
        
        if (rax_4 u< arg1[0x14])
            uint64_t rdx_12 = rbx & zx.q(arg1[0x13].w)
            int64_t rcx_10 = *(arg1 + 0x58)
            uint64_t rcx_11 = zx.q(*(rcx_10 + (rdx_12 << 2)))
            
            if (rcx_11.d == rax_4)
                int64_t rax_6 = *(arg1 + 0x60)
                *(rcx_10 + (rdx_12 << 2)) = *(rax_6 + (zx.q(rax_4) << 2))
                return rax_6
            
            if (rcx_11.d != 0xffffffff)
                int64_t r8_6 = *(arg1 + 0x60)
                
                while (true)
                    uint64_t rdx_13 = rcx_11 << 2
                    rcx_11 = zx.q(*(rdx_13 + r8_6))
                    
                    if (rcx_11.d == rax_4)
                        rax_4 = *(r8_6 + (zx.q(rax_4) << 2))
                        *(rdx_13 + r8_6) = rax_4
                        break
                    
                    if (rcx_11.d == 0xffffffff)
                        return rax_4

return rax_4
