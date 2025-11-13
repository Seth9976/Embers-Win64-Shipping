// 函数: sub_142a32110
// 地址: 0x142a32110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x1b8)
void* rax = *(arg1 + 0x1b0)
char r8_1
char rcx

if (rdx == 0)
    if (rax == 0)
        return 2
    
label_142a322a9:
    
    if (rdx != 0)
        rax = rdx
    
    r8_1 = *(rax + 8)
    
    if (r8_1 s<= 0 || (r8_1 == 1 && *(rax + 9) s<= 0))
        return 2
    
    rcx = *(rax + 9)
    
    if (rcx s> 0)
        if (r8_1 == 2)
            return 3
        
        goto label_142a322e0
else
    if (rax == 0)
        goto label_142a322a9
    
    char r9_1 = *(rdx + 8)
    r8_1 = *(rax + 8)
    
    if (r9_1 s<= 0)
        if (r8_1 s> 0)
            goto label_142a3225e
        
        return 2
    
    if (r8_1 s<= 0)
    label_142a3225e:
        
        if (r9_1 s<= 0)
            rdx = rax
        
        char rax_11 = *(rdx + 9)
        
        if (rax_11 s> 0)
            if (*(rdx + 8) != 2 && rax_11 != 2)
                return 1
            
            return 3
        
        r8_1 = *(rdx + 8)
    label_142a3226f:
        
        if (r8_1 == 1)
            return 3
    else
        char r11_1 = *(rdx + 9)
        rcx = *(rax + 9)
        
        if (r11_1 s> 0)
            if (rcx s<= 0)
                goto label_142a321ef
            
            if (r9_1 != r8_1 || r11_1 != rcx)
                return 2
            
            if (r9_1 == 2 || r11_1 == 2 || r8_1 == 2)
                return 3
            
        label_142a322e0:
            
            if (rcx != 2)
                return 0
            
            return 3
        
        if (rcx s> 0)
        label_142a321ef:
            char rbx_1 = r8_1
            
            if (r11_1 s<= 0)
                rbx_1 = r9_1
            
            char r10_1 = r8_1
            
            if (r11_1 s> 0)
                r10_1 = r9_1
            
            char rdx_2 = rcx
            
            if (r11_1 s> 0)
                rdx_2 = r11_1
            
            if (rbx_1 != 2)
                if (rbx_1 == 3)
                    if (r10_1 != 2 && rdx_2 != 2)
                        return 0
                    
                    return 1
                
                if (r10_1 != 2 && rdx_2 != 2)
                    return 1
            else if (r10_1 == rbx_1 || rdx_2 == rbx_1)
                return 4
            
            return 3
        
        if (r9_1 == 1)
            goto label_142a3226f
        
        if (r8_1 != 1)
            int32_t rdx_1 = 0
            int32_t rax_2 = 0
            
            if (r8_1 == 2)
                rax_2 = 2
            
            if (r9_1 == 2)
                rdx_1 = 2
            
            return zx.q(rdx_1 + rax_2)
        
        r8_1 = r9_1
int32_t rcx_2 = 0

if (r8_1 == 2)
    rcx_2 = 4

return zx.q(rcx_2)
