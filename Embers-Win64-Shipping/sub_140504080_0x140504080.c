// 函数: sub_140504080
// 地址: 0x140504080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 0x10
    *(rax + 0xc) = 8
    *rbx = &data_1432175e0

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"GameplayTagReferenceHelper", 1), rbx)
