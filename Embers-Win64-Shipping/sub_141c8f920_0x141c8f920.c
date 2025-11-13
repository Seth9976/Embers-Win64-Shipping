// 函数: sub_141c8f920
// 地址: 0x141c8f920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[1].d
int64_t r8 = *arg1
int32_t r9 = 0
int32_t i = i_2

if (i_2 s> 0)
    int32_t rbx_1 = *arg2
    
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
        int32_t rax_6 = *(r8 + (rcx_4 << 3))
        int32_t rax_7 = rax_6 - rbx_1
        
        if (rax_6 == rbx_1)
            rax_7 = *(r8 + (rcx_4 << 3) + 4) - arg2[1]
        
        if (rax_7 s< 0)
            r9 = rax_4 + rcx_1
    while (i s> 0)
    
    if (r9 s< 0 || r9 s>= i_2)
        goto label_141c8f9d9
    
    goto label_141c8f9ae

int32_t* rbx_2

if (r9 s>= i_2)
label_141c8f9d9:
    sub_141c907e0(arg1, r9, 1)
    rbx_2 = *arg1 + sx.q(r9) * 0x18
else
label_141c8f9ae:
    int64_t rdi = sx.q(r9)
    rbx_2 = r8 + rdi * 0x18
    int32_t rax_10 = *arg2
    int32_t rax_11 = rax_10 - *rbx_2
    
    if (rax_10 == *rbx_2)
        rax_11 = arg2[1] - rbx_2[1]
    
    if (rax_11 s< 0)
        sub_141c907e0(arg1, r9, 1)
        rbx_2 = *arg1 + rdi * 0x18
    else
        int64_t rcx_5 = *(rbx_2 + 8)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)

*rbx_2 = *arg2
*(rbx_2 + 8) = 0
*(rbx_2 + 8) = *arg3
*arg3 = 0
rbx_2[4] = arg3[1].d
rbx_2[5] = *(arg3 + 0xc)
arg3[1] = 0
return &rbx_2[2]
