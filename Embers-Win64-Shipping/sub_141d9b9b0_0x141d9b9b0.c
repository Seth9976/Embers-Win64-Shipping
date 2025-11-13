// 函数: sub_141d9b9b0
// 地址: 0x141d9b9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
void* rax = *(rbx + 0x40)
void* rcx = rbx + 0x50

if (rax != 0)
    rcx = rax

(*(*rcx + 8))(rcx)
jump(*(rbx + 0x30))
