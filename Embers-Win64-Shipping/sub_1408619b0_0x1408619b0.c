// 函数: sub_1408619b0
// 地址: 0x1408619b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x28)

if (rax_1 == 0)
    *(arg1 + 0x30) = 0
    return rax_1

int64_t rax = *(rax_1 + 0xc0)
*(arg1 + 0x30) = rax
return rax
