// 函数: sub_140a5cd30
// 地址: 0x140a5cd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg1[0x11].d
int16_t* const rbp = &data_142d40450
int16_t** rax = arg1[0x10]
int32_t rdi = 0
int16_t** rbx = arg1

if (i s> 0)
    int16_t** r12_1 = arg1
    
    if (rax != 0)
        r12_1 = rax
    
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
        int64_t* rcx_5 = sx.q(rax_4) << 5
        int16_t* rdx_1
        
        if (arg2[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *arg2
        
        int16_t* const rcx_6
        
        if (*(rcx_5 + r12_1 + 8) == 0)
            rcx_6 = &data_142d40450
        else
            rcx_6 = *(rcx_5 + r12_1)
        
        if (sub_140a54510(rcx_6, rdx_1) s< 0)
            rdi = rax_4 + rcx_1
    while (i s> 0)
    
    if (rdi s< 0 || rdi s>= rbx[0x11].d)
        goto label_140a5ce46
    
    goto label_140a5cdea

void* rbx_1
int64_t r14

if (rdi s>= rbx[0x11].d)
label_140a5ce46:
    r14 = sx.q(rdi)
label_140a5ce54:
    sub_140a5e920(rbx, rdi, 1)
    int16_t** rax_9 = rbx[0x10]
    
    if (rax_9 != 0)
        rbx = rax_9
    
    rbx_1 = &rbx[r14 * 4]
else
label_140a5cdea:
    int16_t** rax_6 = rbx[0x10]
    int16_t** rcx_7 = rbx
    r14 = sx.q(rdi)
    
    if (rax_6 != 0)
        rcx_7 = rax_6
    
    int16_t* rdx_2
    
    if (rcx_7[r14 * 4 + 1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = rcx_7[r14 * 4]
    
    if (arg2[1].d != 0)
        rbp = *arg2
    
    if (sub_140a54510(rbp, rdx_2) s< 0)
        goto label_140a5ce54
    
    int16_t** rax_8 = rbx[0x10]
    
    if (rax_8 != 0)
        rbx = rax_8
    
    rbx_1 = &rbx[r14 * 4]
    sub_140a62960(rbx_1)
*rbx_1 = 0
*rbx_1 = *arg2
*arg2 = nullptr
*(rbx_1 + 8) = arg2[1].d
*(rbx_1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
*(rbx_1 + 0x10) = 0
*(rbx_1 + 0x10) = *arg3
*arg3 = 0
*(rbx_1 + 0x18) = arg3[1].d
*(rbx_1 + 0x1c) = *(arg3 + 0xc)
arg3[1] = 0
return rbx_1 + 0x10
