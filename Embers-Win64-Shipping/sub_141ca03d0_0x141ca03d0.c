// 函数: sub_141ca03d0
// 地址: 0x141ca03d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg1

if (rax == 0)
    *arg2 = 0
    return arg2

int32_t r9 = 0
int32_t rbx = arg3:4.d
int32_t i_2 = rax[1].d
int32_t i = i_2
int64_t rdi = *rax

if (i_2 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i)
        int32_t i_1 = (temp3_1 - temp2_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + r9
        int64_t rcx_4 = sx.q(rax_4) * 3
        int32_t rax_6 = *(rdi + (rcx_4 << 3))
        int32_t rax_7 = rax_6 - arg3.d
        
        if (rax_6 == arg3.d)
            rax_7 = *(rdi + (rcx_4 << 3) + 4) - rbx
        
        if (rax_7 s< 0)
            r9 = rax_4 + rcx_1
    while (i s> 0)

if (r9 s< i_2)
    int64_t rcx_5 = sx.q(r9) * 3
    int32_t r8 = arg3.d - *(rdi + (rcx_5 << 3))
    
    if (arg3.d == *(rdi + (rcx_5 << 3)))
        r8 = rbx - *(rdi + (rcx_5 << 3) + 4)
    
    if (r8 s>= 0 && r9 != 0xffffffff)
        *arg2 = rdi + 8 + (rcx_5 << 3)
        return arg2

*arg2 = 0
return arg2
