// 函数: sub_1421d5240
// 地址: 0x1421d5240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg1
int32_t r11 = 0
int16_t r8 = 0
int32_t* rsi = arg1
int32_t* r14 = arg1
int32_t i = 0

if (*(arg2 + 0xc) s> 0)
    do
        void* r9_3 = sx.q(i * *(arg2 + 0x10)) + sx.q(*(arg2 + 0xf4)) + *(arg2 + 0x28)
        
        if (*(r9_3 + 0x58) != 0 && (*(arg2 + 0x154) s<= 0 || *(r9_3 + 0x50) != 0))
            int64_t rax_6 = (arg1 - r14) s>> 1
            
            if (r8 != 0)
                if (rax_6 s<= 0xfffb)
                    *arg1 = r8 - 1
                    *(arg1 + 2) = r8
                    arg1[1].w = r8
                    *(arg1 + 6) = r8 + 1
                    arg1 = &arg1[2]
                    r8 += 2
                    r11 += 4
            else if (rax_6 s<= 0xfffd)
                *arg1 = 0x10000
                r8 = 2
                arg1 = &arg1[1]
            
            int32_t j = 0
            
            if (*(arg2 + 0x11c) s> 0)
                do
                    int32_t rax_8 = *(r9_3 + 0x58)
                    int32_t k = 0
                    r11 += rax_8
                    
                    if (rax_8 s> 0)
                        do
                            *arg1 = r8
                            arg1 += 2
                            r8 += 1
                            
                            if (((arg1 - rdi) & 0xfffffffffffffffe) s> 0x1fffe)
                                break
                            
                            k += 1
                        while (k s< *(r9_3 + 0x58))
                    
                    j += 1
                    
                    if (j s< *(arg2 + 0x11c) && ((arg1 - rsi) & 0xfffffffffffffffe) s<= 0x1fff6)
                        *arg1 = r8 - 1
                        *(arg1 + 2) = r8
                        arg1[1].w = r8
                        *(arg1 + 6) = r8 + 1
                        arg1 = &arg1[2]
                        r8 += 2
                        r11 += 4
                    
                    if (((arg1 - rsi) & 0xfffffffffffffffe) s> 0x1fffe)
                        break
                while (j s< *(arg2 + 0x11c))
        
        i += 1
    while (i s< *(arg2 + 0xc))

return zx.q(r11)
