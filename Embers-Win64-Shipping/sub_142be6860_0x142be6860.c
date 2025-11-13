// 函数: sub_142be6860
// 地址: 0x142be6860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = 0
void* rbp = *(arg1 + 0x18)
int32_t i = *arg2 + 1

if (i u>= 0x10000)
    *arg2 = 0
    return 0

while (i u>= 0x10000)
    while (true)
        if (i u> 0xff)
            i = (i & 0xffffff00) + 0x100
        else
            i += 1
        
        if (i u< 0x10000)
        label_142be68a4:
            uint32_t rcx_1 = i u>> 8
            char* r8_1
            
            if (rcx_1 != 0)
                uint64_t rcx_5 = zx.q(rcx_1 * 2)
                r8_1 = ((zx.q(*(rbp + rcx_5 + 6)) << 8 | zx.q(*(rbp + rcx_5 + 7)))
                    & 0xfffffffffffffff8) + rbp + 0x206
                
                if (r8_1 == rbp + 0x206)
                    continue
            else
                r8_1 = rbp + 0x206
                uint64_t rcx_3 = zx.q(zx.d(i.b) * 2)
                
                if ((zx.w(*(rbp + rcx_3 + 6)) << 8 | zx.w(*(rbp + rcx_3 + 7))) != 0)
                    continue
            
            if (r8_1 == 0)
                continue
            else
                uint32_t rdi_3 = zx.d(*r8_1) << 8 | zx.d(r8_1[1])
                uint32_t r11_4 = zx.d(r8_1[2]) << 8 | zx.d(r8_1[3])
                uint32_t rsi_1 = zx.d(i.b)
                uint32_t rdx_2 = zx.d(r8_1[7]) | zx.d(r8_1[6]) << 8
                
                if (rsi_1 u>= r11_4 + rdi_3 && i u<= 0xff)
                    i = 0x100
                    break
                
                if (rdx_2 != 0)
                    uint64_t r9_1 = 0
                    
                    if (rsi_1 u>= rdi_3)
                        r9_1 = zx.q(rsi_1 - rdi_3)
                    
                    if (rsi_1 u>= rdi_3)
                        rdi_3 = rsi_1
                    
                    i = (i & 0xffffff00) + rdi_3
                    
                    if (r9_1.d u< r11_4)
                        void* r8_7 = r8_1 + 5 + zx.q(rdx_2 + (r9_1 << 1).d)
                    label_142be69b0:
                        uint32_t rdx_4 = zx.d(*(r8_7 + 1))
                        r8_7 += 2
                        uint32_t rdx_6 = rdx_4 << 8 | zx.d(*r8_7)
                        
                        if (rdx_6 != 0)
                            r10 = zx.d(rdx_6.w + (zx.w(r8_1[4]) << 8 | zx.w(r8_1[5])))
                            
                            if (r10 != 0)
                                *arg2 = i
                            label_142be6985:
                                return zx.q(r10)
                        
                        r9_1 = zx.q(r9_1.d + 1)
                        i += 1
                        
                        if (r9_1.d u< r11_4)
                            goto label_142be69b0
                    
                    if (r11_4 == 0)
                        continue
                    else
                        i -= 1
                        continue
                else if (i != 0x100)
                    continue
        
        *arg2 = 0
        goto label_142be6985

goto label_142be68a4
