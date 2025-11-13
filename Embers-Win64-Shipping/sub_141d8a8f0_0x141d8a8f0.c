// 函数: sub_141d8a8f0
// 地址: 0x141d8a8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *arg2

if (r8 != 0)
    int64_t rdx = sx.q(*(arg1 + 0x20))
    int64_t* i = *(arg1 + 0x18)
    int64_t rdi_2 = rdx * 2
    
    for (; i != &i[rdi_2]; i = &i[2])
        if (*i == r8)
            goto label_141d8aa25
    
    int32_t rax = (rdx + 1).d
    *(arg1 + 0x20) = rax
    
    if (rax s> *(arg1 + 0x24))
        sub_1405a4f90(arg1 + 0x18)
    
    int64_t rcx_2 = *(arg1 + 0x18)
    *(rcx_2 + (rdi_2 << 3)) = *arg2
    void* rax_2 = arg2[1]
    *(rcx_2 + (rdi_2 << 3) + 8) = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    int64_t* rcx_3 = *arg2
    int32_t var_10_1 = 0x10
    uint64_t* rax_4 = (*(*rcx_3 + 0x50))(rcx_3)
    i = sub_140a84c80(0, 0x30, 0)
    int64_t* i_1 = i
    
    if (i != 0)
        *i_1 = &data_142da2598
        *(i_1 + 0x10) = sub_141d86c50.o
        i_1[1] = arg1 - 0x10
        i_1[5] = sub_140a387b0()
        *i_1 = &data_142da25f0
    
    if (i_1 != 0)
        sub_140599630(rax_4, 1)
        void arg_10
        (*(*i_1 + 0x30))(i_1, &arg_10)
        int64_t rbp_1 = sx.q(rax_4[1].d)
        int32_t rax_7 = (rbp_1 + 1).d
        rax_4[1].d = rax_7
        
        if (rax_7 s> *(rax_4 + 0xc))
            sub_1405a4f90(rax_4)
        
        i = (rbp_1 << 4) + *rax_4
        *i = i_1
        i[1].d = 3

label_141d8aa25:
int64_t* rbx_1 = arg2[1]

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx_1 + 8))
