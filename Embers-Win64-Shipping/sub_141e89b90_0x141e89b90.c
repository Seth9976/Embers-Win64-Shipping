// 函数: sub_141e89b90
// 地址: 0x141e89b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x10)
int64_t rdi = arg2

for (void* rsi_2 = sx.q(*(arg1 + 0x18)) * 0x90 + i; i != rsi_2; i += 0x90)
    int64_t rax_1 = sub_141e89a80(i, rdi)
    int64_t rcx_1 = rdi
    
    if (rax_1 u<= rdi)
        rcx_1 = rax_1
    
    int64_t temp0_1 = rdi
    rdi -= rcx_1
    
    if (temp0_1 == rcx_1)
        break

return arg2 - rdi
