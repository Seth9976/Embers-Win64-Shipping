// 函数: sub_141a51280
// 地址: 0x141a51280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg1
int32_t i = r8[1].d

if (i == 0)
    return 

int64_t r10_1 = *arg2
int32_t r14_1 = 0
int32_t rdi_1 = 0
uint64_t rax

if (r10_1.b != 2 && i s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_2 = (temp1_1 - temp0_1) s>> 1
        i = i_2
        rax = zx.q(i_2 + rdi_1)
        
        if (*(*r8 + (sx.q(rax.d) << 2)) s< (r10_1 u>> 0x20).d)
            rdi_1 = rax.d + rcx_1
    while (i s> 0)

int64_t r9 = arg2[1]

if (r9.b == 2)
    r14_1 = r8[1].d
else
    int32_t i_1 = r8[1].d
    
    while (i_1 s> 0)
        int32_t rcx_6 = i_1 & 0x80000001
        
        if (rcx_6 s< 0)
            rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i_1)
        int32_t i_3 = (temp3_1 - temp2_1) s>> 1
        i_1 = i_3
        rax = zx.q(i_3 + r14_1)
        
        if ((r9 u>> 0x20).d s>= *(*r8 + (sx.q(rax.d) << 2)))
            r14_1 = rax.d + rcx_6

int32_t rbx_3 = r14_1 - rdi_1

if (rbx_3 s<= 0)
    return 

if (arg3 != 0)
    int32_t rcx_10 = *(arg3 + 0xc)
    int32_t r12_1 = arg3[1].d
    int32_t rdx_4 = r12_1 + rbx_3
    
    if (rdx_4 s> rcx_10)
        sub_1405dadb0(arg3, rdx_4)
        rcx_10 = *(arg3 + 0xc)
        r12_1 = arg3[1].d
    
    int64_t rbp_1 = **arg1
    int32_t rax_8 = r12_1 + rbx_3
    arg3[1].d = rax_8
    
    if (rax_8 s> rcx_10)
        sub_1405a4cf0(arg3)
    
    memcpy(*arg3 + (sx.q(r12_1) << 2), (sx.q(rdi_1) << 2) + rbp_1, rbx_3 << 2)

if (arg4 == 0)
    return 

int32_t rdx_9 = arg4[1].d + rbx_3

if (rdx_9 s> *(arg4 + 0xc))
    sub_1405dadb0(arg4, rdx_9)

while (rdi_1 s< r14_1)
    int64_t* rcx_16 = arg1[1]
    int32_t* rax_11
    void var_38
    void arg_8
    
    if (rcx_16 == 0)
        rax_11 = sub_141f79930(&var_38)
    else
        rax_11 = sub_141f880d0(rcx_16, &arg_8, rdi_1)
    int64_t rbp_2 = sx.q(arg4[1].d)
    int32_t rbx_4 = *rax_11
    int32_t rax_12 = (rbp_2 + 1).d
    arg4[1].d = rax_12
    
    if (rax_12 s> *(arg4 + 0xc))
        sub_1405a4cf0(arg4)
    
    rdi_1 += 1
    *(*arg4 + (rbp_2 << 2)) = rbx_4
