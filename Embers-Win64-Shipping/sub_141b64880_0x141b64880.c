// 函数: sub_141b64880
// 地址: 0x141b64880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 0)
    void* rdi_3 = (zx.q(*(arg1 + 0x218)) << 4) + arg1
    int64_t rsi_1 = sx.q(*(rdi_3 + 0x250))
    int32_t rax_1 = (rsi_1 + 1).d
    *(rdi_3 + 0x250) = rax_1
    
    if (rax_1 s> *(rdi_3 + 0x254))
        sub_1405a4f90(rdi_3 + 0x248)
    
    int64_t* rcx_3 = (rsi_1 << 4) + *(rdi_3 + 0x248)
    *rcx_3 = *arg2
    void* rax = arg2[1]
    rcx_3[1] = rax
    
    if (rax != 0)
        *(rax + 8) += 1

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
