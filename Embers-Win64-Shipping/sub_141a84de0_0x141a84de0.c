// 函数: sub_141a84de0
// 地址: 0x141a84de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)

if (rcx != 0)
    (**rcx)(rcx, 1)
    *(arg1 + 8) = 0

*arg1 = *arg2
void* rdx = *(arg2 + 8)

if (rdx != 0)
    char rax_3 = *arg2
    
    if (rax_3 == 0)
        sub_141a864e0(arg1, rdx)
        return arg1
    
    if (rax_3 == 1)
        sub_141a86430(arg1, rdx)

return arg1
