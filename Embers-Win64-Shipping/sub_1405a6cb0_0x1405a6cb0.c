// 函数: sub_1405a6cb0
// 地址: 0x1405a6cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg1
void* rax = sub_141a788e0()
int32_t i = rbp[4].d
int32_t r14 = 0
int64_t rbx = *(rax + 0x18)
int64_t* rax_1 = rbp[3]
int64_t arg_8 = rbx
int64_t* rdx = rax_1

if (i s> 0)
    int64_t* rdi_1 = rbp
    
    if (rax_1 != 0)
        rdi_1 = rax_1
    
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_5 = i_1 + r14
        int64_t arg_10 = rdi_1[sx.q(rax_5) * 3]
        
        if (sub_140b5d160(&arg_10, &arg_8) s< 0)
            r14 = rax_5 + rcx_1
    while (i s> 0)
    
    rax_1 = rbp[3]
    i = rbp[4].d
    rdx = rax_1
    rbx = arg_8

int64_t* rcx_6
int64_t r15_1

if (r14 s< i)
    r15_1 = sx.q(r14)
    rcx_6 = rbp
    
    if (rax_1 != 0)
        rcx_6 = rax_1

if (r14 s>= i || rcx_6[r15_1 * 3] != rbx)
    rbp[4].d = i + 1
    
    if (i + 1 s> *(rbp + 0x24))
        sub_1405c5230(rbp, i)
    
    int64_t* rcx_8 = rbp[3]
    int64_t* rdx_4 = rbp
    r15_1 = sx.q(r14)
    
    if (rcx_8 != 0)
        rdx_4 = rcx_8
    
    void* rdx_5 = &rdx_4[r15_1 * 3]
    memmove(rdx_5 + 0x18, rdx_5, (i - r14) * 0x18)
    int64_t* rax_13 = rbp[3]
    int64_t* rcx_10 = rbp
    
    if (rax_13 != 0)
        rcx_10 = rax_13
    
    rcx_10[r15_1 * 3] = rbx
    rcx_10[r15_1 * 3 + 1] = 0
    rcx_10[r15_1 * 3 + 2] = 0
    rdx = rbp[3]

if (rdx != 0)
    rbp = rdx

void* rbx_3 = &rbp[r15_1 * 3]
int64_t rdi_3 = sx.q(*(rbx_3 + 0x10))
int32_t rcx_11 = (rdi_3 + 1).d
*(rbx_3 + 0x10) = rcx_11

if (rcx_11 s> *(rbx_3 + 0x14))
    sub_1405a4d70(rbx_3 + 8)

*(*(rbx_3 + 8) + (rdi_3 << 3)) = arg2
return zx.q(r14)
