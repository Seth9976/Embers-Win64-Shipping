// 函数: sub_140a5cb90
// 地址: 0x140a5cb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg1[1].d
int16_t* const rbp = &data_142d40450
int64_t r12 = *arg1
int32_t rdi = 0

if (i s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rdi
        int64_t rcx_4 = sx.q(rax_4) * 5
        int16_t* rdx_1
        
        if (arg2[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *arg2
        
        int16_t* const rcx_5
        
        if (*(r12 + (rcx_4 << 3) + 8) == 0)
            rcx_5 = &data_142d40450
        else
            rcx_5 = *(r12 + (rcx_4 << 3))
        
        if (sub_140a54510(rcx_5, rdx_1) s< 0)
            rdi = rax_4 + rcx_1
    while (i s> 0)
    
    if (rdi s< 0 || rdi s>= arg1[1].d)
        goto label_140a5cc98
    
    goto label_140a5cc33

void* rbx_1

if (rdi s>= arg1[1].d)
label_140a5cc98:
    int32_t rbp_1 = arg1[1].d
    arg1[1].d = rbp_1 + 1
    
    if (rbp_1 + 1 s> *(arg1 + 0xc))
        sub_140a88c30(arg1)
    
    int64_t rbx_2 = sx.q(rdi) * 0x28
    int64_t rdx_6 = *arg1 + rbx_2
    memmove(rdx_6 + 0x28, rdx_6, (rbp_1 - rdi) * 0x28)
    rbx_1 = rbx_2 + *arg1
else
label_140a5cc33:
    int64_t rax_8 = *arg1
    int16_t** rbx = sx.q(rdi) * 0x28
    int16_t* rdx_2
    
    if (*(rbx + rax_8 + 8) == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *(rbx + rax_8)
    
    if (arg2[1].d != 0)
        rbp = *arg2
    
    if (sub_140a54510(rbp, rdx_2) s< 0)
        goto label_140a5cc98
    
    rbx_1 = rbx + *arg1
    int64_t rdi_1 = *rbx_1
    
    if (rdi_1 != 0)
        int64_t* rcx_8 = data_143ddb3f0
        
        if (rcx_8 == 0)
            sub_140a750a0()
            rcx_8 = data_143ddb3f0
        
        (*(*rcx_8 + 0x30))(rcx_8, rdi_1)

*rbx_1 = 0
*rbx_1 = *arg2
*arg2 = 0
*(rbx_1 + 8) = arg2[1].d
*(rbx_1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
*(rbx_1 + 0x10) = *arg3
*(rbx_1 + 0x20) = arg3[1].q
return rbx_1 + 0x10
