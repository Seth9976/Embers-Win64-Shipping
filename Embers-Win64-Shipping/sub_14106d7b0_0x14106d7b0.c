// 函数: sub_14106d7b0
// 地址: 0x14106d7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x20)
void* rcx = arg1 + 0x30

if (rax != 0)
    rcx = rax

(*(*rcx + 8))(rcx)
jump(*(arg1 + 0x10))
