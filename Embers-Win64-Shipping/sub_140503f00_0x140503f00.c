// 函数: sub_140503f00
// 地址: 0x140503f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_142df4b80

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"GameplayTagCreationWidgetHelper", 1), rbx)
