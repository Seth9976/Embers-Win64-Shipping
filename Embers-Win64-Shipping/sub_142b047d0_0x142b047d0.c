// 函数: sub_142b047d0
// 地址: 0x142b047d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
void* rsi = *(rdi + 0x10)
*(arg1 + 8) = *(rsi + 0x50)
*(*(rsi + 0x50) + 0x54) = *(rdi + 0x54)
sub_142af7210(arg1, arg2, rsi)
void* result = *(rsi + 0x50)
*(rdi + 0x54) = *(result + 0x54)

if (*arg2 == 0xf)
    void* rdx = *(rsi + 0x50)
    char rax_2 = *(rdx + 0x5b)
    
    if (rax_2 s> 0)
        memcpy(rdi + 0x68, rdx + 0x68, sx.d(rax_2))
    
    *(rdi + 0x5b) = *(*(rsi + 0x50) + 0x5b)
    result = *(rsi + 0x50)
    *(result + 0x5b) = 0

*(arg1 + 8) = rdi
return result
