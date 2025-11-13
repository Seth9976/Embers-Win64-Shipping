// 函数: sub_1422585c0
// 地址: 0x1422585c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[1].d
int32_t rdi = 0
int64_t r10 = *arg1
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rdi
        
        if (*(r10 + sx.q(rax_4) * 0x10) s< *arg2)
            rdi = rax_4 + rcx_1
    while (i s> 0)
    
    if (rdi s< 0 || rdi s>= i_2)
        goto label_142258645
    
    goto label_14225862c

int32_t* rax_7
int32_t rcx_6

if (rdi s>= i_2)
label_142258645:
    arg1[1].d = i_2 + 1
    
    if (i_2 + 1 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t rbx_2 = sx.q(rdi) << 4
    int64_t rdx_4 = *arg1 + rbx_2
    memmove(rdx_4 + 0x10, rdx_4, (i_2 - rdi) << 4)
    rcx_6 = *arg2
    rax_7 = *arg1 + rbx_2
else
label_14225862c:
    rcx_6 = *arg2
    rax_7 = (sx.q(rdi) << 4) + r10
    
    if (rcx_6 s< *rax_7)
        goto label_142258645

*rax_7 = rcx_6
*(rax_7 + 8) = *arg3
return &rax_7[2]
