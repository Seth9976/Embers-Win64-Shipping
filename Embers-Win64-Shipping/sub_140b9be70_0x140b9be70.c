// 函数: sub_140b9be70
// 地址: 0x140b9be70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
void* rax = *(rbx + 0x1a0)
void* rcx = rbx + 0x1b0

if (rax != 0)
    rcx = rax

(*(*rcx + 8))(rcx)
jump(*(rbx + 0x190))
