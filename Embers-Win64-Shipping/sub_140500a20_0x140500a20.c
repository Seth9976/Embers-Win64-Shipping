// 函数: sub_140500a20
// 地址: 0x140500a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 0x14
    *(rax + 0xc) = 4
    *rbx = &data_143207f00

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"SoundModulationParameter", 1), rbx)
