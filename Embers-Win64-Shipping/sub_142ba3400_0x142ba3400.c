// 函数: sub_142ba3400
// 地址: 0x142ba3400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = (*(arg1 + 0x116c)).b
int32_t r11 = arg3
void* rbp = *(arg1 + 0x1170)
int64_t rsi = sx.q(arg2)
int32_t rdx = 0
int64_t r10 = rsi * 0x2430
int32_t r14 = 0

if ((rdi & 4) == 0 || *(r10 + rbp + 0x110) != 0)
    return zx.q(r11)

if (arg3 s< 0)
    arg3 = neg.d(arg3)
    r14 = 1

if (rsi.d == 1)
    if ((rdi & 2) == 0)
        goto label_142ba349d
    
    goto label_142ba3474

if ((rdi & 1) != 0)
label_142ba3474:
    int32_t rbx_1 = arg3
    int32_t rax_1 = sub_142ba1b00(rbp + 0x48 + r10, *(r10 + rbp + 0x44), arg3)
    
    if (rsi.d != 1)
        if ((rdi & 8) == 0)
            if (rax_1 s< 0x30)
                arg3 = (rax_1 + 0x40) s>> 1
            else if (rax_1 s>= 0x80)
                arg3 = (rax_1 + 0x20) & 0xffffffc0
            else
                arg3 = (rax_1 + 0x16) & 0xffffffc0
                int32_t rcx_8 = arg3 - rbx_1
                int32_t rax_11 = neg.d(rcx_8)
                
                if (rcx_8 s>= 0)
                    rax_11 = rcx_8
                
                if (rax_11 s>= 0x10)
                    arg3 = rbx_1
                    
                    if (rbx_1 s< 0x30)
                        arg3 = (rbx_1 + 0x40) s>> 1
        else if (rax_1 s>= 0x40)
            arg3 = (rax_1 + 0x20) & 0xffffffc0
        else
            arg3 = 0x40
    else if (rax_1 s< 0x40)
        arg3 = 0x40
    else
        arg3 = (rax_1 + 0x10) & 0xffffffc0
else
label_142ba349d:
    
    if ((arg6 & 2) == 0 || rsi.d != 1 || arg3 s>= 0xc0)
        if ((arg5 & 1) == 0)
            if (arg3 s< 0x38)
                arg3 = 0x38
        else if (arg3 s< 0x50)
            arg3 = 0x40
        
        if (*(r10 + rbp + 0x44) u> 0)
            int32_t rbx_2 = *(r10 + rbp + 0x4c)
            int32_t rcx_3 = arg3 - rbx_2
            int32_t rax_3 = neg.d(rcx_3)
            
            if (rcx_3 s>= 0)
                rax_3 = rcx_3
            
            if (rax_3 s< 0x28)
                arg3 = rbx_2
                
                if (rbx_2 s< 0x30)
                    arg3 = 0x30
            else if (arg3 s>= 0xc0)
                bool cond:0_1 = r11 s>= 0
                
                if (r11 s<= 0)
                    goto label_142ba355a
                
                if (arg4 s> 0)
                label_142ba356c:
                    uint32_t rax_7 = zx.d(*(*(*(rbp + 8) + 0x80) + 0x18))
                    
                    if (rax_7 u< 0xa)
                        rdx = arg4
                    label_142ba359b:
                        
                        if (rdx s< 0)
                            rdx = neg.d(rdx)
                    else if (rax_7 u< 0x1e)
                        rdx = (0x1e - rax_7) * arg4 s/ 0x14
                        goto label_142ba359b
                else
                    cond:0_1 = r11 s>= 0
                label_142ba355a:
                    
                    if (not(cond:0_1) && arg4 s< 0)
                        goto label_142ba356c
                
                arg3 = (arg3 - rdx + 0x20) & 0xffffffc0
            else
                int32_t r8_1 = arg3 & 0xffffffc0
                int32_t rax_5 = arg3 & 0x3f
                
                if (rax_5 u< 0xa)
                    arg3 = r8_1 + rax_5
                else if (rax_5 u>= 0x20)
                    if (rax_5 u< 0x36)
                        rax_5 = 0x36
                    
                    arg3 = r8_1 + rax_5
                else
                    arg3 = r8_1 + 0xa

if (r14 == 0)
    return zx.q(arg3)

return zx.q(neg.d(arg3))
