// 函数: sub_1421d53f0
// 地址: 0x1421d53f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg1
int32_t r11 = 0
int32_t r8 = 0
int32_t* rsi = arg1
int32_t* r14 = arg1
int32_t i = 0

if (*(arg2 + 0xc) s> 0)
    do
        void* r9_3 = sx.q(i * *(arg2 + 0x10)) + sx.q(*(arg2 + 0xf4)) + *(arg2 + 0x28)
        
        if (*(r9_3 + 0x58) != 0 && (*(arg2 + 0x154) s<= 0 || *(r9_3 + 0x50) != 0))
            int64_t rax_6 = (arg1 - r14) s>> 2
            
            if (r8 != 0)
                if (rax_6 s<= 0xfffb)
                    *arg1 = r8 - 1
                    arg1[1] = r8
                    arg1[2] = r8
                    arg1[3] = r8 + 1
                    arg1 = &arg1[4]
                    r8 += 2
                    r11 += 4
            else if (rax_6 s<= 0xfffd)
                *arg1 = 0
                r8 = 2
                arg1[1] = 1
                arg1 = &arg1[2]
            
            int32_t j = 0
            
            if (*(arg2 + 0x11c) s> 0)
                do
                    int32_t rax_8 = *(r9_3 + 0x58)
                    int32_t k = 0
                    r11 += rax_8
                    
                    if (rax_8 s> 0)
                        do
                            *arg1 = r8
                            arg1 = &arg1[1]
                            r8 += 1
                            
                            if (((arg1 - rdi) & 0xfffffffffffffffc) s> 0x3fffc)
                                break
                            
                            k += 1
                        while (k s< *(r9_3 + 0x58))
                    
                    j += 1
                    
                    if (j s< *(arg2 + 0x11c) && ((arg1 - rsi) & 0xfffffffffffffffc) s<= 0x3ffec)
                        *arg1 = r8 - 1
                        arg1[1] = r8
                        arg1[2] = r8
                        arg1[3] = r8 + 1
                        arg1 = &arg1[4]
                        r8 += 2
                        r11 += 4
                    
                    if (((arg1 - rsi) & 0xfffffffffffffffc) s> 0x3fffc)
                        break
                while (j s< *(arg2 + 0x11c))
        
        i += 1
    while (i s< *(arg2 + 0xc))

return zx.q(r11)
