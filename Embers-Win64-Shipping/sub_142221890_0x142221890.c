// 函数: sub_142221890
// 地址: 0x142221890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x90)
void* rcx = arg1 + 0x10

if (rax != 0)
    rcx = rax

if (arg2 == 0)
    arg3 = 0

if (arg2 == 0)
    arg2 = &data_143a2f0a0

*(rcx + 0x20) = arg2
*(rcx + 0x28) = arg3
return &data_143a2f0a0
