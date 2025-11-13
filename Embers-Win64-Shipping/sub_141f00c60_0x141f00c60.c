// 函数: sub_141f00c60
// 地址: 0x141f00c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[1].d
int64_t r10 = *arg1
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
        int64_t rcx_5 = sx.q(rax_4) * 6
        int32_t rax_6 = *(r10 + (rcx_5 << 3))
        int32_t rax_7 = rax_6 - rbx_1
        
        if (rax_6 == rbx_1)
            rax_7 = *(r10 + (rcx_5 << 3) + 4) - arg2[1]
        
        if (rax_7 s< 0)
            r9 = rax_4 + rcx_1
    while (i s> 0)
    
    if (r9 s< 0 || r9 s>= i_2)
        goto label_141f00d2d
    
    goto label_141f00cf1

int32_t* rbx_4

if (r9 s>= i_2)
label_141f00d2d:
    sub_141f023f0(arg1, r9, 1)
    rbx_4 = sx.q(r9) * 0x30 + *arg1
else
label_141f00cf1:
    int32_t rax_9 = *arg2
    int64_t rdi = sx.q(r9)
    rbx_4 = rdi * 0x30 + r10
    int32_t rax_10 = rax_9 - *rbx_4
    
    if (rax_9 == *rbx_4)
        rax_10 = arg2[1] - rbx_4[1]
    
    if (rax_10 s< 0)
        sub_141f023f0(arg1, r9, 1)
        rbx_4 = rdi * 0x30 + *arg1
    else
        int64_t rcx_6 = *(rbx_4 + 0x18)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rbx_4 + 8)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)

*rbx_4 = *arg2
__builtin_memset(&rbx_4[2], 0, 0x24)
return &rbx_4[2]
