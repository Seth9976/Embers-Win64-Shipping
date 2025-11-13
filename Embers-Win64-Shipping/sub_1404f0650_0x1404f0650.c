// 函数: sub_1404f0650
// 地址: 0x1404f0650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 0xa0
    *(rax + 0xc) = 8
    *rbx = &data_1430464d0

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"AnimNode_BlendListByBool", 1), rbx)
