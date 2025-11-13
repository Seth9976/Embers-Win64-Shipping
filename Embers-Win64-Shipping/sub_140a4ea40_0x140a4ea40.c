// 函数: sub_140a4ea40
// 地址: 0x140a4ea40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    sub_140a3b680(rax, arg4, arg5)
    *rbx = &data_142e5ef68
    rbx[7].d = arg3
    *(rbx + 0x3c) = arg3

jump(*(*sub_140a3e430(arg1, arg2, rbx) + 0x28))
