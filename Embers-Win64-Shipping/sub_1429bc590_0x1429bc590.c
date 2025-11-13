// 函数: sub_1429bc590
// 地址: 0x1429bc590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t* r10 = *arg4
int64_t r11 = 0
int64_t rbp = sx.q(arg3)
int64_t rdi = sx.q(arg2)
int32_t i = 0

if (rdi.d s<= rbp.d)
    int64_t rbx_1 = rdi
    
    do
        int32_t r8_1 = *(arg1 + (rbx_1 << 3)) & 0x3f
        
        if (r8_1 != 0)
        label_1429bc6aa:
            i += 6
            r11 = r11 << 6 | zx.q(r8_1)
            
            while (i s>= 8)
                i -= 8
                *r10 = (r11 u>> i.b).b
                r10 = &r10[1]
        else
            int32_t i_1 = r8_1 + 1
            
            if (rbx_1 s>= rbp)
                goto label_1429bc6aa
            
            char* rax_2 = arg1 + 8 + (rbx_1 << 3)
            
            while (i_1 s< 0x105)
                if ((*rax_2 & 0x3f) u> 0)
                    break
                
                rdi = zx.q(rdi.d + 1)
                rbx_1 += 1
                rax_2 = &rax_2[8]
                i_1 += 1
                
                if (rbx_1 s>= rbp)
                    break
            
            if (i_1 s< 2)
                goto label_1429bc6aa
            
            int64_t r11_1 = r11 << 6
            i += 6
            
            if (i_1 s< 6)
                r11 = sx.q(i_1 + 0x39) | r11_1
                
                while (i s>= 8)
                    i -= 8
                    *r10 = (r11 u>> i.b).b
                    r10 = &r10[1]
            else
                int64_t r8_3 = r11_1 | 0x3f
                
                while (i s>= 8)
                    i -= 8
                    *r10 = (r8_3 u>> i.b).b
                    r10 = &r10[1]
                
                i += 8
                r11 = sx.q(i_1 - 6) | r8_3 << 8
                
                while (i s>= 8)
                    i -= 8
                    *r10 = (r11 u>> i.b).b
                    r10 = &r10[1]
        
        rdi = zx.q(rdi.d + 1)
        rbx_1 += 1
    while (rdi.d s<= rbp.d)
    
    if (i s> 0)
        *r10 = (r11 << (8 - i).b).b
        r10 = &r10[1]

*arg4 = r10
