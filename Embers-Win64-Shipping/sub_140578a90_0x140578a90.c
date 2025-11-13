// 函数: sub_140578a90
// 地址: 0x140578a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 4
    *(rax + 0xc) = 2
    *rbx = &data_14348c638

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"BTDecoratorLogic", 1), rbx)
