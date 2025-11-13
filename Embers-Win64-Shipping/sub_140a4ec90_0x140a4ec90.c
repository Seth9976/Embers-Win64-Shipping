// 函数: sub_140a4ec90
// 地址: 0x140a4ec90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x48)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    sub_140a3b680(rax, arg4, arg5)
    rbx[7] = arg3
    *rbx = &data_142e5f228
    rbx[8].d = *arg3

jump(*(*sub_140a3e430(arg1, arg2, rbx) + 0x28))
