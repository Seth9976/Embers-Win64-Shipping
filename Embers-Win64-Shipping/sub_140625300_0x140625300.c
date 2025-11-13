// 函数: sub_140625300
// 地址: 0x140625300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t i_2 = arg1[1].d
int32_t rdi = 0
uint32_t i = i_2

if (i_2 s> 0)
    int64_t r10_1 = *arg1
    int32_t r11_1 = *arg2
    
    do
        uint32_t i_1 = i
        i u>>= 1
        int32_t rax_1 = i + rdi
        int64_t rcx_1 = sx.q(rax_1) * 2
        int32_t rax_2 = *(r10_1 + (rcx_1 << 3))
        int32_t rax_3 = rax_2 - r11_1
        
        if (rax_2 == r11_1)
            rax_3 = *(r10_1 + (rcx_1 << 3) + 4) - arg2[1]
        
        if (rax_3 s< 0)
            rdi = (i_1 & 1) + rax_1
    while (i != 0)
    
    if (rdi s< 0 || rdi s>= i_2)
        goto label_14062538c
    
    goto label_140625369

int32_t* rdx_4

if (rdi s>= i_2)
label_14062538c:
    arg1[1].d = i_2 + 1
    
    if (i_2 + 1 s> *(arg1 + 0xc))
        sub_140610660(arg1)
    
    int64_t rbx_2 = sx.q(rdi) << 4
    int64_t rdx_7 = *arg1 + rbx_2
    memmove(rdx_7 + 0x10, rdx_7, (i_2 - rdi) << 4)
    rdx_4 = *arg1 + rbx_2
else
label_140625369:
    int32_t rax_5 = *arg2
    rdx_4 = (zx.q(rdi) << 4) + *arg1
    int32_t rax_6 = rax_5 - *rdx_4
    
    if (rax_5 == *rdx_4)
        rax_6 = arg2[1] - rdx_4[1]
    
    if (rax_6 s< 0)
        goto label_14062538c

*rdx_4 = *arg2
*(rdx_4 + 8) = *arg3
return &rdx_4[2]
