// 函数: sub_14106bb60
// 地址: 0x14106bb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
void* rcx = arg1 + 0x20
char arg_8 = 0

if (rax != 0)
    rcx = rax

return (*arg1)((*(*rcx + 8))(rcx), &arg_8)
