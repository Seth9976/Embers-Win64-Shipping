// 函数: sub_141c2e870
// 地址: 0x141c2e870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int64_t* rcx = *arg3
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q((*(*rcx + 8))(rcx))
arg1[1] = (temp1 - temp0) s>> 1
*(arg1 + 8) = *arg3
void* rax_6 = arg3[1]
*(arg1 + 0x10) = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

int64_t* rcx_1 = *arg3
int32_t i = 0
arg1[6] = (*(*rcx_1 + 8))(rcx_1) + 2
*(arg1 + 0x1c) = 0
__builtin_memset(&arg1[0xa], 0, 0x20)
int64_t* rcx_2 = *(arg1 + 8)
int32_t rax_11 = (*(*rcx_2 + 8))(rcx_2)
int64_t rsi = sx.q(arg1[0xc])
int64_t r14 = sx.q(rax_11)
int32_t rcx_3 = (rsi + r14).d
arg1[0xc] = rcx_3

if (rcx_3 s> arg1[0xd])
    sub_140775270(&arg1[0xa])

memset(*(arg1 + 0x28) + (rsi << 2), 0, r14 << 2)
int64_t rsi_1 = sx.q(*arg1)
int64_t rbx = sx.q(arg1[0x10])
int32_t rax_13 = (rbx + rsi_1).d
arg1[0x10] = rax_13

if (rax_13 s> arg1[0x11])
    sub_1405a4f90(&arg1[0xe])

memset((rbx << 4) + *(arg1 + 0x38), 0, rsi_1 << 4)

if (*arg1 s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t r15_1 = sx.q(arg1[6])
        int64_t* rbx_2 = *(arg1 + 0x38) + r14_1
        int64_t rsi_2 = sx.q(rbx_2[1].d)
        int32_t rax_14 = (rsi_2 + r15_1).d
        rbx_2[1].d = rax_14
        
        if (rax_14 s> *(rbx_2 + 0xc))
            sub_140775270(rbx_2)
        
        memset(*rbx_2 + (rsi_2 << 2), 0, r15_1 << 2)
        i += 1
        r14_1 += 0x10
    while (i s< *arg1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return arg1
