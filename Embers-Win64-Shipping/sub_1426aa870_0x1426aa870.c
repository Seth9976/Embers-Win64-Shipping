// 函数: sub_1426aa870
// 地址: 0x1426aa870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140bdc2b0(*(arg3 + 0x10), arg1, 1)
int32_t rsi = 0
int32_t rdi_1

if (rax != 0)
    rdi_1 = 1

if (rax == 0 || *(rax + 0x20) == arg4)
    rdi_1 = 0

void* rax_1 = sub_140bdc2b0(*(arg3 + 0x10), arg2, 1)

if (rax_1 != 0 && *(rax_1 + 0x20) != arg4)
    rsi = 2

return zx.q(rdi_1) | zx.q(rsi)
