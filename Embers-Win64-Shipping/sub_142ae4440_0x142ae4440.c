// 函数: sub_142ae4440
// 地址: 0x142ae4440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rdi = *(arg2 + 8)
int64_t rbp = sx.q(arg3)
int32_t rsi = rbp.d
int32_t rax_1

if (rdi s< 0)
    rax_1 = *(arg2 + 0xc)
else
    rax_1 = sx.d(rdi) s>> 5

if (rbp.d s>= rax_1)
    return 3

int16_t* r15_1 = rbp << 1
int16_t* r14_1 = r15_1

while (true)
    int32_t rax_4
    
    if (rdi s< 0)
        rax_4 = *(arg2 + 0xc)
    else
        rax_4 = sx.d(rdi) s>> 5
    
    int16_t rcx
    
    if (rsi u>= rax_4)
        rcx = -1
    label_142ae44cf:
        
        if (rcx - 0x61 u> 0x19)
            *arg4 = 1
            break
    else
        void* rax_5 = arg2 + 0xa
        
        if ((rdi.b & 2) == 0)
            rax_5 = *(arg2 + 0x18)
        
        rcx = *(r14_1 + rax_5)
        
        if (rcx - 0x41 u> 0x19)
            goto label_142ae44cf
    rsi += 1
    r14_1 = &r14_1[1]
    int32_t rax_8
    
    if (rdi s< 0)
        rax_8 = *(arg2 + 0xc)
    else
        rax_8 = sx.d(rdi) s>> 5
    
    int16_t rdx
    
    if (rsi u>= rax_8)
        rdx = -1
    else
        void* rax_9 = arg2 + 0xa
        
        if ((rdi.b & 2) == 0)
            rax_9 = *(arg2 + 0x18)
        
        rdx = *(r14_1 + rax_9)
    
    int32_t rax_11
    
    if (rdi s< 0)
        rax_11 = *(arg2 + 0xc)
    else
        rax_11 = sx.d(rdi) s>> 5
    
    int16_t rcx_1
    
    if (rbp.d u>= rax_11)
        rcx_1 = -1
    else
        void* rax_12 = arg2 + 0xa
        
        if ((rdi.b & 2) == 0)
            rax_12 = *(arg2 + 0x18)
        
        rcx_1 = *(r15_1 + rax_12)
    
    if (rdx == rcx_1 && rsi s<= sub_142a4a1f0(arg2))
        continue
    
    *arg4 = rsi - rbp.d
    break

return 1
