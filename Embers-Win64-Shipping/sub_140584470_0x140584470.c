// 函数: sub_140584470
// 地址: 0x140584470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 0x10
    *(rax + 0xc) = 4
    *rbx = &data_1434c7f18

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"GizmoVec2ParameterChange", 1), rbx)
