// 函数: sub_141a4bf00
// 地址: 0x141a4bf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg1[1].d)
int32_t r11 = 0
int64_t r14 = *arg1
int32_t i = r15.d
int32_t rax

if (r15.d s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        rax = i_1 + r11
        
        if (*(r14 + (sx.q(rax) << 2)) s< arg2)
            r11 = rax + rcx_1
    while (i s> 0)

int32_t rbx = r11 - 1
int32_t rbp = r11
int32_t r9 = r11

if (arg4 s<= 0)
    *arg5 = r11
    *arg6 = r11
    return arg6

int64_t rdx_2 = r15
int64_t rsi = sx.q(r11)
int64_t rdi_1 = sx.q(rbx)

do
    int32_t r12_1 = rbp
    
    if (r9 s< r15.d)
        int32_t rax_4 = *(r14 + (rsi << 2))
        rax = rax_4 - arg2
        
        if (rax_4 - arg2 s< 0)
            rax = neg.d(rax)
    
    if (r9 s>= r15.d || rax s> arg3)
        arg1.b = 0
    else
        arg1.b = 1
    
    if (rbx s>= 0)
        int32_t rax_5 = *(r14 + (rdi_1 << 2))
        rax = rax_5 - arg2
        
        if (rax_5 - arg2 s< 0)
            rax = neg.d(rax)
    
    if (rbx s< 0 || rax s> arg3)
        rax.b = 0
    else
        rax.b = 1
    
    if (arg1.b == 0)
        if (rax.b == 0)
            break
        
        r11 = rbx
        r9 = r15.d
        rbx -= 1
        rsi = rdx_2
        rdi_1 -= 1
    else if (rax.b == 0)
        r9 += 1
        rbx = -1
        rsi += 1
        rbp = r9
        rdi_1 = -1
    else
        arg1 = zx.q(arg2 - *(r14 + (rsi << 2)))
        
        if (arg2 - *(r14 + (rsi << 2)) s< 0)
            arg1 = zx.q(neg.d(arg1.d))
        
        int32_t rdx_4 = arg2 - *(r14 + (rdi_1 << 2))
        
        if (arg2 - *(r14 + (rdi_1 << 2)) s< 0)
            rdx_4 = neg.d(rdx_4)
        
        int32_t rax_6 = r9 + 1
        rbp = r9 + 1
        rdx_2 = r15
        
        if (arg1.d s>= rdx_4)
            rax_6 = r9
        
        if (arg1.d s>= rdx_4)
            r11 = rbx
        
        r9 = rax_6
        
        if (arg1.d s>= rdx_4)
            rbp = r12_1
        
        if (arg1.d s>= rdx_4)
            rbx -= 1
        
        if (arg1.d s>= rdx_4)
            rdi_1 -= 1
        
        int64_t rax_9 = rsi + 1
        
        if (arg1.d s>= rdx_4)
            rax_9 = rsi
        
        rsi = rax_9
while (rbp - r11 s< arg4)

*arg5 = r11
*arg6 = rbp
return arg6
