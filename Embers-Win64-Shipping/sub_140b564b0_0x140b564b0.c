// 函数: sub_140b564b0
// 地址: 0x140b564b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(*(arg1 + 0x30))
int32_t rsi = arg2.d
int32_t rcx_1 = *(arg1 + 0x30)

if (((*(*(arg1 + 0x10) + 0x3c)).b & 6) != 2)
    int32_t rax_8 = (rdi + 8).d
    
    if (rax_8 s> rcx_1)
        *(arg1 + 0x30) = rax_8
        
        if (rax_8 s> *(arg1 + 0x34))
            sub_1405daba0(arg1 + 0x28)
    else if (rax_8 s< rcx_1 && rax_8 != rcx_1)
        *(arg1 + 0x30) = rax_8
        sub_1405dac10(arg1 + 0x28)
    
    *(rdi + *(arg1 + 0x28)) = arg2
    return zx.q(rdi.d)

int32_t rax_1 = (rdi + 4).d

if (rax_1 s> rcx_1)
    *(arg1 + 0x30) = rax_1
    
    if (rax_1 s> *(arg1 + 0x34))
        sub_1405daba0(arg1 + 0x28)
        *(zx.q(rdi.d) + *(arg1 + 0x28)) = rsi
        return zx.q(rdi.d)
else if (rax_1 s< rcx_1 && rax_1 != rcx_1)
    *(arg1 + 0x30) = rax_1
    sub_1405dac10(arg1 + 0x28)

*(rdi + *(arg1 + 0x28)) = rsi
return zx.q(rdi.d)
