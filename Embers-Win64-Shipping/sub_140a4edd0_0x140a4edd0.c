// 函数: sub_140a4edd0
// 地址: 0x140a4edd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x50)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    sub_140a3b680(rax, arg4, arg5)
    rbx[7] = arg3
    *rbx = &data_142e5f388
    sub_140596d10(&rbx[8], arg3)

jump(*(*sub_140a3e430(arg1, arg2, rbx) + 0x28))
