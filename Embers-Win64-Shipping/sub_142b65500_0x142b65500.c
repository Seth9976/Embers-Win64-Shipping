// 函数: sub_142b65500
// 地址: 0x142b65500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r11 = 0
char* r10 = arg2
int16_t rsi = arg1[4].w
void* r14_1 = zx.q(*arg1) + arg1
int16_t rax_2
char* r9

if ((arg4 & 0xfffffffd) == 0)
label_142b6559c:
    
    if (arg3 == 0)
        rax_2 = arg6
        r9 = arg5
    else
        rax_2 = arg6
        r9 = arg5
        
        do
            uint64_t rbx_1 = zx.q(*r10)
            arg3 -= 1
            r10 = &r10[1]
            
            if (rbx_1.w u< rsi)
                int16_t rdx = *(&arg1[4] + (rbx_1 << 1) + 2)
                
                if (rdx == 0xfffe)
                    uint64_t rcx = zx.q(*r10)
                    r10 = &r10[1]
                    arg3 -= 1
                    rdx = *(&arg1[4] + ((rbx_1 << 8 | rcx) << 1) + 2)
                
                if (rdx != 0xffff)
                    void* rcx_2 = zx.q(rdx) + r14_1
                    char j = *rcx_2
                    
                    while (j != 0)
                        rcx_2 += 1
                        
                        if (rax_2 != 0)
                            *r9 = j
                            r9 = &r9[1]
                            rax_2 -= 1
                        
                        j = *rcx_2
                        r11 += 1
                else
                    if (rbx_1.b != 0x3b)
                        goto label_142b6560e
                    
                    if (r11 != 0)
                        break
                    
                    if (arg4 != 2)
                        break
                    
                    if (0x3b u< rsi && arg1[0x22].w != 0xffff)
                        break
            else
                if (rbx_1.b == 0x3b)
                    break
                
            label_142b6560e:
                
                if (rax_2 != 0)
                    *r9 = rbx_1.b
                    r9 = &r9[1]
                    rax_2 -= 1
                
                r11 += 1
        while (arg3 != 0)
else
    if (0x3b u>= rsi || arg1[0x22].w == 0xffff)
        int32_t i = arg4
        
        if (arg4 == 4)
            i = 2
        
        do
            while (arg3 != 0)
                char rax_1 = *r10
                arg3 -= 1
                r10 = &r10[1]
                
                if (rax_1 == 0x3b)
                    break
            
            i -= 1
        while (i s> 0)
        
        goto label_142b6559c
    
    rax_2 = arg6
    r9 = arg5

if (rax_2 != 0)
    *r9 = 0

return zx.q(r11)
