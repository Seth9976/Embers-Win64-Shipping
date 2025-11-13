// 函数: sub_141e91820
// 地址: 0x141e91820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg2 + 8) u>> 0x12)

if ((result.b & 1) != 0)
    int64_t* rbx_1 = *arg1
    int64_t rbp_1 = *(arg2 + 0x10)
    int64_t rsi_1 = sx.q(rbx_1[1].d)
    int32_t rax_1 = (rsi_1 + 1).d
    rbx_1[1].d = rax_1
    
    if (rax_1 s> *(rbx_1 + 0xc))
        sub_1405a4d70(rbx_1)
    
    *(*rbx_1 + (rsi_1 << 3)) = rbp_1
    void* rax_3 = sub_140d209c0(arg2)
    int64_t* rbx_2 = *arg1
    int64_t rdi_1 = sx.q(rbx_2[1].d)
    int32_t rcx_2 = (rdi_1 + 1).d
    rbx_2[1].d = rcx_2
    
    if (rcx_2 s> *(rbx_2 + 0xc))
        sub_1405a4d70(rbx_2)
    
    result = *rbx_2
    *(result + (rdi_1 << 3)) = rax_3

return result
