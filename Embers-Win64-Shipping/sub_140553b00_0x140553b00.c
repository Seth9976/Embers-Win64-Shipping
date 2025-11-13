// 函数: sub_140553b00
// 地址: 0x140553b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 0x34
    *(rax + 0xc) = 4
    *rbx = &data_1433cf8b8

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"BatchedLine", 1), rbx)
