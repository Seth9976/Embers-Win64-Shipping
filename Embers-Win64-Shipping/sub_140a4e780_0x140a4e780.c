// 函数: sub_140a4e780
// 地址: 0x140a4e780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x20)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    sub_140a3b5c0(rax, arg3, arg4)
    *rbx = &data_142e5f818

jump(*(*sub_140a3e430(arg1, arg2, rbx) + 0x70))
