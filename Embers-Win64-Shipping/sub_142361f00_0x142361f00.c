// 函数: sub_142361f00
// 地址: 0x142361f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x60))
int64_t rbx = sx.q(*(arg1 + 0x30))

if (rdx.d s< rbx.d)
    int64_t rsi_1 = sx.q(*(arg1 + 0x60))
    int32_t rbx_1 = rbx.d - rdx.d
    int32_t rax_1 = rsi_1.d + rbx_1
    *(arg1 + 0x60) = rax_1
    
    if (rax_1 s> *(arg1 + 0x64))
        sub_140679a80(arg1 + 0x58)
    
    return memset(rsi_1 + *(arg1 + 0x58), 0, sx.q(rbx_1)) __tailcall

if (rdx.d s<= rbx.d)
    return 

int32_t rsi_2 = rdx.d
int32_t rsi_3 = rsi_2 - rbx.d

if (rsi_2 == rbx.d)
    return 

int32_t rax_3 = *(arg1 + 0x60)
int32_t rcx_5 = rax_3 - rbx.d

if (rcx_5 != rsi_3)
    memmove(rbx + *(arg1 + 0x58), rdx + *(arg1 + 0x58), rcx_5 - rsi_3)
    rax_3 = *(arg1 + 0x60)

*(arg1 + 0x60) = rax_3 - rsi_3
sub_1405dac10(arg1 + 0x58)
