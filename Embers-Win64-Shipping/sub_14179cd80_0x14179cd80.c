// 函数: sub_14179cd80
// 地址: 0x14179cd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg2
void*** rax = sub_141750930(arg1, rbx)

if (rax != 0)
    rbx = rax
    *arg2 = rax

jump(*(*rbx + 0x60))
