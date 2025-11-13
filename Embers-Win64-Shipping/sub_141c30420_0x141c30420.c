// 函数: sub_141c30420
// 地址: 0x141c30420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int64_t* rcx = *arg3
int64_t* r14 = arg3
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q((*(*rcx + 8))(rcx))
arg1[1] = (temp1 - temp0) s>> 1
int64_t* rcx_1 = *r14
arg1[2] = (*(*rcx_1 + 8))(rcx_1) + 2
*(arg1 + 0x10) = *r14
void* rax_9 = r14[1]
*(arg1 + 0x18) = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

int32_t i = 0
__builtin_memset(&arg1[8], 0, 0x14)
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
int64_t rbx = sx.q(*arg1)
arg1[0x10] = rbx.d

if (rbx.d s> arg1[0x11])
    sub_1405a4f90(&arg1[0xe])

memset(*(arg1 + 0x38), 0, rbx << 4)

if (*arg1 s> 0)
    int64_t r12_1 = 0
    
    do
        int64_t rbp_1 = sx.q(arg1[2])
        int64_t* rbx_2 = *(arg1 + 0x38) + r12_1
        int64_t r14_1 = sx.q(rbx_2[1].d)
        int32_t rax_10 = (r14_1 + rbp_1).d
        rbx_2[1].d = rax_10
        
        if (rax_10 s> *(rbx_2 + 0xc))
            sub_140775270(rbx_2)
        
        memset(*rbx_2 + (r14_1 << 2), 0, rbp_1 << 2)
        i += 1
        r12_1 += 0x10
    while (i s< *arg1)
    
    r14 = arg3

int64_t* rcx_6 = *(arg1 + 0x10)
int32_t rax_13 = (*(*rcx_6 + 8))(rcx_6)
int64_t rbx_3 = sx.q(arg1[0xa])
int64_t rsi = sx.q(rax_13)
int32_t rcx_7 = (rbx_3 + rsi).d
arg1[0xa] = rcx_7

if (rcx_7 s> arg1[0xb])
    sub_140775270(&arg1[8])

memset(*(arg1 + 0x20) + (rbx_3 << 2), 0, rsi << 2)
int64_t* rbx_4 = r14[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp3_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

return arg1
