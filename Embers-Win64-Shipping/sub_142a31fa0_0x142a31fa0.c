// 函数: sub_142a31fa0
// 地址: 0x142a31fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x1b8)
void* rdx = *(arg1 + 0x1b0)
bool cond:5_1
char rcx
bool cond:0_1

if (rax == 0)
    if (rdx == 0)
        return 2
    
label_142a320c7:
    
    if (rax != 0)
        rdx = rax
    
    char rax_11 = *(rdx + 8)
    
    if (rax_11 s<= 0)
        return 2
    
    rcx = *(rdx + 9)
    
    if (rcx s<= 0)
        int32_t rdx_4 = 0
        
        if (rax_11 == 1)
            rdx_4 = 4
        
        return zx.q(rdx_4)
    
    cond:0_1 = rax_11 == 1
label_142a320ee:
    
    if (cond:0_1)
        return 2
    
    cond:5_1 = rcx != 1
else
    if (rdx == 0)
        goto label_142a320c7
    
    char r9_1 = *(rax + 8)
    char r8_1 = *(rdx + 8)
    
    if (r9_1 s<= 0)
        if (r8_1 s> 0)
            goto label_142a31fdb
        
        return 2
    
    if (r8_1 s<= 0)
    label_142a31fdb:
        
        if (r9_1 s<= 0)
            rax = rdx
        
        rcx = *(rax + 9)
        
        if (rcx s> 0)
            cond:0_1 = *(rax + 8) == 1
            goto label_142a320ee
        
        int32_t rdx_1 = 0
        
        if (*(rax + 8) == 1)
            rdx_1 = 4
        
        return zx.q(rdx_1)
    
    char r11_1 = *(rax + 9)
    char r10_1 = *(rdx + 9)
    
    if (r11_1 s<= 0)
        if (r10_1 s> 0)
            goto label_142a32063
        
        int32_t rdx_2 = 0
        int32_t rax_2 = 0
        
        if (r8_1 == 1)
            rax_2 = 2
        
        if (r9_1 == 1)
            rdx_2 = 2
        
        return zx.q(rdx_2 + rax_2)
    
    if (r10_1 s<= 0)
    label_142a32063:
        char rcx_3 = r8_1
        
        if (r11_1 s<= 0)
            rcx_3 = r9_1
        
        char rdx_3 = r10_1
        
        if (r11_1 s> 0)
            r8_1 = r9_1
        
        if (r11_1 s> 0)
            rdx_3 = r11_1
        
        if (rcx_3 != 1)
            if (r8_1 != 1 && rdx_3 != 1)
                return 0
            
            return 1
        
        if (r8_1 != rcx_3 && rdx_3 != rcx_3)
            return 3
        
        return 4
    
    if (r9_1 == 1 || r11_1 == 1 || r8_1 == 1)
        return 2
    
    cond:5_1 = r10_1 != 1

if (cond:5_1)
    return 1

return 2
