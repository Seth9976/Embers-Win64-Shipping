// 函数: sub_142b8b150
// 地址: 0x142b8b150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int32_t r15 = 0
int64_t rdx = *(arg1 + 0x58)
int64_t r14_1 = rbp << 4
int64_t r12 = sx.q(arg3)
int32_t rax_1 = zx.d(*(rdx + r14_1 + 8)) + *(rdx + r14_1 + 4)

while (true)
    r14_1 += 0x10
    int32_t* rsi_2 = *(arg1 + 0x58) + r14_1
    rbp += 1
    
    if (rbp != r12 && *rsi_2 != 2)
        continue
    
    int32_t rbx_1 = rsi_2[1]
    int32_t rbx_2 = rbx_1 - rax_1
    
    if (rbx_1 != rax_1)
        char rax_2
        
        if ((*(arg1 + 0x18) & 1) == 0)
            int16_t r8 = *(arg1 + 0x18)
            int32_t rcx_1
            
            if (r8 s< 0)
                rcx_1 = *(arg1 + 0x1c)
            else
                rcx_1 = sx.d(r8) s>> 5
            
            if (rax_1 s< 0)
                rax_1 = 0
            else if (rax_1 s> rcx_1)
                rax_1 = rcx_1
            
            int32_t rdx_1
            
            if (rbx_2 s>= 0)
                int32_t rcx_2 = rcx_1 - rax_1
                rdx_1 = rbx_2
                
                if (rbx_2 s> rcx_2)
                    rdx_1 = rcx_2
            else
                rdx_1 = 0
            
            void* r9 = arg1 + 0x1a
            
            if ((r8.b & 2) == 0)
                r9 = *(arg1 + 0x28)
            
            rax_2 = sub_142a48fb0(arg4, arg5, rbx_2, r9, rax_1, rdx_1)
        else
            rax_2 = not.b(*(arg4 + 8)) & 1
        
        if (rax_2 != 0)
            return 0xffffffff
    
    r15 += rbx_2
    
    if (rbp == r12)
        break
    
    rax_1 = zx.d(rsi_2[2].w) + rsi_2[1]

return zx.q(r15)
