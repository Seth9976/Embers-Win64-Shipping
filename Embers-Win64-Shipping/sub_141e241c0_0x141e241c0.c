// 函数: sub_141e241c0
// 地址: 0x141e241c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140cdd9c0(arg1, arg2)
int64_t rbp = *(arg1 + 0xd8)

if (rbp != 0)
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t rax = (rdi_1 + 1).d
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    result = *arg2
    *(result + (rdi_1 << 3)) = rbp

int64_t rsi_1 = *(arg1 + 0xd0)

if (rsi_1 != 0)
    int64_t rdi_2 = sx.q(arg2[1].d)
    int32_t rax_1 = (rdi_2 + 1).d
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    result = *arg2
    *(result + (rdi_2 << 3)) = rsi_1

return result
