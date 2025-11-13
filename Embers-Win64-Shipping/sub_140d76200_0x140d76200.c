// 函数: sub_140d76200
// 地址: 0x140d76200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 0)
    int64_t rsi_1 = sx.q(*(arg1 + 0xf0))
    int32_t rax_1 = (rsi_1 + 1).d
    *(arg1 + 0xf0) = rax_1
    
    if (rax_1 s> *(arg1 + 0xf4))
        sub_1405a4f90(arg1 + 0xe8)
    
    int64_t* rcx_3 = (rsi_1 << 4) + *(arg1 + 0xe8)
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
