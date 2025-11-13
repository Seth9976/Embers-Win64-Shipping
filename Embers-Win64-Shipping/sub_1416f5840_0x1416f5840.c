// 函数: sub_1416f5840
// 地址: 0x1416f5840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg2
void*** rax = sub_14177eb10(arg1, rbx)

if (rax != 0)
    rbx = rax
    *arg2 = rax

jump(*(*rbx + 8))
