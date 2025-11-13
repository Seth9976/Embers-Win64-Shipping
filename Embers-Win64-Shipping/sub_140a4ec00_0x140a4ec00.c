// 函数: sub_140a4ec00
// 地址: 0x140a4ec00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x50)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    sub_140a3b680(rax, arg7, arg8)
    *rbx = &data_142e5f438
    rbx[7] = arg5
    rbx[8] = arg6
    rbx[9].d = arg4

jump(*(*sub_140a3e430(arg1, arg2, rbx) + 0x28))
