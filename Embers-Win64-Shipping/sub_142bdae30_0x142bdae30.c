// 函数: sub_142bdae30
// 地址: 0x142bdae30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0
uint64_t rax

if (arg1[1] u> 0)
    while (true)
        rax = *(arg1 + 0x10)
        uint64_t rdx_2 = zx.q(r11) * 2
        int64_t* rcx = *(rax + (rdx_2 << 3))
        
        if (*(rax + (rdx_2 << 3) + 8) == 0)
        label_142bdaed5:
            r11 += 1
            
            if (r11 u>= arg1[1])
                break
        else
            int64_t* r8_1 = rcx
            
            do
                r8_1 = *r8_1
                
                if (r8_1 == rcx)
                    goto label_142bdaf56
            while (r8_1[6].d == rcx[6].d)
            
            rax = r8_1[1]
            uint64_t r9_1 = rax
            
            while (true)
                uint64_t rdx_3 = rax
                
                while (true)
                    rdx_3 = *(rdx_3 + 8)
                    
                    if (rdx_3 == r9_1)
                        goto label_142bdaed5
                    
                    int32_t rcx_1 = *(rax + 0x30)
                    
                    if (*(rdx_3 + 0x30) != rcx_1)
                        if (r8_1[6].d s< rcx_1)
                            if (*(rdx_3 + 0x30) s< rcx_1)
                                goto label_142bdaecb
                            
                            r8_1 = *rdx_3
                            rax = rdx_3
                            break
                        
                        if (*(rdx_3 + 0x30) s> rcx_1)
                        label_142bdaecb:
                            
                            do
                                *(rax + 0x1c) |= 0x40
                                rax = *(rax + 8)
                            while (rax != rdx_3)
                        
                        r8_1 = *rdx_3
                        rax = rdx_3
                        break

r11 = 0

while (true)
    if (r11 u>= *arg1)
        return 
    
    void** rcx_4 = (zx.q(r11) << 6) + *(arg1 + 8)
    void** r8_2 = rcx_4
    void** rdx_4 = rcx_4
    int32_t r9_2 = *(rcx_4 + 0x1c)
    
    if ((r9_2.b & 0x40) == 0)
    label_142bdaf24:
        int32_t r10_1 = *(r8_2 + 0x34)
        rax = zx.q(*(rcx_4 + 0x34))
        bool cond:1_1 = r10_1 s<= rax.d
        
        if (r10_1 s< rax.d)
            if (*(rdx_4 + 0x34) s<= rax.d)
                cond:1_1 = r10_1 s<= rax.d
            else
                *(rcx_4 + 0x1c) = r9_2 | 0x80
                r11 += 1
                continue
        
        if (not(cond:1_1) && *(rdx_4 + 0x34) s< rax.d)
            *(rcx_4 + 0x1c) = r9_2 | 0x100
    else
        while (true)
            r8_2 = *r8_2
            
            if (r8_2 == rcx_4)
                break
            
            rax = zx.q(*(rcx_4 + 0x34))
            
            if (*(r8_2 + 0x34) != rax.d)
                while (true)
                    rdx_4 = rdx_4[1]
                    
                    if (rdx_4 == rcx_4)
                        break
                    
                    if (*(rdx_4 + 0x34) != rax.d)
                        goto label_142bdaf24
                
                break
    
label_142bdaf56:
    r11 += 1
