// 函数: sub_1403d7d80
// 地址: 0x1403d7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x11) != 8 || *(arg1 + 0x12) != 1)
    return 

uint32_t rax
char rsi_7

if (arg3 == 4)
    rax = *arg1
    
    if (rax != 0)
        int32_t r10_4 = rax & 1
        int32_t rcx_1
        char* r11_2
        
        if (rax != 1)
            int32_t i_4 = r10_4 - rax
            rcx_1 = 4
            rax = 0
            r11_2 = arg2
            int32_t i
            
            do
                int32_t rdi_6 = (zx.d(*r11_2) & 0xf) << rcx_1.b | rax
                int32_t rcx_4
                
                if (rcx_1 == 0)
                    *arg2 = rdi_6.b
                    arg2 = &arg2[1]
                    rdi_6 = 0
                    rcx_4 = 4
                else
                    rcx_4 = rcx_1 - 4
                
                rax = (zx.d(r11_2[1]) & 0xf) << rcx_4.b | rdi_6
                
                if (rcx_4 == 0)
                    *arg2 = rax.b
                    arg2 = &arg2[1]
                    rax = 0
                    rcx_1 = 4
                else
                    rcx_1 = rcx_4 - 4
                
                r11_2 = &r11_2[2]
                i = i_4
                i_4 += 2
            while (i != 0xfffffffe)
        else
            rcx_1 = 4
            rax = 0
            r11_2 = arg2
        
        rsi_7 = rax.b
        
        if (r10_4 == 0)
            goto label_1403d805b
        
        rsi_7 = ((zx.d(*r11_2) & 0xf) << rcx_1.b).b | rax.b
        
        if (rcx_1 == 0)
            *arg2 = rsi_7
            arg2 = &arg2[1]
            rsi_7 = 0
            rcx_1 = 4
        label_1403d805b:
            
            if (rcx_1 != 4)
                *arg2 = rsi_7
        else if (rcx_1 != 8)
            *arg2 = rsi_7
else if (arg3 == 2)
    rax = *arg1
    
    if (rax != 0)
        int32_t r10_6 = rax & 1
        int32_t rcx_2
        char* r11_3
        
        if (rax != 1)
            int32_t i_5 = r10_6 - rax
            rcx_2 = 6
            rax = 0
            r11_3 = arg2
            int32_t i_1
            
            do
                int32_t rdi_10 = (zx.d(*r11_3) & 3) << rcx_2.b | rax
                int32_t rcx_6
                
                if (rcx_2 == 0)
                    *arg2 = rdi_10.b
                    arg2 = &arg2[1]
                    rdi_10 = 0
                    rcx_6 = 6
                else
                    rcx_6 = rcx_2 - 2
                
                rax = (zx.d(r11_3[1]) & 3) << rcx_6.b | rdi_10
                
                if (rcx_6 == 0)
                    *arg2 = rax.b
                    arg2 = &arg2[1]
                    rax = 0
                    rcx_2 = 6
                else
                    rcx_2 = rcx_6 - 2
                
                r11_3 = &r11_3[2]
                i_1 = i_5
                i_5 += 2
            while (i_1 != 0xfffffffe)
        else
            rcx_2 = 6
            rax = 0
            r11_3 = arg2
        
        rsi_7 = rax.b
        
        if (r10_6 != 0)
            rsi_7 = ((zx.d(*r11_3) & 3) << rcx_2.b).b | rax.b
            
            if (rcx_2 == 0)
                *arg2 = rsi_7
                arg2 = &arg2[1]
                rsi_7 = 0
                rcx_2 = 6
            else
                rcx_2 -= 2
        
        if (rcx_2 != 6)
            *arg2 = rsi_7
else if (arg3 == 1)
    rax = *arg1
    
    if (rax != 0)
        int32_t r10_2 = rax & 1
        int32_t rcx
        char* r11_1
        
        if (rax != 1)
            int32_t i_3 = r10_2 - rax
            rcx = 0
            rax = 0x80
            r11_1 = arg2
            char* rdi_1
            int32_t i_2
            
            do
                rdi_1 = arg2
                uint32_t rdx = 0
                
                if (*arg2 != 0)
                    rdx = rax
                
                int32_t rdx_1 = rdx | rcx
                uint32_t rax_1
                
                if (rax u< 2)
                    *r11_1 = rdx_1.b
                    r11_1 = &r11_1[1]
                    rax_1 = 0x80
                    rdx_1 = 0
                else
                    rax_1 = rax u>> 1
                
                uint32_t rcx_3 = 0
                
                if (rdi_1[1] != 0)
                    rcx_3 = rax_1
                
                rcx = rcx_3 | rdx_1
                
                if (rax_1 u<= 1)
                    *r11_1 = rcx.b
                    r11_1 = &r11_1[1]
                    rax = 0x80
                    rcx = 0
                else
                    rax = rax_1 u>> 1
                
                arg2 = &rdi_1[2]
                i_2 = i_3
                i_3 += 2
            while (i_2 != 0xfffffffe)
            arg2 = &rdi_1[2]
        else
            rcx = 0
            rax = 0x80
            r11_1 = arg2
        
        char rsi_2 = rcx.b
        
        if (r10_2 == 0)
            goto label_1403d8041
        
        rsi_2 = 0
        char rdx_2 = rax.b
        
        if (*arg2 == 0)
            rdx_2 = 0
        
        char rdx_3 = rdx_2 | rcx.b
        
        if (rax u<= 1)
            *r11_1 = rdx_3
            r11_1 = &r11_1[1]
            rax = 0x80
        label_1403d8041:
            
            if (rax != 0x80)
                *r11_1 = rsi_2
        else if (rax u>> 1 != 0x80)
            *r11_1 = rdx_3
*(arg1 + 0x11) = arg3.b
rax.b = *(arg1 + 0x12)
rax.w = mulu.dp.b(rax.b, arg3.b)
*(arg1 + 0x13) = rax.b
uint64_t rcx_7 = zx.q(*arg1)
uint64_t rdx_4 = zx.q(rax.b)
uint64_t rdx_6

if (rax.b u< 8)
    rdx_6 = (rcx_7 * rdx_4 + 7) u>> 3
else
    rdx_6 = (rdx_4 u>> 3) * rcx_7

*(arg1 + 8) = rdx_6
