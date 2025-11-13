// 函数: sub_1427be030
// 地址: 0x1427be030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xd8)
void* rcx = arg1 + 0xe8

if (rax != 0)
    rcx = rax

(*(*rcx + 8))(rcx)
jump(*(arg1 + 0xc8))
