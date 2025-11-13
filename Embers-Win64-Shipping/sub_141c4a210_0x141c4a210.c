// 函数: sub_141c4a210
// 地址: 0x141c4a210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x208)

if ((rax.b & 1) == 0)
    rax.b = 0
    return rax

*(arg1 + 0x208) = rax & 0xfffffffe
int32_t rax_1
rax_1.b = 1
return rax_1
