// 函数: sub_142bc9fb0
// 地址: 0x142bc9fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(*arg1 + 0xd8)
uint32_t rax = zx.d(*(rdx + 0x68))
arg1[3].d = rax
*(arg1 + 0x1c) = zx.d(*(rdx + 0x69)) - rax + 1
return 0
