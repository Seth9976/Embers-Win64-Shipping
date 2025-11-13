// 函数: sub_142a87220
// 地址: 0x142a87220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = *arg1

if (r11 == 0)
    arg2[2] = r11
    int64_t rax
    rax.b = 1
    *arg1 = arg2
    return rax

int64_t* rdi = nullptr
uint64_t rax_1

while (true)
    int32_t rcx_2
    
    if (arg3 == 0)
        rax_1 = *arg2
        int64_t rdx_4 = *r11 - rax_1
        
        while (true)
            uint32_t rcx_6 = zx.d(*rax_1)
            char temp0_1 = *(rax_1 + rdx_4)
            
            if (rcx_6.b != temp0_1)
                rcx_2 = sbb.d(rcx_6, rcx_6, rcx_6.b u< temp0_1) | 1
                break
            
            rax_1 += 1
            
            if (rcx_6.b == 0)
                rcx_2 = 0
                break
        
        goto label_142a87398
    
    char* r8 = *arg2
    rax_1 = -1
    
    do
        rax_1 += 1
    while (r8[rax_1] != 0)
    
    char* rdx = *r11
    int64_t rcx = -1
    
    do
        rcx += 1
    while (rdx[rcx] != 0)
    
    if (rax_1.d != 1)
        bool cond:0_1
        
        if (rcx.d != 1)
            rax_1 = r8
            
            while (true)
                uint32_t rcx_4 = zx.d(*rax_1)
                char temp1_1 = *(rax_1 + rdx - r8)
                
                if (rcx_4.b != temp1_1)
                    rcx_2 = sbb.d(rcx_4, rcx_4, rcx_4.b u< temp1_1) | 1
                    break
                
                rax_1 += 1
                
                if (rcx_4.b == 0)
                    rcx_2 = 0
                    break
            
            cond:0_1 = rcx_2 s< 0
            
            if (rcx_2 == 0)
                goto label_142a8739a
            
            int64_t r10_1 = "attribute" - rdx
            uint32_t r9_3
            
            do
                r9_3 = zx.d(*rdx)
                rax_1 = zx.q(rdx[r10_1])
                
                if (r9_3 != rax_1.d)
                    break
                
                rdx = &rdx[1]
            while (rax_1.d != 0)
            
            if (r9_3 - rax_1.d == 0)
                goto label_142a873a0
            
            int64_t r9_5 = "attribute" - r8
            uint32_t rdx_1
            
            do
                rdx_1 = zx.d(*r8)
                rax_1 = zx.q(r8[r9_5])
                
                if (rdx_1 != rax_1.d)
                    break
                
                r8 = &r8[1]
            while (rax_1.d != 0)
            
            if (rdx_1 - rax_1.d != 0)
                goto label_142a87398
            
            goto label_142a8736b
        
        rcx_2 = 0x75 - sx.d(*rdx)
    label_142a87398:
        cond:0_1 = rcx_2 s< 0
    label_142a8739a:
        
        if (cond:0_1)
        label_142a8736b:
            
            if (rdi != 0)
                rdi[2] = arg2
            else
                *arg1 = arg2
            
            arg2[2] = r11
            rax_1.b = 1
            break
        
        if (rcx_2 != 0)
        label_142a873a0:
            rdi = r11
            r11 = r11[2]
            
            if (r11 != 0)
                continue
            else
                rdi[2] = arg2
                arg2[2] = r11
            
            rax_1.b = 1
            break
    else
        if (rcx.d != rax_1.d)
            rcx_2 = sx.d(*r8) - 0x75
            goto label_142a87398
        
        rax_1 = zx.q(*r8)
        char r8_1 = *rdx
        
        if (rax_1.b != r8_1)
            if (rax_1.b == 0x78)
                goto label_142a873a0
            
            if (r8_1 == 0x78)
                goto label_142a8736b
            
            rcx_2 = sx.d(rax_1.b) - sx.d(r8_1)
            goto label_142a87398
    
    rax_1.b = 0
    break

return rax_1
