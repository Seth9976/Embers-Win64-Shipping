// 函数: sub_1403e8180
// 地址: 0x1403e8180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg5)
void* rdi = nullptr

if (r14 s<= 0)
    return 

do
    if (rdi != 0 || arg4 != 0)
        int32_t rcx_1 = sx.d(*arg3)
        int32_t rax_3 = sx.d(*(rdi + arg2)) - 4
        
        if (rax_3 s<= rcx_1 + 8)
            rcx_1.b += rax_3.b
            *arg3 = rcx_1.b
        else
            rax_3.b *= 2
            rax_3.b -= (rcx_1 + 8).b
            rax_3.b += rcx_1.b
            *arg3 = rax_3.b
    else
        int32_t rcx = sx.d(*arg2)
        int32_t r8_1 = sx.d(*arg3) - 0x10
        char rdx = r8_1.b
        
        if (rcx s> r8_1)
            rdx = rcx.b
        
        *arg3 = rdx
    
    char rax_4 = *arg3
    char rax_5
    
    if (rax_4 s> 0x3f)
        rax_5 = 0x3f
    else if (rax_4 s>= 0)
        rax_5 = rax_4
    else
        rax_5 = 0
    
    int32_t rcx_2 = sx.d(rax_5)
    *arg3 = rax_5
    int32_t rax_9 = ((rcx_2 * 0x1c71) s>> 0x10) + rcx_2 * 0x1d + 0x82a
    int32_t rcx_5 = 0xf7f
    
    if (rax_9 s< 0xf7f)
        rcx_5 = rax_9
    
    rdi += 1
    *(arg1 + (rdi << 2) - 4) = sub_1403df0e0(rcx_5)
while (rdi s< r14)
