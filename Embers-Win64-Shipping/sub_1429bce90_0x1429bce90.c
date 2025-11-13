// 函数: sub_1429bce90
// 地址: 0x1429bce90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = &arg2[1]
void* r11_1 = &arg2[sx.q(arg1)]
char* r9 = arg2
char* r10 = arg3

if (arg2 u< r11_1)
    do
        if (rax u< r11_1)
            while (*r9 == *rax)
                if (&rax[not.q(r9)] s>= 0x7f)
                    break
                
                rax = &rax[1]
                
                if (rax u>= r11_1)
                    break
        
        if (rax - r9 s< 3)
            if (rax u< r11_1)
                void* rdx_2 = &rax[2]
                
                do
                    if (rdx_2 - 1 u< r11_1)
                        char r8_1 = *(rdx_2 - 1)
                        
                        if (*rax == r8_1 && rdx_2 u< r11_1 && r8_1 == *rdx_2)
                            break
                    
                    if (-2 - r9 + rdx_2 s>= 0x7f)
                        break
                    
                    rax = &rax[1]
                    rdx_2 += 1
                while (rax u< r11_1)
            
            *r10 = r9.b - rax.b
            r10 = &r10[1]
            
            while (r9 u< rax)
                char rcx_8 = *r9
                r9 = &r9[1]
                *r10 = rcx_8
                r10 = &r10[1]
        else
            *r10 = rax.b - r9.b - 1
            char rcx_4 = *r9
            r9 = rax
            r10[1] = rcx_4
            r10 = &r10[2]
        
        rax = &rax[1]
    while (r9 u< r11_1)

return zx.q(r10.d - arg3.d)
