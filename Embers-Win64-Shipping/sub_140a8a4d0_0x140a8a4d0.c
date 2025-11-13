// 函数: sub_140a8a4d0
// 地址: 0x140a8a4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x30)
void* rcx = arg1 + 0x40

if (rax != 0)
    rcx = rax

(*(arg1 + 0x20))((*(*rcx + 8))(rcx))
return 0
