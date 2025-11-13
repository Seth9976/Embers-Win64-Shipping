// 函数: sub_140d87b60
// 地址: 0x140d87b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg3
uint64_t i_2 = zx.q(arg2)

if (((*(arg1 + 0x38)).b & 6) != 6)
    return 0x80040201

int64_t* rcx = *(arg1 + 0x18)
int32_t rax_4 = (*(*rcx + 0x18))(rcx)

if (i_2.d u>= 1)
    i_2 = 1

int32_t i = 0

if (i_2.d != 0)
    int32_t* rcx_1 = rbx
    
    do
        int32_t rax_5 = *rcx_1
        int32_t rax_6
        
        if (rax_5 s>= 0 && rax_5 s<= rax_4)
            rax_6 = rcx_1[1]
        
        if (rax_5 s< 0 || rax_5 s> rax_4 || rax_6 s< 0 || rax_6 s> rax_4)
            return 0x80040200
        
        i += 1
        rcx_1 = &rcx_1[4]
    while (i u< i_2.d)
    
    uint64_t i_1
    
    do
        int64_t* rcx_2 = *(arg1 + 0x18)
        int32_t rdx = *rbx
        (*(*rcx_2 + 0x28))(rcx_2, rdx, zx.q(rbx[1] - rdx), 1)
        rbx = &rbx[4]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return 0
