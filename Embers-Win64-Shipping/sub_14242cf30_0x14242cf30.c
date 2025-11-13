// 函数: sub_14242cf30
// 地址: 0x14242cf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 0)
    int64_t rsi_1 = sx.q(*(arg1 + 0x78))
    int32_t rax_1 = (rsi_1 + 1).d
    *(arg1 + 0x78) = rax_1
    
    if (rax_1 s> *(arg1 + 0x7c))
        sub_1405a4f90(arg1 + 0x70)
    
    int64_t* rcx_3 = (rsi_1 << 4) + *(arg1 + 0x70)
    *rcx_3 = *arg2
    void* rax = arg2[1]
    rcx_3[1] = rax
    
    if (rax != 0)
        *(rax + 8) += 1

int64_t* rbx_2 = arg2[1]

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp1_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx_2 + 8))
