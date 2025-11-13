// 函数: sub_140565070
// 地址: 0x140565070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 0xe0
    *(rax + 0xc) = 0x10
    *rbx = &data_143415ca0

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"RootMotionSource_RadialForce", 1), rbx)
