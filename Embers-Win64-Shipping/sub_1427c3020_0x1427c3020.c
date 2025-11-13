// 函数: sub_1427c3020
// 地址: 0x1427c3020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) == 0)
    return 

void* rax = *(arg1 + 0x18)
void* rcx = arg1 + 0x28

if (rax != 0)
    rcx = rax

(*(*rcx + 8))(rcx)
jump(*(arg1 + 8))
