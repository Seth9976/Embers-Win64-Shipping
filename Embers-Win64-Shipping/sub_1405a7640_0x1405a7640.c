// 函数: sub_1405a7640
// 地址: 0x1405a7640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[1].d
int32_t rdi = 0
int64_t r10 = *arg1
int32_t i = i_2

if (i_2 s> 0)
    int32_t r11_1 = *arg2
    
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i)
        int32_t i_1 = (temp3_1 - temp2_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rdi
        int32_t* rcx_4 = sx.q(rax_4) * 0x1c
        int32_t rax_6 = *(rcx_4 + r10)
        int32_t rax_7 = rax_6 - r11_1
        
        if (rax_6 == r11_1)
            rax_7 = *(rcx_4 + r10 + 4) - arg2[1]
        
        if (rax_7 s< 0)
            rdi = rax_4 + rcx_1
    while (i s> 0)
    
    if (rdi s< 0 || rdi s>= i_2)
        goto label_1405a76dd
    
    goto label_1405a76c2

int32_t* rdx_3

if (rdi s>= i_2)
label_1405a76dd:
    arg1[1].d = i_2 + 1
    
    if (i_2 + 1 s> *(arg1 + 0xc))
        sub_1405c50f0(arg1)
    
    int64_t rbx_1 = sx.q(rdi) * 0x1c
    int64_t rdx_6 = *arg1 + rbx_1
    memmove(rdx_6 + 0x1c, rdx_6, (i_2 - rdi) * 0x1c)
    rdx_3 = *arg1 + rbx_1
else
label_1405a76c2:
    int32_t rax_10 = *arg2
    rdx_3 = sx.q(rdi) * 0x1c + r10
    int32_t rax_11 = rax_10 - *rdx_3
    
    if (rax_10 == *rdx_3)
        rax_11 = arg2[1] - rdx_3[1]
    
    if (rax_11 s< 0)
        goto label_1405a76dd

*rdx_3 = *arg2
*(rdx_3 + 8) = *arg3
rdx_3[6] = arg3[1].d
return &rdx_3[2]
