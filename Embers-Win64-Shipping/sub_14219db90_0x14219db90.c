// 函数: sub_14219db90
// 地址: 0x14219db90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x90)
void* rcx = arg1 + 0x10

if (rax != 0)
    rcx = rax

if (arg2 == 0)
    arg3 = 0

if (arg2 == 0)
    arg4 = 0

if (arg2 == 0)
    arg2 = &data_143a2f0a0

*(rcx + 0x10) = arg2
*(rcx + 0x1c) = arg4
*(rcx + 0x18) = arg3
return &data_143a2f0a0
