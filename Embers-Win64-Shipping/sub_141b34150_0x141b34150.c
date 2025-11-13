// 函数: sub_141b34150
// 地址: 0x141b34150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) == 0)
    return 0

int64_t rcx = *arg2

if (rcx != 0)
    int64_t rax_2 = sx.q(*(arg1 + 0x68))
    
    if (rax_2.d == 1)
        return 0xf
    
    if (rax_2.d s> 1)
        int64_t* rdx = *(arg1 + 0x60)
        
        if (rcx == *rdx)
            return 7
        
        if (rcx == rdx[rax_2 - 1])
            return 0xb

return 3
