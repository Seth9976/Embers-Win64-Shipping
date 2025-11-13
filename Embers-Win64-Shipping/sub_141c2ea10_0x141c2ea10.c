// 函数: sub_141c2ea10
// 地址: 0x141c2ea10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q((*(*rcx + 8))(rcx))
*arg1 = (temp1 - temp0) s>> 1
*(arg1 + 8) = *arg2
void* rax_6 = arg2[1]
*(arg1 + 0x10) = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

__builtin_memset(&arg1[6], 0, 0x20)
int64_t* rcx_1 = *(arg1 + 8)
int32_t rax_8 = (*(*rcx_1 + 8))(rcx_1)
int64_t r15 = sx.q(arg1[8])
int64_t rbp = sx.q(rax_8)
int32_t rcx_2 = (r15 + rbp).d
arg1[8] = rcx_2

if (rcx_2 s> arg1[9])
    sub_140775270(&arg1[6])

memset(*(arg1 + 0x18) + (r15 << 2), 0, rbp << 2)
int64_t* rcx_5 = *(arg1 + 8)
int32_t rax_13 = (*(*rcx_5 + 8))(rcx_5) + 2 + arg1[0xc]
arg1[0xc] = rax_13

if (rax_13 s> arg1[0xd])
    sub_140775270(&arg1[0xa])

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg1
