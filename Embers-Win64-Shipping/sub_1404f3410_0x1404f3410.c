// 函数: sub_1404f3410
// 地址: 0x1404f3410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 0x2c
    *(rax + 0xc) = 4
    *rbx = &data_1430501a8

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"RBFParams", 1), rbx)
