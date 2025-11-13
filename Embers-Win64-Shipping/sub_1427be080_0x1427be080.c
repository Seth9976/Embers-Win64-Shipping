// 函数: sub_1427be080
// 地址: 0x1427be080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x118)
void* rcx = arg1 + 0x128

if (rax != 0)
    rcx = rax

(*(*rcx + 8))(rcx)
jump(*(arg1 + 0x108))
