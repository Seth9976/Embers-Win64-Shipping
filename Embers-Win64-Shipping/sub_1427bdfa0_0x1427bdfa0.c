// 函数: sub_1427bdfa0
// 地址: 0x1427bdfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x98)
void* rcx = arg1 + 0xa8

if (rax != 0)
    rcx = rax

(*(*rcx + 8))(rcx)
jump(*(arg1 + 0x88))
