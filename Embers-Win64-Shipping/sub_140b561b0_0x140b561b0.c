// 函数: sub_140b561b0
// 地址: 0x140b561b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(*(arg1 + 0x30))
int32_t rcx = *(arg1 + 0x30)
int32_t rax = rdi.d + arg3

if (rax s> rcx)
    *(arg1 + 0x30) = rax
    
    if (rax s> *(arg1 + 0x34))
        sub_1405daba0(arg1 + 0x28)
else if (rax s< rcx && rax != rcx)
    *(arg1 + 0x30) = rax
    sub_1405dac10(arg1 + 0x28)

memcpy(rdi + *(arg1 + 0x28), arg2, arg3)
return zx.q(rdi.d)
